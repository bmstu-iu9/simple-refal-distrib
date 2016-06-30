// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CreateGlobalGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CreateHardPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL_OptPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Max(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult PatternComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ReverseGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sort(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SplitGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ComposeVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoFreezeRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoFreezeRanges_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FixupEVarIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FixupEVarIndexes_PatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FoldOpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FreezeRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenPattern_New(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetRangeReassigns(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetRangeReassigns_FixupChain(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HighLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HighLevelRASL_MulFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HighLevelRASL_OneFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HighLevelRASL_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult IncVarOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ListLen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeVariableComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeVariableCommentTable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReassignEs(refalrts::Iter arg_begin, refalrts::Iter arg_end);
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

// identifier #AlgTerm
template <typename SREFAL_PARAM_INT>
struct ident_AlgTerm {
  static const char *name() {
    return "AlgTerm";
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

// identifier #E
template <typename SREFAL_PARAM_INT>
struct ident_E {
  static const char *name() {
    return "E";
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

// identifier #S
template <typename SREFAL_PARAM_INT>
struct ident_S {
  static const char *name() {
    return "S";
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

// identifier #T
template <typename SREFAL_PARAM_INT>
struct ident_T {
  static const char *name() {
    return "T";
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

static refalrts::FnResult lambda_HighLevelRASL_OptPattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_OptPattern_0/4 (/7 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Sentences#2/5 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptPattern_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
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
    // </0 & lambda_HighLevelRASL_OptPattern_0/4 (/7 # Enum/9 s.ScopeClass#2/10 e.Name#2/5 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptPattern_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
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
    // </0 & lambda_HighLevelRASL_OptPattern_0/4 (/7 # Swap/9 s.ScopeClass#2/10 e.Name#2/5 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptPattern_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
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
    // </0 & lambda_HighLevelRASL_OptPattern_0/4 (/7 # Stub/9 s.ScopeClass#2/10 e.Name#2/5 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptPattern_0/4 (/7 # Stub/9 s.ScopeClass#2/10 e.Name#2/5 )/8 >/1 {REMOVED TILE} 
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
    // </0 & lambda_HighLevelRASL_OptPattern_0/4 (/7 # Declaration/9 s.ScopeClass#2/10 e.Name#2/5 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptPattern_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
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
    // </0 & lambda_HighLevelRASL_OptPattern_0/4 (/7 # Ident/9 e.Name#2/5 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptPattern_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
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
  // </0 & lambda_HighLevelRASL_OptPattern_0/4 (/7 # Separator/9 )/8 >/1
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
  //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptPattern_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
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

refalrts::FnResult HighLevelRASL_OptPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & HighLevelRASL_OptPattern/4 e.ProgramElements#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.ProgramElements#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_HighLevelRASL_OptPattern_0/4 AsIs: e.ProgramElements#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_HighLevelRASL_OptPattern_0, "lambda_HighLevelRASL_OptPattern_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ListLen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ListLen/4 (/7 s.Len#1/9 )/8 t.Elem#1/10 e.ListTail#1/2 >/1
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
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    // closed e.ListTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.Elem#1/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ListLen/4 AsIs: (/7 } </12 & Inc/13 Tile{ AsIs: s.Len#1/9 HalfReuse: >/8 } )/14 Tile{ AsIs: e.ListTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[9], context[8] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ListLen/4 (/7 s.Len#1/9 )/8 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & ListLen/4 (/7 s.Len#1/9 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Len1 #9/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Function_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_Function_0/4 s.ScopeClass#1/14 (/12 e.Name#1/10 )/13 (/8 e.Sentences#1/6 )/9 0/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::number_right( 0UL, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_right( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.Sentences#1 as range 6
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/12 {REMOVED TILE}  )/13 (/8 e.Sentences#1/6 )/9 0/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 AsIs: s.ScopeClass#1/14 } Tile{ AsIs: e.Name#1/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdEnum<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_Function_0/4 s.ScopeClass#1/14 (/12 e.Name#1/10 )/13 (/8 e.Sentences#1/6 )/9 1/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::number_right( 1UL, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_right( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.Sentences#1 as range 6
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/8 {REMOVED TILE}  )/9 1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL_OneFunction/4 AsIs: s.ScopeClass#1/14 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: e.Sentences#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], HighLevelRASL_OneFunction, "HighLevelRASL_OneFunction" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Function_0/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 (/12 e.Sentences#1/10 )/13 s.Else#2/14 >/1
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
  // closed e.Name#1 as range 6
  // closed e.Sentences#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/12 {REMOVED TILE}  )/13 s.Else#2/14 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL_MulFunction/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: e.Sentences#1/10 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], HighLevelRASL_MulFunction, "HighLevelRASL_MulFunction" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[9], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult HighLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
  //RESULT: Tile{ [[ } </10 & Fetch/11 </12 & ListLen/13 (/14 0/15 )/16 Tile{ AsIs: e.Sentences#1/2 } >/17 </18 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_HighLevelRASL_Function_0/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } (/19 e.Sentences#1/2/20 )/22 >/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ListLen, "ListLen" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[15], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[20], context[21], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_HighLevelRASL_Function_0, "lambda_HighLevelRASL_Function_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[14], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_OneFunction_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_OneFunction_0/4 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 >/1
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
  // closed e.Pattern#2 as range 9
  // closed e.Result#2 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HighLevelRASL_Sentence/7 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], HighLevelRASL_Sentence, "HighLevelRASL_Sentence" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_OneFunction_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_OneFunction_1/4 s.MaxMemory#2/6 s.Memory#2/7 '<'/5 >/1
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
    //TRASH: {REMOVED TILE}  & lambda_HighLevelRASL_OneFunction_1/4 s.MaxMemory#2/6 s.Memory#2/7 '<'/5 >/1 {REMOVED TILE} 
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
  // </0 & lambda_HighLevelRASL_OneFunction_1/4 s.MaxMemory#2/5 s.Memory#2/6 s.Other#3/7 >/1
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
  //TRASH: {REMOVED TILE}  & lambda_HighLevelRASL_OneFunction_1/4 s.MaxMemory#2/5 s.Memory#2/6 s.Other#3/7 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.MaxMemory2 #5/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_OneFunction_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_OneFunction_2/4 s.MaxMemory#2/14 (/7 (/11 # CmdIssueMem/13 s.Memory#2/15 )/12 e.Sentence#2/5 )/8 >/1
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
  //RESULT: Tile{ [[ } </16 & Fetch/17 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: s.MaxMemory#2/14 HalfReuse: s.Memory2 #15/7 HalfReuse: >/11 HalfReuse: </13 } & CreateClosure /18 & lambda_HighLevelRASL_OneFunction_1/19 s.MaxMemory#2/14/20 Tile{ AsIs: s.Memory#2/15 } Tile{ AsIs: >/1 } >/21 (/22 Tile{ HalfReuse: # CmdSentence/12 AsIs: e.Sentence#2/5 AsIs: )/8 } Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], lambda_HighLevelRASL_OneFunction_1, "lambda_HighLevelRASL_OneFunction_1" ) )
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

static refalrts::FnResult lambda_HighLevelRASL_OneFunction_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_OneFunction_3/4 e.Commands#3/2 (/7 # CmdOpenELoop/9 e.OpenELoop#3/5 )/8 >/1
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
  // </0 & lambda_HighLevelRASL_OneFunction_3/4 e.LastSentence#3/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.LastSentence#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OneFunction_3/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LastSentence#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_OneFunction_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_OneFunction_4/4 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 s.MaxMemory#2/15 e.Sentences#2/2 (/7 # CmdSentence/9 e.LastSentence#2/5 )/8 >/1
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
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } (/16 # CmdIssueMem/17 Tile{ AsIs: s.MaxMemory#2/15 } )/18 Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: e.LastSentence#2/5 HalfReuse: & lambda_HighLevelRASL_OneFunction_3/8 AsIs: >/1 } )/19 Tile{ ]] }
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
    refalrts::reinit_name( context[8], lambda_HighLevelRASL_OneFunction_3, "lambda_HighLevelRASL_OneFunction_3" );
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
  // </0 & lambda_HighLevelRASL_OneFunction_4/4 s.ScopeClass#1/10 (/8 e.Name#1/6 )/9 0/5 >/1
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

static refalrts::FnResult HighLevelRASL_OneFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & HighLevelRASL_OneFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 e.Sentences#1/2 >/1
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
  //RESULT: Tile{ [[ } </10 & Fetch/11 Tile{ AsIs: e.Sentences#1/2 } </12 & Seq/13 & lambda_HighLevelRASL_OneFunction_0/14 (/15 & MapReduce/16 & lambda_HighLevelRASL_OneFunction_2/17 0/18 )/19 </20 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_HighLevelRASL_OneFunction_4/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } >/21 >/22 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], lambda_HighLevelRASL_OneFunction_0, "lambda_HighLevelRASL_OneFunction_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], lambda_HighLevelRASL_OneFunction_2, "lambda_HighLevelRASL_OneFunction_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[18], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_HighLevelRASL_OneFunction_4, "lambda_HighLevelRASL_OneFunction_4" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[15], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[12], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Sentence_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Sentence_0/4 (/7 e.PatternCommands#2/5 )/8 s.ContextCount#3/9 e.ResultCommands#3/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.PatternCommands#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ResultCommands#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldOpenELoops/4 AsIs: (/7 } Tile{ HalfReuse: # CmdIssueMem/8 AsIs: s.ContextCount#3/9 } )/10 (/11 # CmdInitB0/12 )/13 Tile{ AsIs: e.PatternCommands#2/5 } Tile{ AsIs: e.ResultCommands#3/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_CmdInitB0<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FoldOpenELoops, "FoldOpenELoops" );
  refalrts::reinit_ident( context[8], & ident_CmdIssueMem<int>::name );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[13] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Sentence_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Sentence_1/4 (/7 e.Result#1/5 )/8 (/11 e.PatternVars#2/9 )/12 s.ContextOffset#2/17 (/15 e.PatternCommands#2/13 )/16 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Result#1 as range 5
  // closed e.PatternVars#2 as range 9
  // closed e.PatternCommands#2 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ContextOffset#2/17 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & GenResult/18 Tile{ HalfReuse: s.ContextOffset2 #17/8 AsIs: (/11 AsIs: e.PatternVars#2/9 AsIs: )/12 } Tile{ AsIs: e.Result#1/5 } >/19 </20 & CreateClosure /21 & lambda_HighLevelRASL_Sentence_0/22 Tile{ AsIs: (/15 AsIs: e.PatternCommands#2/13 AsIs: )/16 AsIs: >/1 } >/23 Tile{ ]] }
  if( ! refalrts::alloc_name( context[18], GenResult, "GenResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], lambda_HighLevelRASL_Sentence_0, "lambda_HighLevelRASL_Sentence_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_svar( context[8], context[17] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult HighLevelRASL_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & HighLevelRASL_Sentence/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & GenPattern/13 Tile{ AsIs: e.Pattern#1/5 } >/14 </15 & CreateClosure /16 Tile{ HalfReuse: & lambda_HighLevelRASL_Sentence_1/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } >/17 Tile{ ]] }
  if( ! refalrts::alloc_name( context[13], GenPattern, "GenPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], lambda_HighLevelRASL_Sentence_1, "lambda_HighLevelRASL_Sentence_1" );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_MulFunction_0/4 (/7 e.HardGens#2/5 )/8 (/11 e.Result#2/9 )/12 e.HardGen#3/2 >/1
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
  // closed e.HardGens#2 as range 5
  // closed e.Result#2 as range 9
  // closed e.HardGen#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/13 Tile{ AsIs: e.HardGens#2/5 } (/14 Tile{ AsIs: e.HardGen#3/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: (/7 } (/15 </16 & PatternComment/17 e.HardGen#3/2/18 >/20 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], PatternComment, "PatternComment" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[8] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::link_brackets( context[14], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[15], context[20] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_MulFunction_1/4 (/7 e.HardGens#2/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
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
  // closed e.HardGens#2 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Result#2 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & CreateHardPattern/21 Tile{ AsIs: e.Pattern#2/13 } >/22 </23 Tile{ HalfReuse: & CreateClosure /8 HalfReuse: & lambda_HighLevelRASL_MulFunction_0/11 AsIs: (/15 } Tile{ AsIs: e.HardGens#2/5 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Result#2/17 AsIs: )/20 HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[21], CreateHardPattern, "CreateHardPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::reinit_name( context[11], lambda_HighLevelRASL_MulFunction_0, "lambda_HighLevelRASL_MulFunction_0" );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_MulFunction_2/4 (/7 e.HardPatterns#2/5 )/8 e.SentenceTails#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.HardPatterns#2 as range 5
  // closed e.SentenceTails#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateGlobalGen/4 } Tile{ AsIs: e.HardPatterns#2/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.SentenceTails#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], CreateGlobalGen, "CreateGlobalGen" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_MulFunction_3/4 (/7 e.FastGen#2/5 )/8 (/11 e.GlobalGen#2/9 )/12 e.SentenceTails#2/2 >/1
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
  // closed e.FastGen#2 as range 5
  // closed e.GlobalGen#2 as range 9
  // closed e.SentenceTails#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # CmdComment/7 } 'F'/13 'A'/14 'S'/15 'T'/16 ' '/17 'G'/18 'E'/19 'N'/20 ':'/21 </22 & PatternComment/23 Tile{ AsIs: e.FastGen#2/5 } >/24 )/25 (/26 # CmdComment/27 'G'/28 'L'/29 'O'/30 'B'/31 'A'/32 'L'/33 ' '/34 'G'/35 'E'/36 'N'/37 ':'/38 </39 & PatternComment/40 e.GlobalGen#2/9/41 >/43 )/44 )/45 (/46 </47 Tile{ HalfReuse: & SplitGen/8 AsIs: (/11 AsIs: e.GlobalGen#2/9 AsIs: )/12 AsIs: e.SentenceTails#2/2 AsIs: >/1 } )/48 e.SentenceTails#2/2/49 Tile{ ]] }
  if( ! refalrts::alloc_char( context[13], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'S' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'G' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], PatternComment, "PatternComment" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'G' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'B' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'G' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[40], PatternComment, "PatternComment" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[41], context[42], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[48] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[49], context[50], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_CmdComment<int>::name );
  refalrts::reinit_name( context[8], SplitGen, "SplitGen" );
  refalrts::link_brackets( context[46], context[48] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[47] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[45] );
  refalrts::link_brackets( context[26], context[44] );
  refalrts::push_stack( context[43] );
  refalrts::push_stack( context[39] );
  refalrts::link_brackets( context[4], context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[49], context[50] );
  res = refalrts::splice_evar( res, context[48], context[48] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[24], context[47] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[23] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_MulFunction_4/4 (/7 (/11 e.Substitute#3/9 )/12 e.Substs#3/5 )/8 (/15 (/19 e.HardGenComment#3/17 )/20 (/23 e.Result#3/21 )/24 )/16 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute#3 as range 9
  // closed e.Substs#3 as range 5
  // closed e.HardGenComment#3 as range 17
  // closed e.Result#3 as range 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 {REMOVED TILE}  )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Substs#3/5 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Substitute#3/9 } Tile{ HalfReuse: )/15 AsIs: (/19 AsIs: e.HardGenComment#3/17 AsIs: )/20 AsIs: (/23 AsIs: e.Result#3/21 AsIs: )/24 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_MulFunction_5/4 (/7 e.Comments#2/5 )/8 (/11 (/15 e.CommonPattern#2/13 )/16 e.SentSubsts#2/9 )/12 e.SentenceTails#2/2 >/1
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
  // closed e.Comments#2 as range 5
  // closed e.CommonPattern#2 as range 13
  // closed e.SentSubsts#2 as range 9
  // closed e.SentenceTails#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Comments#2/5 AsIs: )/8 AsIs: (/11 HalfReuse: </15 } & GenPattern/17 Tile{ AsIs: </0 Reuse: & ReverseGen/4 } Tile{ AsIs: e.CommonPattern#2/13 } >/18 >/19 )/20 </21 & DelAccumulator/22 </23 & MapReduce/24 & lambda_HighLevelRASL_MulFunction_4/25 Tile{ HalfReuse: (/16 AsIs: e.SentSubsts#2/9 AsIs: )/12 AsIs: e.SentenceTails#2/2 AsIs: >/1 } >/26 Tile{ ]] }
  if( ! refalrts::alloc_name( context[17], GenPattern, "GenPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], DelAccumulator, "DelAccumulator" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], lambda_HighLevelRASL_MulFunction_4, "lambda_HighLevelRASL_MulFunction_4" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[15] );
  refalrts::update_name( context[4], ReverseGen, "ReverseGen" );
  refalrts::reinit_open_bracket( context[16] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[16], context[12] );
  refalrts::link_brackets( context[11], context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[18], context[25] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_MulFunction_6/4 s.MaxMemory#3/5 (/8 e.HardGenComment#3/6 )/9 (/12 # CmdIssueMem/14 s.Memory#4/15 )/13 e.Commands#4/2 >/1
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
  context[14] = refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[10], context[11] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.HardGenComment#3 as range 6
  // closed e.Commands#4 as range 2
  if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Memory#4/15 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Max/4 AsIs: s.MaxMemory#3/5 HalfReuse: s.Memory4 #15/8 } Tile{ HalfReuse: >/9 AsIs: (/12 Reuse: # CmdSentence/14 } (/16 # CmdComment/17 Tile{ AsIs: e.HardGenComment#3/6 } Tile{ AsIs: )/13 AsIs: e.Commands#4/2 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[17], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Max, "Max" );
  refalrts::reinit_svar( context[8], context[15] );
  refalrts::reinit_close_call( context[9] );
  refalrts::update_ident( context[14], & ident_CmdSentence<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[16], context[13] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_7(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_MulFunction_7/4 s.ContextSize#2/21 (/24 e.Vars#2/22 )/25 s.MaxMemory#3/26 (/7 (/11 e.Substitute#3/9 )/12 (/15 e.HardGenComment#3/13 )/16 (/19 e.Result#3/17 )/20 )/8 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute#3 as range 9
  // closed e.HardGenComment#3 as range 13
  // closed e.Result#3 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.Vars#2 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </27 & Fetch/28 Tile{ AsIs: </0 Reuse: & GenSentence/4 AsIs: s.ContextSize#2/21 AsIs: (/24 AsIs: e.Vars#2/22 AsIs: )/25 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Substitute#3/9 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Result#3/17 AsIs: )/20 HalfReuse: >/8 HalfReuse: </1 } & CreateClosure /29 & lambda_HighLevelRASL_MulFunction_6/30 Tile{ AsIs: s.MaxMemory#3/26 AsIs: (/7 } Tile{ AsIs: e.HardGenComment#3/13 } Tile{ AsIs: )/12 HalfReuse: >/15 } >/31 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], lambda_HighLevelRASL_MulFunction_6, "lambda_HighLevelRASL_MulFunction_6" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], GenSentence, "GenSentence" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_open_call( context[1] );
  refalrts::reinit_close_call( context[15] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[26], context[7] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[25] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_8(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_MulFunction_8/4 (/7 e.Comments#2/5 )/8 (/11 (/15 e.Vars#2/13 )/16 s.ContextSize#2/21 (/19 e.CommonMatchCommands#2/17 )/20 )/12 e.SentencesWithSubst#2/2 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Comments#2 as range 5
  // closed e.Vars#2 as range 13
  // closed e.CommonMatchCommands#2 as range 17
  // closed e.SentencesWithSubst#2 as range 2
  if( ! refalrts::svar_left( context[21], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ContextSize#2/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/19 } Tile{ AsIs: e.Comments#2/5 } Tile{ AsIs: e.CommonMatchCommands#2/17 } )/22 Tile{ AsIs: </0 Reuse: & MapReduce/4 HalfReuse: </7 } & CreateClosure /23 Tile{ HalfReuse: & lambda_HighLevelRASL_MulFunction_7/8 HalfReuse: s.ContextSize2 #21/11 AsIs: (/15 AsIs: e.Vars#2/13 AsIs: )/16 } Tile{ HalfReuse: >/20 HalfReuse: s.ContextSize2 #21/12 AsIs: e.SentencesWithSubst#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], MapReduce, "MapReduce" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], lambda_HighLevelRASL_MulFunction_7, "lambda_HighLevelRASL_MulFunction_7" );
  refalrts::reinit_svar( context[11], context[21] );
  refalrts::reinit_close_call( context[20] );
  refalrts::reinit_svar( context[12], context[21] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_9(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_MulFunction_9/4 e.Commands#3/2 (/7 # CmdOpenELoop/9 e.OpenELoop#3/5 )/8 >/1
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
  // </0 & lambda_HighLevelRASL_MulFunction_9/4 e.LastSentence#3/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.LastSentence#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_MulFunction_9/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LastSentence#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_MulFunction_10(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_MulFunction_10/4 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 (/17 e.Prefix#2/15 )/18 s.MaxMemory#2/19 e.Sentences#2/2 (/7 # CmdSentence/9 e.LastSentence#2/5 )/8 >/1
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
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#1 as range 11
    // closed e.Prefix#2 as range 15
    if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
      continue;
    // closed e.Sentences#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 AsIs: (/17 } Tile{ HalfReuse: # CmdIssueMem/18 AsIs: s.MaxMemory#2/19 } )/20 (/21 # CmdInitB0/22 )/23 Tile{ AsIs: e.Prefix#2/15 } Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: e.LastSentence#2/5 HalfReuse: & lambda_HighLevelRASL_MulFunction_9/8 AsIs: >/1 } )/24 Tile{ ]] }
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdInitB0<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Function<int>::name );
    refalrts::reinit_ident( context[18], & ident_CmdIssueMem<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], Fetch, "Fetch" );
    refalrts::reinit_name( context[8], lambda_HighLevelRASL_MulFunction_9, "lambda_HighLevelRASL_MulFunction_9" );
    refalrts::link_brackets( context[0], context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[21], context[23] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_MulFunction_10/4 s.ScopeClass#1/14 (/12 e.Name#1/10 )/13 (/8 e.Prefix#2/6 )/9 0/5 >/1
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Name#1 as range 10
  // closed e.Prefix#2 as range 6
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/12 {REMOVED TILE}  )/13 (/8 e.Prefix#2/6 )/9 0/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 AsIs: s.ScopeClass#1/14 } Tile{ AsIs: e.Name#1/10 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdEnum<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[14], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult HighLevelRASL_MulFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & HighLevelRASL_MulFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 e.Sentences#1/2 >/1
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
  //RESULT: Tile{ [[ } </10 & Fetch/11 Tile{ AsIs: e.Sentences#1/2 } </12 & Seq/13 (/14 & MapReduce/15 & lambda_HighLevelRASL_MulFunction_1/16 (/17 )/18 )/19 & lambda_HighLevelRASL_MulFunction_2/20 & lambda_HighLevelRASL_MulFunction_3/21 & lambda_HighLevelRASL_MulFunction_5/22 & lambda_HighLevelRASL_MulFunction_8/23 </24 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_HighLevelRASL_MulFunction_10/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } >/25 >/26 Tile{ AsIs: >/1 ]] }
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
  if( ! refalrts::alloc_name( context[15], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], lambda_HighLevelRASL_MulFunction_1, "lambda_HighLevelRASL_MulFunction_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_HighLevelRASL_MulFunction_2, "lambda_HighLevelRASL_MulFunction_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], lambda_HighLevelRASL_MulFunction_3, "lambda_HighLevelRASL_MulFunction_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], lambda_HighLevelRASL_MulFunction_5, "lambda_HighLevelRASL_MulFunction_5" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], lambda_HighLevelRASL_MulFunction_8, "lambda_HighLevelRASL_MulFunction_8" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_HighLevelRASL_MulFunction_10, "lambda_HighLevelRASL_MulFunction_10" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[14], context[19] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[12], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenSentence_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenSentence_0/4 (/7 e.Vars#1/5 )/8 (/11 e.Substitute#1/9 )/12 e.Head#2/13 (/17 e.Vars#1/23 )/18 (/21 e.Substitute#1/25 )/22 e.Tail#2/27 >/1
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
  // closed e.Vars#1 as range 5
  // closed e.Substitute#1 as range 9
  context[13] = 0;
  context[14] = 0;
  refalrts::start_e_loop();
  do {
    context[27] = context[2];
    context[28] = context[3];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[27], context[28] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[27], context[28] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    if( ! refalrts::repeated_evar_left( context[23], context[24], context[5], context[6], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::repeated_evar_left( context[25], context[26], context[9], context[10], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Vars#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Substitute#1/25 )/22 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Head#2/13 } Tile{ AsIs: </0 Reuse: & ComposeVars/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Substitute#1/9 AsIs: )/12 } Tile{ AsIs: (/17 AsIs: e.Vars#1/23 AsIs: )/18 HalfReuse: >/21 } Tile{ AsIs: e.Tail#2/27 } Tile{ ]] }
    refalrts::update_name( context[4], ComposeVars, "ComposeVars" );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenSentence_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenSentence_1/4 s.ContextSize#1/5 s.ContextSize#1/6 (/9 e.Substitutes#2/7 )/10 e.Tail#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::repeated_stvar_left( context[6], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Substitutes#2 as range 7
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.ContextSize#1/6 (/9 {REMOVED TILE}  )/10 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReassignEs/4 AsIs: s.ContextSize#1/5 } Tile{ AsIs: e.Substitutes#2/7 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], ReassignEs, "ReassignEs" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenSentence_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenSentence_2/4 s.MaxMemory#2/5 (/8 e.PatternCommands#3/6 )/9 s.ContextCount#4/10 e.ResultCommands#4/2 >/1
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
  // closed e.PatternCommands#3 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ResultCommands#4 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ContextCount#4/10 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </11 & FoldOpenELoops/12 (/13 # CmdIssueMem/14 Tile{ AsIs: </0 Reuse: & Max/4 AsIs: s.MaxMemory#2/5 HalfReuse: s.ContextCount4 #10/8 } >/15 Tile{ AsIs: )/9 } Tile{ AsIs: e.PatternCommands#3/6 } Tile{ AsIs: e.ResultCommands#4/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], FoldOpenELoops, "FoldOpenELoops" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], & ident_CmdIssueMem<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Max, "Max" );
  refalrts::reinit_svar( context[8], context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[13], context[9] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenSentence_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenSentence_3/4 (/7 e.Result#2/5 )/8 s.MaxMemory#2/13 (/16 e.PatternVars#3/14 )/17 s.ContextOffset#3/18 (/11 e.PatternCommands#3/9 )/12 >/1
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
  // closed e.Result#2 as range 5
  // closed e.PatternCommands#3 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.PatternVars#3 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & GenResult/19 Tile{ AsIs: s.ContextOffset#3/18 } Tile{ AsIs: (/16 AsIs: e.PatternVars#3/14 AsIs: )/17 } Tile{ AsIs: e.Result#2/5 } >/20 </21 & CreateClosure /22 Tile{ HalfReuse: & lambda_GenSentence_2/8 AsIs: s.MaxMemory#2/13 } Tile{ AsIs: (/11 AsIs: e.PatternCommands#3/9 AsIs: )/12 AsIs: >/1 } >/23 Tile{ ]] }
  if( ! refalrts::alloc_name( context[19], GenResult, "GenResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], lambda_GenSentence_2, "lambda_GenSentence_2" );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenSentence_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenSentence_4/4 s.MaxMemory#2/17 (/15 e.Saves#2/13 )/16 (/11 e.Substitutes#2/9 )/12 (/7 e.Result#2/5 )/8 >/1
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
  // closed e.Saves#2 as range 13
  // closed e.Substitutes#2 as range 9
  // closed e.Result#2 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </18 & Fetch/19 Tile{ AsIs: </0 Reuse: & GenPattern_New/4 AsIs: s.MaxMemory#2/17 AsIs: (/15 AsIs: e.Saves#2/13 AsIs: )/16 AsIs: (/11 AsIs: e.Substitutes#2/9 AsIs: )/12 HalfReuse: >/7 } </20 & CreateClosure /21 & lambda_GenSentence_3/22 (/23 Tile{ AsIs: e.Result#2/5 } )/24 s.MaxMemory#2/17/25 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], lambda_GenSentence_3, "lambda_GenSentence_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[25], context[17]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], GenPattern_New, "GenPattern_New" );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenSentence/4 s.ContextSize#1/17 (/15 e.Vars#1/13 )/16 (/11 e.Substitute#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
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
  // closed e.Vars#1 as range 13
  // closed e.Substitute#1 as range 9
  // closed e.Result#1 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: s.ContextSize#1/17 AsIs: (/15 AsIs: e.Vars#1/13 AsIs: )/16 AsIs: (/11 AsIs: e.Substitute#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 HalfReuse: </1 } & Seq/18 </19 & CreateClosure /20 & lambda_GenSentence_0/21 (/22 e.Vars#1/13/23 )/25 (/26 e.Substitute#1/9/27 )/29 >/30 </31 & CreateClosure /32 & lambda_GenSentence_1/33 s.ContextSize#1/17/34 >/35 & lambda_GenSentence_4/36 >/37 >/38 Tile{ ]] }
  if( ! refalrts::alloc_name( context[18], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], lambda_GenSentence_0, "lambda_GenSentence_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[23], context[24], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], lambda_GenSentence_1, "lambda_GenSentence_1" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[34], context[17]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[36], lambda_GenSentence_4, "lambda_GenSentence_4" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[26], context[29] );
  refalrts::link_brackets( context[22], context[25] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[38] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ComposeVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ComposeVars/4 (/7 e.Scanned#1/5 )/8 (/11 e.Substitute_B#1/17 (/21 s.Tag#1/23 (/26 e.Name#1/24 )/27 '$'/28 e.Subst#1/19 )/22 e.Substitute_E#1/43 )/12 (/15 e.Vars_B#1/29 (/33 s.Mode#1/35 (/38 e.Name#1/40 )/39 s.Offset#1/42 )/34 e.Vars_E#1/47 )/16 >/1
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
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 5
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[43] = context[9];
      context[44] = context[10];
      context[45] = context[13];
      context[46] = context[14];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[43], context[44] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Substitute_E#1 as range 9
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[19], context[20] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::char_left( '$', context[19], context[20] );
      if( ! context[28] )
        continue;
      // closed e.Name#1 as range 24
      // closed e.Subst#1 as range 19
      context[29] = 0;
      context[30] = 0;
      refalrts::start_e_loop();
      do {
        context[47] = context[45];
        context[48] = context[46];
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[47], context[48] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        // closed e.Vars_E#1 as range 13
        if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
          continue;
        context[36] = 0;
        context[37] = 0;
        context[38] = refalrts::brackets_left( context[36], context[37], context[31], context[32] );
        if( ! context[38] )
          continue;
        refalrts::bracket_pointers(context[38], context[39]);
        if( ! refalrts::repeated_evar_left( context[40], context[41], context[24], context[25], context[36], context[37] ) )
          continue;
        if( ! refalrts::empty_seq( context[36], context[37] ) )
          continue;
        if( ! refalrts::svar_left( context[42], context[31], context[32] ) )
          continue;
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Tag#1/23 (/26 e.Name#1/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/33 s.Mode#1/35 (/38 e.Name#1/40 )/39 s.Offset#1/42 )/34 {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & ComposeVars/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: (/8 HalfReuse: s.Tag1 #23/11 } Tile{ HalfReuse: s.Offset1 #42/28 AsIs: e.Subst#1/19 AsIs: )/22 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Substitute_B#1/17 } Tile{ AsIs: e.Substitute_E#1/43 } Tile{ AsIs: )/27 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Vars_B#1/29 } Tile{ AsIs: e.Vars_E#1/47 } Tile{ AsIs: )/16 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_svar( context[11], context[23] );
        refalrts::reinit_svar( context[28], context[42] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[21], context[16] );
        refalrts::link_brackets( context[15], context[27] );
        refalrts::link_brackets( context[7], context[12] );
        refalrts::link_brackets( context[8], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[43], context[44] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[12], context[15] );
        res = refalrts::splice_evar( res, context[28], context[22] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[11], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[29], context[30], context[45], context[46] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[9], context[10] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ComposeVars/4 (/7 e.Scanned#1/5 )/8 (/11 )/12 (/15 )/16 >/1
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
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ComposeVars/4 {REMOVED TILE}  (/11 )/12 (/15 )/16 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ReassignEs_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ReassignEs_0/4 (/7 s.Offset#2/18 (/16 e.Saves#2/14 )/17 )/8 (/11 # E/13 s.Old#2/19 e.Subst#2/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_E<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Saves#2 as range 14
    if( ! refalrts::svar_left( context[18], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[9], context[10] ) )
      continue;
    // closed e.Subst#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Inc2/7 AsIs: s.Offset#2/18 HalfReuse: >/16 } (/20 Tile{ AsIs: e.Saves#2/14 } (/21 # CmdSave/22 Tile{ AsIs: s.Old#2/19 } s.Offset#2/18/23 Tile{ AsIs: )/12 } Tile{ AsIs: )/17 AsIs: )/8 AsIs: (/11 AsIs: # E/13 } s.Offset#2/18/24 Tile{ AsIs: e.Subst#2/9 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdSave<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[23], context[18]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[18]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], Inc2, "Inc2" );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[20], context[17] );
    refalrts::link_brackets( context[21], context[12] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[17], context[13] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ReassignEs_0/4 (/7 s.Offset#2/17 (/15 e.Saves#2/13 )/16 )/8 (/11 e.Other#2/9 )/12 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Saves#2 as range 13
  // closed e.Other#2 as range 9
  if( ! refalrts::svar_left( context[17], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_ReassignEs_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Offset#2/17 AsIs: (/15 AsIs: e.Saves#2/13 AsIs: )/16 AsIs: )/8 AsIs: (/11 AsIs: e.Other#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ReassignEs_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ReassignEs_1/4 (/7 s.Offset#2/13 (/11 e.Saves#2/9 )/12 )/8 e.Substitutes#2/2 >/1
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
  // closed e.Saves#2 as range 9
  // closed e.Substitutes#2 as range 2
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_ReassignEs_1/4 (/7 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#2/13 AsIs: (/11 AsIs: e.Saves#2/9 AsIs: )/12 HalfReuse: (/8 AsIs: e.Substitutes#2/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ReassignEs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ReassignEs/4 s.ContextOffset#1/5 e.Substitutes#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitutes#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </6 & MapReduce/7 & lambda_ReassignEs_0/8 (/9 Tile{ AsIs: s.ContextOffset#1/5 } (/10 )/11 )/12 Tile{ AsIs: e.Substitutes#1/2 } >/13 & lambda_ReassignEs_1/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], lambda_ReassignEs_0, "lambda_ReassignEs_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], lambda_ReassignEs_1, "lambda_ReassignEs_1" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[6] );
  refalrts::link_brackets( context[9], context[12] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
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
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_0/4 s.ContextOffset#2/5 (/8 e.Vars#2/6 )/9 e.Commands#2/2 >/1
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
  // closed e.Vars#2 as range 6
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ContextOffset#2/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 } Tile{ AsIs: e.Vars#2/6 } )/10 Tile{ AsIs: </0 Reuse: & FreezeRanges/4 } Tile{ HalfReuse: s.ContextOffset2 #5/9 AsIs: e.Commands#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FreezeRanges, "FreezeRanges" );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_1/4 (/7 e.Vars#2/5 )/8 s.ContextOffset#2/9 e.Commands#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Vars#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Vars#2/5 AsIs: )/8 AsIs: s.ContextOffset#2/9 } Tile{ AsIs: </0 Reuse: & GetRangeReassigns/4 } Tile{ AsIs: e.Commands#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], GetRangeReassigns, "GetRangeReassigns" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPattern_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_2/4 (/7 e.Vars#2/5 )/8 s.ContextOffset#2/9 (/12 e.Reassigns#2/10 )/13 e.Commands#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Vars#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Reassigns#2 as range 10
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & FixupEVarIndexes/7 } Tile{ AsIs: (/12 AsIs: e.Reassigns#2/10 AsIs: )/13 } Tile{ AsIs: e.Vars#2/5 } Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: s.ContextOffset#2/9 } Tile{ AsIs: e.Commands#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], FixupEVarIndexes, "FixupEVarIndexes" );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPattern_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_3/4 (/7 e.Vars#2/5 )/8 s.ContextOffset#2/9 e.Commands#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Vars#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_GenPattern_3/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Vars#2/5 AsIs: )/8 AsIs: s.ContextOffset#2/9 } Tile{ HalfReuse: (/0 } Tile{ AsIs: e.Commands#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenPattern/4 e.Pattern#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & DoGenPattern/6 2/7 (/8 # E/9 0/10 Tile{ AsIs: e.Pattern#1/2 } )/11 (/12 )/13 (/14 )/15 >/16 </17 & Seq/18 & lambda_GenPattern_0/19 & lambda_GenPattern_1/20 & lambda_GenPattern_2/21 & lambda_GenPattern_3/22 >/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], DoGenPattern, "DoGenPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[7], 2UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_E<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[10], 0UL ) )
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
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], lambda_GenPattern_0, "lambda_GenPattern_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_GenPattern_1, "lambda_GenPattern_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], lambda_GenPattern_2, "lambda_GenPattern_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], lambda_GenPattern_3, "lambda_GenPattern_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPattern_New_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_New_0/4 s.ContextOffset#2/5 (/8 e.Vars#2/6 )/9 e.Commands#2/2 >/1
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
  // closed e.Vars#2 as range 6
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ContextOffset#2/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 } Tile{ AsIs: e.Vars#2/6 } )/10 Tile{ AsIs: </0 Reuse: & FreezeRanges/4 } Tile{ HalfReuse: s.ContextOffset2 #5/9 AsIs: e.Commands#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FreezeRanges, "FreezeRanges" );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPattern_New_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_New_1/4 (/7 e.Vars#2/5 )/8 s.ContextOffset#2/9 e.Commands#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Vars#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Vars#2/5 AsIs: )/8 AsIs: s.ContextOffset#2/9 } Tile{ AsIs: </0 Reuse: & GetRangeReassigns/4 } Tile{ AsIs: e.Commands#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], GetRangeReassigns, "GetRangeReassigns" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPattern_New_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_New_2/4 (/7 e.Vars#2/5 )/8 s.ContextOffset#2/9 (/12 e.Reassigns#2/10 )/13 e.Commands#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Vars#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Reassigns#2 as range 10
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/14 </15 & FixupEVarIndexes/16 Tile{ AsIs: (/12 AsIs: e.Reassigns#2/10 AsIs: )/13 } e.Vars#2/5/17 >/19 )/20 Tile{ AsIs: s.ContextOffset#2/9 } (/21 Tile{ AsIs: e.Commands#2/2 } (/22 # CmdComment/23 'V'/24 'a'/25 'r'/26 Tile{ HalfReuse: 's'/0 HalfReuse: ':'/4 HalfReuse: ' '/7 AsIs: e.Vars#2/5 AsIs: )/8 } (/27 # CmdComment/28 'R'/29 'e'/30 'a'/31 's'/32 's'/33 'i'/34 'g'/35 'n'/36 's'/37 ':'/38 ' '/39 e.Reassigns#2/10/40 )/42 (/43 # CmdComment/44 'F'/45 'i'/46 'x'/47 'u'/48 'p'/49 ':'/50 ' '/51 </52 & FixupEVarIndexes/53 (/54 e.Reassigns#2/10/55 )/57 e.Vars#2/5/58 >/60 )/61 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], FixupEVarIndexes, "FixupEVarIndexes" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[23], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'V' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[28], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], ' ' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[40], context[41], context[10], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[44], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[52] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[53], FixupEVarIndexes, "FixupEVarIndexes" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[54] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[55], context[56], context[10], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[57] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[58], context[59], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[60] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[61] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 's' );
  refalrts::reinit_char( context[4], ':' );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[21], context[1] );
  refalrts::link_brackets( context[43], context[61] );
  refalrts::push_stack( context[60] );
  refalrts::push_stack( context[52] );
  refalrts::link_brackets( context[54], context[57] );
  refalrts::link_brackets( context[27], context[42] );
  refalrts::link_brackets( context[22], context[8] );
  refalrts::link_brackets( context[14], context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[61] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenPattern_New(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenPattern_New/4 s.MaxMemory#1/13 (/11 e.Saves#1/9 )/12 (/7 e.Substitutes#1/5 )/8 >/1
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
  // closed e.Saves#1 as range 9
  // closed e.Substitutes#1 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </14 & DoGenPattern/15 Tile{ AsIs: s.MaxMemory#1/13 } Tile{ AsIs: e.Substitutes#1/5 } (/16 )/17 Tile{ AsIs: (/11 AsIs: e.Saves#1/9 AsIs: )/12 HalfReuse: >/7 } </18 & Seq/19 & lambda_GenPattern_New_0/20 & lambda_GenPattern_New_1/21 & lambda_GenPattern_New_2/22 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], DoGenPattern, "DoGenPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_GenPattern_New_0, "lambda_GenPattern_New_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], lambda_GenPattern_New_1, "lambda_GenPattern_New_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], lambda_GenPattern_New_2, "lambda_GenPattern_New_2" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[11], context[7] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GetRangeReassigns_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & GetRangeReassigns_FixupChain/7 } Tile{ AsIs: e.Reassigns#2/5 } s.Old#2/14/16 s.New#2/15/17 Tile{ AsIs: >/1 } (/18 s.Old#2/14/19 s.New#2/15/20 )/21 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSave/13 AsIs: s.Old#2/14 AsIs: s.New#2/15 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_stvar(context[16], context[14]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[17], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[19], context[14]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[20], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], GetRangeReassigns_FixupChain, "GetRangeReassigns_FixupChain" );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[18], context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[18], context[21] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
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

static refalrts::FnResult GetRangeReassigns_FixupChain(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetRangeReassigns_FixupChain/4 e.Reassigns_B#1/7 (/11 s.First#1/14 s.Old#1/13 )/12 e.Reassigns_E#1/15 s.Old#1/6 s.New#1/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[2];
      context[16] = context[3];
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::brackets_left( context[9], context[10], context[15], context[16] );
      if( ! context[11] )
        continue;
      refalrts::bracket_pointers(context[11], context[12]);
      if( ! refalrts::repeated_stvar_right( context[13], context[6], context[9], context[10] ) )
        continue;
      // closed e.Reassigns_E#1 as range 2
      if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
        continue;
      if( ! refalrts::empty_seq( context[9], context[10] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Old#1/13 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Reassigns_B#1/7 } Tile{ AsIs: (/11 AsIs: s.First#1/14 } Tile{ HalfReuse: s.New1 #5/4 } )/17 Tile{ AsIs: </0 } Tile{ HalfReuse: & GetRangeReassigns_FixupChain/12 AsIs: e.Reassigns_E#1/15 AsIs: s.Old#1/6 AsIs: s.New#1/5 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[4], context[5] );
      refalrts::reinit_name( context[12], GetRangeReassigns_FixupChain, "GetRangeReassigns_FixupChain" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[11], context[14] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetRangeReassigns_FixupChain/4 e.Reassigns#1/2 s.Old#1/6 s.New#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reassigns#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & GetRangeReassigns_FixupChain/4 {REMOVED TILE}  s.Old#1/6 s.New#1/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Reassigns#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
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
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # T/20 s.Num#1/26 (/23 # TkChar/25 s.Char#1/27 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_T<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkChar<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  # T/20 s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/28 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ HalfReuse: # AlgTerm/23 HalfReuse: s.Num1 #26/25 AsIs: s.Char#1/27 AsIs: )/24 AsIs: )/19 } Tile{ HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdChar<int>::name );
      refalrts::reinit_ident( context[23], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::reinit_close_call( context[18] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[13], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # T/20 s.Num#1/26 (/23 # TkName/25 e.Name#1/21 )/24 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_T<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkName<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Name#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  # T/20 s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/27 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ HalfReuse: # AlgTerm/23 HalfReuse: s.Num1 #26/25 AsIs: e.Name#1/21 AsIs: )/24 AsIs: )/19 } Tile{ HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdName<int>::name );
      refalrts::reinit_ident( context[23], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::reinit_close_call( context[18] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[13], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # T/20 s.Num#1/26 (/23 # TkIdentifier/25 e.Ident#1/21 )/24 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_T<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Ident#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  # T/20 s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/27 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ HalfReuse: # AlgTerm/23 HalfReuse: s.Num1 #26/25 AsIs: e.Ident#1/21 AsIs: )/24 AsIs: )/19 } Tile{ HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdIdent<int>::name );
      refalrts::reinit_ident( context[23], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::reinit_close_call( context[18] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[13], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # T/20 s.Num#1/26 (/23 # TkNumber/25 s.Value#1/27 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_T<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  # T/20 s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/28 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ HalfReuse: # AlgTerm/23 HalfReuse: s.Num1 #26/25 AsIs: s.Value#1/27 AsIs: )/24 AsIs: )/19 } Tile{ HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNumber<int>::name );
      refalrts::reinit_ident( context[23], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::reinit_close_call( context[18] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[13], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # T/20 s.Num#1/26 (/23 # Brackets/25 e.SubRange#1/21 )/24 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_T<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Brackets<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.SubRange#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </29 & Inc2/30 Tile{ AsIs: s.ContextOffset#1/13 } >/31 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 } # E/32 s.ContextOffset#1/13/33 Tile{ AsIs: e.SubRange#1/21 } Tile{ AsIs: )/19 AsIs: e.Substs_E#1/27 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } Tile{ Reuse: # AlgTerm/20 AsIs: s.Num#1/26 HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 } Tile{ AsIs: )/24 } >/34 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[30], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[32], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[33], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[34] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdBrackets<int>::name );
      refalrts::update_ident( context[20], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::push_stack( context[34] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[8], context[25] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[20], context[25] );
      res = refalrts::splice_evar( res, context[19], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # T/20 s.Num#1/30 (/23 # ADT_Brackets/25 (/28 e.Name#1/26 )/29 e.SubRange#1/21 )/24 )/19 e.Substs_E#1/31 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[31] = context[2];
      context[32] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[31], context[32] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_T<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[21], context[22] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      // closed e.Name#1 as range 26
      // closed e.SubRange#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[30], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Name#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } Tile{ HalfReuse: </29 } Tile{ HalfReuse: & Inc2/24 } Tile{ AsIs: s.ContextOffset#1/13 } >/33 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 } # E/34 s.ContextOffset#1/13/35 Tile{ AsIs: e.SubRange#1/21 } Tile{ AsIs: )/19 AsIs: e.Substs_E#1/31 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } Tile{ Reuse: # AlgTerm/20 AsIs: s.Num#1/30 HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 HalfReuse: )/28 } >/36 Tile{ ]] }
      if( ! refalrts::alloc_close_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[36] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_call( context[29] );
      refalrts::reinit_name( context[24], Inc2, "Inc2" );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdADT<int>::name );
      refalrts::update_ident( context[20], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_close_bracket( context[28] );
      refalrts::push_stack( context[36] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[25] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::push_stack( context[33] );
      refalrts::push_stack( context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[20], context[28] );
      res = refalrts::splice_evar( res, context[19], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # T/20 s.Num#1/26 (/23 # TkVariable/25 s.Mode#1/27 e.Index#1/21 )/24 )/19 e.Substs_E#1/42 (/11 e.Vars_B#1/28 (/32 s.Mode#1/34 (/37 e.Index#1/39 )/38 e.Offsets#1/30 s.SampleOffset#1/41 )/33 e.Vars_E#1/46 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[42] = context[2];
      context[43] = context[3];
      context[44] = context[9];
      context[45] = context[10];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[42], context[43] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_T<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      // closed e.Index#1 as range 21
      context[28] = 0;
      context[29] = 0;
      refalrts::start_e_loop();
      do {
        context[46] = context[44];
        context[47] = context[45];
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[46], context[47] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        if( ! refalrts::repeated_stvar_left( context[34], context[27], context[30], context[31] ) )
          continue;
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[30], context[31] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_evar_left( context[39], context[40], context[21], context[22], context[35], context[36] ) )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;
        // closed e.Vars_E#1 as range 9
        if( ! refalrts::svar_right( context[41], context[30], context[31] ) )
          continue;
        // closed e.Offsets#1 as range 30

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/27 e.Index#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/42 } Tile{ AsIs: (/11 AsIs: e.Vars_B#1/28 AsIs: (/32 AsIs: s.Mode#1/34 AsIs: (/37 AsIs: e.Index#1/39 AsIs: )/38 AsIs: e.Offsets#1/30 AsIs: s.SampleOffset#1/41 HalfReuse: s.Num1 #26/33 } )/48 Tile{ AsIs: e.Vars_E#1/46 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgTerm/49 Tile{ HalfReuse: s.Num1 #26/18 HalfReuse: s.Mode1 #34/20 AsIs: s.Num#1/26 HalfReuse: s.SampleOffset1 #41/23 HalfReuse: )/25 } Tile{ AsIs: )/24 HalfReuse: >/19 } Tile{ ]] }
        if( ! refalrts::alloc_close_bracket( context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[49], & ident_AlgTerm<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::reinit_svar( context[33], context[26] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], & ident_CmdRepeated<int>::name );
        refalrts::reinit_svar( context[18], context[26] );
        refalrts::reinit_svar( context[20], context[34] );
        refalrts::reinit_svar( context[23], context[41] );
        refalrts::reinit_close_bracket( context[25] );
        refalrts::reinit_close_call( context[19] );
        refalrts::push_stack( context[19] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[24] );
        refalrts::link_brackets( context[8], context[25] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[32], context[48] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[24], context[19] );
        res = refalrts::splice_evar( res, context[18], context[25] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[48], context[48] );
        res = refalrts::splice_evar( res, context[11], context[33] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[28], context[29], context[44], context[45] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # T/20 s.Num#1/27 (/23 # TkVariable/25 't'/26 e.Index#1/21 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_T<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( 't', context[21], context[22] );
      if( ! context[26] )
        continue;
      // closed e.Index#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[27], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/27 {REMOVED TILE}  {REMOVED TILE}  (/11 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/28 } Tile{ AsIs: (/18 } Tile{ AsIs: e.Vars#1/9 } Tile{ AsIs: (/23 HalfReuse: 't'/25 HalfReuse: (/26 AsIs: e.Index#1/21 AsIs: )/24 HalfReuse: s.Num1 #27/19 } Tile{ HalfReuse: )/20 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::reinit_char( context[25], 't' );
      refalrts::reinit_open_bracket( context[26] );
      refalrts::reinit_svar( context[19], context[27] );
      refalrts::reinit_close_bracket( context[20] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[18], context[12] );
      refalrts::link_brackets( context[23], context[20] );
      refalrts::link_brackets( context[26], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[13], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # T/20 s.Num#1/27 (/23 # TkVariable/25 's'/26 e.Index#1/21 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_T<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( 's', context[21], context[22] );
      if( ! context[26] )
        continue;
      // closed e.Index#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[27], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/28 } Tile{ AsIs: (/18 } Tile{ AsIs: e.Vars#1/9 } Tile{ AsIs: (/23 HalfReuse: 's'/25 HalfReuse: (/26 AsIs: e.Index#1/21 AsIs: )/24 HalfReuse: s.Num1 #27/19 } Tile{ HalfReuse: )/11 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdVar/1 } Tile{ Reuse: # AlgTerm/20 AsIs: s.Num#1/27 } 's'/30 s.ContextOffset#1/13/31 )/32 )/33 >/34 Tile{ ]] }
      if( ! refalrts::alloc_char( context[30], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[31], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[34] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_char( context[25], 's' );
      refalrts::reinit_open_bracket( context[26] );
      refalrts::reinit_svar( context[19], context[27] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdVar<int>::name );
      refalrts::update_ident( context[20], & ident_AlgTerm<int>::name );
      refalrts::push_stack( context[34] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[33] );
      refalrts::link_brackets( context[8], context[32] );
      refalrts::link_brackets( context[18], context[12] );
      refalrts::link_brackets( context[23], context[11] );
      refalrts::link_brackets( context[26], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[30], context[34] );
      res = refalrts::splice_evar( res, context[20], context[27] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # S/20 s.Num#1/26 (/23 # TkChar/25 s.Char#1/27 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_S<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkChar<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  # S/20 s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/28 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ HalfReuse: # AlgTerm/23 HalfReuse: s.Num1 #26/25 AsIs: s.Char#1/27 AsIs: )/24 AsIs: )/19 } Tile{ HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdChar<int>::name );
      refalrts::reinit_ident( context[23], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::reinit_close_call( context[18] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[13], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # S/20 s.Num#1/26 (/23 # TkName/25 e.Name#1/21 )/24 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_S<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkName<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Name#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  # S/20 s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/27 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ HalfReuse: # AlgTerm/23 HalfReuse: s.Num1 #26/25 AsIs: e.Name#1/21 AsIs: )/24 AsIs: )/19 } Tile{ HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdName<int>::name );
      refalrts::reinit_ident( context[23], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::reinit_close_call( context[18] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[13], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # S/20 s.Num#1/26 (/23 # TkIdentifier/25 e.Ident#1/21 )/24 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_S<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Ident#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  # S/20 s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/27 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ HalfReuse: # AlgTerm/23 HalfReuse: s.Num1 #26/25 AsIs: e.Ident#1/21 AsIs: )/24 AsIs: )/19 } Tile{ HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdIdent<int>::name );
      refalrts::reinit_ident( context[23], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::reinit_close_call( context[18] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[13], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # S/20 s.Num#1/26 (/23 # TkNumber/25 s.Value#1/27 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_S<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  # S/20 s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/28 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ HalfReuse: # AlgTerm/23 HalfReuse: s.Num1 #26/25 AsIs: s.Value#1/27 AsIs: )/24 AsIs: )/19 } Tile{ HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNumber<int>::name );
      refalrts::reinit_ident( context[23], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::reinit_close_call( context[18] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[13], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # S/20 s.Num#1/26 (/23 # TkVariable/25 s.Mode#1/27 e.Index#1/21 )/24 )/19 e.Substs_E#1/42 (/11 e.Vars_B#1/28 (/32 s.Mode#1/34 (/37 e.Index#1/39 )/38 e.Offsets#1/30 s.SampleOffset#1/41 )/33 e.Vars_E#1/46 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[42] = context[2];
      context[43] = context[3];
      context[44] = context[9];
      context[45] = context[10];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[42], context[43] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_S<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      // closed e.Index#1 as range 21
      context[28] = 0;
      context[29] = 0;
      refalrts::start_e_loop();
      do {
        context[46] = context[44];
        context[47] = context[45];
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[46], context[47] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        if( ! refalrts::repeated_stvar_left( context[34], context[27], context[30], context[31] ) )
          continue;
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[30], context[31] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_evar_left( context[39], context[40], context[21], context[22], context[35], context[36] ) )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;
        // closed e.Vars_E#1 as range 9
        if( ! refalrts::svar_right( context[41], context[30], context[31] ) )
          continue;
        // closed e.Offsets#1 as range 30

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/27 e.Index#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/42 } Tile{ AsIs: (/11 AsIs: e.Vars_B#1/28 AsIs: (/32 AsIs: s.Mode#1/34 AsIs: (/37 AsIs: e.Index#1/39 AsIs: )/38 AsIs: e.Offsets#1/30 AsIs: s.SampleOffset#1/41 HalfReuse: s.Num1 #26/33 } )/48 Tile{ AsIs: e.Vars_E#1/46 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgTerm/49 Tile{ HalfReuse: s.Num1 #26/18 HalfReuse: s.Mode1 #34/20 AsIs: s.Num#1/26 HalfReuse: s.SampleOffset1 #41/23 HalfReuse: )/25 } Tile{ AsIs: )/24 HalfReuse: >/19 } Tile{ ]] }
        if( ! refalrts::alloc_close_bracket( context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[49], & ident_AlgTerm<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::reinit_svar( context[33], context[26] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], & ident_CmdRepeated<int>::name );
        refalrts::reinit_svar( context[18], context[26] );
        refalrts::reinit_svar( context[20], context[34] );
        refalrts::reinit_svar( context[23], context[41] );
        refalrts::reinit_close_bracket( context[25] );
        refalrts::reinit_close_call( context[19] );
        refalrts::push_stack( context[19] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[24] );
        refalrts::link_brackets( context[8], context[25] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[32], context[48] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[24], context[19] );
        res = refalrts::splice_evar( res, context[18], context[25] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[48], context[48] );
        res = refalrts::splice_evar( res, context[11], context[33] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[28], context[29], context[44], context[45] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # S/20 s.Num#1/27 (/23 # TkVariable/25 's'/26 e.Index#1/21 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_S<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( 's', context[21], context[22] );
      if( ! context[26] )
        continue;
      // closed e.Index#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[27], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/27 {REMOVED TILE}  {REMOVED TILE}  (/11 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/28 } Tile{ AsIs: (/18 } Tile{ AsIs: e.Vars#1/9 } Tile{ AsIs: (/23 HalfReuse: 's'/25 HalfReuse: (/26 AsIs: e.Index#1/21 AsIs: )/24 HalfReuse: s.Num1 #27/19 } Tile{ HalfReuse: )/20 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::reinit_char( context[25], 's' );
      refalrts::reinit_open_bracket( context[26] );
      refalrts::reinit_svar( context[19], context[27] );
      refalrts::reinit_close_bracket( context[20] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[18], context[12] );
      refalrts::link_brackets( context[23], context[20] );
      refalrts::link_brackets( context[26], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[13], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 (/24 # TkChar/26 s.Char#1/27 )/25 e.Range#1/16 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left(  & ident_TkChar<int>::name, context[22], context[23] );
      if( ! context[26] )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[27], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Char#1/27 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 } Tile{ HalfReuse: s.Num1 #21/25 AsIs: e.Range#1/16 AsIs: )/19 AsIs: e.Substs_E#1/28 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } # AlgLeft/30 Tile{ AsIs: s.Num#1/21 HalfReuse: s.Char1 #27/24 HalfReuse: )/26 } )/31 >/32 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[30], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[32] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdChar<int>::name );
      refalrts::reinit_svar( context[24], context[27] );
      refalrts::reinit_close_bracket( context[26] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[31] );
      refalrts::link_brackets( context[8], context[26] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[21], context[26] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 (/24 # TkNumber/26 s.Number#1/27 )/25 e.Range#1/16 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[22], context[23] );
      if( ! context[26] )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[27], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Number#1/27 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 } Tile{ HalfReuse: s.Num1 #21/25 AsIs: e.Range#1/16 AsIs: )/19 AsIs: e.Substs_E#1/28 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } # AlgLeft/30 Tile{ AsIs: s.Num#1/21 HalfReuse: s.Number1 #27/24 HalfReuse: )/26 } )/31 >/32 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[30], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[32] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNumber<int>::name );
      refalrts::reinit_svar( context[24], context[27] );
      refalrts::reinit_close_bracket( context[26] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[31] );
      refalrts::link_brackets( context[8], context[26] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[21], context[26] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 (/24 # TkName/26 e.Name#1/22 )/25 e.Range#1/16 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left(  & ident_TkName<int>::name, context[22], context[23] );
      if( ! context[26] )
        continue;
      // closed e.Name#1 as range 22
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 } Tile{ HalfReuse: s.Num1 #21/25 AsIs: e.Range#1/16 AsIs: )/19 AsIs: e.Substs_E#1/27 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } # AlgLeft/29 Tile{ AsIs: s.Num#1/21 } Tile{ AsIs: e.Name#1/22 } Tile{ HalfReuse: )/24 HalfReuse: )/26 } >/30 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[29], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[30] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdName<int>::name );
      refalrts::reinit_close_bracket( context[24] );
      refalrts::reinit_close_bracket( context[26] );
      refalrts::push_stack( context[30] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[26] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 (/24 # TkIdentifier/26 e.Name#1/22 )/25 e.Range#1/16 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[22], context[23] );
      if( ! context[26] )
        continue;
      // closed e.Name#1 as range 22
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 } Tile{ HalfReuse: s.Num1 #21/25 AsIs: e.Range#1/16 AsIs: )/19 AsIs: e.Substs_E#1/27 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdComment/1 } # CmdIdent/29 # AlgLeft/30 Tile{ AsIs: s.Num#1/21 } Tile{ AsIs: e.Name#1/22 } )/31 Tile{ AsIs: (/24 Reuse: # CmdIdent/26 } # AlgLeft/32 s.Num#1/21/33 e.Name#1/22/34 )/36 )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[29], & ident_CmdIdent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[32], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[33], context[21]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[34], context[35], context[22], context[23]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdComment<int>::name );
      refalrts::update_ident( context[26], & ident_CmdIdent<int>::name );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[24], context[36] );
      refalrts::link_brackets( context[8], context[31] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[32], context[38] );
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/26 e.Range#1/16 (/23 # TkChar/25 s.Char#1/27 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkChar<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/26 AsIs: e.Range#1/16 HalfReuse: )/23 } Tile{ AsIs: e.Substs_E#1/28 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdComment/1 } # CmdChar/30 # AlgRight/31 s.Num#1/26/32 '\''/33 </34 & EscapeChar/35 s.Char#1/27/36 >/37 '\''/38 )/39 (/40 # CmdChar/41 # AlgRight/42 Tile{ HalfReuse: s.Num1 #26/25 AsIs: s.Char#1/27 AsIs: )/24 AsIs: )/19 } >/43 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[30], & ident_CmdChar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[31], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[32], context[26]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[33], '\'' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[35], EscapeChar, "EscapeChar" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[38], '\'' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], & ident_CmdChar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[43] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[23] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdComment<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::push_stack( context[43] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[40], context[24] );
      refalrts::link_brackets( context[8], context[39] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[34] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[25], context[19] );
      res = refalrts::splice_evar( res, context[30], context[42] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/26 e.Range#1/16 (/23 # TkNumber/25 s.Number#1/27 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/26 AsIs: e.Range#1/16 HalfReuse: )/23 } Tile{ AsIs: e.Substs_E#1/28 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } # AlgRight/30 Tile{ HalfReuse: s.Num1 #26/25 AsIs: s.Number#1/27 AsIs: )/24 AsIs: )/19 } >/31 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[30], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[23] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNumber<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[25], context[19] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/26 e.Range#1/16 (/23 # TkName/25 e.Name#1/21 )/24 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkName<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Name#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/26 AsIs: e.Range#1/16 HalfReuse: )/23 } Tile{ AsIs: e.Substs_E#1/27 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } # AlgRight/29 Tile{ HalfReuse: s.Num1 #26/25 AsIs: e.Name#1/21 AsIs: )/24 AsIs: )/19 } >/30 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[29], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[30] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[23] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdName<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::push_stack( context[30] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[25], context[19] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/26 e.Range#1/16 (/23 # TkIdentifier/25 e.Name#1/21 )/24 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Name#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/26 AsIs: e.Range#1/16 HalfReuse: )/23 } Tile{ AsIs: e.Substs_E#1/27 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } # AlgRight/29 Tile{ HalfReuse: s.Num1 #26/25 AsIs: e.Name#1/21 AsIs: )/24 AsIs: )/19 } >/30 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[29], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[30] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[23] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdIdent<int>::name );
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::push_stack( context[30] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[25], context[19] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 (/24 # Brackets/26 e.SubRange#1/22 )/25 e.Range#1/16 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left(  & ident_Brackets<int>::name, context[22], context[23] );
      if( ! context[26] )
        continue;
      // closed e.SubRange#1 as range 22
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </29 & Inc2/30 Tile{ AsIs: s.ContextOffset#1/13 } >/31 Tile{ AsIs: e.Substs_B#1/14 } (/32 # E/33 s.ContextOffset#1/13/34 Tile{ AsIs: e.SubRange#1/22 } )/35 (/36 # E/37 Tile{ HalfReuse: s.Num1 #21/25 AsIs: e.Range#1/16 AsIs: )/19 AsIs: e.Substs_E#1/27 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdComment/1 } # CmdBrackets/38 s.Num#1/21/39 s.ContextOffset#1/13/40 )/41 (/42 Tile{ HalfReuse: # CmdBrackets/18 Reuse: # AlgLeft/20 AsIs: s.Num#1/21 HalfReuse: s.ContextOffset1 #13/24 HalfReuse: )/26 } )/43 >/44 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[30], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[33], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[34], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_CmdBrackets<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[21]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[40], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[44] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdComment<int>::name );
      refalrts::reinit_ident( context[18], & ident_CmdBrackets<int>::name );
      refalrts::update_ident( context[20], & ident_AlgLeft<int>::name );
      refalrts::reinit_svar( context[24], context[13] );
      refalrts::reinit_close_bracket( context[26] );
      refalrts::push_stack( context[44] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[43] );
      refalrts::link_brackets( context[42], context[26] );
      refalrts::link_brackets( context[8], context[41] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[36], context[19] );
      refalrts::link_brackets( context[32], context[35] );
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[18], context[26] );
      res = refalrts::splice_evar( res, context[38], context[42] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      res = refalrts::splice_evar( res, context[35], context[37] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[32], context[34] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/26 e.Range#1/16 (/23 # Brackets/25 e.SubRange#1/21 )/24 )/19 e.Substs_E#1/27 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[27], context[28] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Brackets<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.SubRange#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </29 & Inc2/30 Tile{ AsIs: s.ContextOffset#1/13 } >/31 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/26 AsIs: e.Range#1/16 HalfReuse: )/23 HalfReuse: (/25 } # E/32 s.ContextOffset#1/13/33 Tile{ AsIs: e.SubRange#1/21 } Tile{ AsIs: )/19 AsIs: e.Substs_E#1/27 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgRight/34 s.Num#1/26/35 s.ContextOffset#1/13/36 Tile{ AsIs: )/24 } )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[30], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[32], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[33], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[26]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[23] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdBrackets<int>::name );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[25], context[19] );
      refalrts::link_brackets( context[18], context[23] );
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[34], context[36] );
      res = refalrts::splice_evar( res, context[19], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 (/24 # ADT_Brackets/26 (/29 e.Name#1/27 )/30 e.SubRange#1/22 )/25 e.Range#1/16 )/19 e.Substs_E#1/31 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[31] = context[2];
      context[32] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[31], context[32] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[22], context[23] );
      if( ! context[26] )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[22], context[23] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      // closed e.Name#1 as range 27
      // closed e.SubRange#1 as range 22
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </33 & Inc2/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 } s.ContextOffset#1/13/36 Tile{ AsIs: e.SubRange#1/22 } )/37 (/38 # E/39 Tile{ HalfReuse: s.Num1 #21/25 AsIs: e.Range#1/16 AsIs: )/19 AsIs: e.Substs_E#1/31 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } Tile{ HalfReuse: # AlgLeft/24 HalfReuse: s.Num1 #21/26 HalfReuse: s.ContextOffset1 #13/29 AsIs: e.Name#1/27 AsIs: )/30 } )/40 >/41 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[41] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdADT<int>::name );
      refalrts::reinit_ident( context[24], & ident_AlgLeft<int>::name );
      refalrts::reinit_svar( context[26], context[21] );
      refalrts::reinit_svar( context[29], context[13] );
      refalrts::push_stack( context[41] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[40] );
      refalrts::link_brackets( context[8], context[30] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[38], context[19] );
      refalrts::link_brackets( context[18], context[37] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[24], context[30] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[18], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/30 e.Range#1/16 (/23 # ADT_Brackets/25 (/28 e.Name#1/26 )/29 e.SubRange#1/21 )/24 )/19 e.Substs_E#1/31 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[31] = context[2];
      context[32] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[31], context[32] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[21], context[22] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      // closed e.Name#1 as range 26
      // closed e.SubRange#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[30], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </33 & Inc2/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/30 AsIs: e.Range#1/16 HalfReuse: )/23 HalfReuse: (/25 HalfReuse: # E/28 } s.ContextOffset#1/13/36 Tile{ AsIs: e.SubRange#1/21 } Tile{ AsIs: )/19 AsIs: e.Substs_E#1/31 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } # AlgRight/37 s.Num#1/30/38 s.ContextOffset#1/13/39 Tile{ AsIs: e.Name#1/26 } Tile{ AsIs: )/29 } Tile{ AsIs: )/24 } >/40 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[30]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[23] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::reinit_ident( context[28], & ident_E<int>::name );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdADT<int>::name );
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[8], context[29] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[25], context[19] );
      refalrts::link_brackets( context[18], context[23] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[19], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[18], context[28] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 )/19 e.Substs_E#1/22 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[22] = context[2];
      context[23] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[22], context[23] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/22 } Tile{ AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdEmpty/1 } Tile{ Reuse: # AlgLeft/20 AsIs: s.Num#1/21 AsIs: )/19 } Tile{ HalfReuse: )/18 } >/24 Tile{ ]] }
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdEmpty<int>::name );
      refalrts::update_ident( context[20], & ident_AlgLeft<int>::name );
      refalrts::reinit_close_bracket( context[18] );
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[18] );
      refalrts::link_brackets( context[8], context[19] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[20], context[19] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 (/24 # TkVariable/26 s.Mode#1/27 e.Index#1/22 )/25 e.Range#1/16 )/19 e.Substs_E#1/42 (/11 e.Vars_B#1/28 (/32 s.Mode#1/34 (/37 e.Index#1/39 )/38 e.Offsets#1/30 s.SampleOffset#1/41 )/33 e.Vars_E#1/46 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[42] = context[2];
      context[43] = context[3];
      context[44] = context[9];
      context[45] = context[10];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[42], context[43] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[22], context[23] );
      if( ! context[26] )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[27], context[22], context[23] ) )
        continue;
      // closed e.Index#1 as range 22
      context[28] = 0;
      context[29] = 0;
      refalrts::start_e_loop();
      do {
        context[46] = context[44];
        context[47] = context[45];
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[46], context[47] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        if( ! refalrts::repeated_stvar_left( context[34], context[27], context[30], context[31] ) )
          continue;
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[30], context[31] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_evar_left( context[39], context[40], context[22], context[23], context[35], context[36] ) )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;
        // closed e.Vars_E#1 as range 9
        if( ! refalrts::svar_right( context[41], context[30], context[31] ) )
          continue;
        // closed e.Offsets#1 as range 30

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Index#1/22 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </48 & IncVarOffset/49 Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: s.Mode#1/27 } >/50 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 } # E/51 Tile{ HalfReuse: s.Num1 #21/25 AsIs: e.Range#1/16 AsIs: )/19 AsIs: e.Substs_E#1/42 AsIs: (/11 AsIs: e.Vars_B#1/28 AsIs: (/32 AsIs: s.Mode#1/34 AsIs: (/37 AsIs: e.Index#1/39 AsIs: )/38 AsIs: e.Offsets#1/30 AsIs: s.SampleOffset#1/41 HalfReuse: s.ContextOffset1 #13/33 } )/52 Tile{ AsIs: e.Vars_E#1/46 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } Tile{ Reuse: # AlgLeft/20 AsIs: s.Num#1/21 HalfReuse: s.Mode1 #34/24 HalfReuse: s.ContextOffset1 #13/26 } s.SampleOffset#1/41/53 )/54 )/55 >/56 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[49], IncVarOffset, "IncVarOffset" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[50] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[51], & ident_E<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[52] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[53], context[41]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[54] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[55] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[56] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_svar( context[25], context[21] );
        refalrts::reinit_svar( context[33], context[13] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], & ident_CmdRepeated<int>::name );
        refalrts::update_ident( context[20], & ident_AlgLeft<int>::name );
        refalrts::reinit_svar( context[24], context[34] );
        refalrts::reinit_svar( context[26], context[13] );
        refalrts::push_stack( context[56] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[55] );
        refalrts::link_brackets( context[8], context[54] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[32], context[52] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::push_stack( context[50] );
        refalrts::push_stack( context[48] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[53], context[56] );
        res = refalrts::splice_evar( res, context[20], context[26] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[52], context[52] );
        res = refalrts::splice_evar( res, context[25], context[33] );
        res = refalrts::splice_evar( res, context[51], context[51] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[50], context[50] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[28], context[29], context[44], context[45] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/26 e.Range#1/16 (/23 # TkVariable/25 s.Mode#1/27 e.Index#1/21 )/24 )/19 e.Substs_E#1/42 (/11 e.Vars_B#1/28 (/32 s.Mode#1/34 (/37 e.Index#1/39 )/38 e.Offsets#1/30 s.SampleOffset#1/41 )/33 e.Vars_E#1/46 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[42] = context[2];
      context[43] = context[3];
      context[44] = context[9];
      context[45] = context[10];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[42], context[43] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      // closed e.Index#1 as range 21
      context[28] = 0;
      context[29] = 0;
      refalrts::start_e_loop();
      do {
        context[46] = context[44];
        context[47] = context[45];
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[46], context[47] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        if( ! refalrts::repeated_stvar_left( context[34], context[27], context[30], context[31] ) )
          continue;
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[30], context[31] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_evar_left( context[39], context[40], context[21], context[22], context[35], context[36] ) )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;
        // closed e.Vars_E#1 as range 9
        if( ! refalrts::svar_right( context[41], context[30], context[31] ) )
          continue;
        // closed e.Offsets#1 as range 30

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Index#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </48 Tile{ HalfReuse: & IncVarOffset/23 HalfReuse: s.ContextOffset1 #13/25 AsIs: s.Mode#1/27 } >/49 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/26 } Tile{ AsIs: e.Range#1/16 } Tile{ AsIs: )/19 AsIs: e.Substs_E#1/42 AsIs: (/11 AsIs: e.Vars_B#1/28 AsIs: (/32 AsIs: s.Mode#1/34 AsIs: (/37 AsIs: e.Index#1/39 AsIs: )/38 AsIs: e.Offsets#1/30 AsIs: s.SampleOffset#1/41 HalfReuse: s.ContextOffset1 #13/33 } Tile{ AsIs: )/24 } Tile{ AsIs: e.Vars_E#1/46 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgRight/50 s.Num#1/26/51 s.Mode#1/34/52 Tile{ AsIs: s.ContextOffset#1/13 } s.SampleOffset#1/41/53 )/54 )/55 >/56 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[49] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[50], & ident_AlgRight<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[51], context[26]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[52], context[34]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[53], context[41]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[54] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[55] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[56] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_name( context[23], IncVarOffset, "IncVarOffset" );
        refalrts::reinit_svar( context[25], context[13] );
        refalrts::reinit_svar( context[33], context[13] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], & ident_CmdRepeated<int>::name );
        refalrts::push_stack( context[56] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[55] );
        refalrts::link_brackets( context[8], context[54] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[32], context[24] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::push_stack( context[49] );
        refalrts::push_stack( context[48] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[53], context[56] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[50], context[52] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[19], context[33] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[26] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[23], context[27] );
        res = refalrts::splice_evar( res, context[48], context[48] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[28], context[29], context[44], context[45] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/27 (/23 # TkVariable/25 'e'/26 e.Index#1/21 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( 'e', context[21], context[22] );
      if( ! context[26] )
        continue;
      // closed e.Index#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[27], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: e.Substs_E#1/28 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Vars#1/9 } Tile{ AsIs: (/23 HalfReuse: 'e'/25 HalfReuse: (/26 AsIs: e.Index#1/21 AsIs: )/24 HalfReuse: s.Num1 #27/19 } )/30 Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdComment/1 } ' '/31 'c'/32 'l'/33 'o'/34 's'/35 'e'/36 'd'/37 ' '/38 </39 & PrintVar/40 'e'/41 e.Index#1/21/42 >/44 ' '/45 'a'/46 's'/47 ' '/48 'r'/49 'a'/50 'n'/51 'g'/52 'e'/53 ' '/54 Tile{ HalfReuse: </18 HalfReuse: & StrFromInt/20 AsIs: s.Num#1/27 } >/55 )/56 )/57 >/58 Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[31], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[32], 'c' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[33], 'l' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[34], 'o' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[35], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[36], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[37], 'd' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[38], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[40], PrintVar, "PrintVar" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[41], 'e' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[42], context[43], context[21], context[22]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[45], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[46], 'a' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[47], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[48], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 'r' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[50], 'a' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[51], 'n' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[52], 'g' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[53], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[54], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[58] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_char( context[25], 'e' );
      refalrts::reinit_open_bracket( context[26] );
      refalrts::reinit_svar( context[19], context[27] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdComment<int>::name );
      refalrts::reinit_open_call( context[18] );
      refalrts::reinit_name( context[20], StrFromInt, "StrFromInt" );
      refalrts::push_stack( context[58] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[57] );
      refalrts::link_brackets( context[8], context[56] );
      refalrts::push_stack( context[55] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[44] );
      refalrts::push_stack( context[39] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[23], context[30] );
      refalrts::link_brackets( context[26], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[55], context[58] );
      res = refalrts::splice_evar( res, context[18], context[27] );
      res = refalrts::splice_evar( res, context[31], context[54] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 (/24 # TkVariable/26 's'/27 e.Index#1/22 )/25 e.Range#1/16 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[22], context[23] );
      if( ! context[26] )
        continue;
      context[27] = refalrts::char_left( 's', context[22], context[23] );
      if( ! context[27] )
        continue;
      // closed e.Index#1 as range 22
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </30 & Inc/31 Tile{ AsIs: s.ContextOffset#1/13 } >/32 Tile{ AsIs: e.Substs_B#1/14 } (/33 # E/34 Tile{ HalfReuse: s.Num1 #21/25 AsIs: e.Range#1/16 AsIs: )/19 AsIs: e.Substs_E#1/28 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/35 Tile{ AsIs: e.Index#1/22 } )/36 s.ContextOffset#1/13/37 )/38 )/39 (/40 Tile{ AsIs: e.Commands#1/5 } (/41 Tile{ HalfReuse: # CmdVar/18 Reuse: # AlgLeft/20 AsIs: s.Num#1/21 HalfReuse: 's'/24 HalfReuse: s.ContextOffset1 #13/26 HalfReuse: )/27 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[37], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::reinit_ident( context[18], & ident_CmdVar<int>::name );
      refalrts::update_ident( context[20], & ident_AlgLeft<int>::name );
      refalrts::reinit_char( context[24], 's' );
      refalrts::reinit_svar( context[26], context[13] );
      refalrts::reinit_close_bracket( context[27] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[40], context[8] );
      refalrts::link_brackets( context[41], context[27] );
      refalrts::link_brackets( context[11], context[39] );
      refalrts::link_brackets( context[12], context[38] );
      refalrts::link_brackets( context[35], context[36] );
      refalrts::link_brackets( context[33], context[19] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[18], context[27] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[25], context[7] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/27 e.Range#1/16 (/23 # TkVariable/25 's'/26 e.Index#1/21 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( 's', context[21], context[22] );
      if( ! context[26] )
        continue;
      // closed e.Index#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[27], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </30 & Inc/31 Tile{ AsIs: s.ContextOffset#1/13 } >/32 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/27 } Tile{ AsIs: e.Range#1/16 } Tile{ AsIs: )/19 AsIs: e.Substs_E#1/28 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/26 AsIs: e.Index#1/21 AsIs: )/24 } s.ContextOffset#1/13/33 )/34 )/35 (/36 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/23 Reuse: # CmdVar/25 } # AlgRight/37 s.Num#1/27/38 's'/39 s.ContextOffset#1/13/40 )/41 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[32] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[33], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[39], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[40], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::reinit_open_bracket( context[26] );
      refalrts::update_ident( context[25], & ident_CmdVar<int>::name );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[36], context[8] );
      refalrts::link_brackets( context[23], context[41] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::link_brackets( context[12], context[34] );
      refalrts::link_brackets( context[26], context[24] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[37], context[41] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[33], context[36] );
      res = refalrts::splice_evar( res, context[26], context[24] );
      res = refalrts::splice_evar( res, context[19], context[7] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[18], context[27] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 (/24 # TkVariable/26 't'/27 e.Index#1/22 )/25 e.Range#1/16 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[22], context[23] );
      if( ! context[26] )
        continue;
      context[27] = refalrts::char_left( 't', context[22], context[23] );
      if( ! context[27] )
        continue;
      // closed e.Index#1 as range 22
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </30 & Inc/31 Tile{ AsIs: s.ContextOffset#1/13 } >/32 Tile{ AsIs: e.Substs_B#1/14 } (/33 # E/34 Tile{ HalfReuse: s.Num1 #21/25 AsIs: e.Range#1/16 AsIs: )/19 AsIs: e.Substs_E#1/28 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/35 Tile{ AsIs: e.Index#1/22 } )/36 s.ContextOffset#1/13/37 )/38 )/39 (/40 Tile{ AsIs: e.Commands#1/5 } (/41 Tile{ HalfReuse: # CmdVar/18 Reuse: # AlgLeft/20 AsIs: s.Num#1/21 HalfReuse: 't'/24 HalfReuse: s.ContextOffset1 #13/26 HalfReuse: )/27 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[37], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::reinit_ident( context[18], & ident_CmdVar<int>::name );
      refalrts::update_ident( context[20], & ident_AlgLeft<int>::name );
      refalrts::reinit_char( context[24], 't' );
      refalrts::reinit_svar( context[26], context[13] );
      refalrts::reinit_close_bracket( context[27] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[40], context[8] );
      refalrts::link_brackets( context[41], context[27] );
      refalrts::link_brackets( context[11], context[39] );
      refalrts::link_brackets( context[12], context[38] );
      refalrts::link_brackets( context[35], context[36] );
      refalrts::link_brackets( context[33], context[19] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[18], context[27] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[25], context[7] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/27 e.Range#1/16 (/23 # TkVariable/25 't'/26 e.Index#1/21 )/24 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[16], context[17] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( 't', context[21], context[22] );
      if( ! context[26] )
        continue;
      // closed e.Index#1 as range 21
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[27], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </30 & Inc/31 Tile{ AsIs: s.ContextOffset#1/13 } >/32 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/27 } Tile{ AsIs: e.Range#1/16 } Tile{ AsIs: )/19 AsIs: e.Substs_E#1/28 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } Tile{ HalfReuse: (/26 AsIs: e.Index#1/21 AsIs: )/24 } s.ContextOffset#1/13/33 )/34 )/35 (/36 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/23 Reuse: # CmdVar/25 } # AlgRight/37 s.Num#1/27/38 't'/39 s.ContextOffset#1/13/40 )/41 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[32] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[33], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[39], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[40], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::reinit_open_bracket( context[26] );
      refalrts::update_ident( context[25], & ident_CmdVar<int>::name );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[36], context[8] );
      refalrts::link_brackets( context[23], context[41] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::link_brackets( context[12], context[34] );
      refalrts::link_brackets( context[26], context[24] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[37], context[41] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[33], context[36] );
      res = refalrts::splice_evar( res, context[26], context[24] );
      res = refalrts::splice_evar( res, context[19], context[7] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[18], context[27] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/21 (/24 # TkVariable/26 'e'/27 e.Index#1/22 )/25 e.Range#1/16 )/19 e.Substs_E#1/28 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
      context[28] = context[2];
      context[29] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[28], context[29] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Substs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[22], context[23] );
      if( ! context[26] )
        continue;
      context[27] = refalrts::char_left( 'e', context[22], context[23] );
      if( ! context[27] )
        continue;
      // closed e.Index#1 as range 22
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </30 & Inc2/31 Tile{ AsIs: s.ContextOffset#1/13 } >/32 Tile{ AsIs: e.Substs_B#1/14 } (/33 # E/34 Tile{ HalfReuse: s.Num1 #21/25 AsIs: e.Range#1/16 AsIs: )/19 AsIs: e.Substs_E#1/28 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 'e'/7 } (/35 Tile{ AsIs: e.Index#1/22 } Tile{ AsIs: )/8 } s.ContextOffset#1/13/36 )/37 )/38 (/39 Tile{ AsIs: e.Commands#1/5 } (/40 Tile{ HalfReuse: # CmdOpenedE/18 Reuse: # AlgLeft/20 AsIs: s.Num#1/21 HalfReuse: s.ContextOffset1 #13/24 HalfReuse: )/26 HalfReuse: )/27 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[31], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 'e' );
      refalrts::reinit_ident( context[18], & ident_CmdOpenedE<int>::name );
      refalrts::update_ident( context[20], & ident_AlgLeft<int>::name );
      refalrts::reinit_svar( context[24], context[13] );
      refalrts::reinit_close_bracket( context[26] );
      refalrts::reinit_close_bracket( context[27] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[39], context[27] );
      refalrts::link_brackets( context[40], context[26] );
      refalrts::link_brackets( context[11], context[38] );
      refalrts::link_brackets( context[12], context[37] );
      refalrts::link_brackets( context[35], context[8] );
      refalrts::link_brackets( context[33], context[19] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[18], context[27] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[36], context[39] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[25], context[7] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoGenPattern/4 s.ContextOffset#1/13 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
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
  // closed e.Vars#1 as range 9
  // closed e.Commands#1 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & DoGenPattern/4 {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset#1/13 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 } Tile{ AsIs: e.Commands#1/5 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[12] );
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
    // </0 & lambda_DoFreezeRanges_MakeSavers_0/4 s.Num#1/10 s.ContextTop#1/12 (/7 # CmdRepeated/9 s.Direction#2/13 s.OtherNum#2/14 'e'/15 s.NewOffset#2/16 s.Num#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdRepeated<int>::name, context[5], context[6] );
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
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdRepeated/9 AsIs: s.Direction#2/13 AsIs: s.OtherNum#2/14 AsIs: 'e'/15 AsIs: s.NewOffset#2/16 } Tile{ HalfReuse: s.ContextTop1 #12/8 HalfReuse: )/1 ]] }
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
    // </0 & lambda_ExtractRanges_0/4 (/7 # CmdBrackets/9 s.Direction#2/10 s.BracketNum#2/11 s.InnerNum#2/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdBrackets<int>::name, context[5], context[6] );
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
    //TRASH: {REMOVED TILE}  </0 & lambda_ExtractRanges_0/4 (/7 # CmdBrackets/9 s.Direction#2/10 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
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
    // </0 & lambda_ExtractRanges_0/4 (/7 # CmdADT/9 s.Direction#2/10 s.BracketNum#2/11 s.InnerNum#2/12 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdADT<int>::name, context[5], context[6] );
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
    //TRASH: {REMOVED TILE}  </0 & lambda_ExtractRanges_0/4 (/7 # CmdADT/9 s.Direction#2/10 {REMOVED TILE}  e.Name#2/5 )/8 >/1 {REMOVED TILE} 
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

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromPattern/4 (/7 # TkOpenBracket/9 )/8 e.Tail#1/2 >/1
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
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '('/7 HalfReuse: </9 HalfReuse: & TextFromPattern/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], '(' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], TextFromPattern, "TextFromPattern" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
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
    // </0 & TextFromPattern/4 (/7 # TkCloseBracket/9 )/8 e.Tail#1/2 >/1
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
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: ')'/7 HalfReuse: </9 HalfReuse: & TextFromPattern/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ')' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], TextFromPattern, "TextFromPattern" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
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
    // </0 & TextFromPattern/4 (/7 # TkOpenADT/9 )/8 (/12 # TkName/14 e.Name#1/10 )/13 e.Tail#1/2 >/1
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
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 10
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  # TkOpenADT/9 )/8 (/12 # TkName/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 } Tile{ AsIs: e.Name#1/10 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & TextFromPattern/13 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '[' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[13], TextFromPattern, "TextFromPattern" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromPattern/4 (/7 # TkCloseADT/9 )/8 e.Tail#1/2 >/1
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
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: ']'/7 HalfReuse: </9 HalfReuse: & TextFromPattern/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ']' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], TextFromPattern, "TextFromPattern" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
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
    // </0 & TextFromPattern/4 (/7 # TkChar/9 s.Char#1/10 )/8 e.Tail#1/2 >/1
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
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } ' '/11 '\''/12 Tile{ AsIs: </0 Reuse: & TextFromPattern_Char/4 AsIs: (/7 AsIs: # TkChar/9 AsIs: s.Char#1/10 AsIs: )/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[11], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], '\'' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], TextFromPattern_Char, "TextFromPattern_Char" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromPattern/4 (/7 # TkNumber/9 s.Number#1/10 )/8 e.Tail#1/2 >/1
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
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Number#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & StrFromInt/7 HalfReuse: s.Number1 #10/9 } >/11 </12 Tile{ HalfReuse: & TextFromPattern/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], StrFromInt, "StrFromInt" );
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::reinit_name( context[8], TextFromPattern, "TextFromPattern" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromPattern/4 (/7 # TkName/9 e.Name#1/5 )/8 e.Tail#1/2 >/1
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
    // closed e.Name#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '&'/4 HalfReuse: ' '/7 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: </9 } Tile{ HalfReuse: & TextFromPattern/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '&' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], TextFromPattern, "TextFromPattern" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromPattern/4 (/7 # TkVariable/9 s.Mode#1/10 e.Index#1/5 s.Depth#1/12 s.Offset#1/11 )/8 e.Tail#1/2 >/1
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
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </7 HalfReuse: & PrintVar/9 AsIs: s.Mode#1/10 AsIs: e.Index#1/5 AsIs: s.Depth#1/12 } >/13 '/'/14 Tile{ AsIs: </0 } & StrFromInt/15 Tile{ AsIs: s.Offset#1/11 } >/16 </17 Tile{ HalfReuse: & TextFromPattern/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], '/' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], PrintVar, "PrintVar" );
    refalrts::reinit_name( context[8], TextFromPattern, "TextFromPattern" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromPattern/4 (/7 # TkIdentifier/9 e.Name#1/5 )/8 e.Tail#1/2 >/1
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
    // closed e.Name#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '#'/4 HalfReuse: ' '/7 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: </9 } Tile{ HalfReuse: & TextFromPattern/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '#' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], TextFromPattern, "TextFromPattern" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & TextFromPattern/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & TextFromPattern/4 >/1 {REMOVED TILE} 
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

static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromPattern_Char/4 (/7 # TkChar/9 s.Char#1/10 )/8 e.Tail#1/2 >/1
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
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Char#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Escape/4 HalfReuse: s.Char1 #10/7 HalfReuse: >/9 } </11 Tile{ HalfReuse: & TextFromPattern_Char/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Escape, "Escape" );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_name( context[8], TextFromPattern_Char, "TextFromPattern_Char" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & TextFromPattern_Char/4 e.Other#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Other#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } '\''/5 Tile{ AsIs: </0 Reuse: & TextFromPattern/4 AsIs: e.Other#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[5], '\'' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], TextFromPattern, "TextFromPattern" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenResult_0/4 (/7 s.Mode#2/9 (/12 e.Index#2/10 )/13 e.Offsets#2/5 )/8 >/1
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Index#2 as range 10
  // closed e.Offsets#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_GenResult_0/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#2/9 AsIs: (/12 AsIs: e.Index#2/10 AsIs: )/13 } Tile{ HalfReuse: (/0 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Offsets#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenResult_1/4 s.ContextOffset#2/5 (/8 e.CommonVars#2/6 )/9 e.ResultCommands#2/2 >/1
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
  // closed e.CommonVars#2 as range 6
  // closed e.ResultCommands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.ContextOffset#2/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #5/0 HalfReuse: </4 } & MakeVariableCommentTable/10 Tile{ AsIs: e.CommonVars#2/6 } >/11 Tile{ AsIs: (/8 } # CmdEmptyResult/12 Tile{ AsIs: )/9 AsIs: e.ResultCommands#2/2 HalfReuse: (/1 } # CmdReturnResult/13 )/14 Tile{ ]] }
  if( ! refalrts::alloc_name( context[10], MakeVariableCommentTable, "MakeVariableCommentTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_CmdEmptyResult<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], & ident_CmdReturnResult<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[1], context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenResult/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 e.Result#1/2 >/1
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
  // closed e.Result#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </10 & DoGenResult/11 (/12 </13 & Map/14 & lambda_GenResult_0/15 Tile{ AsIs: e.PatternVars#1/6 } >/16 )/17 (/18 )/19 (/20 )/21 Tile{ AsIs: s.ContextOffset#1/5 HalfReuse: </8 } Tile{ HalfReuse: & CollectStrings/9 AsIs: e.Result#1/2 AsIs: >/1 } >/22 & lambda_GenResult_1/23 >/24 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], lambda_GenResult_0, "lambda_GenResult_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
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
  if( ! refalrts::alloc_name( context[23], lambda_GenResult_1, "lambda_GenResult_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[9], CollectStrings, "CollectStrings" );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[12], context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  res = refalrts::splice_evar( res, context[16], context[21] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[15] );
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

static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkChar/22 s.Value#1/23 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkChar<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Result#1 as range 2
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } Tile{ HalfReuse: s.Counter1 #17/20 Reuse: # ElChar/22 AsIs: s.Value#1/23 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/28 Tile{ AsIs: e.Commands#1/13 } )/29 </30 & Inc/31 s.Counter#1/17/32 Tile{ HalfReuse: >/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_svar( context[20], context[17] );
    refalrts::update_ident( context[22], & ident_ElChar<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[29], context[32] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkName/22 e.Name#1/18 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkName<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Name#1 as range 18
    // closed e.Result#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElName/22 } Tile{ AsIs: e.Name#1/18 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 Tile{ HalfReuse: >/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[23], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_ElName<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[27], context[20] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkNumber/22 s.Number#1/23 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Result#1 as range 2
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } Tile{ HalfReuse: s.Counter1 #17/20 Reuse: # ElNumber/22 AsIs: s.Number#1/23 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/28 Tile{ AsIs: e.Commands#1/13 } )/29 </30 & Inc/31 s.Counter#1/17/32 Tile{ HalfReuse: >/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_svar( context[20], context[17] );
    refalrts::update_ident( context[22], & ident_ElNumber<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[29], context[32] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkIdentifier/22 e.Name#1/18 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Name#1 as range 18
    // closed e.Result#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElIdent/22 } Tile{ AsIs: e.Name#1/18 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 Tile{ HalfReuse: >/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[23], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_ElIdent<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[27], context[20] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkString/22 e.Chars#1/18 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkString<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Chars#1 as range 18
    // closed e.Result#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElString/22 } Tile{ AsIs: e.Chars#1/18 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertRange/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Add/30 s.Counter#1/17/31 2/32 Tile{ HalfReuse: >/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[23], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Add, "Add" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[32], 2UL ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_ElString<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertRange<int>::name );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[27], context[20] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[28], context[32] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # Brackets/22 e.InBrackets#1/18 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_Brackets<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.InBrackets#1 as range 18
    // closed e.Result#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElOpenBracket/22 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 >/32 Tile{ AsIs: e.InBrackets#1/18 } (/33 # TkCloseBracket/34 s.Counter#1/17/35 Tile{ AsIs: )/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[23], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_ElOpenBracket<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[33], context[21] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[27], context[20] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[28], context[32] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # CallBrackets/22 e.InBrackets#1/18 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.InBrackets#1 as range 18
    // closed e.Result#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElOpenCall/22 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 >/32 Tile{ AsIs: e.InBrackets#1/18 } (/33 # CloseCall/34 s.Counter#1/17/35 Tile{ AsIs: )/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[23], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_CloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_ElOpenCall<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[33], context[21] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[27], context[20] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[28], context[32] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # ADT_Brackets/22 (/25 e.Name#1/23 )/26 e.InBrackets#1/18 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[18], context[19] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    // closed e.Name#1 as range 23
    // closed e.InBrackets#1 as range 18
    // closed e.Result#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/27 # ElOpenADT/28 )/29 )/30 (/31 (/32 # CmdInsertElem/33 s.Counter#1/17/34 )/35 Tile{ AsIs: e.Commands#1/13 } )/36 </37 Tile{ HalfReuse: & Inc/16 AsIs: s.Counter#1/17 HalfReuse: >/20 HalfReuse: (/22 HalfReuse: # TkName/25 AsIs: e.Name#1/23 AsIs: )/26 AsIs: e.InBrackets#1/18 HalfReuse: (/21 } # TkCloseADT/38 s.Counter#1/17/39 )/40 Tile{ AsIs: e.Result#1/2 } Tile{ AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[27], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_ElOpenADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[38], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[39], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_name( context[16], Inc, "Inc" );
    refalrts::reinit_close_call( context[20] );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_ident( context[25], & ident_TkName<int>::name );
    refalrts::reinit_open_bracket( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[40] );
    refalrts::link_brackets( context[22], context[26] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[37] );
    refalrts::link_brackets( context[31], context[36] );
    refalrts::link_brackets( context[32], context[35] );
    refalrts::link_brackets( context[11], context[30] );
    refalrts::link_brackets( context[12], context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    res = refalrts::splice_evar( res, context[16], context[21] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[27], context[35] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkCloseBracket/22 s.OpenCounter#1/23 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Result#1 as range 2
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/24 # ElCloseBracket/25 )/26 )/27 (/28 Tile{ AsIs: (/20 Reuse: # CmdLinkBrackets/22 AsIs: s.OpenCounter#1/23 } s.Counter#1/17/29 )/30 (/31 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/32 Tile{ AsIs: e.Commands#1/13 } )/33 </34 & Inc/35 s.Counter#1/17/36 Tile{ HalfReuse: >/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[24], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_ElCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_CmdLinkBrackets<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[34] );
    refalrts::link_brackets( context[28], context[33] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[20], context[30] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[12], context[26] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[24], context[28] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkCloseADT/22 s.OpenCounter#1/23 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Result#1 as range 2
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/24 # ElCloseADT/25 )/26 )/27 (/28 Tile{ AsIs: (/20 Reuse: # CmdLinkBrackets/22 AsIs: s.OpenCounter#1/23 } s.Counter#1/17/29 )/30 (/31 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/32 Tile{ AsIs: e.Commands#1/13 } )/33 </34 & Inc/35 s.Counter#1/17/36 Tile{ HalfReuse: >/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[24], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_ElCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_CmdLinkBrackets<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[34] );
    refalrts::link_brackets( context[28], context[33] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[20], context[30] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[12], context[26] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[24], context[28] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # CloseCall/22 s.OpenCounter#1/23 )/21 e.Result#1/2 >/1
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
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_CloseCall<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Result#1 as range 2
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/24 # ElCloseCall/25 )/26 )/27 (/28 (/29 Tile{ HalfReuse: # CmdPushStack/16 AsIs: s.Counter#1/17 } )/30 Tile{ AsIs: (/20 Reuse: # CmdPushStack/22 AsIs: s.OpenCounter#1/23 AsIs: )/21 } (/31 # CmdInsertElem/32 s.Counter#1/17/33 )/34 Tile{ AsIs: e.Commands#1/13 } )/35 </36 & Inc/37 s.Counter#1/17/38 >/39 Tile{ AsIs: e.Result#1/2 } Tile{ AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[24], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_ElCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[37], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[38], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdPushStack<int>::name );
    refalrts::update_ident( context[22], & ident_CmdPushStack<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[36] );
    refalrts::link_brackets( context[28], context[35] );
    refalrts::link_brackets( context[31], context[34] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[12], context[26] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[35], context[39] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[31], context[34] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[24], context[29] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars_B#1/24 (/28 s.Mode#1/30 (/33 e.Index#1/39 )/34 (/37 e.ResultVars#1/35 )/38 s.NextPatternVar#1/41 e.PatternVars#1/26 )/29 e.Vars_E#1/42 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkVariable/22 s.Mode#1/23 e.Index#1/18 )/21 e.Result#1/2 >/1
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
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Result#1 as range 2
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    // closed e.Index#1 as range 18
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[42] = context[5];
      context[43] = context[6];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[42], context[43] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      if( ! refalrts::repeated_stvar_left( context[30], context[23], context[26], context[27] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[26], context[27] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[26], context[27] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      if( ! refalrts::repeated_evar_left( context[39], context[40], context[18], context[19], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      // closed e.ResultVars#1 as range 35
      // closed e.Vars_E#1 as range 5
      if( ! refalrts::svar_left( context[41], context[26], context[27] ) )
        continue;
      // closed e.PatternVars#1 as range 26

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Counter#1/17 {REMOVED TILE}  e.Index#1/18 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars_B#1/24 AsIs: (/28 AsIs: s.Mode#1/30 AsIs: (/33 AsIs: e.Index#1/39 AsIs: )/34 AsIs: (/37 AsIs: e.ResultVars#1/35 HalfReuse: s.NextPatternVar1 #41/38 } Tile{ AsIs: )/16 } Tile{ AsIs: e.PatternVars#1/26 } Tile{ AsIs: )/29 AsIs: e.Vars_E#1/42 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: (/20 Reuse: # CmdInsertVar/22 AsIs: s.Mode#1/23 } Tile{ AsIs: s.NextPatternVar#1/41 } )/44 Tile{ AsIs: e.Commands#1/13 } )/45 Tile{ HalfReuse: s.Counter1 #17/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[38], context[41] );
      refalrts::update_ident( context[22], & ident_CmdInsertVar<int>::name );
      refalrts::reinit_svar( context[21], context[17] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[45] );
      refalrts::link_brackets( context[20], context[44] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::link_brackets( context[37], context[16] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[21];
      res = refalrts::splice_evar( res, context[45], context[45] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[20], context[23] );
      res = refalrts::splice_evar( res, context[29], context[15] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[38], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[24], context[25], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenResult/4 (/7 e.Vars_B#1/24 (/28 s.Mode#1/38 (/36 e.Index#1/39 )/37 (/32 e.ResultVars#1/30 s.Sample#1/41 )/33 )/29 e.Vars_E#1/42 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkVariable/22 s.Mode#1/23 e.Index#1/18 )/21 e.Result#1/2 >/1
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
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Result#1 as range 2
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    // closed e.Index#1 as range 18
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[42] = context[5];
      context[43] = context[6];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[42], context[43] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[26], context[27] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[26], context[27] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      if( ! refalrts::repeated_stvar_left( context[38], context[23], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[39], context[40], context[18], context[19], context[34], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      // closed e.Vars_E#1 as range 5
      if( ! refalrts::svar_right( context[41], context[30], context[31] ) )
        continue;
      // closed e.ResultVars#1 as range 30

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Index#1/18 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars_B#1/24 AsIs: (/28 AsIs: s.Mode#1/38 AsIs: (/36 AsIs: e.Index#1/39 AsIs: )/37 AsIs: (/32 AsIs: e.ResultVars#1/30 AsIs: s.Sample#1/41 HalfReuse: s.Counter1 #17/33 AsIs: )/29 } )/44 Tile{ AsIs: e.Vars_E#1/42 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCopyVar/15 } Tile{ HalfReuse: s.Mode1 #38/16 AsIs: s.Counter#1/17 } s.Sample#1/41/45 )/46 )/47 (/48 Tile{ AsIs: (/20 Reuse: # CmdInsertVar/22 AsIs: s.Mode#1/23 } s.Counter#1/17/49 )/50 Tile{ AsIs: e.Commands#1/13 } )/51 </52 & IncVarOffset/53 s.Counter#1/17/54 s.Mode#1/38/55 Tile{ HalfReuse: >/21 AsIs: e.Result#1/2 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[53], IncVarOffset, "IncVarOffset" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[17]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[55], context[38]))
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[33], context[17] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], & ident_CmdCopyVar<int>::name );
      refalrts::reinit_svar( context[16], context[38] );
      refalrts::update_ident( context[22], & ident_CmdInsertVar<int>::name );
      refalrts::reinit_close_call( context[21] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[21] );
      refalrts::push_stack( context[52] );
      refalrts::link_brackets( context[48], context[51] );
      refalrts::link_brackets( context[20], context[50] );
      refalrts::link_brackets( context[11], context[47] );
      refalrts::link_brackets( context[12], context[46] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[28], context[44] );
      refalrts::link_brackets( context[32], context[29] );
      refalrts::link_brackets( context[36], context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[21];
      res = refalrts::splice_evar( res, context[51], context[55] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[20], context[23] );
      res = refalrts::splice_evar( res, context[45], context[48] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[8], context[15] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[24], context[25], context[5], context[6] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 >/1
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
  // closed e.Vars#1 as range 5
  // closed e.AllocCommands#1 as range 9
  // closed e.Commands#1 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  (/11 {REMOVED TILE}  )/12 (/15 {REMOVED TILE}  )/16 s.Counter#1/17 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Counter1 #17/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 } Tile{ AsIs: e.AllocCommands#1/9 } Tile{ AsIs: e.Commands#1/13 } Tile{ ]] }
  refalrts::reinit_svar( context[4], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult MakeVariableCommentTable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & MakeVariableCommentTable/4 e.Vars#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Vars#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Vars#1/2 HalfReuse: </1 } & Seq/5 (/6 & Map/7 & ReplicateVar/8 )/9 & Sort/10 (/11 & Map/12 & MakeVariableComment/13 )/14 >/15 >/16 Tile{ ]] }
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
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ReplicateVar_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ReplicateVar_0/4 s.Mode#1/5 (/8 e.Index#1/6 )/9 s.ContextOffset#2/10 >/1
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
  // closed e.Index#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/8 {REMOVED TILE}  )/9 s.ContextOffset#2/10 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.ContextOffset2 #10/4 AsIs: s.Mode#1/5 } Tile{ AsIs: e.Index#1/6 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ReplicateVar/4 (/7 s.Mode#1/9 (/12 e.Index#1/10 )/13 (/16 e.ResultOccurences#1/14 )/17 e.PatternOccurences#1/5 )/8 >/1
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Index#1 as range 10
  // closed e.ResultOccurences#1 as range 14
  // closed e.PatternOccurences#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </17 } Tile{ HalfReuse: & Map/8 } Tile{ AsIs: </0 Reuse: & CreateClosure /4 HalfReuse: & lambda_ReplicateVar_0/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.Index#1/10 AsIs: )/13 HalfReuse: >/16 } Tile{ AsIs: e.ResultOccurences#1/14 } Tile{ AsIs: e.PatternOccurences#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[17] );
  refalrts::reinit_name( context[8], Map, "Map" );
  refalrts::update_name( context[4], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::reinit_name( context[7], lambda_ReplicateVar_0, "lambda_ReplicateVar_0" );
  refalrts::reinit_close_call( context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult MakeVariableComment(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & MakeVariableComment/4 (/7 s.Offset#1/9 s.Mode#1/10 e.Index#1/5 s.Depth#1/11 )/8 >/1
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
  if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdComment/4 HalfReuse: </7 } & StrFromInt/12 Tile{ AsIs: s.Offset#1/9 } >/13 ':'/14 ' '/15 </16 & PrintVar/17 Tile{ AsIs: s.Mode#1/10 AsIs: e.Index#1/5 AsIs: s.Depth#1/11 HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], PrintVar, "PrintVar" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdComment<int>::name );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
