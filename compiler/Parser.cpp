// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sort(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AddContextToSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CheckAddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CheckUseVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CreateLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DontAdd(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenFunctionBody(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenFunctionsFromDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult InvalidModeVariableError(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseElement_SwDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseNameList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseNameList_Tail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParsePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseResult_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolveLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StrFromBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #ADT_Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

// identifier #AlreadyBounded
template <typename SREFAL_PARAM_INT>
struct ident_AlreadyBounded {
  static const char *name() {
    return "AlreadyBounded";
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

// identifier #Close
template <typename SREFAL_PARAM_INT>
struct ident_Close {
  static const char *name() {
    return "Close";
  }
};

// identifier #CreateClosure
template <typename SREFAL_PARAM_INT>
struct ident_CreateClosure {
  static const char *name() {
    return "CreateClosure";
  }
};

// identifier #Declaration
template <typename SREFAL_PARAM_INT>
struct ident_Declaration {
  static const char *name() {
    return "Declaration";
  }
};

// identifier #EEnum
template <typename SREFAL_PARAM_INT>
struct ident_EEnum {
  static const char *name() {
    return "EEnum";
  }
};

// identifier #ESwap
template <typename SREFAL_PARAM_INT>
struct ident_ESwap {
  static const char *name() {
    return "ESwap";
  }
};

// identifier #Entry
template <typename SREFAL_PARAM_INT>
struct ident_Entry {
  static const char *name() {
    return "Entry";
  }
};

// identifier #Enum
template <typename SREFAL_PARAM_INT>
struct ident_Enum {
  static const char *name() {
    return "Enum";
  }
};

// identifier #ExistVariable
template <typename SREFAL_PARAM_INT>
struct ident_ExistVariable {
  static const char *name() {
    return "ExistVariable";
  }
};

// identifier #Extern
template <typename SREFAL_PARAM_INT>
struct ident_Extern {
  static const char *name() {
    return "Extern";
  }
};

// identifier #Forward
template <typename SREFAL_PARAM_INT>
struct ident_Forward {
  static const char *name() {
    return "Forward";
  }
};

// identifier #Function
template <typename SREFAL_PARAM_INT>
struct ident_Function {
  static const char *name() {
    return "Function";
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

// identifier #Ident
template <typename SREFAL_PARAM_INT>
struct ident_Ident {
  static const char *name() {
    return "Ident";
  }
};

// identifier #InvalidMode
template <typename SREFAL_PARAM_INT>
struct ident_InvalidMode {
  static const char *name() {
    return "InvalidMode";
  }
};

// identifier #LambdaName
template <typename SREFAL_PARAM_INT>
struct ident_LambdaName {
  static const char *name() {
    return "LambdaName";
  }
};

// identifier #NotFound
template <typename SREFAL_PARAM_INT>
struct ident_NotFound {
  static const char *name() {
    return "NotFound";
  }
};

// identifier #Open
template <typename SREFAL_PARAM_INT>
struct ident_Open {
  static const char *name() {
    return "Open";
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

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
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

// identifier #TkCloseBlock
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseBlock {
  static const char *name() {
    return "TkCloseBlock";
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

// identifier #TkComma
template <typename SREFAL_PARAM_INT>
struct ident_TkComma {
  static const char *name() {
    return "TkComma";
  }
};

// identifier #TkDirective
template <typename SREFAL_PARAM_INT>
struct ident_TkDirective {
  static const char *name() {
    return "TkDirective";
  }
};

// identifier #TkEOF
template <typename SREFAL_PARAM_INT>
struct ident_TkEOF {
  static const char *name() {
    return "TkEOF";
  }
};

// identifier #TkIdentMarker
template <typename SREFAL_PARAM_INT>
struct ident_TkIdentMarker {
  static const char *name() {
    return "TkIdentMarker";
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

// identifier #TkOpenBlock
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenBlock {
  static const char *name() {
    return "TkOpenBlock";
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

// identifier #TkRedefinition
template <typename SREFAL_PARAM_INT>
struct ident_TkRedefinition {
  static const char *name() {
    return "TkRedefinition";
  }
};

// identifier #TkReplace
template <typename SREFAL_PARAM_INT>
struct ident_TkReplace {
  static const char *name() {
    return "TkReplace";
  }
};

// identifier #TkSemicolon
template <typename SREFAL_PARAM_INT>
struct ident_TkSemicolon {
  static const char *name() {
    return "TkSemicolon";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

static refalrts::FnResult lambda_ParseProgram_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ST_AddUnresolved, "ST_AddUnresolved" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseProgram_0/4 t.ErrorList#2/5 t.SymTable#2/7 e.AST#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    // closed e.AST#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ST_AddUnresolved/4 AsIs: t.ErrorList#2/5 AsIs: t.SymTable#2/7 } Tile{ AsIs: >/1 } Tile{ AsIs: e.AST#2/2 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 1, 1, 0},
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
  // </0 & lambda_ParseProgram_0/4 t.ErrorList#2/5 t.SymTable#2/7 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ST_AddUnresolved/4 AsIs: t.ErrorList#2/5 AsIs: t.SymTable#2/7 } Tile{ AsIs: >/1 } Tile{ AsIs: e.AST#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], ST_AddUnresolved, "ST_AddUnresolved" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ParseProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { lambda_ParseProgram_0, "lambda_ParseProgram_0" },
    { PrepareBracket, "PrepareBracket" },
    { Map, "Map" },
    { ST_Create, "ST_Create" },
    { ParseElements, "ParseElements" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ParseProgram/4 t.ErrorList#1/5 e.Tokens#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.Tokens#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & ParseElements/8 Tile{ AsIs: t.ErrorList#1/5 } </9 & ST_Create/10 >/11 (/12 )/13 </14 & Map/15 & PrepareBracket/16 Tile{ AsIs: e.Tokens#1/2 } >/17 >/18 & lambda_ParseProgram_0/19 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocFunc, 0, 5, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 4, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 3, 15},
    {refalrts::icAllocFunc, 0, 2, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocFunc, 0, 1, 19},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 17, 19, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 9, 16, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
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
  // </0 & ParseProgram/4 t.ErrorList#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & ParseElements/8 Tile{ AsIs: t.ErrorList#1/5 } </9 & ST_Create/10 >/11 (/12 )/13 </14 & Map/15 & PrepareBracket/16 Tile{ AsIs: e.Tokens#1/2 } >/17 >/18 & lambda_ParseProgram_0/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ParseElements, "ParseElements" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ST_Create, "ST_Create" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], PrepareBracket, "PrepareBracket" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], lambda_ParseProgram_0, "lambda_ParseProgram_0" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrepareBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkCloseCall<int>::name,
    & ident_Close<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_Open<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T 
    //GLOBAL GEN:T 
    // </0 & PrepareBracket/4 t.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(#TkOpenBracketS )
    // </0 & PrepareBracket/4 (/5 # TkOpenBracket/9 s.LnNum#1/10 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 7, 7},
    {refalrts::icsVarLeft, 0, 10, 7},
    {refalrts::icEmpty, 0, 0, 7},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenBracket/6 HalfReuse: )/1 ]] }
    {refalrts::icUpdateIdent, 0, 3, 9},
    {refalrts::icReinitIdent, 0, 7, 6},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 5, 1, 0},
    {refalrts::icSetRes, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(#TkCloseBracketS )
    // </0 & PrepareBracket/4 (/5 # TkCloseBracket/9 s.LnNum#1/10 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 6, 7},
    {refalrts::icsVarLeft, 0, 10, 7},
    {refalrts::icEmpty, 0, 0, 7},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseBracket/6 HalfReuse: )/1 ]] }
    {refalrts::icUpdateIdent, 0, 1, 9},
    {refalrts::icReinitIdent, 0, 6, 6},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 5, 1, 0},
    {refalrts::icSetRes, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(#TkOpenADTS )
    // </0 & PrepareBracket/4 (/5 # TkOpenADT/9 s.LnNum#1/10 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 5, 7},
    {refalrts::icsVarLeft, 0, 10, 7},
    {refalrts::icEmpty, 0, 0, 7},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenADT/6 HalfReuse: )/1 ]] }
    {refalrts::icUpdateIdent, 0, 3, 9},
    {refalrts::icReinitIdent, 0, 5, 6},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 5, 1, 0},
    {refalrts::icSetRes, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(#TkCloseADTS )
    // </0 & PrepareBracket/4 (/5 # TkCloseADT/9 s.LnNum#1/10 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 4, 7},
    {refalrts::icsVarLeft, 0, 10, 7},
    {refalrts::icEmpty, 0, 0, 7},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseADT/6 HalfReuse: )/1 ]] }
    {refalrts::icUpdateIdent, 0, 1, 9},
    {refalrts::icReinitIdent, 0, 4, 6},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 5, 1, 0},
    {refalrts::icSetRes, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(#TkOpenCallS )
    // </0 & PrepareBracket/4 (/5 # TkOpenCall/9 s.LnNum#1/10 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 2, 7},
    {refalrts::icsVarLeft, 0, 10, 7},
    {refalrts::icEmpty, 0, 0, 7},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenCall/6 HalfReuse: )/1 ]] }
    {refalrts::icUpdateIdent, 0, 3, 9},
    {refalrts::icReinitIdent, 0, 2, 6},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 5, 1, 0},
    {refalrts::icSetRes, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(#TkCloseCallS )
    // </0 & PrepareBracket/4 (/5 # TkCloseCall/9 s.LnNum#1/10 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 0, 7},
    {refalrts::icsVarLeft, 0, 10, 7},
    {refalrts::icEmpty, 0, 0, 7},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseCall/6 HalfReuse: )/1 ]] }
    {refalrts::icUpdateIdent, 0, 1, 9},
    {refalrts::icReinitIdent, 0, 0, 6},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 5, 1, 0},
    {refalrts::icSetRes, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T 
    // </0 & PrepareBracket/4 t.OtherToken#1/5 >/1
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherToken#1/5 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
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
  //FAST GEN:T 
  //GLOBAL GEN:T 
  // </0 & PrepareBracket/4 t.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    //(#TkOpenBracketS )
    // </0 & PrepareBracket/4 (/5 # TkOpenBracket/9 s.LnNum#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenBracket/6 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Open<int>::name );
    refalrts::reinit_ident( context[6], & ident_TkOpenBracket<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkCloseBracketS )
    // </0 & PrepareBracket/4 (/5 # TkCloseBracket/9 s.LnNum#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseBracket/6 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Close<int>::name );
    refalrts::reinit_ident( context[6], & ident_TkCloseBracket<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkOpenADTS )
    // </0 & PrepareBracket/4 (/5 # TkOpenADT/9 s.LnNum#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenADT/6 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Open<int>::name );
    refalrts::reinit_ident( context[6], & ident_TkOpenADT<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkCloseADTS )
    // </0 & PrepareBracket/4 (/5 # TkCloseADT/9 s.LnNum#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseADT/6 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Close<int>::name );
    refalrts::reinit_ident( context[6], & ident_TkCloseADT<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkOpenCallS )
    // </0 & PrepareBracket/4 (/5 # TkOpenCall/9 s.LnNum#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenCall/6 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Open<int>::name );
    refalrts::reinit_ident( context[6], & ident_TkOpenCall<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkCloseCallS )
    // </0 & PrepareBracket/4 (/5 # TkCloseCall/9 s.LnNum#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseCall/6 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Close<int>::name );
    refalrts::reinit_ident( context[6], & ident_TkCloseCall<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //T 
  // </0 & PrepareBracket/4 t.OtherToken#1/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherToken#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseElements_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Declaration<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseElements_0/4 (/7 s.ScopeClass#2/9 e.Name#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.Name#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Declaration/7 AsIs: s.ScopeClass#2/9 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
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
  // </0 & lambda_ParseElements_0/4 (/7 s.ScopeClass#2/9 e.Name#2/5 )/8 >/1
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
  // closed e.Name#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Declaration/7 AsIs: s.ScopeClass#2/9 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_Declaration<int>::name );
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

static refalrts::FnResult lambda_ParseElements_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Ident<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseElements_1/4 (/7 e.Name#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Name#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Ident/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
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
  // </0 & lambda_ParseElements_1/4 (/7 e.Name#2/5 )/8 >/1
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
  // closed e.Name#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Ident/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_Ident<int>::name );
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

static refalrts::FnResult lambda_ParseElements_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseElements, "ParseElements" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseElements_2/4 (/7 e.AST#1/5 )/8 (/11 e.NewASTItems#2/9 )/12 t.ErrorList#2/13 t.SymTable#2/15 e.Tail#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.AST#1 as range 5
    // closed e.NewASTItems#2 as range 9
    {refalrts::ictVarLeftSave, 0, 13, 2},
    {refalrts::ictVarLeftSave, 0, 15, 2},
    // closed e.Tail#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements/4 } Tile{ AsIs: t.ErrorList#2/13 AsIs: t.SymTable#2/15 } Tile{ AsIs: (/11 } Tile{ AsIs: e.AST#1/5 } Tile{ AsIs: e.NewASTItems#2/9 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceTile, 13, 16, 0},
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
  // </0 & lambda_ParseElements_2/4 (/7 e.AST#1/5 )/8 (/11 e.NewASTItems#2/9 )/12 t.ErrorList#2/13 t.SymTable#2/15 e.Tail#2/2 >/1
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
  // closed e.AST#1 as range 5
  // closed e.NewASTItems#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements/4 } Tile{ AsIs: t.ErrorList#2/13 AsIs: t.SymTable#2/15 } Tile{ AsIs: (/11 } Tile{ AsIs: e.AST#1/5 } Tile{ AsIs: e.NewASTItems#2/9 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ParseElements, "ParseElements" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseElements_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseElements, "ParseElements" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseElements_3/4 (/7 e.AST#1/5 )/8 (/11 e.NewASTItems#2/9 )/12 t.ErrorList#2/13 t.SymTable#2/15 e.Tail#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.AST#1 as range 5
    // closed e.NewASTItems#2 as range 9
    {refalrts::ictVarLeftSave, 0, 13, 2},
    {refalrts::ictVarLeftSave, 0, 15, 2},
    // closed e.Tail#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements/4 } Tile{ AsIs: t.ErrorList#2/13 AsIs: t.SymTable#2/15 } Tile{ AsIs: (/11 } Tile{ AsIs: e.AST#1/5 } Tile{ AsIs: e.NewASTItems#2/9 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceTile, 13, 16, 0},
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
  // </0 & lambda_ParseElements_3/4 (/7 e.AST#1/5 )/8 (/11 e.NewASTItems#2/9 )/12 t.ErrorList#2/13 t.SymTable#2/15 e.Tail#2/2 >/1
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
  // closed e.AST#1 as range 5
  // closed e.NewASTItems#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements/4 } Tile{ AsIs: t.ErrorList#2/13 AsIs: t.SymTable#2/15 } Tile{ AsIs: (/11 } Tile{ AsIs: e.AST#1/5 } Tile{ AsIs: e.NewASTItems#2/9 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ParseElements, "ParseElements" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { ST_AddDefined, "ST_AddDefined" },
    { lambda_ParseElements_3, "lambda_ParseElements_3" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { ParseFunction, "ParseFunction" },
    { Fetch, "Fetch" },
    { lambda_ParseElements_2, "lambda_ParseElements_2" },
    { ParseElement_SwDirective, "ParseElement_SwDirective" },
    { Sort, "Sort" },
    { ST_AllIdents, "ST_AllIdents" },
    { lambda_ParseElements_1, "lambda_ParseElements_1" },
    { Map, "Map" },
    { ST_AllFunctions, "ST_AllFunctions" },
    { lambda_ParseElements_0, "lambda_ParseElements_0" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkSemicolon<int>::name,
    & ident_GN_Local<int>::name,
    & ident_TkName<int>::name,
    & ident_TkDirective<int>::name,
    & ident_Separator<int>::name,
    & ident_TkEOF<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"directive or name", 17}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:T T (E )T E 
    // </0 & ParseElements/4 t.idx#0/5 t.idxV#0/7 (/11 e.idxVVB#0/9 )/12 t.idxVVT#0/13 e.idxVVTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.idxVVB#0 as range 9
    {refalrts::ictVarLeftSave, 0, 13, 2},
    // closed e.idxVVTV#0 as range 2
    {refalrts::icOnFailGoTo, +53, 0, 0},
    //T T (E )(#TkEOFS )
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/13 # TkEOF/17 s.LnNum#1/18 )/14 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icIdentLeftSave, 17, 5, 15},
    {refalrts::icSave, 0, 38, 2},
    {refalrts::icEmpty, 0, 0, 38},
    // closed e.AST#1 as range 9
    {refalrts::icsVarLeft, 0, 18, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 HalfReuse: </11 } & Map/19 & lambda_ParseElements_0/20 Tile{ AsIs: </0 Reuse: & Sort/4 } </21 & ST_AllFunctions/22 t.SymTable#1/7/23 >/25 >/26 Tile{ HalfReuse: >/12 AsIs: (/13 Reuse: # Separator/17 } Tile{ AsIs: )/14 HalfReuse: </1 } & Map/27 & lambda_ParseElements_1/28 </29 & Sort/30 </31 & ST_AllIdents/32 t.SymTable#1/7/33 >/35 >/36 >/37 Tile{ AsIs: e.AST#1/9 } Tile{ ]] }
    {refalrts::icAllocFunc, 0, 11, 19},
    {refalrts::icAllocFunc, 0, 13, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icAllocFunc, 0, 12, 22},
    {refalrts::icCopyEVar, 23, 7, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icAllocFunc, 0, 11, 27},
    {refalrts::icAllocFunc, 0, 10, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 8, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icAllocFunc, 0, 9, 32},
    {refalrts::icCopyEVar, 33, 7, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icUpdateFunc, 0, 8, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icUpdateIdent, 0, 4, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 27, 37, 0},
    {refalrts::icSpliceTile, 14, 1, 0},
    {refalrts::icSpliceTile, 12, 17, 0},
    {refalrts::icSpliceTile, 21, 26, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 19, 20, 0},
    {refalrts::icSpliceTile, 5, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    //T T (E )(#TkDirectiveS S )E 
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/13 # TkDirective/17 s.LnNum#1/18 s.Directive#1/19 )/14 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icIdentLeftSave, 17, 3, 15},
    // closed e.AST#1 as range 9
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 18, 15},
    {refalrts::icsVarLeft, 0, 19, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/18 s.Directive#1/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </20 & Fetch/21 Tile{ AsIs: </0 Reuse: & ParseElement_SwDirective/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 HalfReuse: s.Directive1 #19/11 } Tile{ AsIs: e.Tail#1/2 } >/22 Tile{ HalfReuse: </17 } & CreateClosure /23 Tile{ HalfReuse: & lambda_ParseElements_2/12 AsIs: (/13 } Tile{ AsIs: e.AST#1/9 } Tile{ AsIs: )/14 } >/24 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 5, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icAllocFunc, 0, 3, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icUpdateFunc, 0, 7, 4},
    {refalrts::icReinitSVar, 0, 19, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icReinitFunc, 0, 6, 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 0, 11, 0},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    //T T (E )(#TkNameS E )E 
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/13 # TkName/17 s.LnNum#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icIdentLeftSave, 17, 2, 15},
    // closed e.AST#1 as range 9
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 18, 15},
    // closed e.Name#1 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </19 & Fetch/20 </21 & ParseFunction/22 # GN_Local/23 (/24 e.Name#1/15/25 )/27 Tile{ AsIs: </0 Reuse: & ST_AddDefined/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } Tile{ Reuse: # GN_Local/17 AsIs: s.LnNum#1/18 AsIs: e.Name#1/15 HalfReuse: >/14 AsIs: e.Tail#1/2 AsIs: >/1 } </28 & CreateClosure /29 & lambda_ParseElements_3/30 Tile{ AsIs: (/11 AsIs: e.AST#1/9 AsIs: )/12 HalfReuse: >/13 } >/31 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocFunc, 0, 5, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icAllocFunc, 0, 4, 22},
    {refalrts::icAllocIdent, 0, 1, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icCopyEVar, 25, 15, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icAllocFunc, 0, 3, 29},
    {refalrts::icAllocFunc, 0, 2, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icUpdateIdent, 0, 1, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 31, 31, 0},
    {refalrts::icSpliceTile, 11, 13, 0},
    {refalrts::icSpliceTile, 28, 30, 0},
    {refalrts::icSpliceTile, 17, 1, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 19, 27, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //T T (E )(#TkSemicolonS )E 
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/13 # TkSemicolon/17 s.LnNum#1/18 )/14 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icIdentLeftSave, 17, 0, 15},
    // closed e.AST#1 as range 9
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 18, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/13 # TkSemicolon/17 s.LnNum#1/18 )/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseElements/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: (/11 AsIs: e.AST#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrash, 0, 0, 12},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T T (E )T E 
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
    // closed e.AST#1 as range 9
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseElements/4 } </15 & EL_AddUnexpected/16 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/13 }"directive or name"/17 >/19 Tile{ AsIs: t.SymTable#1/7 AsIs: (/11 AsIs: e.AST#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 0, 16},
    {refalrts::icAllocString, 0, 0, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 7, 12, 0},
    {refalrts::icSpliceTile, 17, 19, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 15, 16, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:T T (E )T E 
  // </0 & ParseElements/4 t.idx#0/5 t.idxV#0/7 (/11 e.idxVVB#0/9 )/12 t.idxVVT#0/13 e.idxVVTV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVVB#0 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVTV#0 as range 2
  do {
    refalrts::start_sentence();
    //T T (E )(#TkEOFS )
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/13 # TkEOF/17 s.LnNum#1/18 )/14 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TkEOF<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    context[38] = context[2];
    context[39] = context[3];
    if( ! refalrts::empty_seq( context[38], context[39] ) )
      continue;
    // closed e.AST#1 as range 9
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 HalfReuse: </11 } & Map/19 & lambda_ParseElements_0/20 Tile{ AsIs: </0 Reuse: & Sort/4 } </21 & ST_AllFunctions/22 t.SymTable#1/7/23 >/25 >/26 Tile{ HalfReuse: >/12 AsIs: (/13 Reuse: # Separator/17 } Tile{ AsIs: )/14 HalfReuse: </1 } & Map/27 & lambda_ParseElements_1/28 </29 & Sort/30 </31 & ST_AllIdents/32 t.SymTable#1/7/33 >/35 >/36 >/37 Tile{ AsIs: e.AST#1/9 } Tile{ ]] }
    if( ! refalrts::alloc_name( context[19], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], lambda_ParseElements_0, "lambda_ParseElements_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ST_AllFunctions, "ST_AllFunctions" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], lambda_ParseElements_1, "lambda_ParseElements_1" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Sort, "Sort" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], ST_AllIdents, "ST_AllIdents" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[33], context[34], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[11] );
    refalrts::update_name( context[4], Sort, "Sort" );
    refalrts::reinit_close_call( context[12] );
    refalrts::update_ident( context[17], & ident_Separator<int>::name );
    refalrts::reinit_open_call( context[1] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[31] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[27], context[37] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[12], context[17] );
    res = refalrts::splice_evar( res, context[21], context[26] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[5], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T (E )(#TkDirectiveS S )E 
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/13 # TkDirective/17 s.LnNum#1/18 s.Directive#1/19 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TkDirective<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.AST#1 as range 9
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/18 s.Directive#1/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </20 & Fetch/21 Tile{ AsIs: </0 Reuse: & ParseElement_SwDirective/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 HalfReuse: s.Directive1 #19/11 } Tile{ AsIs: e.Tail#1/2 } >/22 Tile{ HalfReuse: </17 } & CreateClosure /23 Tile{ HalfReuse: & lambda_ParseElements_2/12 AsIs: (/13 } Tile{ AsIs: e.AST#1/9 } Tile{ AsIs: )/14 } >/24 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ParseElement_SwDirective, "ParseElement_SwDirective" );
    refalrts::reinit_svar( context[11], context[19] );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_name( context[12], lambda_ParseElements_2, "lambda_ParseElements_2" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T (E )(#TkNameS E )E 
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/13 # TkName/17 s.LnNum#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TkName<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.AST#1 as range 9
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    // closed e.Name#1 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </19 & Fetch/20 </21 & ParseFunction/22 # GN_Local/23 (/24 e.Name#1/15/25 )/27 Tile{ AsIs: </0 Reuse: & ST_AddDefined/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } Tile{ Reuse: # GN_Local/17 AsIs: s.LnNum#1/18 AsIs: e.Name#1/15 HalfReuse: >/14 AsIs: e.Tail#1/2 AsIs: >/1 } </28 & CreateClosure /29 & lambda_ParseElements_3/30 Tile{ AsIs: (/11 AsIs: e.AST#1/9 AsIs: )/12 HalfReuse: >/13 } >/31 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ParseFunction, "ParseFunction" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[15], context[16]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], lambda_ParseElements_3, "lambda_ParseElements_3" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ST_AddDefined, "ST_AddDefined" );
    refalrts::update_ident( context[17], & ident_GN_Local<int>::name );
    refalrts::reinit_close_call( context[14] );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T (E )(#TkSemicolonS )E 
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/13 # TkSemicolon/17 s.LnNum#1/18 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.AST#1 as range 9
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/13 # TkSemicolon/17 s.LnNum#1/18 )/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseElements/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: (/11 AsIs: e.AST#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[12], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //T T (E )T E 
  // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
  // closed e.AST#1 as range 9
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseElements/4 } </15 & EL_AddUnexpected/16 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/13 }"directive or name"/17 >/19 Tile{ AsIs: t.SymTable#1/7 AsIs: (/11 AsIs: e.AST#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], "directive or name", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenFunctionsFromDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DontAdd, "DontAdd" },
    { AddExtern, "AddExtern" },
    { ST_AddDefined, "ST_AddDefined" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_GN_Entry<int>::name,
    & ident_Stub<int>::name,
    & ident_Ident<int>::name,
    & ident_GN_Local<int>::name,
    & ident_Forward<int>::name,
    & ident_Extern<int>::name,
    & ident_Swap<int>::name,
    & ident_ESwap<int>::name,
    & ident_Enum<int>::name,
    & ident_EEnum<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S 
    //GLOBAL GEN:S 
    // </0 & GenFunctionsFromDirective/4 s.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#EEnum
    // </0 & GenFunctionsFromDirective/4 # EEnum/5 >/1
    {refalrts::icIdentTerm, 0, 9, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Enum/0 Reuse: & ST_AddDefined/4 Reuse: # GN_Entry/5 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 8, 0},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icUpdateIdent, 0, 0, 5},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#Enum
    // </0 & GenFunctionsFromDirective/4 # Enum/5 >/1
    {refalrts::icIdentTerm, 0, 8, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Enum/0 Reuse: & ST_AddDefined/4 Reuse: # GN_Local/5 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 8, 0},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icUpdateIdent, 0, 3, 5},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#ESwap
    // </0 & GenFunctionsFromDirective/4 # ESwap/5 >/1
    {refalrts::icIdentTerm, 0, 7, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Swap/0 Reuse: & ST_AddDefined/4 Reuse: # GN_Entry/5 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 6, 0},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icUpdateIdent, 0, 0, 5},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#Swap
    // </0 & GenFunctionsFromDirective/4 # Swap/5 >/1
    {refalrts::icIdentTerm, 0, 6, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Swap/0 Reuse: & ST_AddDefined/4 Reuse: # GN_Local/5 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 6, 0},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icUpdateIdent, 0, 3, 5},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#Extern
    // </0 & GenFunctionsFromDirective/4 # Extern/5 >/1
    {refalrts::icIdentTerm, 0, 5, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Stub/0 Reuse: & AddExtern/4 Reuse: # GN_Entry/5 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icUpdateIdent, 0, 0, 5},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#Forward
    // </0 & GenFunctionsFromDirective/4 # Forward/5 >/1
    {refalrts::icIdentTerm, 0, 4, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Stub/0 Reuse: & DontAdd/4 Reuse: # GN_Local/5 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icUpdateIdent, 0, 3, 5},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //#Ident
    // </0 & GenFunctionsFromDirective/4 # Ident/5 >/1
    {refalrts::icIdentTerm, 0, 2, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Stub/0 Reuse: & DontAdd/4 Reuse: # GN_Entry/5 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icUpdateIdent, 0, 0, 5},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
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
  //FAST GEN:S 
  //GLOBAL GEN:S 
  // </0 & GenFunctionsFromDirective/4 s.idx#0/5 >/1
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
    //#EEnum
    // </0 & GenFunctionsFromDirective/4 # EEnum/5 >/1
    if( ! refalrts::ident_term(  & ident_EEnum<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Enum/0 Reuse: & ST_AddDefined/4 Reuse: # GN_Entry/5 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_Enum<int>::name );
    refalrts::update_name( context[4], ST_AddDefined, "ST_AddDefined" );
    refalrts::update_ident( context[5], & ident_GN_Entry<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#Enum
    // </0 & GenFunctionsFromDirective/4 # Enum/5 >/1
    if( ! refalrts::ident_term(  & ident_Enum<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Enum/0 Reuse: & ST_AddDefined/4 Reuse: # GN_Local/5 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_Enum<int>::name );
    refalrts::update_name( context[4], ST_AddDefined, "ST_AddDefined" );
    refalrts::update_ident( context[5], & ident_GN_Local<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#ESwap
    // </0 & GenFunctionsFromDirective/4 # ESwap/5 >/1
    if( ! refalrts::ident_term(  & ident_ESwap<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Swap/0 Reuse: & ST_AddDefined/4 Reuse: # GN_Entry/5 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_Swap<int>::name );
    refalrts::update_name( context[4], ST_AddDefined, "ST_AddDefined" );
    refalrts::update_ident( context[5], & ident_GN_Entry<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#Swap
    // </0 & GenFunctionsFromDirective/4 # Swap/5 >/1
    if( ! refalrts::ident_term(  & ident_Swap<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Swap/0 Reuse: & ST_AddDefined/4 Reuse: # GN_Local/5 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_Swap<int>::name );
    refalrts::update_name( context[4], ST_AddDefined, "ST_AddDefined" );
    refalrts::update_ident( context[5], & ident_GN_Local<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#Extern
    // </0 & GenFunctionsFromDirective/4 # Extern/5 >/1
    if( ! refalrts::ident_term(  & ident_Extern<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Stub/0 Reuse: & AddExtern/4 Reuse: # GN_Entry/5 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_Stub<int>::name );
    refalrts::update_name( context[4], AddExtern, "AddExtern" );
    refalrts::update_ident( context[5], & ident_GN_Entry<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#Forward
    // </0 & GenFunctionsFromDirective/4 # Forward/5 >/1
    if( ! refalrts::ident_term(  & ident_Forward<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Stub/0 Reuse: & DontAdd/4 Reuse: # GN_Local/5 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_Stub<int>::name );
    refalrts::update_name( context[4], DontAdd, "DontAdd" );
    refalrts::update_ident( context[5], & ident_GN_Local<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //#Ident
  // </0 & GenFunctionsFromDirective/4 # Ident/5 >/1
  if( ! refalrts::ident_term(  & ident_Ident<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: # Stub/0 Reuse: & DontAdd/4 Reuse: # GN_Entry/5 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_Stub<int>::name );
  refalrts::update_name( context[4], DontAdd, "DontAdd" );
  refalrts::update_ident( context[5], & ident_GN_Entry<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ST_AddExtern, "ST_AddExtern" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & AddExtern/4 t.ErrorList#1/5 t.SymTable#1/7 s.ScopeClass#1/9 s.LnNum#1/10 e.Name#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.ScopeClass#1/9 s.LnNum#1/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ST_AddExtern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } Tile{ AsIs: e.Name#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // </0 & AddExtern/4 t.ErrorList#1/5 t.SymTable#1/7 s.ScopeClass#1/9 s.LnNum#1/10 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.ScopeClass#1/9 s.LnNum#1/10 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ST_AddExtern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } Tile{ AsIs: e.Name#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ST_AddExtern, "ST_AddExtern" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DontAdd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // </0 & DontAdd/4 t.ErrorList#1/5 t.SymTable#1/7 s.ScopeClass#1/9 s.LnNum#1/10 e.Name#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DontAdd/4 {REMOVED TILE}  s.ScopeClass#1/9 s.LnNum#1/10 e.Name#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 8, 0},
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
  // </0 & DontAdd/4 t.ErrorList#1/5 t.SymTable#1/7 s.ScopeClass#1/9 s.LnNum#1/10 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & DontAdd/4 {REMOVED TILE}  s.ScopeClass#1/9 s.LnNum#1/10 e.Name#1/2 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseElement_SwDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseNameList, "ParseNameList" },
    { GenFunctionsFromDirective, "GenFunctionsFromDirective" },
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { ST_AddDefined, "ST_AddDefined" },
    { ParseFunction, "ParseFunction" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Entry<int>::name,
    & ident_GN_Entry<int>::name,
    & ident_TkName<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"ction name", 10},
    {"fu", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:T T S E 
    // </0 & ParseElement_SwDirective/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 e.idxVVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    // closed e.idxVVV#0 as range 2
    {refalrts::icOnFailGoTo, +26, 0, 0},
    //T T #Entry(#TkNameS E )E 
    // </0 & ParseElement_SwDirective/4 t.ErrorList#1/5 t.SymTable#1/7 # Entry/9 (/12 # TkName/14 s.LnNum#1/15 e.Name#1/10 )/13 e.Tail#1/2 >/1
    {refalrts::icIdentTerm, 0, 0, 9},
    {refalrts::icSave, 0, 21, 2},
    {refalrts::icBracketLeftSave, 0, 10, 21},
    {refalrts::icIdentLeftSave, 14, 2, 10},
    // closed e.Tail#1 as range 21(2)
    {refalrts::icsVarLeft, 0, 15, 10},
    // closed e.Name#1 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </16 & ParseFunction/17 Tile{ Reuse: # GN_Entry/9 AsIs: (/12 } e.Name#1/10/18 )/20 Tile{ AsIs: </0 Reuse: & ST_AddDefined/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } Tile{ Reuse: # GN_Entry/14 AsIs: s.LnNum#1/15 AsIs: e.Name#1/10 HalfReuse: >/13 AsIs: e.Tail#1/21(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 4, 17},
    {refalrts::icCopyEVar, 18, 10, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icUpdateIdent, 0, 1, 9},
    {refalrts::icUpdateFunc, 0, 3, 4},
    {refalrts::icUpdateIdent, 0, 1, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 20, 0},
    {refalrts::icSetRes, 0, 0, 14},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icSpliceTile, 9, 12, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    //T T #EntryT E 
    // </0 & ParseElement_SwDirective/4 t.ErrorList#1/5 t.SymTable#1/7 # Entry/9 t.Unexpected#1/10 e.Tail#1/2 >/1
    {refalrts::icIdentTerm, 0, 0, 9},
    {refalrts::icSave, 0, 21, 2},
    {refalrts::ictVarLeftSave, 0, 10, 21},
    // closed e.Tail#1 as range 21(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/12 )/13 Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/10 }"fu"/14 Tile{ HalfReuse: 'n'/9 }"ction name"/16 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/7 } t.Unexpected#1/10/18 Tile{ AsIs: e.Tail#1/21(2) } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icAllocString, 0, 1, 14},
    {refalrts::icAllocString, 0, 0, 16},
    {refalrts::icCopyEVar, 18, 10, 0},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitChar, 0, 'n', 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icSpliceTile, 0, 6, 0},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T T S E 
    // </0 & ParseElement_SwDirective/4 t.ErrorList#1/5 t.SymTable#1/7 s.Directive#1/9 e.Tail#1/2 >/1
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList/4 } (/10 )/11 Tile{ AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } </12 & GenFunctionsFromDirective/13 Tile{ AsIs: s.Directive#1/9 } >/14 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icAllocFunc, 0, 1, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icSpliceTile, 5, 8, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:T T S E 
  // </0 & ParseElement_SwDirective/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 e.idxVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVV#0 as range 2
  do {
    refalrts::start_sentence();
    //T T #Entry(#TkNameS E )E 
    // </0 & ParseElement_SwDirective/4 t.ErrorList#1/5 t.SymTable#1/7 # Entry/9 (/12 # TkName/14 s.LnNum#1/15 e.Name#1/10 )/13 e.Tail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Entry<int>::name, context[9] ) )
      continue;
    context[21] = context[2];
    context[22] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[21], context[22] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkName<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 21(2)
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    // closed e.Name#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </16 & ParseFunction/17 Tile{ Reuse: # GN_Entry/9 AsIs: (/12 } e.Name#1/10/18 )/20 Tile{ AsIs: </0 Reuse: & ST_AddDefined/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } Tile{ Reuse: # GN_Entry/14 AsIs: s.LnNum#1/15 AsIs: e.Name#1/10 HalfReuse: >/13 AsIs: e.Tail#1/21(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ParseFunction, "ParseFunction" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[10], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::update_ident( context[9], & ident_GN_Entry<int>::name );
    refalrts::update_name( context[4], ST_AddDefined, "ST_AddDefined" );
    refalrts::update_ident( context[14], & ident_GN_Entry<int>::name );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[9], context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T #EntryT E 
    // </0 & ParseElement_SwDirective/4 t.ErrorList#1/5 t.SymTable#1/7 # Entry/9 t.Unexpected#1/10 e.Tail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Entry<int>::name, context[9] ) )
      continue;
    context[21] = context[2];
    context[22] = context[3];
    context[11] = refalrts::tvar_left( context[10], context[21], context[22] );
    if( ! context[11] )
      continue;
    // closed e.Tail#1 as range 21(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/12 )/13 Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/10 }"fu"/14 Tile{ HalfReuse: 'n'/9 }"ction name"/16 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/7 } t.Unexpected#1/10/18 Tile{ AsIs: e.Tail#1/21(2) } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "fu", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "ction name", 10 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[10], context[11]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], EL_AddUnexpected, "EL_AddUnexpected" );
    refalrts::reinit_char( context[9], 'n' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //T T S E 
  // </0 & ParseElement_SwDirective/4 t.ErrorList#1/5 t.SymTable#1/7 s.Directive#1/9 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList/4 } (/10 )/11 Tile{ AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } </12 & GenFunctionsFromDirective/13 Tile{ AsIs: s.Directive#1/9 } >/14 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], GenFunctionsFromDirective, "GenFunctionsFromDirective" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ParseNameList, "ParseNameList" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseNameList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { ParseNameList_Tail, "ParseNameList_Tail" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkName<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"function name", 13}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )T T S S S T E 
    //GLOBAL GEN:(E )T T S S S T E 
    // </0 & ParseNameList/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 s.idxTVV#0/13 s.idxTVVV#0/14 s.idxTVVVV#0/15 t.idxTVVVVV#0/16 e.idxTVVVVVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 14, 2},
    {refalrts::icsVarLeft, 0, 15, 2},
    {refalrts::ictVarLeftSave, 0, 16, 2},
    // closed e.idxTVVVVVV#0 as range 2
    {refalrts::icOnFailGoTo, +33, 0, 0},
    //(E )T T S S S (#TkNameS E )E 
    // </0 & ParseNameList/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/16 # TkName/20 s.LnNum#1/21 e.Name#1/18 )/17 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 18, 16},
    {refalrts::icIdentLeftSave, 20, 0, 18},
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 21, 18},
    // closed e.Name#1 as range 18
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/21 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList_Tail/4 AsIs: (/7 AsIs: e.AST#1/5 HalfReuse: (/8 } s.ASTItem#1/13/22 s.ScopeClass#1/15/23 e.Name#1/18/24 )/26 Tile{ HalfReuse: )/20 } </27 s.TableChangeFunc#1/14/28 Tile{ AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 } Tile{ AsIs: s.ScopeClass#1/15 HalfReuse: s.LnNum1 #21/16 } Tile{ AsIs: e.Name#1/18 } >/29 Tile{ AsIs: s.ASTItem#1/13 AsIs: s.TableChangeFunc#1/14 } Tile{ HalfReuse: s.ScopeClass1 #15/17 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icCopySTVar, 22, 13, 0},
    {refalrts::icCopySTVar, 23, 15, 0},
    {refalrts::icCopyEVar, 24, 18, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icCopySTVar, 28, 14, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icReinitSVar, 0, 21, 16},
    {refalrts::icReinitSVar, 0, 15, 17},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icLinkBrackets, 7, 20, 0},
    {refalrts::icLinkBrackets, 8, 26, 0},
    {refalrts::icSetRes, 0, 0, 17},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 9, 12, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 22, 26, 0},
    {refalrts::icTrash, 0, 0, 8},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )T T S S S T E 
    // </0 & ParseNameList/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 t.Unexpected#1/16 e.Tail#1/2 >/1
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Unexpected#1/16 }"function name"/18 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/11 } t.Unexpected#1/16/20 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    {refalrts::icAllocString, 0, 0, 18},
    {refalrts::icCopyEVar, 20, 16, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
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
  //FAST GEN:(E )T T S S S T E 
  //GLOBAL GEN:(E )T T S S S T E 
  // </0 & ParseNameList/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 s.idxTVV#0/13 s.idxTVVV#0/14 s.idxTVVVV#0/15 t.idxTVVVVV#0/16 e.idxTVVVVVV#0/2 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVVVVVV#0 as range 2
  do {
    refalrts::start_sentence();
    //(E )T T S S S (#TkNameS E )E 
    // </0 & ParseNameList/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/16 # TkName/20 s.LnNum#1/21 e.Name#1/18 )/17 e.Tail#1/2 >/1
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[16] ) )
      continue;
    context[20] = refalrts::ident_left(  & ident_TkName<int>::name, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[21], context[18], context[19] ) )
      continue;
    // closed e.Name#1 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/21 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList_Tail/4 AsIs: (/7 AsIs: e.AST#1/5 HalfReuse: (/8 } s.ASTItem#1/13/22 s.ScopeClass#1/15/23 e.Name#1/18/24 )/26 Tile{ HalfReuse: )/20 } </27 s.TableChangeFunc#1/14/28 Tile{ AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 } Tile{ AsIs: s.ScopeClass#1/15 HalfReuse: s.LnNum1 #21/16 } Tile{ AsIs: e.Name#1/18 } >/29 Tile{ AsIs: s.ASTItem#1/13 AsIs: s.TableChangeFunc#1/14 } Tile{ HalfReuse: s.ScopeClass1 #15/17 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[22], context[13]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[23], context[15]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[24], context[25], context[18], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[28], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ParseNameList_Tail, "ParseNameList_Tail" );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::reinit_svar( context[16], context[21] );
    refalrts::reinit_svar( context[17], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::link_brackets( context[8], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[12] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[22], context[26] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )T T S S S T E 
  // </0 & ParseNameList/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 t.Unexpected#1/16 e.Tail#1/2 >/1
  // closed e.AST#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Unexpected#1/16 }"function name"/18 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/11 } t.Unexpected#1/16/20 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[18], context[19], "function name", 13 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[20], context[21], context[16], context[17]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddUnexpected, "EL_AddUnexpected" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseNameList_Tail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { ParseNameList, "ParseNameList" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkSemicolon<int>::name,
    & ident_TkComma<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"comma or semicolon", 18}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )T T S S S T E 
    //GLOBAL GEN:(E )T T S S S T E 
    // </0 & ParseNameList_Tail/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 s.idxTVV#0/13 s.idxTVVV#0/14 s.idxTVVVV#0/15 t.idxTVVVVV#0/16 e.idxTVVVVVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 14, 2},
    {refalrts::icsVarLeft, 0, 15, 2},
    {refalrts::ictVarLeftSave, 0, 16, 2},
    // closed e.idxTVVVVVV#0 as range 2
    {refalrts::icOnFailGoTo, +13, 0, 0},
    //(E )T T S S S (#TkCommaS )E 
    // </0 & ParseNameList_Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/16 # TkComma/20 s.LnNum#1/21 )/17 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 18, 16},
    {refalrts::icIdentLeftSave, 20, 1, 18},
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 21, 18},
    {refalrts::icEmpty, 0, 0, 18},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/16 # TkComma/20 s.LnNum#1/21 )/17 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList/4 AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: s.ASTItem#1/13 AsIs: s.TableChangeFunc#1/14 AsIs: s.ScopeClass#1/15 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrash, 0, 0, 15},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //(E )T T S S S (#TkSemicolonS )E 
    // </0 & ParseNameList_Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/16 # TkSemicolon/20 s.LnNum#1/21 )/17 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 18, 16},
    {refalrts::icIdentLeftSave, 20, 0, 18},
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 21, 18},
    {refalrts::icEmpty, 0, 0, 18},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ParseNameList_Tail/4 {REMOVED TILE}  s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/16 # TkSemicolon/20 s.LnNum#1/21 )/17 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 7, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )T T S S S T E 
    // </0 & ParseNameList_Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 t.Unexpected#1/16 e.Tail#1/2 >/1
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Unexpected#1/16 }"comma or semicolon"/18 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/11 } t.Unexpected#1/16/20 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    {refalrts::icAllocString, 0, 0, 18},
    {refalrts::icCopyEVar, 20, 16, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
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
  //FAST GEN:(E )T T S S S T E 
  //GLOBAL GEN:(E )T T S S S T E 
  // </0 & ParseNameList_Tail/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 s.idxTVV#0/13 s.idxTVVV#0/14 s.idxTVVVV#0/15 t.idxTVVVVV#0/16 e.idxTVVVVVV#0/2 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVVVVVV#0 as range 2
  do {
    refalrts::start_sentence();
    //(E )T T S S S (#TkCommaS )E 
    // </0 & ParseNameList_Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/16 # TkComma/20 s.LnNum#1/21 )/17 e.Tail#1/2 >/1
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[16] ) )
      continue;
    context[20] = refalrts::ident_left(  & ident_TkComma<int>::name, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[21], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/16 # TkComma/20 s.LnNum#1/21 )/17 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList/4 AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: s.ASTItem#1/13 AsIs: s.TableChangeFunc#1/14 AsIs: s.ScopeClass#1/15 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ParseNameList, "ParseNameList" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T S S S (#TkSemicolonS )E 
    // </0 & ParseNameList_Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/16 # TkSemicolon/20 s.LnNum#1/21 )/17 e.Tail#1/2 >/1
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[16] ) )
      continue;
    context[20] = refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[21], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ParseNameList_Tail/4 {REMOVED TILE}  s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/16 # TkSemicolon/20 s.LnNum#1/21 )/17 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )T T S S S T E 
  // </0 & ParseNameList_Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 t.Unexpected#1/16 e.Tail#1/2 >/1
  // closed e.AST#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Unexpected#1/16 }"comma or semicolon"/18 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/11 } t.Unexpected#1/16/20 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[18], context[19], "comma or semicolon", 18 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[20], context[21], context[16], context[17]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddUnexpected, "EL_AddUnexpected" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CreateLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"mbda_", 5}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & CreateLambdaName/4 e.Name#1/2 s.Number#1/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarRight, 0, 5, 2},
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'l'/0 HalfReuse: 'a'/4 }"mbda_"/6 Tile{ AsIs: e.Name#1/2 } '_'/8 </9 & StrFromInt/10 Tile{ AsIs: s.Number#1/5 AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 6},
    {refalrts::icAllocChar, 0, '_', 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 0, 10},
    {refalrts::icReinitChar, 0, 'l', 0},
    {refalrts::icReinitChar, 0, 'a', 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetRes, 0, 0, 5},
    {refalrts::icSpliceTile, 8, 10, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 6, 7, 0},
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
  // </0 & CreateLambdaName/4 e.Name#1/2 s.Number#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'l'/0 HalfReuse: 'a'/4 }"mbda_"/6 Tile{ AsIs: e.Name#1/2 } '_'/8 </9 & StrFromInt/10 Tile{ AsIs: s.Number#1/5 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "mbda_", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'l' );
  refalrts::reinit_char( context[4], 'a' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[5];
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseFunction_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenFunctionBody, "GenFunctionBody" },
    { CreateLambdaName, "CreateLambdaName" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_GN_Local<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseFunction_0/4 (/7 e.Name#1/5 )/8 (/11 s.Number#3/13 e.Sentences#3/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Name#1 as range 5
    {refalrts::icsVarLeft, 0, 13, 9},
    // closed e.Sentences#3 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & GenFunctionBody/0 HalfReuse: # GN_Local/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 AsIs: (/11 } </15 & CreateLambdaName/16 e.Name#1/5/17 Tile{ AsIs: s.Number#3/13 } >/19 Tile{ AsIs: )/12 } Tile{ AsIs: e.Sentences#3/9 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 1, 16},
    {refalrts::icCopyEVar, 17, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icReinitFunc, 0, 0, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 0, 11, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
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
  // </0 & lambda_ParseFunction_0/4 (/7 e.Name#1/5 )/8 (/11 s.Number#3/13 e.Sentences#3/9 )/12 >/1
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
  // closed e.Name#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#3 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & GenFunctionBody/0 HalfReuse: # GN_Local/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 AsIs: (/11 } </15 & CreateLambdaName/16 e.Name#1/5/17 Tile{ AsIs: s.Number#3/13 } >/19 Tile{ AsIs: )/12 } Tile{ AsIs: e.Sentences#3/9 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], CreateLambdaName, "CreateLambdaName" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], GenFunctionBody, "GenFunctionBody" );
  refalrts::reinit_ident( context[4], & ident_GN_Local<int>::name );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseFunction_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenFunctionBody, "GenFunctionBody" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseFunction_1/4 s.ScopeClass#1/13 (/11 e.Name#1/9 )/12 (/7 s.Number#3/14 e.Sentences#3/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    // closed e.Name#1 as range 9
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 14, 5},
    // closed e.Sentences#3 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Number#3/14 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenFunctionBody/4 AsIs: s.ScopeClass#1/13 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: (/7 } e.Name#1/9/15 Tile{ AsIs: )/8 } Tile{ AsIs: e.Sentences#3/5 } Tile{ AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 15, 9, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 15, 16, 0},
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
  // </0 & lambda_ParseFunction_1/4 s.ScopeClass#1/13 (/11 e.Name#1/9 )/12 (/7 s.Number#3/14 e.Sentences#3/5 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Name#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#3 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Number#3/14 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenFunctionBody/4 AsIs: s.ScopeClass#1/13 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: (/7 } e.Name#1/9/15 Tile{ AsIs: )/8 } Tile{ AsIs: e.Sentences#3/5 } Tile{ AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[15], context[16], context[9], context[10]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], GenFunctionBody, "GenFunctionBody" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseFunction_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseFunction_0, "lambda_ParseFunction_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Cntx_Destroy, "Cntx_Destroy" },
    { lambda_ParseFunction_1, "lambda_ParseFunction_1" },
    { Fetch, "Fetch" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseFunction_2/4 (/7 e.Name#1/5 )/8 s.ScopeClass#1/9 (/12 s.NextNumber#2/14 e.FunctionBodies#2/10 t.MainBody#2/25 )/13 t.ErrorList#2/15 t.SymTable#2/17 (/21 t.Context#2/23 )/22 e.Tail#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Name#1 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 10, 2},
    {refalrts::icsVarLeft, 0, 14, 10},
    {refalrts::ictVarLeftSave, 0, 15, 2},
    {refalrts::ictVarLeftSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 19, 2},
    // closed e.Tail#2 as range 2
    {refalrts::ictVarLeftSave, 0, 23, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::ictVarRightSave, 0, 25, 10},
    // closed e.FunctionBodies#2 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.NextNumber#2/14 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </27 Tile{ HalfReuse: & Cntx_Destroy/21 AsIs: t.Context#2/23 HalfReuse: >/22 } (/28 </29 & Map/30 </31 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ParseFunction_0/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } >/32 Tile{ AsIs: e.FunctionBodies#2/10 } Tile{ AsIs: >/1 } </33 & Fetch/34 Tile{ AsIs: t.MainBody#2/25 } </35 & CreateClosure /36 & lambda_ParseFunction_1/37 Tile{ AsIs: s.ScopeClass#1/9 AsIs: (/12 } e.Name#1/5/38 )/40 >/41 >/42 Tile{ AsIs: )/13 AsIs: t.ErrorList#2/15 AsIs: t.SymTable#2/17 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 5, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icAllocFunc, 0, 4, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 35},
    {refalrts::icAllocFunc, 0, 1, 36},
    {refalrts::icAllocFunc, 0, 3, 37},
    {refalrts::icCopyEVar, 38, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 41},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 42},
    {refalrts::icReinitFunc, 0, 2, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icLinkBrackets, 28, 13, 0},
    {refalrts::icPushStack, 0, 0, 42},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icLinkBrackets, 12, 40, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 13, 18, 0},
    {refalrts::icSpliceTile, 40, 42, 0},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icSpliceTile, 9, 12, 0},
    {refalrts::icSpliceTile, 35, 37, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 28, 31, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 27, 27, 0},
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
  // </0 & lambda_ParseFunction_2/4 (/7 e.Name#1/5 )/8 s.ScopeClass#1/9 (/12 s.NextNumber#2/14 e.FunctionBodies#2/10 t.MainBody#2/25 )/13 t.ErrorList#2/15 t.SymTable#2/17 (/21 t.Context#2/23 )/22 e.Tail#2/2 >/1
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
  // closed e.Name#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Tail#2 as range 2
  context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[19], context[20] ) )
    return refalrts::cRecognitionImpossible;
  context[26] = refalrts::tvar_right( context[25], context[10], context[11] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  // closed e.FunctionBodies#2 as range 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.NextNumber#2/14 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </27 Tile{ HalfReuse: & Cntx_Destroy/21 AsIs: t.Context#2/23 HalfReuse: >/22 } (/28 </29 & Map/30 </31 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ParseFunction_0/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } >/32 Tile{ AsIs: e.FunctionBodies#2/10 } Tile{ AsIs: >/1 } </33 & Fetch/34 Tile{ AsIs: t.MainBody#2/25 } </35 & CreateClosure /36 & lambda_ParseFunction_1/37 Tile{ AsIs: s.ScopeClass#1/9 AsIs: (/12 } e.Name#1/5/38 )/40 >/41 >/42 Tile{ AsIs: )/13 AsIs: t.ErrorList#2/15 AsIs: t.SymTable#2/17 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[36], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], lambda_ParseFunction_1, "lambda_ParseFunction_1" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[38], context[39], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[42] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[21], Cntx_Destroy, "Cntx_Destroy" );
  refalrts::reinit_close_call( context[22] );
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_ParseFunction_0, "lambda_ParseFunction_0" );
  refalrts::link_brackets( context[28], context[13] );
  refalrts::push_stack( context[42] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[41] );
  refalrts::push_stack( context[35] );
  refalrts::link_brackets( context[12], context[40] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[31] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[27] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[18] );
  res = refalrts::splice_evar( res, context[40], context[42] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[28], context[31] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { Cntx_Create, "Cntx_Create" },
    { Fetch, "Fetch" },
    { lambda_ParseFunction_2, "lambda_ParseFunction_2" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { ParseBlock, "ParseBlock" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkOpenBlock<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"open brace", 10}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S (E )T T T E 
    //GLOBAL GEN:S (E )T T T E 
    // </0 & ParseFunction/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 t.idxVTV#0/12 t.idxVTVV#0/14 e.idxVTVVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    // closed e.idxVB#0 as range 6
    {refalrts::ictVarLeftSave, 0, 10, 2},
    {refalrts::ictVarLeftSave, 0, 12, 2},
    {refalrts::ictVarLeftSave, 0, 14, 2},
    // closed e.idxVTVVV#0 as range 2
    {refalrts::icOnFailGoTo, +41, 0, 0},
    //S (E )T T (#TkOpenBlockS )E 
    // </0 & ParseFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.ErrorList#1/10 t.SymTable#1/12 (/14 # TkOpenBlock/18 s.LnNum#1/19 )/15 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 16, 14},
    {refalrts::icIdentLeftSave, 18, 0, 16},
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 19, 16},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </20 & ParseBlock/21 (/22 0/23 Tile{ AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.SymTable#1/12 HalfReuse: </14 HalfReuse: & Cntx_Create/18 } Tile{ HalfReuse: >/15 AsIs: e.Tail#1/2 AsIs: >/1 } </24 & CreateClosure /25 & lambda_ParseFunction_2/26 (/27 Tile{ AsIs: e.Name#1/6 } )/28 Tile{ AsIs: s.ScopeClass#1/5 HalfReuse: >/8 } >/29 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 5, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icAllocInt, 0, 0, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icAllocFunc, 0, 4, 25},
    {refalrts::icAllocFunc, 0, 3, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icReinitFunc, 0, 1, 18},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 22, 9, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceTile, 5, 8, 0},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceTile, 15, 1, 0},
    {refalrts::icSpliceTile, 9, 18, 0},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (E )T T T E 
    // </0 & ParseFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.ErrorList#1/10 t.SymTable#1/12 t.Unexpected#1/14 e.Tail#1/2 >/1
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ScopeClass#1/5 {REMOVED TILE}  e.Name#1/6 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 } Tile{ AsIs: )/9 } Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/10 } t.Unexpected#1/14/16"open brace"/18 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/12 AsIs: t.Unexpected#1/14 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    {refalrts::icCopyEVar, 16, 14, 0},
    {refalrts::icAllocString, 0, 0, 18},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
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
  //FAST GEN:S (E )T T T E 
  //GLOBAL GEN:S (E )T T T E 
  // </0 & ParseFunction/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 t.idxVTV#0/12 t.idxVTVV#0/14 e.idxVTVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.idxVB#0 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTVVV#0 as range 2
  do {
    refalrts::start_sentence();
    //S (E )T T (#TkOpenBlockS )E 
    // </0 & ParseFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.ErrorList#1/10 t.SymTable#1/12 (/14 # TkOpenBlock/18 s.LnNum#1/19 )/15 e.Tail#1/2 >/1
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
      continue;
    context[18] = refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[16], context[17] );
    if( ! context[18] )
      continue;
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[19], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </20 & ParseBlock/21 (/22 0/23 Tile{ AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.SymTable#1/12 HalfReuse: </14 HalfReuse: & Cntx_Create/18 } Tile{ HalfReuse: >/15 AsIs: e.Tail#1/2 AsIs: >/1 } </24 & CreateClosure /25 & lambda_ParseFunction_2/26 (/27 Tile{ AsIs: e.Name#1/6 } )/28 Tile{ AsIs: s.ScopeClass#1/5 HalfReuse: >/8 } >/29 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ParseBlock, "ParseBlock" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[23], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], lambda_ParseFunction_2, "lambda_ParseFunction_2" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_name( context[18], Cntx_Create, "Cntx_Create" );
    refalrts::reinit_close_call( context[15] );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[22], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[5], context[8] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[9], context[18] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S (E )T T T E 
  // </0 & ParseFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.ErrorList#1/10 t.SymTable#1/12 t.Unexpected#1/14 e.Tail#1/2 >/1
  // closed e.Name#1 as range 6
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ScopeClass#1/5 {REMOVED TILE}  e.Name#1/6 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 } Tile{ AsIs: )/9 } Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/10 } t.Unexpected#1/14/16"open brace"/18 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/12 AsIs: t.Unexpected#1/14 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if (! refalrts::copy_evar(context[16], context[17], context[14], context[15]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "open brace", 10 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddUnexpected, "EL_AddUnexpected" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ResolveLambdaName_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ResolveLambdaName, "ResolveLambdaName" },
    { CreateLambdaName, "CreateLambdaName" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CallBrackets<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkName<int>::name,
    & ident_LambdaName<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )T 
    //GLOBAL GEN:(E )T 
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //(E )(#TkName#LambdaNameS )
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/9 # TkName/13 # LambdaName/14 s.Number#2/15 )/10 >/1
    {refalrts::icBracketTerm, 0, 11, 9},
    {refalrts::icIdentLeftSave, 13, 3, 11},
    {refalrts::icIdentLeftSave, 14, 4, 11},
    // closed e.MainName#1 as range 5
    {refalrts::icsVarLeft, 0, 15, 11},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  # LambdaName/14 s.Number#2/15 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 } Tile{ HalfReuse: # TkName/0 HalfReuse: </4 HalfReuse: & CreateLambdaName/7 AsIs: e.MainName#1/5 HalfReuse: s.Number2 #15/8 HalfReuse: >/9 HalfReuse: )/13 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icReinitIdent, 0, 3, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 7},
    {refalrts::icReinitSVar, 0, 15, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 0, 13, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //(E )(#BracketsE )
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/9 # Brackets/13 e.SubResult#2/11 )/10 >/1
    {refalrts::icBracketTerm, 0, 11, 9},
    {refalrts::icIdentLeftSave, 13, 2, 11},
    // closed e.MainName#1 as range 5
    // closed e.SubResult#2 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Brackets/13 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.SubResult#2/11 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 9, 1, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 9, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //(E )(#ADT_Brackets(E )E )
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/9 # ADT_Brackets/13 (/16 e.Name#2/14 )/17 e.SubResult#2/11 )/10 >/1
    {refalrts::icBracketTerm, 0, 11, 9},
    {refalrts::icIdentLeftSave, 13, 1, 11},
    {refalrts::icBracketLeftSave, 0, 14, 11},
    // closed e.MainName#1 as range 5
    // closed e.Name#2 as range 14
    // closed e.SubResult#2 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # ADT_Brackets/13 AsIs: (/16 AsIs: e.Name#2/14 AsIs: )/17 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.SubResult#2/11 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 9, 1, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 9, 17, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //(E )(#CallBracketsE )
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/9 # CallBrackets/13 e.SubResult#2/11 )/10 >/1
    {refalrts::icBracketTerm, 0, 11, 9},
    {refalrts::icIdentLeftSave, 13, 0, 11},
    // closed e.MainName#1 as range 5
    // closed e.SubResult#2 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CallBrackets/13 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.SubResult#2/11 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 9, 1, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 9, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )T 
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 t.OtherTerm#2/9 >/1
    // closed e.MainName#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/9 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
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
  //FAST GEN:(E )T 
  //GLOBAL GEN:(E )T 
  // </0 & lambda_ResolveLambdaName_0/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    //(E )(#TkName#LambdaNameS )
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/9 # TkName/13 # LambdaName/14 s.Number#2/15 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_TkName<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::ident_left(  & ident_LambdaName<int>::name, context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.MainName#1 as range 5
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  # LambdaName/14 s.Number#2/15 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 } Tile{ HalfReuse: # TkName/0 HalfReuse: </4 HalfReuse: & CreateLambdaName/7 AsIs: e.MainName#1/5 HalfReuse: s.Number2 #15/8 HalfReuse: >/9 HalfReuse: )/13 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[0], & ident_TkName<int>::name );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], CreateLambdaName, "CreateLambdaName" );
    refalrts::reinit_svar( context[8], context[15] );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::link_brackets( context[10], context[13] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(#BracketsE )
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/9 # Brackets/13 e.SubResult#2/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.MainName#1 as range 5
    // closed e.SubResult#2 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Brackets/13 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.SubResult#2/11 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ResolveLambdaName, "ResolveLambdaName" );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(#ADT_Brackets(E )E )
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/9 # ADT_Brackets/13 (/16 e.Name#2/14 )/17 e.SubResult#2/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.MainName#1 as range 5
    // closed e.Name#2 as range 14
    // closed e.SubResult#2 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # ADT_Brackets/13 AsIs: (/16 AsIs: e.Name#2/14 AsIs: )/17 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.SubResult#2/11 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ResolveLambdaName, "ResolveLambdaName" );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(#CallBracketsE )
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/9 # CallBrackets/13 e.SubResult#2/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.MainName#1 as range 5
    // closed e.SubResult#2 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CallBrackets/13 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.SubResult#2/11 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ResolveLambdaName, "ResolveLambdaName" );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )T 
  // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 t.OtherTerm#2/9 >/1
  // closed e.MainName#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ResolveLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ResolveLambdaName_0, "lambda_ResolveLambdaName_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ResolveLambdaName/4 (/7 e.MainName#1/5 )/8 e.Result#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.MainName#1 as range 5
    // closed e.Result#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & Map/10 </11 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ResolveLambdaName_0/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } >/12 Tile{ AsIs: e.Result#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 2, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 9, 11, 0},
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
  // </0 & ResolveLambdaName/4 (/7 e.MainName#1/5 )/8 e.Result#1/2 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Result#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & Map/10 </11 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ResolveLambdaName_0/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } >/12 Tile{ AsIs: e.Result#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_ResolveLambdaName_0, "lambda_ResolveLambdaName_0" );
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
#endif
}

static refalrts::FnResult lambda_GenFunctionBody_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ResolveLambdaName, "ResolveLambdaName" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_GenFunctionBody_0/4 (/7 e.MainName#1/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 9},
    {refalrts::icBracketLeftSave, 0, 17, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.MainName#1 as range 5
    // closed e.Pattern#2 as range 13
    // closed e.Result#2 as range 17
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.Result#2/17 } Tile{ HalfReuse: >/20 AsIs: )/12 HalfReuse: )/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icLinkBrackets, 19, 12, 0},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetRes, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 11, 19, 0},
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
  // </0 & lambda_GenFunctionBody_0/4 (/7 e.MainName#1/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Result#2 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.Result#2/17 } Tile{ HalfReuse: >/20 AsIs: )/12 HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], ResolveLambdaName, "ResolveLambdaName" );
  refalrts::reinit_close_call( context[20] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[19], context[12] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[19] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenFunctionBody(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { lambda_GenFunctionBody_0, "lambda_GenFunctionBody_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Function<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GenFunctionBody/4 s.ScopeClass#1/5 (/8 e.MainName#1/6 )/9 (/12 e.Name#1/10 )/13 e.Sentences#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 10, 2},
    // closed e.MainName#1 as range 6
    // closed e.Name#1 as range 10
    // closed e.Sentences#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 } Tile{ AsIs: e.Name#1/10 } Tile{ AsIs: )/9 HalfReuse: </12 } Tile{ HalfReuse: & Fetch/13 AsIs: e.Sentences#1/2 HalfReuse: (/1 } & Map/14 </15 & CreateClosure /16 & lambda_GenFunctionBody_0/17 (/18 Tile{ AsIs: e.MainName#1/6 } )/19 >/20 )/21 >/22 )/23 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 3, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 2, 16},
    {refalrts::icAllocFunc, 0, 1, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icReinitFunc, 0, 0, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 1},
    {refalrts::icLinkBrackets, 0, 23, 0},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icLinkBrackets, 1, 21, 0},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 14, 18, 0},
    {refalrts::icSpliceTile, 13, 1, 0},
    {refalrts::icSpliceTile, 9, 12, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
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
  // </0 & GenFunctionBody/4 s.ScopeClass#1/5 (/8 e.MainName#1/6 )/9 (/12 e.Name#1/10 )/13 e.Sentences#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.MainName#1 as range 6
  // closed e.Name#1 as range 10
  // closed e.Sentences#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 } Tile{ AsIs: e.Name#1/10 } Tile{ AsIs: )/9 HalfReuse: </12 } Tile{ HalfReuse: & Fetch/13 AsIs: e.Sentences#1/2 HalfReuse: (/1 } & Map/14 </15 & CreateClosure /16 & lambda_GenFunctionBody_0/17 (/18 Tile{ AsIs: e.MainName#1/6 } )/19 >/20 )/21 >/22 )/23 Tile{ ]] }
  if( ! refalrts::alloc_name( context[14], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], lambda_GenFunctionBody_0, "lambda_GenFunctionBody_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_Function<int>::name );
  refalrts::reinit_open_call( context[12] );
  refalrts::reinit_name( context[13], Fetch, "Fetch" );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[0], context[23] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[1], context[21] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoParseBlock, "DoParseBlock" },
    { Cntx_PushScope, "Cntx_PushScope" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ParseBlock/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 e.Tokens#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Functions#1 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    {refalrts::ictVarLeftSave, 0, 13, 2},
    // closed e.Tokens#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoParseBlock/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 } </15 & Cntx_PushScope/16 Tile{ AsIs: t.Context#1/13 } >/17 (/18 )/19 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 1, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 17, 19, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 15, 16, 0},
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
  // </0 & ParseBlock/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 e.Tokens#1/2 >/1
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
  // closed e.Functions#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoParseBlock/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 } </15 & Cntx_PushScope/16 Tile{ AsIs: t.Context#1/13 } >/17 (/18 )/19 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], Cntx_PushScope, "Cntx_PushScope" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoParseBlock, "DoParseBlock" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_DoParseBlock_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { AddContextToSentence, "AddContextToSentence" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_DoParseBlock_0/4 s.Number#1/5 (/8 e.Functions#1/6 )/9 (/12 e.Sentences#1/10 )/13 t.ErrorList#1/14 t.SymTable#1/16 t.Context#2/18 e.FreeContext#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 10, 2},
    // closed e.Functions#1 as range 6
    // closed e.Sentences#1 as range 10
    {refalrts::ictVarLeftSave, 0, 14, 2},
    {refalrts::ictVarLeftSave, 0, 16, 2},
    {refalrts::ictVarLeftSave, 0, 18, 2},
    // closed e.FreeContext#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/20 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Number#1/5 HalfReuse: >/8 AsIs: e.Functions#1/6 HalfReuse: (/9 HalfReuse: s.Number1 #5/12 } </21 & Map/22 (/23 & AddContextToSentence/24 e.FreeContext#2/2/25 )/27 Tile{ AsIs: e.Sentences#1/10 } >/28 )/29 Tile{ AsIs: )/13 AsIs: t.ErrorList#1/14 AsIs: t.SymTable#1/16 } (/30 Tile{ AsIs: t.Context#2/18 AsIs: e.FreeContext#2/2 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icAllocFunc, 0, 2, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icAllocFunc, 0, 1, 24},
    {refalrts::icCopyEVar, 25, 2, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icReinitSVar, 0, 5, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 30, 1, 0},
    {refalrts::icLinkBrackets, 20, 13, 0},
    {refalrts::icLinkBrackets, 9, 29, 0},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icLinkBrackets, 23, 27, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 18},
    {refalrts::icSpliceTile, 30, 30, 0},
    {refalrts::icSpliceTile, 13, 17, 0},
    {refalrts::icSpliceTile, 28, 29, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 21, 27, 0},
    {refalrts::icSpliceTile, 0, 12, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
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
  // </0 & lambda_DoParseBlock_0/4 s.Number#1/5 (/8 e.Functions#1/6 )/9 (/12 e.Sentences#1/10 )/13 t.ErrorList#1/14 t.SymTable#1/16 t.Context#2/18 e.FreeContext#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.Functions#1 as range 6
  // closed e.Sentences#1 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.FreeContext#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/20 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Number#1/5 HalfReuse: >/8 AsIs: e.Functions#1/6 HalfReuse: (/9 HalfReuse: s.Number1 #5/12 } </21 & Map/22 (/23 & AddContextToSentence/24 e.FreeContext#2/2/25 )/27 Tile{ AsIs: e.Sentences#1/10 } >/28 )/29 Tile{ AsIs: )/13 AsIs: t.ErrorList#1/14 AsIs: t.SymTable#1/16 } (/30 Tile{ AsIs: t.Context#2/18 AsIs: e.FreeContext#2/2 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], AddContextToSentence, "AddContextToSentence" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Inc, "Inc" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_svar( context[12], context[5] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[30], context[1] );
  refalrts::link_brackets( context[20], context[13] );
  refalrts::link_brackets( context[9], context[29] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[21] );
  refalrts::link_brackets( context[23], context[27] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[18];
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[21], context[27] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseSentence, "ParseSentence" },
    { DoParseBlock, "DoParseBlock" },
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { Inc, "Inc" },
    { Cntx_PopScope, "Cntx_PopScope" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" },
    { lambda_DoParseBlock_0, "lambda_DoParseBlock_0" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkEOF<int>::name,
    & ident_TkCloseBlock<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Unexpected EOF, expected \"}\"", 28}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:(E )T T T (E )E 
    // </0 & DoParseBlock/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 t.idxTVV#0/13 (/17 e.idxTVVVB#0/15 )/18 e.idxTVVVT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    {refalrts::ictVarLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    // closed e.idxTVVVB#0 as range 15
    // closed e.idxTVVVT#0 as range 2
    {refalrts::icOnFailGoTo, +42, 0, 0},
    //(S E )T T T (E )(#TkCloseBlockS )E 
    // </0 & DoParseBlock/4 (/7 s.Number#1/24 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.Sentences#1/15 )/18 (/21 # TkCloseBlock/23 s.LnNumber#1/25 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 38, 2},
    {refalrts::icBracketLeftSave, 0, 19, 38},
    {refalrts::icIdentLeftSave, 23, 1, 19},
    // closed e.Sentences#1 as range 15
    // closed e.Tail#1 as range 38(2)
    {refalrts::icSave, 0, 40, 5},
    {refalrts::icsVarLeft, 0, 24, 40},
    // closed e.Functions#1 as range 40(5)
    {refalrts::icsVarLeft, 0, 25, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumber#1/25 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & Cntx_PopScope/26 Tile{ AsIs: t.Context#1/13 } Tile{ HalfReuse: >/8 } </27 Tile{ HalfReuse: & CreateClosure /23 } & lambda_DoParseBlock_0/28 Tile{ AsIs: s.Number#1/24 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Functions#1/40(5) } Tile{ AsIs: )/22 } Tile{ AsIs: (/17 AsIs: e.Sentences#1/15 AsIs: )/18 } Tile{ AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 } Tile{ AsIs: >/1 } >/29 Tile{ AsIs: e.Tail#1/38(2) } Tile{ ]] }
    {refalrts::icAllocFunc, 0, 4, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icAllocFunc, 0, 7, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icUpdateFunc, 0, 6, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitFunc, 0, 5, 23},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 9, 12, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +49, 0, 0},
    //(S E )T T T (E )(#TkEOFS )E 
    // </0 & DoParseBlock/4 (/7 s.Number#1/24 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.Sentences#1/15 )/18 (/21 # TkEOF/23 s.LnNum#1/25 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 38, 2},
    {refalrts::icBracketLeftSave, 0, 19, 38},
    {refalrts::icIdentLeftSave, 23, 0, 19},
    // closed e.Sentences#1 as range 15
    // closed e.Tail#1 as range 38(2)
    {refalrts::icSave, 0, 40, 5},
    {refalrts::icsVarLeft, 0, 24, 40},
    // closed e.Functions#1 as range 40(5)
    {refalrts::icsVarLeft, 0, 25, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Inc/7 AsIs: s.Number#1/24 } >/26 Tile{ AsIs: e.Functions#1/40(5) } (/27 s.Number#1/24/28 Tile{ AsIs: e.Sentences#1/15 } )/29 )/30 </31 Tile{ HalfReuse: & EL_AddErrorAt/8 AsIs: t.ErrorList#1/9 } s.LnNum#1/25/32"Unexpected EOF, expected \"}\""/33 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/11 } (/35 </36 & Cntx_PopScope/37 Tile{ AsIs: t.Context#1/13 HalfReuse: >/17 } Tile{ AsIs: )/18 AsIs: (/21 AsIs: # TkEOF/23 AsIs: s.LnNum#1/25 AsIs: )/22 } Tile{ AsIs: e.Tail#1/38(2) } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icCopySTVar, 28, 24, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icCopySTVar, 32, 25, 0},
    {refalrts::icAllocString, 0, 0, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocFunc, 0, 4, 37},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 3, 7},
    {refalrts::icReinitFunc, 0, 2, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 35, 18, 0},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icLinkBrackets, 0, 30, 0},
    {refalrts::icLinkBrackets, 27, 29, 0},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceTile, 18, 22, 0},
    {refalrts::icSpliceTile, 13, 17, 0},
    {refalrts::icSpliceTile, 35, 37, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 32, 34, 0},
    {refalrts::icSpliceTile, 8, 10, 0},
    {refalrts::icSpliceTile, 29, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )T T T (E )E 
    // </0 & DoParseBlock/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.Sentences#1/15 )/18 e.Tokens#1/2 >/1
    // closed e.Functions#1 as range 5
    // closed e.Sentences#1 as range 15
    // closed e.Tokens#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </19 & DoParseBlock/20 Tile{ AsIs: </0 Reuse: & ParseSentence/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.Sentences#1/15 AsIs: )/18 AsIs: e.Tokens#1/2 AsIs: >/1 } >/21 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocFunc, 0, 1, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 19, 20, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:(E )T T T (E )E 
  // </0 & DoParseBlock/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 t.idxTVV#0/13 (/17 e.idxTVVVB#0/15 )/18 e.idxTVVVT#0/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxTVVVB#0 as range 15
  // closed e.idxTVVVT#0 as range 2
  do {
    refalrts::start_sentence();
    //(S E )T T T (E )(#TkCloseBlockS )E 
    // </0 & DoParseBlock/4 (/7 s.Number#1/24 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.Sentences#1/15 )/18 (/21 # TkCloseBlock/23 s.LnNumber#1/25 )/22 e.Tail#1/2 >/1
    context[38] = context[2];
    context[39] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[38], context[39] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.Sentences#1 as range 15
    // closed e.Tail#1 as range 38(2)
    context[40] = context[5];
    context[41] = context[6];
    if( ! refalrts::svar_left( context[24], context[40], context[41] ) )
      continue;
    // closed e.Functions#1 as range 40(5)
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumber#1/25 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & Cntx_PopScope/26 Tile{ AsIs: t.Context#1/13 } Tile{ HalfReuse: >/8 } </27 Tile{ HalfReuse: & CreateClosure /23 } & lambda_DoParseBlock_0/28 Tile{ AsIs: s.Number#1/24 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Functions#1/40(5) } Tile{ AsIs: )/22 } Tile{ AsIs: (/17 AsIs: e.Sentences#1/15 AsIs: )/18 } Tile{ AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 } Tile{ AsIs: >/1 } >/29 Tile{ AsIs: e.Tail#1/38(2) } Tile{ ]] }
    if( ! refalrts::alloc_name( context[26], Cntx_PopScope, "Cntx_PopScope" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], lambda_DoParseBlock_0, "lambda_DoParseBlock_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_name( context[23], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[9], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S E )T T T (E )(#TkEOFS )E 
    // </0 & DoParseBlock/4 (/7 s.Number#1/24 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.Sentences#1/15 )/18 (/21 # TkEOF/23 s.LnNum#1/25 )/22 e.Tail#1/2 >/1
    context[38] = context[2];
    context[39] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[38], context[39] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkEOF<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.Sentences#1 as range 15
    // closed e.Tail#1 as range 38(2)
    context[40] = context[5];
    context[41] = context[6];
    if( ! refalrts::svar_left( context[24], context[40], context[41] ) )
      continue;
    // closed e.Functions#1 as range 40(5)
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Inc/7 AsIs: s.Number#1/24 } >/26 Tile{ AsIs: e.Functions#1/40(5) } (/27 s.Number#1/24/28 Tile{ AsIs: e.Sentences#1/15 } )/29 )/30 </31 Tile{ HalfReuse: & EL_AddErrorAt/8 AsIs: t.ErrorList#1/9 } s.LnNum#1/25/32"Unexpected EOF, expected \"}\""/33 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/11 } (/35 </36 & Cntx_PopScope/37 Tile{ AsIs: t.Context#1/13 HalfReuse: >/17 } Tile{ AsIs: )/18 AsIs: (/21 AsIs: # TkEOF/23 AsIs: s.LnNum#1/25 AsIs: )/22 } Tile{ AsIs: e.Tail#1/38(2) } Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[28], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[31] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[33], context[34], "Unexpected EOF, expected \"}\"", 28 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[37], Cntx_PopScope, "Cntx_PopScope" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], Inc, "Inc" );
    refalrts::reinit_name( context[8], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_close_call( context[17] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[35], context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[31] );
    refalrts::link_brackets( context[0], context[30] );
    refalrts::link_brackets( context[27], context[29] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[18], context[22] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )T T T (E )E 
  // </0 & DoParseBlock/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.Sentences#1/15 )/18 e.Tokens#1/2 >/1
  // closed e.Functions#1 as range 5
  // closed e.Sentences#1 as range 15
  // closed e.Tokens#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </19 & DoParseBlock/20 Tile{ AsIs: </0 Reuse: & ParseSentence/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.Sentences#1/15 AsIs: )/18 AsIs: e.Tokens#1/2 AsIs: >/1 } >/21 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], DoParseBlock, "DoParseBlock" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ParseSentence, "ParseSentence" );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AddContextToSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CreateContext, "CreateContext" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & AddContextToSentence/4 e.Context#1/2 (/7 (/11 e.Pattern#1/9 )/12 (/15 e.Result#1/13 )/16 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 13, 5},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Context#1 as range 2
    // closed e.Pattern#1 as range 9
    // closed e.Result#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & CreateContext/1 } Tile{ AsIs: e.Context#1/2 } Tile{ HalfReuse: >/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#1/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icLinkBrackets, 0, 8, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 4, 12, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 8, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
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
  // </0 & AddContextToSentence/4 e.Context#1/2 (/7 (/11 e.Pattern#1/9 )/12 (/15 e.Result#1/13 )/16 )/8 >/1
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
  // closed e.Context#1 as range 2
  // closed e.Pattern#1 as range 9
  // closed e.Result#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & CreateContext/1 } Tile{ AsIs: e.Context#1/2 } Tile{ HalfReuse: >/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#1/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[1], CreateContext, "CreateContext" );
  refalrts::reinit_close_call( context[11] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CreateContext_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariable<int>::name,
    & ident_Brackets<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(S E )
    //GLOBAL GEN:(S E )
    // </0 & lambda_CreateContext_0/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //('e'E )
    // </0 & lambda_CreateContext_0/4 (/7 'e'/9 e.Index#2/5 )/8 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('e'), 9},
    // closed e.Index#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Brackets/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/9 AsIs: e.Index#2/5 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icReinitIdent, 0, 1, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 10, 1, 0},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(S E )
    // </0 & lambda_CreateContext_0/4 (/7 s.Mode#2/9 e.Index#2/5 )/8 >/1
    // closed e.Index#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: s.Mode#2/9 AsIs: e.Index#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
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
  //FAST GEN:(S E )
  //GLOBAL GEN:(S E )
  // </0 & lambda_CreateContext_0/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    refalrts::start_sentence();
    //('e'E )
    // </0 & lambda_CreateContext_0/4 (/7 'e'/9 e.Index#2/5 )/8 >/1
    if( ! refalrts::char_term( 'e', context[9] ) )
      continue;
    // closed e.Index#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Brackets/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/9 AsIs: e.Index#2/5 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], & ident_Brackets<int>::name );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_TkVariable<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(S E )
  // </0 & lambda_CreateContext_0/4 (/7 s.Mode#2/9 e.Index#2/5 )/8 >/1
  // closed e.Index#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: s.Mode#2/9 AsIs: e.Index#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TkVariable<int>::name );
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

static refalrts::FnResult CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_CreateContext_0, "lambda_CreateContext_0" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & CreateContext/4 e.Context#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Context#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_CreateContext_0/4 AsIs: e.Context#1/2 AsIs: >/1 ]] }
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
  // </0 & CreateContext/4 e.Context#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Context#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_CreateContext_0/4 AsIs: e.Context#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_CreateContext_0, "lambda_CreateContext_0" );
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

static refalrts::FnResult lambda_ParseSentence_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkReplace<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"orrect pattern termination", 26}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T T T (E )(E )E 
    //GLOBAL GEN:T T T (E )(S S E )E 
    // </0 & lambda_ParseSentence_0/4 t.idx#0/5 t.idxV#0/7 t.idxVV#0/9 (/13 e.idxVVVB#0/11 )/14 (/17 s.idxVVVTB#0/19 s.idxVVVTBV#0/20 e.idxVVVTBVV#0/15 )/18 e.idxVVVTT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    // closed e.idxVVVB#0 as range 11
    // closed e.idxVVVTT#0 as range 2
    {refalrts::icsVarLeft, 0, 19, 15},
    {refalrts::icsVarLeft, 0, 20, 15},
    // closed e.idxVVVTBVV#0 as range 15
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //T T T (E )(#TkReplaceS )E 
    // </0 & lambda_ParseSentence_0/4 t.ErrorList#2/5 t.SymTable#2/7 t.Context#2/9 (/13 e.Pattern#2/11 )/14 (/17 # TkReplace/19 s.LnNum#2/20 )/18 e.Tokens#2/2 >/1
    {refalrts::icIdentTerm, 0, 0, 19},
    {refalrts::icSave, 0, 24, 15},
    {refalrts::icEmpty, 0, 0, 24},
    // closed e.Pattern#2 as range 11
    // closed e.Tokens#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseSentence_0/4 {REMOVED TILE}  (/17 # TkReplace/19 s.LnNum#2/20 )/18 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#2/5 AsIs: t.SymTable#2/7 AsIs: t.Context#2/9 AsIs: (/13 AsIs: e.Pattern#2/11 AsIs: )/14 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 5, 14, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T T T (E )(S S E )E 
    // </0 & lambda_ParseSentence_0/4 t.ErrorList#2/5 t.SymTable#2/7 t.Context#2/9 (/13 e.Pattern#2/11 )/14 (/17 s.NextResultTerm#2/19 s.LnNum#2/20 e.Info#2/15 )/18 e.Tokens#2/2 >/1
    // closed e.Pattern#2 as range 11
    // closed e.Info#2 as range 15
    // closed e.Tokens#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.NextResultTerm#2/19 {REMOVED TILE}  e.Info#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: s.LnNum#2/20 } Tile{ HalfReuse: 'I'/17 } 'n'/21 Tile{ HalfReuse: 'c'/18 }"orrect pattern termination"/22 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#2/7 AsIs: t.Context#2/9 AsIs: (/13 AsIs: e.Pattern#2/11 AsIs: )/14 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
    {refalrts::icAllocChar, 0, 'n', 21},
    {refalrts::icAllocString, 0, 0, 22},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'I', 17},
    {refalrts::icReinitChar, 0, 'c', 18},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 7, 14, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 22, 23, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icTrash, 0, 0, 6},
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
  //FAST GEN:T T T (E )(E )E 
  //GLOBAL GEN:T T T (E )(S S E )E 
  // </0 & lambda_ParseSentence_0/4 t.idx#0/5 t.idxV#0/7 t.idxVV#0/9 (/13 e.idxVVVB#0/11 )/14 (/17 s.idxVVVTB#0/19 s.idxVVVTBV#0/20 e.idxVVVTBVV#0/15 )/18 e.idxVVVTT#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxVVVB#0 as range 11
  // closed e.idxVVVTT#0 as range 2
  if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVTBVV#0 as range 15
  do {
    refalrts::start_sentence();
    //T T T (E )(#TkReplaceS )E 
    // </0 & lambda_ParseSentence_0/4 t.ErrorList#2/5 t.SymTable#2/7 t.Context#2/9 (/13 e.Pattern#2/11 )/14 (/17 # TkReplace/19 s.LnNum#2/20 )/18 e.Tokens#2/2 >/1
    if( ! refalrts::ident_term(  & ident_TkReplace<int>::name, context[19] ) )
      continue;
    context[24] = context[15];
    context[25] = context[16];
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    // closed e.Pattern#2 as range 11
    // closed e.Tokens#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseSentence_0/4 {REMOVED TILE}  (/17 # TkReplace/19 s.LnNum#2/20 )/18 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#2/5 AsIs: t.SymTable#2/7 AsIs: t.Context#2/9 AsIs: (/13 AsIs: e.Pattern#2/11 AsIs: )/14 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[5], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //T T T (E )(S S E )E 
  // </0 & lambda_ParseSentence_0/4 t.ErrorList#2/5 t.SymTable#2/7 t.Context#2/9 (/13 e.Pattern#2/11 )/14 (/17 s.NextResultTerm#2/19 s.LnNum#2/20 e.Info#2/15 )/18 e.Tokens#2/2 >/1
  // closed e.Pattern#2 as range 11
  // closed e.Info#2 as range 15
  // closed e.Tokens#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.NextResultTerm#2/19 {REMOVED TILE}  e.Info#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: s.LnNum#2/20 } Tile{ HalfReuse: 'I'/17 } 'n'/21 Tile{ HalfReuse: 'c'/18 }"orrect pattern termination"/22 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#2/7 AsIs: t.Context#2/9 AsIs: (/13 AsIs: e.Pattern#2/11 AsIs: )/14 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_char( context[21], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], "orrect pattern termination", 26 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
  refalrts::reinit_char( context[17], 'I' );
  refalrts::reinit_char( context[18], 'c' );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[14] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseSentence_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseResult, "ParseResult" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseSentence_1/4 (/7 e.Functions#1/5 )/8 t.ErrorList#2/9 t.SymTable#2/11 t.Context#2/13 (/17 e.Pattern#2/15 )/18 e.Tokens#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Functions#1 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    {refalrts::ictVarLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    // closed e.Pattern#2 as range 15
    // closed e.Tokens#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/19 Tile{ AsIs: e.Pattern#2/15 } )/20 Tile{ AsIs: </0 Reuse: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#2/9 AsIs: t.SymTable#2/11 AsIs: t.Context#2/13 AsIs: (/17 } )/21 (/22 Tile{ AsIs: )/18 AsIs: e.Tokens#2/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 22, 18, 0},
    {refalrts::icLinkBrackets, 17, 21, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetRes, 0, 0, 18},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 0, 17, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 19, 19, 0},
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
  // </0 & lambda_ParseSentence_1/4 (/7 e.Functions#1/5 )/8 t.ErrorList#2/9 t.SymTable#2/11 t.Context#2/13 (/17 e.Pattern#2/15 )/18 e.Tokens#2/2 >/1
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
  // closed e.Functions#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Pattern#2 as range 15
  // closed e.Tokens#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/19 Tile{ AsIs: e.Pattern#2/15 } )/20 Tile{ AsIs: </0 Reuse: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#2/9 AsIs: t.SymTable#2/11 AsIs: t.Context#2/13 AsIs: (/17 } )/21 (/22 Tile{ AsIs: )/18 AsIs: e.Tokens#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ParseResult, "ParseResult" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[22], context[18] );
  refalrts::link_brackets( context[17], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[18];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[0], context[17] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseSentence_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" },
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkCloseBlock<int>::name,
    & ident_TkSemicolon<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"icolon", 6},
    {"se", 2},
    {"ed semicolon", 12},
    {"Mis", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )(E )(E )T T T (E )T E 
    //GLOBAL GEN:(E )(E )(E )T T T (E )T E 
    // </0 & lambda_ParseSentence_2/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 t.idxTTT#0/17 t.idxTTTV#0/19 t.idxTTTVV#0/21 (/25 e.idxTTTVVVB#0/23 )/26 t.idxTTTVVVT#0/27 e.idxTTTVVVTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTB#0 as range 13
    {refalrts::ictVarLeftSave, 0, 17, 2},
    {refalrts::ictVarLeftSave, 0, 19, 2},
    {refalrts::ictVarLeftSave, 0, 21, 2},
    {refalrts::icBracketLeftSave, 0, 23, 2},
    // closed e.idxTTTVVVB#0 as range 23
    {refalrts::ictVarLeftSave, 0, 27, 2},
    // closed e.idxTTTVVVTV#0 as range 2
    {refalrts::icOnFailGoTo, +31, 0, 0},
    //(E )(E )(E )T T T (E )(#TkSemicolonS )E 
    // </0 & lambda_ParseSentence_2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Functions#2/13 )/16 t.ErrorList#2/17 t.SymTable#2/19 t.Context#2/21 (/25 e.Result#2/23 )/26 (/27 # TkSemicolon/31 s.LnNum#2/32 )/28 e.Tokens#2/2 >/1
    {refalrts::icBracketTerm, 0, 29, 27},
    {refalrts::icIdentLeftSave, 31, 1, 29},
    // closed e.Sentences#1 as range 5
    // closed e.Pattern#2 as range 9
    // closed e.Functions#2 as range 13
    // closed e.Result#2 as range 23
    // closed e.Tokens#2 as range 2
    {refalrts::icsVarLeft, 0, 32, 29},
    {refalrts::icEmpty, 0, 0, 29},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#2/32 )/28 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/13 } Tile{ AsIs: )/16 AsIs: t.ErrorList#2/17 AsIs: t.SymTable#2/19 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & Cntx_ResetAfterSentence/25 } Tile{ AsIs: t.Context#2/21 } Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: e.Sentences#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Result#2/23 } Tile{ AsIs: )/26 HalfReuse: )/27 HalfReuse: )/31 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
    {refalrts::icReinitFunc, 0, 1, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 7, 31, 0},
    {refalrts::icLinkBrackets, 8, 27, 0},
    {refalrts::icLinkBrackets, 15, 26, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icLinkBrackets, 0, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 26, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 4, 15, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 16, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +46, 0, 0},
    //(E )(E )(E )T T T (E )(#TkCloseBlockS )E 
    // </0 & lambda_ParseSentence_2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Functions#2/13 )/16 t.ErrorList#2/17 t.SymTable#2/19 t.Context#2/21 (/25 e.Result#2/23 )/26 (/27 # TkCloseBlock/31 s.LnNum#2/32 )/28 e.Tokens#2/2 >/1
    {refalrts::icBracketTerm, 0, 29, 27},
    {refalrts::icIdentLeftSave, 31, 0, 29},
    // closed e.Sentences#1 as range 5
    // closed e.Pattern#2 as range 9
    // closed e.Functions#2 as range 13
    // closed e.Result#2 as range 23
    // closed e.Tokens#2 as range 2
    {refalrts::icsVarLeft, 0, 32, 29},
    {refalrts::icEmpty, 0, 0, 29},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/13 } )/33 </34 Tile{ HalfReuse: & EL_AddErrorAt/16 AsIs: t.ErrorList#2/17 } s.LnNum#2/32/35"Mis"/36 Tile{ HalfReuse: 's'/25 }"ed semicolon"/38 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#2/19 } </40 & Cntx_ResetAfterSentence/41 Tile{ AsIs: t.Context#2/21 } Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: e.Sentences#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Result#2/23 } )/42 )/43 Tile{ AsIs: )/26 AsIs: (/27 AsIs: # TkCloseBlock/31 AsIs: s.LnNum#2/32 AsIs: )/28 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 34},
    {refalrts::icCopySTVar, 35, 32, 0},
    {refalrts::icAllocString, 0, 3, 36},
    {refalrts::icAllocString, 0, 2, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 40},
    {refalrts::icAllocFunc, 0, 1, 41},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitFunc, 0, 2, 16},
    {refalrts::icReinitChar, 0, 's', 25},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icLinkBrackets, 7, 26, 0},
    {refalrts::icLinkBrackets, 8, 43, 0},
    {refalrts::icLinkBrackets, 15, 42, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icLinkBrackets, 0, 33, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 26, 28, 0},
    {refalrts::icSpliceTile, 42, 43, 0},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 4, 15, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 40, 41, 0},
    {refalrts::icSpliceTile, 19, 20, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 35, 37, 0},
    {refalrts::icSpliceTile, 16, 18, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )(E )(E )T T T (E )T E 
    // </0 & lambda_ParseSentence_2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Functions#2/13 )/16 t.ErrorList#2/17 t.SymTable#2/19 t.Context#2/21 (/25 e.Result#2/23 )/26 t.Unexpected#2/27 e.Tokens#2/2 >/1
    // closed e.Sentences#1 as range 5
    // closed e.Pattern#2 as range 9
    // closed e.Functions#2 as range 13
    // closed e.Result#2 as range 23
    // closed e.Tokens#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/13 } )/29 </30 Tile{ HalfReuse: & EL_AddUnexpected/16 AsIs: t.ErrorList#2/17 } t.Unexpected#2/27/31"se"/33 Tile{ HalfReuse: 'm'/25 }"icolon"/35 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#2/19 } </37 & Cntx_ResetAfterSentence/38 Tile{ AsIs: t.Context#2/21 } Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: e.Sentences#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Result#2/23 } )/39 )/40 Tile{ AsIs: )/26 AsIs: t.Unexpected#2/27 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icCopyEVar, 31, 27, 0},
    {refalrts::icAllocString, 0, 1, 33},
    {refalrts::icAllocString, 0, 0, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 37},
    {refalrts::icAllocFunc, 0, 1, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitFunc, 0, 0, 16},
    {refalrts::icReinitChar, 0, 'm', 25},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icLinkBrackets, 7, 26, 0},
    {refalrts::icLinkBrackets, 8, 40, 0},
    {refalrts::icLinkBrackets, 15, 39, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 0, 29, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 26, 28, 0},
    {refalrts::icSpliceTile, 39, 40, 0},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 4, 15, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 37, 38, 0},
    {refalrts::icSpliceTile, 19, 20, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 31, 34, 0},
    {refalrts::icSpliceTile, 16, 18, 0},
    {refalrts::icSpliceTile, 29, 30, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
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
  //FAST GEN:(E )(E )(E )T T T (E )T E 
  //GLOBAL GEN:(E )(E )(E )T T T (E )T E 
  // </0 & lambda_ParseSentence_2/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 t.idxTTT#0/17 t.idxTTTV#0/19 t.idxTTTVV#0/21 (/25 e.idxTTTVVVB#0/23 )/26 t.idxTTTVVVT#0/27 e.idxTTTVVVTV#0/2 >/1
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
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.idxTTTVVVB#0 as range 23
  context[28] = refalrts::tvar_left( context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTTVVVTV#0 as range 2
  do {
    refalrts::start_sentence();
    //(E )(E )(E )T T T (E )(#TkSemicolonS )E 
    // </0 & lambda_ParseSentence_2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Functions#2/13 )/16 t.ErrorList#2/17 t.SymTable#2/19 t.Context#2/21 (/25 e.Result#2/23 )/26 (/27 # TkSemicolon/31 s.LnNum#2/32 )/28 e.Tokens#2/2 >/1
    context[29] = 0;
    context[30] = 0;
    if( ! refalrts::brackets_term( context[29], context[30], context[27] ) )
      continue;
    context[31] = refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[29], context[30] );
    if( ! context[31] )
      continue;
    // closed e.Sentences#1 as range 5
    // closed e.Pattern#2 as range 9
    // closed e.Functions#2 as range 13
    // closed e.Result#2 as range 23
    // closed e.Tokens#2 as range 2
    if( ! refalrts::svar_left( context[32], context[29], context[30] ) )
      continue;
    if( ! refalrts::empty_seq( context[29], context[30] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#2/32 )/28 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/13 } Tile{ AsIs: )/16 AsIs: t.ErrorList#2/17 AsIs: t.SymTable#2/19 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & Cntx_ResetAfterSentence/25 } Tile{ AsIs: t.Context#2/21 } Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: e.Sentences#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Result#2/23 } Tile{ AsIs: )/26 HalfReuse: )/27 HalfReuse: )/31 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[1] );
    refalrts::reinit_name( context[25], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" );
    refalrts::reinit_close_call( context[4] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[27] );
    refalrts::reinit_close_bracket( context[31] );
    refalrts::link_brackets( context[7], context[31] );
    refalrts::link_brackets( context[8], context[27] );
    refalrts::link_brackets( context[15], context[26] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[1] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[26], context[31] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )T T T (E )(#TkCloseBlockS )E 
    // </0 & lambda_ParseSentence_2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Functions#2/13 )/16 t.ErrorList#2/17 t.SymTable#2/19 t.Context#2/21 (/25 e.Result#2/23 )/26 (/27 # TkCloseBlock/31 s.LnNum#2/32 )/28 e.Tokens#2/2 >/1
    context[29] = 0;
    context[30] = 0;
    if( ! refalrts::brackets_term( context[29], context[30], context[27] ) )
      continue;
    context[31] = refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[29], context[30] );
    if( ! context[31] )
      continue;
    // closed e.Sentences#1 as range 5
    // closed e.Pattern#2 as range 9
    // closed e.Functions#2 as range 13
    // closed e.Result#2 as range 23
    // closed e.Tokens#2 as range 2
    if( ! refalrts::svar_left( context[32], context[29], context[30] ) )
      continue;
    if( ! refalrts::empty_seq( context[29], context[30] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/13 } )/33 </34 Tile{ HalfReuse: & EL_AddErrorAt/16 AsIs: t.ErrorList#2/17 } s.LnNum#2/32/35"Mis"/36 Tile{ HalfReuse: 's'/25 }"ed semicolon"/38 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#2/19 } </40 & Cntx_ResetAfterSentence/41 Tile{ AsIs: t.Context#2/21 } Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: e.Sentences#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Result#2/23 } )/42 )/43 Tile{ AsIs: )/26 AsIs: (/27 AsIs: # TkCloseBlock/31 AsIs: s.LnNum#2/32 AsIs: )/28 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[32]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[36], context[37], "Mis", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[38], context[39], "ed semicolon", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[41], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[43] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_name( context[16], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_char( context[25], 's' );
    refalrts::reinit_close_call( context[4] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[7], context[26] );
    refalrts::link_brackets( context[8], context[43] );
    refalrts::link_brackets( context[15], context[42] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[34] );
    refalrts::link_brackets( context[0], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )(E )(E )T T T (E )T E 
  // </0 & lambda_ParseSentence_2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Functions#2/13 )/16 t.ErrorList#2/17 t.SymTable#2/19 t.Context#2/21 (/25 e.Result#2/23 )/26 t.Unexpected#2/27 e.Tokens#2/2 >/1
  // closed e.Sentences#1 as range 5
  // closed e.Pattern#2 as range 9
  // closed e.Functions#2 as range 13
  // closed e.Result#2 as range 23
  // closed e.Tokens#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/13 } )/29 </30 Tile{ HalfReuse: & EL_AddUnexpected/16 AsIs: t.ErrorList#2/17 } t.Unexpected#2/27/31"se"/33 Tile{ HalfReuse: 'm'/25 }"icolon"/35 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#2/19 } </37 & Cntx_ResetAfterSentence/38 Tile{ AsIs: t.Context#2/21 } Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: e.Sentences#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Result#2/23 } )/39 )/40 Tile{ AsIs: )/26 AsIs: t.Unexpected#2/27 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[31], context[32], context[27], context[28]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[33], context[34], "se", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[35], context[36], "icolon", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[38], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_name( context[16], EL_AddUnexpected, "EL_AddUnexpected" );
  refalrts::reinit_char( context[25], 'm' );
  refalrts::reinit_close_call( context[4] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::link_brackets( context[7], context[26] );
  refalrts::link_brackets( context[8], context[40] );
  refalrts::link_brackets( context[15], context[39] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[0], context[29] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[31], context[34] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParsePattern, "ParsePattern" },
    { Fetch, "Fetch" },
    { lambda_ParseSentence_2, "lambda_ParseSentence_2" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { lambda_ParseSentence_1, "lambda_ParseSentence_1" },
    { lambda_ParseSentence_0, "lambda_ParseSentence_0" },
    { Seq, "Seq" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ParseSentence/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.Sentences#1/15 )/18 e.Tokens#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Functions#1 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    {refalrts::ictVarLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    // closed e.Sentences#1 as range 15
    // closed e.Tokens#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & ParsePattern/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 } )/19 (/20 Tile{ AsIs: )/18 AsIs: e.Tokens#1/2 AsIs: >/1 } </21 & Seq/22 & lambda_ParseSentence_0/23 </24 & CreateClosure /25 & lambda_ParseSentence_1/26 (/27 Tile{ AsIs: e.Functions#1/5 } )/28 >/29 </30 & CreateClosure /31 & lambda_ParseSentence_2/32 (/33 Tile{ AsIs: e.Sentences#1/15 } )/34 >/35 >/36 >/37 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icAllocFunc, 0, 6, 22},
    {refalrts::icAllocFunc, 0, 5, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icAllocFunc, 0, 3, 25},
    {refalrts::icAllocFunc, 0, 4, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 3, 31},
    {refalrts::icAllocFunc, 0, 2, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 20, 18, 0},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 34, 37, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 28, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 21, 27, 0},
    {refalrts::icSpliceTile, 18, 1, 0},
    {refalrts::icSpliceTile, 19, 20, 0},
    {refalrts::icSpliceTile, 8, 17, 0},
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
  // </0 & ParseSentence/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.Sentences#1/15 )/18 e.Tokens#1/2 >/1
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
  // closed e.Functions#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Sentences#1 as range 15
  // closed e.Tokens#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & ParsePattern/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 } )/19 (/20 Tile{ AsIs: )/18 AsIs: e.Tokens#1/2 AsIs: >/1 } </21 & Seq/22 & lambda_ParseSentence_0/23 </24 & CreateClosure /25 & lambda_ParseSentence_1/26 (/27 Tile{ AsIs: e.Functions#1/5 } )/28 >/29 </30 & CreateClosure /31 & lambda_ParseSentence_2/32 (/33 Tile{ AsIs: e.Sentences#1/15 } )/34 >/35 >/36 >/37 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], lambda_ParseSentence_0, "lambda_ParseSentence_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], lambda_ParseSentence_1, "lambda_ParseSentence_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], lambda_ParseSentence_2, "lambda_ParseSentence_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], ParsePattern, "ParsePattern" );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[33], context[34] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[20], context[18] );
  refalrts::link_brackets( context[17], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[34], context[37] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[28], context[33] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[21], context[27] );
  res = refalrts::splice_evar( res, context[18], context[1] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[8], context[17] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParsePattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParsePattern, "ParsePattern" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariable<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParsePattern_0/4 t.SymTable#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/17 e.Index#1/15 )/18 (/21 e.Tail#1/19 )/22 t.ErrorList#2/23 t.Context#2/25 s.Mode#2/27 s.Depth#2/28 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 7, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    {refalrts::icBracketLeftSave, 0, 19, 2},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 11
    // closed e.Index#1 as range 15
    // closed e.Tail#1 as range 19
    {refalrts::ictVarLeftSave, 0, 23, 2},
    {refalrts::ictVarLeftSave, 0, 25, 2},
    {refalrts::icsVarLeft, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 28, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParsePattern/4 } Tile{ AsIs: t.ErrorList#2/23 } Tile{ AsIs: t.SymTable#1/5 } Tile{ AsIs: t.Context#2/25 } Tile{ AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # TkVariable/17 } Tile{ AsIs: s.Mode#2/27 } Tile{ AsIs: e.Index#1/15 } Tile{ AsIs: s.Depth#2/28 } Tile{ AsIs: )/18 HalfReuse: )/21 AsIs: e.Tail#1/19 HalfReuse: >/22 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitIdent, 0, 0, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 21, 0},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 18, 22, 0},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 9, 17, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
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
  // </0 & lambda_ParsePattern_0/4 t.SymTable#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/17 e.Index#1/15 )/18 (/21 e.Tail#1/19 )/22 t.ErrorList#2/23 t.Context#2/25 s.Mode#2/27 s.Depth#2/28 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.MultiBracket#1 as range 7
  // closed e.Scanned#1 as range 11
  // closed e.Index#1 as range 15
  // closed e.Tail#1 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParsePattern/4 } Tile{ AsIs: t.ErrorList#2/23 } Tile{ AsIs: t.SymTable#1/5 } Tile{ AsIs: t.Context#2/25 } Tile{ AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # TkVariable/17 } Tile{ AsIs: s.Mode#2/27 } Tile{ AsIs: e.Index#1/15 } Tile{ AsIs: s.Depth#2/28 } Tile{ AsIs: )/18 HalfReuse: )/21 AsIs: e.Tail#1/19 HalfReuse: >/22 } Tile{ ]] }
  refalrts::update_name( context[4], ParsePattern, "ParsePattern" );
  refalrts::reinit_open_bracket( context[14] );
  refalrts::reinit_ident( context[17], & ident_TkVariable<int>::name );
  refalrts::reinit_close_bracket( context[21] );
  refalrts::reinit_close_call( context[22] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[13], context[21] );
  refalrts::link_brackets( context[14], context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[9], context[17] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParsePattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParsePattern, "ParsePattern" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariable<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParsePattern_1/4 t.SymTable#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/17 e.Index#1/15 )/18 (/21 e.Tail#1/19 )/22 t.ErrorList#2/23 t.Context#2/25 s.Mode#2/27 s.Depth#2/28 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 7, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    {refalrts::icBracketLeftSave, 0, 19, 2},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 11
    // closed e.Index#1 as range 15
    // closed e.Tail#1 as range 19
    {refalrts::ictVarLeftSave, 0, 23, 2},
    {refalrts::ictVarLeftSave, 0, 25, 2},
    {refalrts::icsVarLeft, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 28, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParsePattern/4 } Tile{ AsIs: t.ErrorList#2/23 } Tile{ AsIs: t.SymTable#1/5 } Tile{ AsIs: t.Context#2/25 } Tile{ AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # TkVariable/17 } Tile{ AsIs: s.Mode#2/27 } Tile{ AsIs: e.Index#1/15 } Tile{ AsIs: s.Depth#2/28 } Tile{ AsIs: )/18 HalfReuse: )/21 AsIs: e.Tail#1/19 HalfReuse: >/22 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitIdent, 0, 0, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 21, 0},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 18, 22, 0},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 9, 17, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
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
  // </0 & lambda_ParsePattern_1/4 t.SymTable#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/17 e.Index#1/15 )/18 (/21 e.Tail#1/19 )/22 t.ErrorList#2/23 t.Context#2/25 s.Mode#2/27 s.Depth#2/28 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.MultiBracket#1 as range 7
  // closed e.Scanned#1 as range 11
  // closed e.Index#1 as range 15
  // closed e.Tail#1 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParsePattern/4 } Tile{ AsIs: t.ErrorList#2/23 } Tile{ AsIs: t.SymTable#1/5 } Tile{ AsIs: t.Context#2/25 } Tile{ AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # TkVariable/17 } Tile{ AsIs: s.Mode#2/27 } Tile{ AsIs: e.Index#1/15 } Tile{ AsIs: s.Depth#2/28 } Tile{ AsIs: )/18 HalfReuse: )/21 AsIs: e.Tail#1/19 HalfReuse: >/22 } Tile{ ]] }
  refalrts::update_name( context[4], ParsePattern, "ParsePattern" );
  refalrts::reinit_open_bracket( context[14] );
  refalrts::reinit_ident( context[17], & ident_TkVariable<int>::name );
  refalrts::reinit_close_bracket( context[21] );
  refalrts::reinit_close_call( context[22] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[13], context[21] );
  refalrts::link_brackets( context[14], context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[9], context[17] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParsePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromBracket, "StrFromBracket" },
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { ST_GetAnyName, "ST_GetAnyName" },
    { ST_AddFunctionCall, "ST_AddFunctionCall" },
    { Cntx_AddVariable, "Cntx_AddVariable" },
    { CheckAddVariable, "CheckAddVariable" },
    { lambda_ParsePattern_1, "lambda_ParsePattern_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" },
    { Cntx_AddNewVariable, "Cntx_AddNewVariable" },
    { lambda_ParsePattern_0, "lambda_ParsePattern_0" },
    { ST_AddIdent, "ST_AddIdent" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Close<int>::name,
    & ident_TkCloseCall<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_Open<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_TkName<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name,
    & ident_TkRedefinition<int>::name,
    & ident_TkVariable<int>::name,
    & ident_TkIdentMarker<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_TkNumber<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"alanced bracket \"", 17},
    {"anced bracket \"", 15},
    {"Unb", 3},
    {"balanced bracket \"", 18},
    {"Unexpected call bracket in pattern expression", 45},
    {"Expected name after \"[\"", 23},
    {" redefinition sign", 18},
    {"ak", 2},
    {"d name after \'#\'", 16},
    {"is", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:T T T (E )(E )E 
    // </0 & ParsePattern/4 t.idx#0/5 t.idxV#0/7 t.idxVV#0/9 (/13 e.idxVVVB#0/11 )/14 (/17 e.idxVVVTB#0/15 )/18 e.idxVVVTT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    // closed e.idxVVVB#0 as range 11
    // closed e.idxVVVTB#0 as range 15
    // closed e.idxVVVTT#0 as range 2
    {refalrts::icOnFailGoTo, +20, 0, 0},
    //T T T (E )(E )(#TkCharS S )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkChar/23 s.LnNum#1/24 s.Char#1/25 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 16, 19},
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 24, 19},
    {refalrts::icsVarLeft, 0, 25, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.LnNum#1/24 s.Char#1/25 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkChar/21 HalfReuse: s.Char1 #25/23 } )/26 Tile{ AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitIdent, 0, 16, 21},
    {refalrts::icReinitSVar, 0, 25, 23},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 22, 0},
    {refalrts::icLinkBrackets, 18, 26, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSetRes, 0, 0, 22},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icTrash, 0, 0, 23},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    //T T T (E )(E )(#TkNumberS S )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkNumber/23 s.LnNum#1/24 s.Number#1/25 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 15, 19},
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 24, 19},
    {refalrts::icsVarLeft, 0, 25, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.LnNum#1/24 s.Number#1/25 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkNumber/21 HalfReuse: s.Number1 #25/23 } )/26 Tile{ AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitIdent, 0, 15, 21},
    {refalrts::icReinitSVar, 0, 25, 23},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 22, 0},
    {refalrts::icLinkBrackets, 18, 26, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSetRes, 0, 0, 22},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icTrash, 0, 0, 23},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    //T T T (E )(E )(#TkNameS E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkName/23 s.LnNum#1/24 e.Name#1/19 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 8, 19},
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 24, 19},
    // closed e.Name#1 as range 19
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 } </25 & ST_AddFunctionCall/26 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: s.LnNum#1/24 } e.Name#1/19/27 Tile{ HalfReuse: >/23 } Tile{ AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkName/21 } Tile{ AsIs: e.Name#1/19 } )/29 Tile{ AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocFunc, 0, 3, 26},
    {refalrts::icCopyEVar, 27, 19, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitIdent, 0, 8, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 22, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSetRes, 0, 0, 22},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 9, 21, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    //T T T (E )(E )(#TkIdentMarkerS )(#TkNameS E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkIdentMarker/23 s.LnNumMarker#1/29 )/22 (/26 # TkName/28 s.LnNumName#1/30 e.Name#1/24 )/27 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 13, 19},
    {refalrts::icBracketLeftSave, 0, 24, 46},
    {refalrts::icIdentLeftSave, 28, 8, 24},
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 29, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icsVarLeft, 0, 30, 24},
    // closed e.Name#1 as range 24
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumMarker#1/29 {REMOVED TILE}  {REMOVED TILE}  s.LnNumName#1/30 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: </26 HalfReuse: & ST_AddIdent/28 } Tile{ AsIs: t.SymTable#1/7 } e.Name#1/24/31 Tile{ HalfReuse: >/23 } Tile{ AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkIdentifier/21 } Tile{ AsIs: e.Name#1/24 } Tile{ AsIs: )/22 } Tile{ AsIs: )/27 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 31, 24, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icReinitFunc, 0, 11, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitIdent, 0, 14, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 27, 0},
    {refalrts::icLinkBrackets, 18, 22, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSetRes, 0, 0, 27},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceTile, 9, 21, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceTile, 31, 32, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 26, 28, 0},
    {refalrts::icTrash, 0, 0, 6},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    //T T T (E )(E )(#TkIdentMarkerS )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkIdentMarker/23 s.LnNum#1/24 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 13, 19},
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 24, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </25 & EL_AddErrorAt/26 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/24 HalfReuse: 'M'/22 }"is"/27 Tile{ HalfReuse: 's'/21 HalfReuse: 'e'/23 }"d name after \'#\'"/29 >/31 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/46(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocFunc, 0, 1, 26},
    {refalrts::icAllocString, 0, 9, 27},
    {refalrts::icAllocString, 0, 8, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icReinitChar, 0, 'M', 22},
    {refalrts::icReinitChar, 0, 's', 21},
    {refalrts::icReinitChar, 0, 'e', 23},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 46},
    {refalrts::icSpliceTile, 7, 18, 0},
    {refalrts::icSpliceTile, 29, 31, 0},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceTile, 24, 22, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +47, 0, 0},
    //T T T (E )(E )(#TkVariableS S E )(#TkRedefinitionS )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkVariable/23 s.LnNumVar#1/29 s.Mode#1/30 e.Index#1/19 )/22 (/26 # TkRedefinition/28 s.LnNumRedef#1/31 )/27 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 12, 19},
    {refalrts::icBracketLeftSave, 0, 24, 46},
    {refalrts::icIdentLeftSave, 28, 11, 24},
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 29, 19},
    {refalrts::icsVarLeft, 0, 30, 19},
    // closed e.Index#1 as range 19
    {refalrts::icsVarLeft, 0, 31, 24},
    {refalrts::icEmpty, 0, 0, 24},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumRedef#1/31 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </32 & Fetch/33 Tile{ AsIs: </0 Reuse: & CheckAddVariable/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Context#1/9 } Tile{ HalfReuse: & Cntx_AddNewVariable/23 AsIs: s.LnNumVar#1/29 AsIs: s.Mode#1/30 AsIs: e.Index#1/19 HalfReuse: >/22 HalfReuse: </26 HalfReuse: & CreateClosure /28 } & lambda_ParsePattern_0/34 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 AsIs: (/21 } e.Index#1/19/35 Tile{ AsIs: )/27 } (/37 Tile{ AsIs: e.Tail#1/46(2) } )/38 >/39 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icAllocFunc, 0, 8, 33},
    {refalrts::icAllocFunc, 0, 10, 34},
    {refalrts::icCopyEVar, 35, 19, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icUpdateFunc, 0, 5, 4},
    {refalrts::icReinitFunc, 0, 9, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icReinitFunc, 0, 7, 28},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icLinkBrackets, 37, 38, 0},
    {refalrts::icLinkBrackets, 21, 27, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icSpliceEVar, 0, 0, 46},
    {refalrts::icSpliceTile, 37, 37, 0},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceTile, 13, 21, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 34, 34, 0},
    {refalrts::icSpliceTile, 23, 28, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 0, 6, 0},
    {refalrts::icSpliceTile, 32, 33, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    //T T T (E )(E )(#TkVariableS S E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkVariable/23 s.LnNum#1/24 s.Mode#1/25 e.Index#1/19 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 12, 19},
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 24, 19},
    {refalrts::icsVarLeft, 0, 25, 19},
    // closed e.Index#1 as range 19
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </26 & Fetch/27 Tile{ AsIs: </0 Reuse: & CheckAddVariable/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Context#1/9 } Tile{ HalfReuse: & Cntx_AddVariable/23 AsIs: s.LnNum#1/24 AsIs: s.Mode#1/25 AsIs: e.Index#1/19 HalfReuse: >/22 } </28 & CreateClosure /29 & lambda_ParsePattern_1/30 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 AsIs: (/21 } e.Index#1/19/31 )/33 (/34 Tile{ AsIs: e.Tail#1/46(2) } )/35 >/36 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocFunc, 0, 8, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icAllocFunc, 0, 7, 29},
    {refalrts::icAllocFunc, 0, 6, 30},
    {refalrts::icCopyEVar, 31, 19, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icUpdateFunc, 0, 5, 4},
    {refalrts::icReinitFunc, 0, 4, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icLinkBrackets, 34, 35, 0},
    {refalrts::icLinkBrackets, 21, 33, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceEVar, 0, 0, 46},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icSpliceTile, 31, 32, 0},
    {refalrts::icSpliceTile, 13, 21, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 28, 30, 0},
    {refalrts::icSpliceTile, 23, 22, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 0, 6, 0},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    //T T T (E )(E )(#TkRedefinitionS )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkRedefinition/23 s.LnNum#1/24 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 11, 19},
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 24, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </25 & EL_AddErrorAt/26 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/24 HalfReuse: 'N'/22 }"ak"/27 Tile{ HalfReuse: 'e'/21 HalfReuse: 'd'/23 }" redefinition sign"/29 >/31 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/46(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocFunc, 0, 1, 26},
    {refalrts::icAllocString, 0, 7, 27},
    {refalrts::icAllocString, 0, 6, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icReinitChar, 0, 'N', 22},
    {refalrts::icReinitChar, 0, 'e', 21},
    {refalrts::icReinitChar, 0, 'd', 23},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 46},
    {refalrts::icSpliceTile, 7, 18, 0},
    {refalrts::icSpliceTile, 29, 31, 0},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceTile, 24, 22, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    //T T T (E )(E )(#OpenS #TkOpenBracket)E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNum#1/25 # TkOpenBracket/24 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 4, 19},
    {refalrts::icIdentRightSave, 24, 10, 19},
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 25, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # Brackets/17 } Tile{ AsIs: s.LnNum#1/25 } Tile{ Reuse: # TkCloseBracket/23 } Tile{ AsIs: e.Scanned#1/15 } Tile{ AsIs: )/18 HalfReuse: )/21 } Tile{ HalfReuse: (/24 AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitIdent, 0, 2, 17},
    {refalrts::icUpdateIdent, 0, 9, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 24, 22, 0},
    {refalrts::icLinkBrackets, 13, 21, 0},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icSetRes, 0, 0, 24},
    {refalrts::icSpliceTile, 18, 21, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    //T T T (E )(E )(#OpenS #TkOpenADT)(#TkNameS E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNumBracket#1/30 # TkOpenADT/24 )/22 (/27 # TkName/29 s.LnNumName#1/31 e.Name#1/25 )/28 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 4, 19},
    {refalrts::icIdentRightSave, 24, 7, 19},
    {refalrts::icBracketLeftSave, 0, 25, 46},
    {refalrts::icIdentLeftSave, 29, 8, 25},
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 30, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icsVarLeft, 0, 31, 25},
    // closed e.Name#1 as range 25
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumBracket#1/30 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 } </32 & ST_AddFunctionCall/33 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: s.LnNumName#1/31 } Tile{ AsIs: e.Name#1/25 } >/34 Tile{ AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # ADT_Brackets/17 } Tile{ HalfReuse: s.LnNumBracket1 #30/21 Reuse: # TkCloseADT/23 } Tile{ AsIs: e.Scanned#1/15 } Tile{ HalfReuse: )/24 AsIs: )/22 AsIs: (/27 HalfReuse: (/29 } e.Name#1/25/35 Tile{ AsIs: )/18 } Tile{ AsIs: )/28 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icAllocFunc, 0, 3, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icCopyEVar, 35, 25, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitIdent, 0, 5, 17},
    {refalrts::icReinitSVar, 0, 30, 21},
    {refalrts::icUpdateIdent, 0, 6, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icLinkBrackets, 29, 18, 0},
    {refalrts::icLinkBrackets, 13, 22, 0},
    {refalrts::icLinkBrackets, 14, 24, 0},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSetRes, 0, 0, 28},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceTile, 24, 29, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icSpliceTile, 9, 17, 0},
    {refalrts::icSpliceTile, 34, 34, 0},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceTile, 31, 31, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 32, 33, 0},
    {refalrts::icTrash, 0, 0, 6},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +44, 0, 0},
    //T T T (E )(E )(#OpenS #TkOpenADT)E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNum#1/25 # TkOpenADT/24 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 4, 19},
    {refalrts::icIdentRightSave, 24, 7, 19},
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 25, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/25 }"Expected name after \"[\""/28 >/30 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # ADT_Brackets/17 } s.LnNum#1/25/31 # TkCloseADT/32 Tile{ AsIs: e.Scanned#1/15 } )/33 Tile{ AsIs: )/18 AsIs: (/21 HalfReuse: (/23 } </34 & ST_GetAnyName/35 t.SymTable#1/7/36 >/38 Tile{ HalfReuse: )/24 AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocFunc, 0, 1, 27},
    {refalrts::icAllocString, 0, 5, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icCopySTVar, 31, 25, 0},
    {refalrts::icAllocIdent, 0, 6, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 34},
    {refalrts::icAllocFunc, 0, 2, 35},
    {refalrts::icCopyEVar, 36, 7, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitIdent, 0, 5, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icLinkBrackets, 13, 18, 0},
    {refalrts::icLinkBrackets, 14, 33, 0},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSetRes, 0, 0, 24},
    {refalrts::icSpliceTile, 34, 38, 0},
    {refalrts::icSpliceTile, 18, 23, 0},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 31, 32, 0},
    {refalrts::icSpliceTile, 7, 17, 0},
    {refalrts::icSpliceTile, 28, 30, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    //T T T (E )(E )(#OpenS #TkOpenCall)E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNum#1/25 # TkOpenCall/24 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 4, 19},
    {refalrts::icIdentRightSave, 24, 3, 19},
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 25, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/25 }"Unexpected call bracket in pattern expression"/28 >/30 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # Brackets/17 } s.LnNum#1/25/31 Tile{ Reuse: # TkCloseCall/23 } Tile{ AsIs: e.Scanned#1/15 } Tile{ AsIs: )/18 HalfReuse: )/21 } Tile{ HalfReuse: (/24 AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocFunc, 0, 1, 27},
    {refalrts::icAllocString, 0, 4, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icCopySTVar, 31, 25, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitIdent, 0, 2, 17},
    {refalrts::icUpdateIdent, 0, 1, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 24, 22, 0},
    {refalrts::icLinkBrackets, 13, 21, 0},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSetRes, 0, 0, 24},
    {refalrts::icSpliceTile, 18, 21, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceTile, 31, 31, 0},
    {refalrts::icSpliceTile, 7, 17, 0},
    {refalrts::icSpliceTile, 28, 30, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    //T T T (E (S S S E ))(E )(#CloseS S )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 (/26 s.BracketsSign#1/28 s.InnerLnNum#1/29 s.CloseBracket#1/30 e.Scanned#1/24 )/27 )/14 (/17 e.InnerScanned#1/15 )/18 (/21 # Close/23 s.ClosedLnNum#1/32 s.CloseBracket#1/31 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 0, 19},
    {refalrts::icSave, 0, 48, 11},
    {refalrts::icBracketRightSave, 0, 24, 48},
    // closed e.MultiBracket#1 as range 48(11)
    // closed e.InnerScanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 28, 24},
    {refalrts::icsVarLeft, 0, 29, 24},
    {refalrts::icsVarLeft, 0, 30, 24},
    {refalrts::icsRepeatRight, 31, 30, 19},
    // closed e.Scanned#1 as range 24
    {refalrts::icsVarLeft, 0, 32, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.BracketsSign#1/28 s.InnerLnNum#1/29 s.CloseBracket#1/30 {REMOVED TILE}  )/27 {REMOVED TILE}  {REMOVED TILE}  # Close/23 s.ClosedLnNum#1/32 s.CloseBracket#1/31 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/48(11) HalfReuse: )/26 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Scanned#1/24 } Tile{ HalfReuse: (/14 HalfReuse: s.BracketsSign1 #28/17 AsIs: e.InnerScanned#1/15 AsIs: )/18 } Tile{ AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitSVar, 0, 28, 17},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icLinkBrackets, 13, 26, 0},
    {refalrts::icSetRes, 0, 0, 22},
    {refalrts::icSpliceTile, 14, 18, 0},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icTrash, 0, 0, 26},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +53, 0, 0},
    //T T T (E (S S S E ))(E )(#CloseS S )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 (/26 s.BracketsSign#1/28 s.InnerLnNum#1/29 s.CloseBracket#1/30 e.Scanned#1/24 )/27 )/14 (/17 e.InnerScanned#1/15 )/18 (/21 # Close/23 s.LnNum#1/31 s.OtherCloseBracket#1/32 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 0, 19},
    {refalrts::icSave, 0, 48, 11},
    {refalrts::icBracketRightSave, 0, 24, 48},
    // closed e.MultiBracket#1 as range 48(11)
    // closed e.InnerScanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 28, 24},
    {refalrts::icsVarLeft, 0, 29, 24},
    {refalrts::icsVarLeft, 0, 30, 24},
    // closed e.Scanned#1 as range 24
    {refalrts::icsVarLeft, 0, 31, 19},
    {refalrts::icsVarLeft, 0, 32, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.InnerLnNum#1/29 s.CloseBracket#1/30 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </33 & EL_AddErrorAt/34 Tile{ AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.InnerLnNum1 #29/27 HalfReuse: 'U'/14 HalfReuse: 'n'/17 }"balanced bracket \""/35 </37 & StrFromBracket/38 Tile{ AsIs: s.BracketsSign#1/28 } >/39 '\"'/40 >/41 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/48(11) HalfReuse: )/26 } (/42 Tile{ AsIs: e.Scanned#1/24 } (/43 s.BracketsSign#1/28/44 Tile{ AsIs: e.InnerScanned#1/15 } )/45 Tile{ AsIs: )/18 AsIs: (/21 AsIs: # Close/23 AsIs: s.LnNum#1/31 AsIs: s.OtherCloseBracket#1/32 AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icAllocFunc, 0, 1, 34},
    {refalrts::icAllocString, 0, 3, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 37},
    {refalrts::icAllocFunc, 0, 0, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icAllocChar, 0, '\"', 40},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 41},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 42},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icCopySTVar, 44, 28, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 45},
    {refalrts::icReinitSVar, 0, 29, 27},
    {refalrts::icReinitChar, 0, 'U', 14},
    {refalrts::icReinitChar, 0, 'n', 17},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 42, 18, 0},
    {refalrts::icLinkBrackets, 43, 45, 0},
    {refalrts::icLinkBrackets, 13, 26, 0},
    {refalrts::icPushStack, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icSetRes, 0, 0, 18},
    {refalrts::icSpliceTile, 45, 45, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 43, 44, 0},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceTile, 42, 42, 0},
    {refalrts::icSpliceTile, 7, 26, 0},
    {refalrts::icSpliceTile, 39, 41, 0},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 35, 38, 0},
    {refalrts::icSpliceTile, 27, 17, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +40, 0, 0},
    //T T T ()(E )(#CloseS S )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Close/23 s.LnNum#1/24 s.CloseBracket#1/25 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 2},
    {refalrts::icBracketLeftSave, 0, 19, 46},
    {refalrts::icIdentLeftSave, 23, 0, 19},
    {refalrts::icSave, 0, 48, 11},
    {refalrts::icEmpty, 0, 0, 48},
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    {refalrts::icsVarLeft, 0, 24, 19},
    {refalrts::icsVarLeft, 0, 25, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/24 }"Unb"/28 Tile{ HalfReuse: 'a'/21 HalfReuse: 'l'/23 }"anced bracket \""/30 </32 & StrFromBracket/33 Tile{ AsIs: s.CloseBracket#1/25 HalfReuse: >/22 } '\"'/34 >/35 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/46(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocFunc, 0, 1, 27},
    {refalrts::icAllocString, 0, 2, 28},
    {refalrts::icAllocString, 0, 1, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icAllocFunc, 0, 0, 33},
    {refalrts::icAllocChar, 0, '\"', 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icReinitChar, 0, 'a', 21},
    {refalrts::icReinitChar, 0, 'l', 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 46},
    {refalrts::icSpliceTile, 7, 18, 0},
    {refalrts::icSpliceTile, 34, 35, 0},
    {refalrts::icSpliceTile, 25, 22, 0},
    {refalrts::icSpliceTile, 30, 33, 0},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icSpliceTile, 28, 29, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +47, 0, 0},
    //T T T (E (S S S E ))(E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 (/21 s.BracketsSign#1/23 s.InnerLnNum#1/24 s.CloseBracket#1/25 e.Scanned#1/19 )/22 )/14 (/17 e.InnerScanned#1/15 )/18 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 46, 11},
    {refalrts::icBracketRightSave, 0, 19, 46},
    // closed e.MultiBracket#1 as range 46(11)
    // closed e.InnerScanned#1 as range 15
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 23, 19},
    {refalrts::icsVarLeft, 0, 24, 19},
    {refalrts::icsVarLeft, 0, 25, 19},
    // closed e.Scanned#1 as range 19
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.CloseBracket#1/25 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.InnerLnNum#1/24 } Tile{ HalfReuse: 'U'/22 HalfReuse: 'n'/14 HalfReuse: 'b'/17 }"alanced bracket \""/28 </30 & StrFromBracket/31 Tile{ AsIs: s.BracketsSign#1/23 } >/32 '\"'/33 >/34 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/46(11) HalfReuse: )/21 } (/35 Tile{ AsIs: e.Scanned#1/19 } (/36 s.BracketsSign#1/23/37 Tile{ AsIs: e.InnerScanned#1/15 } )/38 Tile{ AsIs: )/18 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocFunc, 0, 1, 27},
    {refalrts::icAllocString, 0, 0, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 0, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icAllocChar, 0, '\"', 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icCopySTVar, 37, 23, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icReinitChar, 0, 'U', 22},
    {refalrts::icReinitChar, 0, 'n', 14},
    {refalrts::icReinitChar, 0, 'b', 17},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 35, 18, 0},
    {refalrts::icLinkBrackets, 36, 38, 0},
    {refalrts::icLinkBrackets, 13, 21, 0},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icSetRes, 0, 0, 18},
    {refalrts::icSpliceTile, 38, 38, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 36, 37, 0},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 35, 35, 0},
    {refalrts::icSpliceTile, 7, 21, 0},
    {refalrts::icSpliceTile, 32, 34, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceTile, 28, 31, 0},
    {refalrts::icSpliceTile, 22, 17, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T T T ()(E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 )/14 (/17 e.Pattern#1/15 )/18 e.Tail#1/2 >/1
    {refalrts::icEmpty, 0, 0, 11},
    // closed e.Pattern#1 as range 15
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ParsePattern/4 {REMOVED TILE}  )/14 (/17 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 } Tile{ AsIs: e.Pattern#1/15 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    {refalrts::icLinkBrackets, 13, 18, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 5, 13, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[16];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:T T T (E )(E )E 
  // </0 & ParsePattern/4 t.idx#0/5 t.idxV#0/7 t.idxVV#0/9 (/13 e.idxVVVB#0/11 )/14 (/17 e.idxVVVTB#0/15 )/18 e.idxVVVTT#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxVVVB#0 as range 11
  // closed e.idxVVVTB#0 as range 15
  // closed e.idxVVVTT#0 as range 2
  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#TkCharS S )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkChar/23 s.LnNum#1/24 s.Char#1/25 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkChar<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.LnNum#1/24 s.Char#1/25 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkChar/21 HalfReuse: s.Char1 #25/23 } )/26 Tile{ AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_ident( context[21], & ident_TkChar<int>::name );
    refalrts::reinit_svar( context[23], context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[22] );
    refalrts::link_brackets( context[18], context[26] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[26], context[26] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[23], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#TkNumberS S )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkNumber/23 s.LnNum#1/24 s.Number#1/25 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.LnNum#1/24 s.Number#1/25 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkNumber/21 HalfReuse: s.Number1 #25/23 } )/26 Tile{ AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_ident( context[21], & ident_TkNumber<int>::name );
    refalrts::reinit_svar( context[23], context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[22] );
    refalrts::link_brackets( context[18], context[26] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[26], context[26] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[23], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#TkNameS E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkName/23 s.LnNum#1/24 e.Name#1/19 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkName<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    // closed e.Name#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 } </25 & ST_AddFunctionCall/26 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: s.LnNum#1/24 } e.Name#1/19/27 Tile{ HalfReuse: >/23 } Tile{ AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkName/21 } Tile{ AsIs: e.Name#1/19 } )/29 Tile{ AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[27], context[28], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[23] );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_ident( context[21], & ident_TkName<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[22] );
    refalrts::link_brackets( context[18], context[29] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[9], context[21] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#TkIdentMarkerS )(#TkNameS E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkIdentMarker/23 s.LnNumMarker#1/29 )/22 (/26 # TkName/28 s.LnNumName#1/30 e.Name#1/24 )/27 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[46], context[47] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = refalrts::ident_left(  & ident_TkName<int>::name, context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[29], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[24], context[25] ) )
      continue;
    // closed e.Name#1 as range 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumMarker#1/29 {REMOVED TILE}  {REMOVED TILE}  s.LnNumName#1/30 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: </26 HalfReuse: & ST_AddIdent/28 } Tile{ AsIs: t.SymTable#1/7 } e.Name#1/24/31 Tile{ HalfReuse: >/23 } Tile{ AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkIdentifier/21 } Tile{ AsIs: e.Name#1/24 } Tile{ AsIs: )/22 } Tile{ AsIs: )/27 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[31], context[32], context[24], context[25]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[26] );
    refalrts::reinit_name( context[28], ST_AddIdent, "ST_AddIdent" );
    refalrts::reinit_close_call( context[23] );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_ident( context[21], & ident_TkIdentifier<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[27] );
    refalrts::link_brackets( context[18], context[22] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[27];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[9], context[21] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#TkIdentMarkerS )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkIdentMarker/23 s.LnNum#1/24 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </25 & EL_AddErrorAt/26 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/24 HalfReuse: 'M'/22 }"is"/27 Tile{ HalfReuse: 's'/21 HalfReuse: 'e'/23 }"d name after \'#\'"/29 >/31 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/46(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], "is", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], "d name after \'#\'", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[22], 'M' );
    refalrts::reinit_char( context[21], 's' );
    refalrts::reinit_char( context[23], 'e' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[24], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#TkVariableS S E )(#TkRedefinitionS )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkVariable/23 s.LnNumVar#1/29 s.Mode#1/30 e.Index#1/19 )/22 (/26 # TkRedefinition/28 s.LnNumRedef#1/31 )/27 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[46], context[47] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[29], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    // closed e.Index#1 as range 19
    if( ! refalrts::svar_left( context[31], context[24], context[25] ) )
      continue;
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumRedef#1/31 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </32 & Fetch/33 Tile{ AsIs: </0 Reuse: & CheckAddVariable/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Context#1/9 } Tile{ HalfReuse: & Cntx_AddNewVariable/23 AsIs: s.LnNumVar#1/29 AsIs: s.Mode#1/30 AsIs: e.Index#1/19 HalfReuse: >/22 HalfReuse: </26 HalfReuse: & CreateClosure /28 } & lambda_ParsePattern_0/34 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 AsIs: (/21 } e.Index#1/19/35 Tile{ AsIs: )/27 } (/37 Tile{ AsIs: e.Tail#1/46(2) } )/38 >/39 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], lambda_ParsePattern_0, "lambda_ParsePattern_0" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[35], context[36], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], CheckAddVariable, "CheckAddVariable" );
    refalrts::reinit_name( context[23], Cntx_AddNewVariable, "Cntx_AddNewVariable" );
    refalrts::reinit_close_call( context[22] );
    refalrts::reinit_open_call( context[26] );
    refalrts::reinit_name( context[28], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[37], context[38] );
    refalrts::link_brackets( context[21], context[27] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[23], context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#TkVariableS S E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkVariable/23 s.LnNum#1/24 s.Mode#1/25 e.Index#1/19 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    // closed e.Index#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </26 & Fetch/27 Tile{ AsIs: </0 Reuse: & CheckAddVariable/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Context#1/9 } Tile{ HalfReuse: & Cntx_AddVariable/23 AsIs: s.LnNum#1/24 AsIs: s.Mode#1/25 AsIs: e.Index#1/19 HalfReuse: >/22 } </28 & CreateClosure /29 & lambda_ParsePattern_1/30 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 AsIs: (/21 } e.Index#1/19/31 )/33 (/34 Tile{ AsIs: e.Tail#1/46(2) } )/35 >/36 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], lambda_ParsePattern_1, "lambda_ParsePattern_1" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[31], context[32], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], CheckAddVariable, "CheckAddVariable" );
    refalrts::reinit_name( context[23], Cntx_AddVariable, "Cntx_AddVariable" );
    refalrts::reinit_close_call( context[22] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[34], context[35] );
    refalrts::link_brackets( context[21], context[33] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[23], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#TkRedefinitionS )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkRedefinition/23 s.LnNum#1/24 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </25 & EL_AddErrorAt/26 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/24 HalfReuse: 'N'/22 }"ak"/27 Tile{ HalfReuse: 'e'/21 HalfReuse: 'd'/23 }" redefinition sign"/29 >/31 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/46(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], "ak", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], " redefinition sign", 18 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[22], 'N' );
    refalrts::reinit_char( context[21], 'e' );
    refalrts::reinit_char( context[23], 'd' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[24], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#OpenS #TkOpenBracket)E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNum#1/25 # TkOpenBracket/24 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Open<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::ident_right(  & ident_TkOpenBracket<int>::name, context[19], context[20] );
    if( ! context[24] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # Brackets/17 } Tile{ AsIs: s.LnNum#1/25 } Tile{ Reuse: # TkCloseBracket/23 } Tile{ AsIs: e.Scanned#1/15 } Tile{ AsIs: )/18 HalfReuse: )/21 } Tile{ HalfReuse: (/24 AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_ident( context[17], & ident_Brackets<int>::name );
    refalrts::update_ident( context[23], & ident_TkCloseBracket<int>::name );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_bracket( context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[24], context[22] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::link_brackets( context[14], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[18], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#OpenS #TkOpenADT)(#TkNameS E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNumBracket#1/30 # TkOpenADT/24 )/22 (/27 # TkName/29 s.LnNumName#1/31 e.Name#1/25 )/28 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Open<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[19], context[20] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[46], context[47] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  & ident_TkName<int>::name, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    // closed e.Name#1 as range 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumBracket#1/30 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 } </32 & ST_AddFunctionCall/33 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: s.LnNumName#1/31 } Tile{ AsIs: e.Name#1/25 } >/34 Tile{ AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # ADT_Brackets/17 } Tile{ HalfReuse: s.LnNumBracket1 #30/21 Reuse: # TkCloseADT/23 } Tile{ AsIs: e.Scanned#1/15 } Tile{ HalfReuse: )/24 AsIs: )/22 AsIs: (/27 HalfReuse: (/29 } e.Name#1/25/35 Tile{ AsIs: )/18 } Tile{ AsIs: )/28 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[35], context[36], context[25], context[26]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_ident( context[17], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_svar( context[21], context[30] );
    refalrts::update_ident( context[23], & ident_TkCloseADT<int>::name );
    refalrts::reinit_close_bracket( context[24] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[29], context[18] );
    refalrts::link_brackets( context[13], context[22] );
    refalrts::link_brackets( context[14], context[24] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[24], context[29] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[9], context[17] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#OpenS #TkOpenADT)E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNum#1/25 # TkOpenADT/24 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Open<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[19], context[20] );
    if( ! context[24] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/25 }"Expected name after \"[\""/28 >/30 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # ADT_Brackets/17 } s.LnNum#1/25/31 # TkCloseADT/32 Tile{ AsIs: e.Scanned#1/15 } )/33 Tile{ AsIs: )/18 AsIs: (/21 HalfReuse: (/23 } </34 & ST_GetAnyName/35 t.SymTable#1/7/36 >/38 Tile{ HalfReuse: )/24 AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[28], context[29], "Expected name after \"[\"", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[36], context[37], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_ident( context[17], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_close_bracket( context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[34] );
    refalrts::link_brackets( context[13], context[18] );
    refalrts::link_brackets( context[14], context[33] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[34], context[38] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[7], context[17] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E )(E )(#OpenS #TkOpenCall)E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNum#1/25 # TkOpenCall/24 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Open<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::ident_right(  & ident_TkOpenCall<int>::name, context[19], context[20] );
    if( ! context[24] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/25 }"Unexpected call bracket in pattern expression"/28 >/30 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # Brackets/17 } s.LnNum#1/25/31 Tile{ Reuse: # TkCloseCall/23 } Tile{ AsIs: e.Scanned#1/15 } Tile{ AsIs: )/18 HalfReuse: )/21 } Tile{ HalfReuse: (/24 AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[28], context[29], "Unexpected call bracket in pattern expression", 45 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[25]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_ident( context[17], & ident_Brackets<int>::name );
    refalrts::update_ident( context[23], & ident_TkCloseCall<int>::name );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_bracket( context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[24], context[22] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::link_brackets( context[14], context[18] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[18], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[7], context[17] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E (S S S E ))(E )(#CloseS S )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 (/26 s.BracketsSign#1/28 s.InnerLnNum#1/29 s.CloseBracket#1/30 e.Scanned#1/24 )/27 )/14 (/17 e.InnerScanned#1/15 )/18 (/21 # Close/23 s.ClosedLnNum#1/32 s.CloseBracket#1/31 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Close<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[48] = context[11];
    context[49] = context[12];
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_right( context[24], context[25], context[48], context[49] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.MultiBracket#1 as range 48(11)
    // closed e.InnerScanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[28], context[24], context[25] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[24], context[25] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[24], context[25] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[31], context[30], context[19], context[20] ) )
      continue;
    // closed e.Scanned#1 as range 24
    if( ! refalrts::svar_left( context[32], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.BracketsSign#1/28 s.InnerLnNum#1/29 s.CloseBracket#1/30 {REMOVED TILE}  )/27 {REMOVED TILE}  {REMOVED TILE}  # Close/23 s.ClosedLnNum#1/32 s.CloseBracket#1/31 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/48(11) HalfReuse: )/26 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Scanned#1/24 } Tile{ HalfReuse: (/14 HalfReuse: s.BracketsSign1 #28/17 AsIs: e.InnerScanned#1/15 AsIs: )/18 } Tile{ AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[26] );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_svar( context[17], context[28] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[14], context[18] );
    refalrts::link_brackets( context[13], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[14], context[18] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[26], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E (S S S E ))(E )(#CloseS S )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 (/26 s.BracketsSign#1/28 s.InnerLnNum#1/29 s.CloseBracket#1/30 e.Scanned#1/24 )/27 )/14 (/17 e.InnerScanned#1/15 )/18 (/21 # Close/23 s.LnNum#1/31 s.OtherCloseBracket#1/32 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Close<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[48] = context[11];
    context[49] = context[12];
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_right( context[24], context[25], context[48], context[49] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.MultiBracket#1 as range 48(11)
    // closed e.InnerScanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[28], context[24], context[25] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[24], context[25] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[24], context[25] ) )
      continue;
    // closed e.Scanned#1 as range 24
    if( ! refalrts::svar_left( context[31], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.InnerLnNum#1/29 s.CloseBracket#1/30 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </33 & EL_AddErrorAt/34 Tile{ AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.InnerLnNum1 #29/27 HalfReuse: 'U'/14 HalfReuse: 'n'/17 }"balanced bracket \""/35 </37 & StrFromBracket/38 Tile{ AsIs: s.BracketsSign#1/28 } >/39 '\"'/40 >/41 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/48(11) HalfReuse: )/26 } (/42 Tile{ AsIs: e.Scanned#1/24 } (/43 s.BracketsSign#1/28/44 Tile{ AsIs: e.InnerScanned#1/15 } )/45 Tile{ AsIs: )/18 AsIs: (/21 AsIs: # Close/23 AsIs: s.LnNum#1/31 AsIs: s.OtherCloseBracket#1/32 AsIs: )/22 AsIs: e.Tail#1/46(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[35], context[36], "balanced bracket \"", 18 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[38], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[43] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[44], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[45] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[27], context[29] );
    refalrts::reinit_char( context[14], 'U' );
    refalrts::reinit_char( context[17], 'n' );
    refalrts::reinit_close_bracket( context[26] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[42], context[18] );
    refalrts::link_brackets( context[43], context[45] );
    refalrts::link_brackets( context[13], context[26] );
    refalrts::push_stack( context[41] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[37] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[45], context[45] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[42], context[42] );
    res = refalrts::splice_evar( res, context[7], context[26] );
    res = refalrts::splice_evar( res, context[39], context[41] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[35], context[38] );
    res = refalrts::splice_evar( res, context[27], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T ()(E )(#CloseS S )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Close/23 s.LnNum#1/24 s.CloseBracket#1/25 )/22 e.Tail#1/2 >/1
    context[46] = context[2];
    context[47] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Close<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[48] = context[11];
    context[49] = context[12];
    if( ! refalrts::empty_seq( context[48], context[49] ) )
      continue;
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 46(2)
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/24 }"Unb"/28 Tile{ HalfReuse: 'a'/21 HalfReuse: 'l'/23 }"anced bracket \""/30 </32 & StrFromBracket/33 Tile{ AsIs: s.CloseBracket#1/25 HalfReuse: >/22 } '\"'/34 >/35 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/46(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[28], context[29], "Unb", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[30], context[31], "anced bracket \"", 15 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[21], 'a' );
    refalrts::reinit_char( context[23], 'l' );
    refalrts::reinit_close_call( context[22] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[25], context[22] );
    res = refalrts::splice_evar( res, context[30], context[33] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T T T (E (S S S E ))(E )E 
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 (/21 s.BracketsSign#1/23 s.InnerLnNum#1/24 s.CloseBracket#1/25 e.Scanned#1/19 )/22 )/14 (/17 e.InnerScanned#1/15 )/18 e.Tail#1/2 >/1
    context[46] = context[11];
    context[47] = context[12];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_right( context[19], context[20], context[46], context[47] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.MultiBracket#1 as range 46(11)
    // closed e.InnerScanned#1 as range 15
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    // closed e.Scanned#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.CloseBracket#1/25 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.InnerLnNum#1/24 } Tile{ HalfReuse: 'U'/22 HalfReuse: 'n'/14 HalfReuse: 'b'/17 }"alanced bracket \""/28 </30 & StrFromBracket/31 Tile{ AsIs: s.BracketsSign#1/23 } >/32 '\"'/33 >/34 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/46(11) HalfReuse: )/21 } (/35 Tile{ AsIs: e.Scanned#1/19 } (/36 s.BracketsSign#1/23/37 Tile{ AsIs: e.InnerScanned#1/15 } )/38 Tile{ AsIs: )/18 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[28], context[29], "alanced bracket \"", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[37], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[22], 'U' );
    refalrts::reinit_char( context[14], 'n' );
    refalrts::reinit_char( context[17], 'b' );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[35], context[18] );
    refalrts::link_brackets( context[36], context[38] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[7], context[21] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[22], context[17] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //T T T ()(E )E 
  // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 )/14 (/17 e.Pattern#1/15 )/18 e.Tail#1/2 >/1
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 15
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ParsePattern/4 {REMOVED TILE}  )/14 (/17 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 } Tile{ AsIs: e.Pattern#1/15 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult InvalidModeVariableError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" has different modes", 20},
    {" and ", 5},
    {"Variables ", 10}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & InvalidModeVariableError/4 t.ErrorList#1/5 s.LnNum#1/7 s.OldMode#1/8 s.NewMode#1/9 e.Index#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    // closed e.Index#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 }"Variables "/10 Tile{ AsIs: s.OldMode#1/8 } '.'/12 Tile{ AsIs: e.Index#1/2 }" and "/13 Tile{ AsIs: s.NewMode#1/9 } '.'/15 e.Index#1/2/16" has different modes"/18 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 2, 10},
    {refalrts::icAllocChar, 0, '.', 12},
    {refalrts::icAllocString, 0, 1, 13},
    {refalrts::icAllocChar, 0, '.', 15},
    {refalrts::icCopyEVar, 16, 2, 0},
    {refalrts::icAllocString, 0, 0, 18},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 15, 19, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
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
  // </0 & InvalidModeVariableError/4 t.ErrorList#1/5 s.LnNum#1/7 s.OldMode#1/8 s.NewMode#1/9 e.Index#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 }"Variables "/10 Tile{ AsIs: s.OldMode#1/8 } '.'/12 Tile{ AsIs: e.Index#1/2 }" and "/13 Tile{ AsIs: s.NewMode#1/9 } '.'/15 e.Index#1/2/16" has different modes"/18 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "Variables ", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], " and ", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '.' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[16], context[17], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], " has different modes", 20 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CheckAddVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { InvalidModeVariableError, "InvalidModeVariableError" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlreadyBounded<int>::name,
    & ident_InvalidMode<int>::name,
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Variable hide operator^ must be applied to first occurence of variable ", 71}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:T S S (E )T S S E 
    // </0 & lambda_CheckAddVariable_0/4 t.idx#0/5 s.idxV#0/7 s.idxVV#0/8 (/11 e.idxVVVB#0/9 )/12 t.idxVVVT#0/13 s.idxVVVTV#0/15 s.idxVVVTVV#0/16 e.idxVVVTVVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.idxVVVB#0 as range 9
    {refalrts::ictVarLeftSave, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 2},
    {refalrts::icsVarLeft, 0, 16, 2},
    // closed e.idxVVVTVVV#0 as range 2
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //T S S (E )T #SuccessS 
    // </0 & lambda_CheckAddVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # Success/15 s.Depth#2/16 >/1
    {refalrts::icIdentTerm, 0, 2, 15},
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icEmpty, 0, 0, 19},
    // closed e.Index#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_CheckAddVariable_0/4 {REMOVED TILE}  s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Context#2/13 HalfReuse: s.Mode1 #8/15 AsIs: s.Depth#2/16 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 8, 15},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 16, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    //T S S (E )T #InvalidModeS S 
    // </0 & lambda_CheckAddVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # InvalidMode/15 s.Depth#2/16 s.OldMode#2/17 >/1
    {refalrts::icIdentTerm, 0, 1, 15},
    // closed e.Index#1 as range 9
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icsVarLeft, 0, 17, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Mode#1/8 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & InvalidModeVariableError/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 } Tile{ AsIs: s.OldMode#2/17 } Tile{ HalfReuse: s.Mode1 #8/11 AsIs: e.Index#1/9 HalfReuse: >/12 AsIs: t.Context#2/13 HalfReuse: s.OldMode2 #17/15 AsIs: s.Depth#2/16 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitSVar, 0, 8, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icReinitSVar, 0, 17, 15},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 16, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T S S (E )T #AlreadyBoundedS 
    // </0 & lambda_CheckAddVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # AlreadyBounded/15 s.Depth#2/16 >/1
    {refalrts::icIdentTerm, 0, 0, 15},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Index#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Depth#2/16 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 }"Variable hide operator^ must be applied to first occurence of variable "/17 Tile{ AsIs: s.Mode#1/8 HalfReuse: '.'/11 AsIs: e.Index#1/9 HalfReuse: >/12 AsIs: t.Context#2/13 HalfReuse: s.Depth2 #16/15 } Tile{ HalfReuse: s.Mode1 #8/1 ]] }
    {refalrts::icAllocString, 0, 0, 17},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, '.', 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icReinitSVar, 0, 16, 15},
    {refalrts::icReinitSVar, 0, 8, 1},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 8, 15, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icTrash, 0, 0, 7},
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
  //FAST GEN:E 
  //GLOBAL GEN:T S S (E )T S S E 
  // </0 & lambda_CheckAddVariable_0/4 t.idx#0/5 s.idxV#0/7 s.idxVV#0/8 (/11 e.idxVVVB#0/9 )/12 t.idxVVVT#0/13 s.idxVVVTV#0/15 s.idxVVVTVV#0/16 e.idxVVVTVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVVVB#0 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVTVVV#0 as range 2
  do {
    refalrts::start_sentence();
    //T S S (E )T #SuccessS 
    // </0 & lambda_CheckAddVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # Success/15 s.Depth#2/16 >/1
    if( ! refalrts::ident_term(  & ident_Success<int>::name, context[15] ) )
      continue;
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.Index#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_CheckAddVariable_0/4 {REMOVED TILE}  s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Context#2/13 HalfReuse: s.Mode1 #8/15 AsIs: s.Depth#2/16 } Tile{ ]] }
    refalrts::reinit_svar( context[15], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T S S (E )T #InvalidModeS S 
    // </0 & lambda_CheckAddVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # InvalidMode/15 s.Depth#2/16 s.OldMode#2/17 >/1
    if( ! refalrts::ident_term(  & ident_InvalidMode<int>::name, context[15] ) )
      continue;
    // closed e.Index#1 as range 9
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::svar_left( context[17], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Mode#1/8 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & InvalidModeVariableError/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 } Tile{ AsIs: s.OldMode#2/17 } Tile{ HalfReuse: s.Mode1 #8/11 AsIs: e.Index#1/9 HalfReuse: >/12 AsIs: t.Context#2/13 HalfReuse: s.OldMode2 #17/15 AsIs: s.Depth#2/16 } Tile{ ]] }
    refalrts::update_name( context[4], InvalidModeVariableError, "InvalidModeVariableError" );
    refalrts::reinit_svar( context[11], context[8] );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_svar( context[15], context[17] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[16] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //T S S (E )T #AlreadyBoundedS 
  // </0 & lambda_CheckAddVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # AlreadyBounded/15 s.Depth#2/16 >/1
  if( ! refalrts::ident_term(  & ident_AlreadyBounded<int>::name, context[15] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Depth#2/16 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 }"Variable hide operator^ must be applied to first occurence of variable "/17 Tile{ AsIs: s.Mode#1/8 HalfReuse: '.'/11 AsIs: e.Index#1/9 HalfReuse: >/12 AsIs: t.Context#2/13 HalfReuse: s.Depth2 #16/15 } Tile{ HalfReuse: s.Mode1 #8/1 ]] }
  if( ! refalrts::alloc_chars( context[17], context[18], "Variable hide operator^ must be applied to first occurence of variable ", 71 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
  refalrts::reinit_char( context[11], '.' );
  refalrts::reinit_close_call( context[12] );
  refalrts::reinit_svar( context[15], context[16] );
  refalrts::reinit_svar( context[1], context[8] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CheckAddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { lambda_CheckAddVariable_0, "lambda_CheckAddVariable_0" },
    { refalrts::create_closure, "refalrts::create_closure" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & CheckAddVariable/4 t.ErrorList#1/5 t.Context#1/7 s.FnContextModifier#1/9 s.LnNum#1/10 s.Mode#1/11 e.Index#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icsVarLeft, 0, 11, 2},
    // closed e.Index#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </12 Tile{ AsIs: s.FnContextModifier#1/9 } Tile{ AsIs: t.Context#1/7 } Tile{ AsIs: s.Mode#1/11 AsIs: e.Index#1/2 AsIs: >/1 } </13 & CreateClosure /14 & lambda_CheckAddVariable_0/15 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/10 } s.Mode#1/11/16 (/17 e.Index#1/2/18 )/20 >/21 >/22 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 2, 14},
    {refalrts::icAllocFunc, 0, 1, 15},
    {refalrts::icCopySTVar, 16, 11, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icCopyEVar, 18, 2, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 16, 22, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 13, 15, 0},
    {refalrts::icSpliceTile, 11, 1, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
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
  // </0 & CheckAddVariable/4 t.ErrorList#1/5 t.Context#1/7 s.FnContextModifier#1/9 s.LnNum#1/10 s.Mode#1/11 e.Index#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </12 Tile{ AsIs: s.FnContextModifier#1/9 } Tile{ AsIs: t.Context#1/7 } Tile{ AsIs: s.Mode#1/11 AsIs: e.Index#1/2 AsIs: >/1 } </13 & CreateClosure /14 & lambda_CheckAddVariable_0/15 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/10 } s.Mode#1/11/16 (/17 e.Index#1/2/18 )/20 >/21 >/22 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], lambda_CheckAddVariable_0, "lambda_CheckAddVariable_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[16], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[22] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult StrFromBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CallBrackets<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_TkCloseCall<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S 
    //GLOBAL GEN:S 
    // </0 & StrFromBracket/4 s.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#TkOpenBracket
    // </0 & StrFromBracket/4 # TkOpenBracket/5 >/1
    {refalrts::icIdentTerm, 0, 8, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkOpenBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '('/1 ]] }
    {refalrts::icReinitChar, 0, '(', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#TkCloseBracket
    // </0 & StrFromBracket/4 # TkCloseBracket/5 >/1
    {refalrts::icIdentTerm, 0, 7, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkCloseBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ')'/1 ]] }
    {refalrts::icReinitChar, 0, ')', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#TkOpenCall
    // </0 & StrFromBracket/4 # TkOpenCall/5 >/1
    {refalrts::icIdentTerm, 0, 6, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkOpenCall/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    {refalrts::icReinitChar, 0, '<', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#TkCloseCall
    // </0 & StrFromBracket/4 # TkCloseCall/5 >/1
    {refalrts::icIdentTerm, 0, 5, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkCloseCall/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
    {refalrts::icReinitChar, 0, '>', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#TkOpenADT
    // </0 & StrFromBracket/4 # TkOpenADT/5 >/1
    {refalrts::icIdentTerm, 0, 4, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkOpenADT/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/1 ]] }
    {refalrts::icReinitChar, 0, '[', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#TkCloseADT
    // </0 & StrFromBracket/4 # TkCloseADT/5 >/1
    {refalrts::icIdentTerm, 0, 3, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkCloseADT/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ']'/1 ]] }
    {refalrts::icReinitChar, 0, ']', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#Brackets
    // </0 & StrFromBracket/4 # Brackets/5 >/1
    {refalrts::icIdentTerm, 0, 2, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # Brackets/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '('/1 ]] }
    {refalrts::icReinitChar, 0, '(', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#ADT_Brackets
    // </0 & StrFromBracket/4 # ADT_Brackets/5 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # ADT_Brackets/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/1 ]] }
    {refalrts::icReinitChar, 0, '[', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //#CallBrackets
    // </0 & StrFromBracket/4 # CallBrackets/5 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # CallBrackets/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    {refalrts::icReinitChar, 0, '<', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[8];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:S 
  //GLOBAL GEN:S 
  // </0 & StrFromBracket/4 s.idx#0/5 >/1
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
    //#TkOpenBracket
    // </0 & StrFromBracket/4 # TkOpenBracket/5 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenBracket<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkOpenBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '('/1 ]] }
    refalrts::reinit_char( context[1], '(' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkCloseBracket
    // </0 & StrFromBracket/4 # TkCloseBracket/5 >/1
    if( ! refalrts::ident_term(  & ident_TkCloseBracket<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkCloseBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ')'/1 ]] }
    refalrts::reinit_char( context[1], ')' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkOpenCall
    // </0 & StrFromBracket/4 # TkOpenCall/5 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenCall<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkOpenCall/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    refalrts::reinit_char( context[1], '<' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkCloseCall
    // </0 & StrFromBracket/4 # TkCloseCall/5 >/1
    if( ! refalrts::ident_term(  & ident_TkCloseCall<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkCloseCall/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
    refalrts::reinit_char( context[1], '>' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkOpenADT
    // </0 & StrFromBracket/4 # TkOpenADT/5 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenADT<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkOpenADT/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/1 ]] }
    refalrts::reinit_char( context[1], '[' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkCloseADT
    // </0 & StrFromBracket/4 # TkCloseADT/5 >/1
    if( ! refalrts::ident_term(  & ident_TkCloseADT<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # TkCloseADT/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ']'/1 ]] }
    refalrts::reinit_char( context[1], ']' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#Brackets
    // </0 & StrFromBracket/4 # Brackets/5 >/1
    if( ! refalrts::ident_term(  & ident_Brackets<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # Brackets/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '('/1 ]] }
    refalrts::reinit_char( context[1], '(' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#ADT_Brackets
    // </0 & StrFromBracket/4 # ADT_Brackets/5 >/1
    if( ! refalrts::ident_term(  & ident_ADT_Brackets<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # ADT_Brackets/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/1 ]] }
    refalrts::reinit_char( context[1], '[' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //#CallBrackets
  // </0 & StrFromBracket/4 # CallBrackets/5 >/1
  if( ! refalrts::ident_term(  & ident_CallBrackets<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & StrFromBracket/4 # CallBrackets/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
  refalrts::reinit_char( context[1], '<' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseResult, "ParseResult" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariable<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:(E )T (E )(E )(E )(E )T T E 
    // </0 & lambda_ParseResult_0/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 (/17 e.idxTVTB#0/15 )/18 (/21 e.idxTVTTB#0/19 )/22 (/25 e.idxTVTTTB#0/23 )/26 t.idxTVTTTT#0/27 t.idxTVTTTTV#0/29 e.idxTVTTTTVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    {refalrts::icBracketLeftSave, 0, 19, 2},
    {refalrts::icBracketLeftSave, 0, 23, 2},
    // closed e.idxTVB#0 as range 11
    // closed e.idxTVTB#0 as range 15
    // closed e.idxTVTTB#0 as range 19
    // closed e.idxTVTTTB#0 as range 23
    {refalrts::ictVarLeftSave, 0, 27, 2},
    {refalrts::ictVarLeftSave, 0, 29, 2},
    // closed e.idxTVTTTTVV#0 as range 2
    {refalrts::icOnFailGoTo, +28, 0, 0},
    //(E )T (E )(E )(E )(E )T T S S 
    // </0 & lambda_ParseResult_0/4 (/7 e.Functions#1/5 )/8 t.SymTable#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 e.Tail#1/19 )/22 (/25 e.Index#1/23 )/26 t.ErrorList#2/27 t.Context#2/29 s.Mode#2/31 s.Depth#2/32 >/1
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 19
    // closed e.Index#1 as range 23
    {refalrts::icSave, 0, 34, 2},
    {refalrts::icsVarLeft, 0, 31, 34},
    {refalrts::icsVarLeft, 0, 32, 34},
    {refalrts::icEmpty, 0, 0, 34},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Mode#2/31 s.Depth#2/32 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } Tile{ AsIs: t.ErrorList#2/27 } Tile{ AsIs: t.SymTable#1/9 } Tile{ AsIs: t.Context#2/29 } Tile{ AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkVariable/21 } Tile{ HalfReuse: s.Mode2 #31/25 AsIs: e.Index#1/23 HalfReuse: s.Depth2 #32/26 } Tile{ AsIs: )/22 } )/33 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitIdent, 0, 0, 21},
    {refalrts::icReinitSVar, 0, 31, 25},
    {refalrts::icReinitSVar, 0, 32, 26},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 33, 0},
    {refalrts::icLinkBrackets, 18, 22, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 13, 21, 0},
    {refalrts::icSpliceTile, 29, 30, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icTrash, 0, 0, 8},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )T (E )(E )(E )(E )T T 
    // </0 & lambda_ParseResult_0/4 (/7 e.Functions#1/5 )/8 t.SymTable#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 e.Tail#1/19 )/22 (/25 e.Index#1/23 )/26 t.ErrorList#2/27 t.Context#2/29 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 19
    // closed e.Index#1 as range 23
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/21 {REMOVED TILE}  )/22 (/25 e.Index#1/23 )/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } Tile{ AsIs: t.ErrorList#2/27 } Tile{ AsIs: t.SymTable#1/9 } Tile{ AsIs: t.Context#2/29 } Tile{ AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 13, 18, 0},
    {refalrts::icSpliceTile, 29, 30, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:(E )T (E )(E )(E )(E )T T E 
  // </0 & lambda_ParseResult_0/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 (/17 e.idxTVTB#0/15 )/18 (/21 e.idxTVTTB#0/19 )/22 (/25 e.idxTVTTTB#0/23 )/26 t.idxTVTTTT#0/27 t.idxTVTTTTV#0/29 e.idxTVTTTTVV#0/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.idxTVB#0 as range 11
  // closed e.idxTVTB#0 as range 15
  // closed e.idxTVTTB#0 as range 19
  // closed e.idxTVTTTB#0 as range 23
  context[28] = refalrts::tvar_left( context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVTTTTVV#0 as range 2
  do {
    refalrts::start_sentence();
    //(E )T (E )(E )(E )(E )T T S S 
    // </0 & lambda_ParseResult_0/4 (/7 e.Functions#1/5 )/8 t.SymTable#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 e.Tail#1/19 )/22 (/25 e.Index#1/23 )/26 t.ErrorList#2/27 t.Context#2/29 s.Mode#2/31 s.Depth#2/32 >/1
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 19
    // closed e.Index#1 as range 23
    context[34] = context[2];
    context[35] = context[3];
    if( ! refalrts::svar_left( context[31], context[34], context[35] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[34], context[35] ) )
      continue;
    if( ! refalrts::empty_seq( context[34], context[35] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Mode#2/31 s.Depth#2/32 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } Tile{ AsIs: t.ErrorList#2/27 } Tile{ AsIs: t.SymTable#1/9 } Tile{ AsIs: t.Context#2/29 } Tile{ AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkVariable/21 } Tile{ HalfReuse: s.Mode2 #31/25 AsIs: e.Index#1/23 HalfReuse: s.Depth2 #32/26 } Tile{ AsIs: )/22 } )/33 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ParseResult, "ParseResult" );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_ident( context[21], & ident_TkVariable<int>::name );
    refalrts::reinit_svar( context[25], context[31] );
    refalrts::reinit_svar( context[26], context[32] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[33] );
    refalrts::link_brackets( context[18], context[22] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )T (E )(E )(E )(E )T T 
  // </0 & lambda_ParseResult_0/4 (/7 e.Functions#1/5 )/8 t.SymTable#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 e.Tail#1/19 )/22 (/25 e.Index#1/23 )/26 t.ErrorList#2/27 t.Context#2/29 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 5
  // closed e.MultiBracket#1 as range 11
  // closed e.Scanned#1 as range 15
  // closed e.Tail#1 as range 19
  // closed e.Index#1 as range 23

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/21 {REMOVED TILE}  )/22 (/25 e.Index#1/23 )/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } Tile{ AsIs: t.ErrorList#2/27 } Tile{ AsIs: t.SymTable#1/9 } Tile{ AsIs: t.Context#2/29 } Tile{ AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ParseResult, "ParseResult" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[13], context[18] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CallBrackets<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkOpenBracket<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S 
    //GLOBAL GEN:S 
    // </0 & lambda_ParseResult_1/4 s.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#TkOpenBracket
    // </0 & lambda_ParseResult_1/4 # TkOpenBracket/5 >/1
    {refalrts::icIdentTerm, 0, 3, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseResult_1/4 # TkOpenBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Brackets/1 ]] }
    {refalrts::icReinitIdent, 0, 2, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //#TkOpenCall
    // </0 & lambda_ParseResult_1/4 # TkOpenCall/5 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseResult_1/4 # TkOpenCall/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # CallBrackets/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
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
  //FAST GEN:S 
  //GLOBAL GEN:S 
  // </0 & lambda_ParseResult_1/4 s.idx#0/5 >/1
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
    //#TkOpenBracket
    // </0 & lambda_ParseResult_1/4 # TkOpenBracket/5 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenBracket<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseResult_1/4 # TkOpenBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Brackets/1 ]] }
    refalrts::reinit_ident( context[1], & ident_Brackets<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //#TkOpenCall
  // </0 & lambda_ParseResult_1/4 # TkOpenCall/5 >/1
  if( ! refalrts::ident_term(  & ident_TkOpenCall<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_ParseResult_1/4 # TkOpenCall/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # CallBrackets/1 ]] }
  refalrts::reinit_ident( context[1], & ident_CallBrackets<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkCloseCall<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S 
    //GLOBAL GEN:S 
    // </0 & lambda_ParseResult_2/4 s.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#TkOpenBracket
    // </0 & lambda_ParseResult_2/4 # TkOpenBracket/5 >/1
    {refalrts::icIdentTerm, 0, 3, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseResult_2/4 # TkOpenBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseBracket/1 ]] }
    {refalrts::icReinitIdent, 0, 2, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //#TkOpenCall
    // </0 & lambda_ParseResult_2/4 # TkOpenCall/5 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseResult_2/4 # TkOpenCall/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseCall/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
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
  //FAST GEN:S 
  //GLOBAL GEN:S 
  // </0 & lambda_ParseResult_2/4 s.idx#0/5 >/1
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
    //#TkOpenBracket
    // </0 & lambda_ParseResult_2/4 # TkOpenBracket/5 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenBracket<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseResult_2/4 # TkOpenBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseBracket/1 ]] }
    refalrts::reinit_ident( context[1], & ident_TkCloseBracket<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //#TkOpenCall
  // </0 & lambda_ParseResult_2/4 # TkOpenCall/5 >/1
  if( ! refalrts::ident_term(  & ident_TkOpenCall<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_ParseResult_2/4 # TkOpenCall/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseCall/1 ]] }
  refalrts::reinit_ident( context[1], & ident_TkCloseCall<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromBracket, "StrFromBracket" },
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { ParseBlock, "ParseBlock" },
    { ParseResult_Block, "ParseResult_Block" },
    { lambda_ParseResult_1, "lambda_ParseResult_1" },
    { lambda_ParseResult_2, "lambda_ParseResult_2" },
    { Fetch, "Fetch" },
    { ST_GetAnyName, "ST_GetAnyName" },
    { ST_AddFunctionCall, "ST_AddFunctionCall" },
    { lambda_ParseResult_0, "lambda_ParseResult_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { CheckUseVariable, "CheckUseVariable" },
    { ST_AddIdent, "ST_AddIdent" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Close<int>::name,
    & ident_TkOpenBlock<int>::name,
    & ident_Open<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_TkName<int>::name,
    & ident_TkVariable<int>::name,
    & ident_TkIdentMarker<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_TkNumber<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"lanced bracket \"", 16},
    {"Un", 2},
    {"Expected name after \"[\"", 23},
    {"d name after \"#\"", 16},
    {"is", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:(E )T T T (E )(E )E 
    // </0 & ParseResult/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 t.idxTVV#0/13 (/17 e.idxTVVVB#0/15 )/18 (/21 e.idxTVVVTB#0/19 )/22 e.idxTVVVTT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    {refalrts::ictVarLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    {refalrts::icBracketLeftSave, 0, 19, 2},
    // closed e.idxTVVVB#0 as range 15
    // closed e.idxTVVVTB#0 as range 19
    // closed e.idxTVVVTT#0 as range 2
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //(E )T T T (E )(E )(#TkCharS S )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkChar/27 s.LnNum#1/28 s.Char#1/29 )/26 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 11, 23},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 28, 23},
    {refalrts::icsVarLeft, 0, 29, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.LnNum#1/28 s.Char#1/29 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkChar/25 HalfReuse: s.Char1 #29/27 } )/30 Tile{ AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitIdent, 0, 11, 25},
    {refalrts::icReinitSVar, 0, 29, 27},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icLinkBrackets, 22, 30, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 26},
    {refalrts::icSpliceTile, 30, 30, 0},
    {refalrts::icTrash, 0, 0, 27},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //(E )T T T (E )(E )(#TkNumberS S )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkNumber/27 s.LnNum#1/28 s.Number#1/29 )/26 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 10, 23},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 28, 23},
    {refalrts::icsVarLeft, 0, 29, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.LnNum#1/28 s.Number#1/29 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkNumber/25 HalfReuse: s.Number1 #29/27 } )/30 Tile{ AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitIdent, 0, 10, 25},
    {refalrts::icReinitSVar, 0, 29, 27},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icLinkBrackets, 22, 30, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 26},
    {refalrts::icSpliceTile, 30, 30, 0},
    {refalrts::icTrash, 0, 0, 27},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    //(E )T T T (E )(E )(#TkNameS E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkName/27 s.LnNum#1/28 e.Name#1/23 )/26 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 6, 23},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 28, 23},
    // closed e.Name#1 as range 23
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } </29 & ST_AddFunctionCall/30 Tile{ AsIs: t.SymTable#1/11 } Tile{ AsIs: s.LnNum#1/28 } e.Name#1/23/31 Tile{ HalfReuse: >/27 } Tile{ AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkName/25 } Tile{ AsIs: e.Name#1/23 } )/33 Tile{ AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 8, 30},
    {refalrts::icCopyEVar, 31, 23, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitIdent, 0, 6, 25},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icLinkBrackets, 22, 33, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 26},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 13, 25, 0},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 31, 32, 0},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 29, 30, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    //(E )T T T (E )(E )(#TkIdentMarkerS )(#TkNameS E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkIdentMarker/27 s.MarkerLnNum#1/33 )/26 (/30 # TkName/32 s.NameLnNum#1/34 e.Name#1/28 )/31 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 8, 23},
    {refalrts::icBracketLeftSave, 0, 28, 44},
    {refalrts::icIdentLeftSave, 32, 6, 28},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 33, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icsVarLeft, 0, 34, 28},
    // closed e.Name#1 as range 28
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.MarkerLnNum#1/33 {REMOVED TILE}  {REMOVED TILE}  s.NameLnNum#1/34 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } Tile{ HalfReuse: </30 HalfReuse: & ST_AddIdent/32 } Tile{ AsIs: t.SymTable#1/11 } e.Name#1/28/35 Tile{ HalfReuse: >/27 } Tile{ AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkIdentifier/25 } Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: )/26 } Tile{ AsIs: )/31 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 35, 28, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icReinitFunc, 0, 12, 32},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitIdent, 0, 9, 25},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 31, 0},
    {refalrts::icLinkBrackets, 22, 26, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 31},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceTile, 13, 25, 0},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 30, 32, 0},
    {refalrts::icTrash, 0, 0, 10},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    //(E )T T T (E )(E )(#TkIdentMarkerS )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkIdentMarker/27 s.LnNum#1/28 )/26 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 8, 23},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 28, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } </29 & EL_AddErrorAt/30 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: s.LnNum#1/28 HalfReuse: 'M'/26 }"is"/31 Tile{ HalfReuse: 's'/25 HalfReuse: 'e'/27 }"d name after \"#\""/33 >/35 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 } Tile{ AsIs: e.Tail#1/44(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 1, 30},
    {refalrts::icAllocString, 0, 4, 31},
    {refalrts::icAllocString, 0, 3, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icReinitChar, 0, 'M', 26},
    {refalrts::icReinitChar, 0, 's', 25},
    {refalrts::icReinitChar, 0, 'e', 27},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceTile, 11, 22, 0},
    {refalrts::icSpliceTile, 33, 35, 0},
    {refalrts::icSpliceTile, 25, 27, 0},
    {refalrts::icSpliceTile, 31, 32, 0},
    {refalrts::icSpliceTile, 28, 26, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 29, 30, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    //(E )T T T (E )(E )(#TkVariableS S E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkVariable/27 s.LnNum#1/28 s.Mode#1/29 e.Index#1/23 )/26 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 7, 23},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 28, 23},
    {refalrts::icsVarLeft, 0, 29, 23},
    // closed e.Index#1 as range 23
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </27 } & Fetch/30 </31 & CheckUseVariable/32 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Context#1/13 } Tile{ AsIs: s.LnNum#1/28 AsIs: s.Mode#1/29 AsIs: e.Index#1/23 HalfReuse: >/26 } </33 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ParseResult_0/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } Tile{ AsIs: t.SymTable#1/11 } Tile{ AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 AsIs: (/25 } Tile{ AsIs: e.Tail#1/44(2) } )/34 (/35 e.Index#1/23/36 )/38 >/39 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 6, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icAllocFunc, 0, 11, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icCopyEVar, 36, 23, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icReinitFunc, 0, 10, 0},
    {refalrts::icUpdateFunc, 0, 9, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icLinkBrackets, 35, 38, 0},
    {refalrts::icLinkBrackets, 25, 34, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 34, 39, 0},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceTile, 17, 25, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceTile, 28, 26, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 30, 32, 0},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    //(E )T T T (E )(E )(#OpenS #TkOpenADT)(#TkNameS E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Open/27 s.LnNumADT#1/34 # TkOpenADT/28 )/26 (/31 # TkName/33 s.LnNumName#1/35 e.Name#1/29 )/32 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 2, 23},
    {refalrts::icIdentRightSave, 28, 5, 23},
    {refalrts::icBracketLeftSave, 0, 29, 44},
    {refalrts::icIdentLeftSave, 33, 6, 29},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 34, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icsVarLeft, 0, 35, 29},
    // closed e.Name#1 as range 29
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumADT#1/34 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } </36 & ST_AddFunctionCall/37 Tile{ AsIs: t.SymTable#1/11 } Tile{ AsIs: s.LnNumName#1/35 } Tile{ AsIs: e.Name#1/29 } >/38 Tile{ AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: (/18 HalfReuse: # ADT_Brackets/21 } Tile{ HalfReuse: s.LnNumADT1 #34/25 Reuse: # TkCloseADT/27 } Tile{ AsIs: e.Scanned#1/19 } Tile{ HalfReuse: )/28 AsIs: )/26 AsIs: (/31 HalfReuse: (/33 } e.Name#1/29/39 Tile{ AsIs: )/22 } Tile{ AsIs: )/32 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocFunc, 0, 8, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icCopyEVar, 39, 29, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitIdent, 0, 3, 21},
    {refalrts::icReinitSVar, 0, 34, 25},
    {refalrts::icUpdateIdent, 0, 4, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icLinkBrackets, 33, 22, 0},
    {refalrts::icLinkBrackets, 17, 26, 0},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 32},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 39, 40, 0},
    {refalrts::icSpliceTile, 28, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 25, 27, 0},
    {refalrts::icSpliceTile, 13, 21, 0},
    {refalrts::icSpliceTile, 38, 38, 0},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceTile, 35, 35, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 36, 37, 0},
    {refalrts::icTrash, 0, 0, 10},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +45, 0, 0},
    //(E )T T T (E )(E )(#OpenS #TkOpenADT)E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Open/27 s.LnNum#1/29 # TkOpenADT/28 )/26 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 2, 23},
    {refalrts::icIdentRightSave, 28, 5, 23},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 29, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } </30 & EL_AddErrorAt/31 Tile{ AsIs: t.ErrorList#1/9 } s.LnNum#1/29/32"Expected name after \"[\""/33 >/35 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: (/18 HalfReuse: # ADT_Brackets/21 } Tile{ AsIs: s.LnNum#1/29 } # TkCloseADT/36 Tile{ AsIs: e.Scanned#1/19 } )/37 Tile{ AsIs: )/22 AsIs: (/25 HalfReuse: (/27 } </38 & ST_GetAnyName/39 t.SymTable#1/11/40 >/42 Tile{ HalfReuse: )/28 AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 1, 31},
    {refalrts::icCopySTVar, 32, 29, 0},
    {refalrts::icAllocString, 0, 2, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icAllocIdent, 0, 4, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 38},
    {refalrts::icAllocFunc, 0, 7, 39},
    {refalrts::icCopyEVar, 40, 11, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 42},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitIdent, 0, 3, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icPushStack, 0, 0, 42},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icLinkBrackets, 17, 22, 0},
    {refalrts::icLinkBrackets, 18, 37, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 28},
    {refalrts::icSpliceTile, 38, 42, 0},
    {refalrts::icSpliceTile, 22, 27, 0},
    {refalrts::icSpliceTile, 37, 37, 0},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 36, 36, 0},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceTile, 11, 21, 0},
    {refalrts::icSpliceTile, 32, 35, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 30, 31, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +39, 0, 0},
    //(E )T T T (E )(E )(#OpenS S )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Open/27 s.LnNum#1/28 s.OpenBracket#1/29 )/26 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 2, 23},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 28, 23},
    {refalrts::icsVarLeft, 0, 29, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: (/18 HalfReuse: </21 } & Fetch/30 Tile{ HalfReuse: s.OpenBracket1 #29/22 HalfReuse: & lambda_ParseResult_1/25 HalfReuse: >/27 AsIs: s.LnNum#1/28 } </31 & Fetch/32 Tile{ AsIs: s.OpenBracket#1/29 } & lambda_ParseResult_2/33 >/34 Tile{ AsIs: e.Scanned#1/19 } )/35 )/36 (/37 Tile{ AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 6, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icAllocFunc, 0, 6, 32},
    {refalrts::icAllocFunc, 0, 5, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icReinitSVar, 0, 29, 22},
    {refalrts::icReinitFunc, 0, 4, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 37, 26, 0},
    {refalrts::icLinkBrackets, 17, 36, 0},
    {refalrts::icLinkBrackets, 18, 35, 0},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 26},
    {refalrts::icSpliceTile, 35, 37, 0},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceTile, 31, 32, 0},
    {refalrts::icSpliceTile, 22, 28, 0},
    {refalrts::icSpliceTile, 30, 30, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    //(E )T T T (E (S S S E ))(E )(#CloseS S )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 (/30 s.BracketsSign#1/32 s.OpenLnNum#1/33 s.CloseBracket#1/34 e.Scanned#1/28 )/31 )/18 (/21 e.InnerScanned#1/19 )/22 (/25 # Close/27 s.LnNum#1/36 s.CloseBracket#1/35 )/26 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 0, 23},
    {refalrts::icSave, 0, 46, 15},
    {refalrts::icBracketRightSave, 0, 28, 46},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 46(15)
    // closed e.InnerScanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 32, 28},
    {refalrts::icsVarLeft, 0, 33, 28},
    {refalrts::icsVarLeft, 0, 34, 28},
    {refalrts::icsRepeatRight, 35, 34, 23},
    // closed e.Scanned#1 as range 28
    {refalrts::icsVarLeft, 0, 36, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.BracketsSign#1/32 s.OpenLnNum#1/33 s.CloseBracket#1/34 {REMOVED TILE}  )/31 {REMOVED TILE}  {REMOVED TILE}  # Close/27 s.LnNum#1/36 s.CloseBracket#1/35 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/46(15) HalfReuse: )/30 } Tile{ AsIs: (/25 } Tile{ AsIs: e.Scanned#1/28 } Tile{ HalfReuse: (/18 HalfReuse: s.BracketsSign1 #32/21 AsIs: e.InnerScanned#1/19 AsIs: )/22 } Tile{ AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitSVar, 0, 32, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icLinkBrackets, 18, 22, 0},
    {refalrts::icLinkBrackets, 17, 30, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 26},
    {refalrts::icSpliceTile, 18, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icTrash, 0, 0, 30},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +25, 0, 0},
    //(E )T T T (E )(E )(#TkOpenBlockS )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkOpenBlock/27 s.LnNum#1/28 )/26 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 1, 23},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 28, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/28 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 HalfReuse: & ParseResult_Block/27 } Tile{ AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ParseBlock/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 } Tile{ AsIs: e.Tail#1/44(2) } Tile{ HalfReuse: >/26 } Tile{ AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icReinitFunc, 0, 3, 27},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceTile, 0, 14, 0},
    {refalrts::icSpliceTile, 17, 22, 0},
    {refalrts::icSpliceTile, 25, 27, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +50, 0, 0},
    //(E )T T T (E (S S S E ))(E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 (/25 s.BracketsSign#1/27 s.OpenLnNum#1/28 s.CloseBracket#1/29 e.Scanned#1/23 )/26 )/18 (/21 e.InnerScanned#1/19 )/22 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 15},
    {refalrts::icBracketRightSave, 0, 23, 44},
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 44(15)
    // closed e.InnerScanned#1 as range 19
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 27, 23},
    {refalrts::icsVarLeft, 0, 28, 23},
    {refalrts::icsVarLeft, 0, 29, 23},
    // closed e.Scanned#1 as range 23
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.CloseBracket#1/29 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } </30 & EL_AddErrorAt/31 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: s.OpenLnNum#1/28 } 'U'/32 Tile{ HalfReuse: 'n'/26 HalfReuse: 'b'/18 HalfReuse: 'a'/21 }"lanced bracket \""/33 </35 & StrFromBracket/36 Tile{ AsIs: s.BracketsSign#1/27 } >/37 '\"'/38 >/39 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/44(15) HalfReuse: )/25 } (/40 Tile{ AsIs: e.Scanned#1/23 } (/41 s.BracketsSign#1/27/42 Tile{ AsIs: e.InnerScanned#1/19 } )/43 Tile{ AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 1, 31},
    {refalrts::icAllocChar, 0, 'U', 32},
    {refalrts::icAllocString, 0, 0, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 35},
    {refalrts::icAllocFunc, 0, 0, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icAllocChar, 0, '\"', 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 41},
    {refalrts::icCopySTVar, 42, 27, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icReinitChar, 0, 'n', 26},
    {refalrts::icReinitChar, 0, 'b', 18},
    {refalrts::icReinitChar, 0, 'a', 21},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 40, 22, 0},
    {refalrts::icLinkBrackets, 41, 43, 0},
    {refalrts::icLinkBrackets, 17, 25, 0},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 22},
    {refalrts::icSpliceTile, 43, 43, 0},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 41, 42, 0},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 40, 40, 0},
    {refalrts::icSpliceTile, 11, 25, 0},
    {refalrts::icSpliceTile, 37, 39, 0},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 33, 36, 0},
    {refalrts::icSpliceTile, 26, 21, 0},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 30, 31, 0},
    {refalrts::icTrash, 0, 0, 8},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    //(E )T T T ()(E )(#CloseS S )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Close/27 s.LnNum#1/28 s.CloseBracket#1/29 )/26 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 44, 2},
    {refalrts::icBracketLeftSave, 0, 23, 44},
    {refalrts::icIdentLeftSave, 27, 0, 23},
    {refalrts::icSave, 0, 46, 15},
    {refalrts::icEmpty, 0, 0, 46},
    // closed e.Functions#1 as range 5
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    {refalrts::icsVarLeft, 0, 28, 23},
    {refalrts::icsVarLeft, 0, 29, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } </30 & EL_AddErrorAt/31 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: s.LnNum#1/28 }"Un"/32 Tile{ HalfReuse: 'b'/25 HalfReuse: 'a'/27 }"lanced bracket \""/34 </36 & StrFromBracket/37 Tile{ AsIs: s.CloseBracket#1/29 HalfReuse: >/26 } '\"'/38 >/39 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 } Tile{ AsIs: e.Tail#1/44(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 1, 31},
    {refalrts::icAllocString, 0, 1, 32},
    {refalrts::icAllocString, 0, 0, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocFunc, 0, 0, 37},
    {refalrts::icAllocChar, 0, '\"', 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icReinitChar, 0, 'b', 25},
    {refalrts::icReinitChar, 0, 'a', 27},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceTile, 11, 22, 0},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icSpliceTile, 29, 26, 0},
    {refalrts::icSpliceTile, 34, 37, 0},
    {refalrts::icSpliceTile, 25, 27, 0},
    {refalrts::icSpliceTile, 32, 33, 0},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 30, 31, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )T T T ()(E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 )/18 (/21 e.Result#1/19 )/22 e.Tail#1/2 >/1
    {refalrts::icEmpty, 0, 0, 15},
    // closed e.Functions#1 as range 5
    // closed e.Result#1 as range 19
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ParseResult/4 {REMOVED TILE}  )/18 (/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 } Tile{ AsIs: e.Result#1/19 } Tile{ AsIs: )/22 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    {refalrts::icLinkBrackets, 17, 22, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 7, 17, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[13];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:(E )T T T (E )(E )E 
  // </0 & ParseResult/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 t.idxTVV#0/13 (/17 e.idxTVVVB#0/15 )/18 (/21 e.idxTVVVTB#0/19 )/22 e.idxTVVVTT#0/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.idxTVVVB#0 as range 15
  // closed e.idxTVVVTB#0 as range 19
  // closed e.idxTVVVTT#0 as range 2
  do {
    refalrts::start_sentence();
    //(E )T T T (E )(E )(#TkCharS S )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkChar/27 s.LnNum#1/28 s.Char#1/29 )/26 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkChar<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.LnNum#1/28 s.Char#1/29 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkChar/25 HalfReuse: s.Char1 #29/27 } )/30 Tile{ AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_ident( context[25], & ident_TkChar<int>::name );
    refalrts::reinit_svar( context[27], context[29] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[26] );
    refalrts::link_brackets( context[22], context[30] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[30], context[30] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[27], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E )(E )(#TkNumberS S )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkNumber/27 s.LnNum#1/28 s.Number#1/29 )/26 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.LnNum#1/28 s.Number#1/29 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkNumber/25 HalfReuse: s.Number1 #29/27 } )/30 Tile{ AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_ident( context[25], & ident_TkNumber<int>::name );
    refalrts::reinit_svar( context[27], context[29] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[26] );
    refalrts::link_brackets( context[22], context[30] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[30], context[30] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[27], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E )(E )(#TkNameS E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkName/27 s.LnNum#1/28 e.Name#1/23 )/26 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkName<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    // closed e.Name#1 as range 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } </29 & ST_AddFunctionCall/30 Tile{ AsIs: t.SymTable#1/11 } Tile{ AsIs: s.LnNum#1/28 } e.Name#1/23/31 Tile{ HalfReuse: >/27 } Tile{ AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkName/25 } Tile{ AsIs: e.Name#1/23 } )/33 Tile{ AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[31], context[32], context[23], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_ident( context[25], & ident_TkName<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[26] );
    refalrts::link_brackets( context[22], context[33] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[13], context[25] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E )(E )(#TkIdentMarkerS )(#TkNameS E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkIdentMarker/27 s.MarkerLnNum#1/33 )/26 (/30 # TkName/32 s.NameLnNum#1/34 e.Name#1/28 )/31 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[44], context[45] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_TkName<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[33], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[34], context[28], context[29] ) )
      continue;
    // closed e.Name#1 as range 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.MarkerLnNum#1/33 {REMOVED TILE}  {REMOVED TILE}  s.NameLnNum#1/34 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } Tile{ HalfReuse: </30 HalfReuse: & ST_AddIdent/32 } Tile{ AsIs: t.SymTable#1/11 } e.Name#1/28/35 Tile{ HalfReuse: >/27 } Tile{ AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkIdentifier/25 } Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: )/26 } Tile{ AsIs: )/31 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[35], context[36], context[28], context[29]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[30] );
    refalrts::reinit_name( context[32], ST_AddIdent, "ST_AddIdent" );
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_ident( context[25], & ident_TkIdentifier<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[31] );
    refalrts::link_brackets( context[22], context[26] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[31];
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[13], context[25] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E )(E )(#TkIdentMarkerS )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkIdentMarker/27 s.LnNum#1/28 )/26 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } </29 & EL_AddErrorAt/30 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: s.LnNum#1/28 HalfReuse: 'M'/26 }"is"/31 Tile{ HalfReuse: 's'/25 HalfReuse: 'e'/27 }"d name after \"#\""/33 >/35 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 } Tile{ AsIs: e.Tail#1/44(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[31], context[32], "is", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[33], context[34], "d name after \"#\"", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[26], 'M' );
    refalrts::reinit_char( context[25], 's' );
    refalrts::reinit_char( context[27], 'e' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[11], context[22] );
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[28], context[26] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E )(E )(#TkVariableS S E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkVariable/27 s.LnNum#1/28 s.Mode#1/29 e.Index#1/23 )/26 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    // closed e.Index#1 as range 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </27 } & Fetch/30 </31 & CheckUseVariable/32 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Context#1/13 } Tile{ AsIs: s.LnNum#1/28 AsIs: s.Mode#1/29 AsIs: e.Index#1/23 HalfReuse: >/26 } </33 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ParseResult_0/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } Tile{ AsIs: t.SymTable#1/11 } Tile{ AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 AsIs: (/25 } Tile{ AsIs: e.Tail#1/44(2) } )/34 (/35 e.Index#1/23/36 )/38 >/39 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[30], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], CheckUseVariable, "CheckUseVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[36], context[37], context[23], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[27] );
    refalrts::reinit_close_call( context[26] );
    refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[4], lambda_ParseResult_0, "lambda_ParseResult_0" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[33] );
    refalrts::link_brackets( context[35], context[38] );
    refalrts::link_brackets( context[25], context[34] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[34], context[39] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[17], context[25] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[28], context[26] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E )(E )(#OpenS #TkOpenADT)(#TkNameS E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Open/27 s.LnNumADT#1/34 # TkOpenADT/28 )/26 (/31 # TkName/33 s.LnNumName#1/35 e.Name#1/29 )/32 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Open<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[23], context[24] );
    if( ! context[28] )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[44], context[45] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    context[33] = refalrts::ident_left(  & ident_TkName<int>::name, context[29], context[30] );
    if( ! context[33] )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[34], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[35], context[29], context[30] ) )
      continue;
    // closed e.Name#1 as range 29

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumADT#1/34 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } </36 & ST_AddFunctionCall/37 Tile{ AsIs: t.SymTable#1/11 } Tile{ AsIs: s.LnNumName#1/35 } Tile{ AsIs: e.Name#1/29 } >/38 Tile{ AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: (/18 HalfReuse: # ADT_Brackets/21 } Tile{ HalfReuse: s.LnNumADT1 #34/25 Reuse: # TkCloseADT/27 } Tile{ AsIs: e.Scanned#1/19 } Tile{ HalfReuse: )/28 AsIs: )/26 AsIs: (/31 HalfReuse: (/33 } e.Name#1/29/39 Tile{ AsIs: )/22 } Tile{ AsIs: )/32 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[37], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[38] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[39], context[40], context[29], context[30]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_ident( context[21], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_svar( context[25], context[34] );
    refalrts::update_ident( context[27], & ident_TkCloseADT<int>::name );
    refalrts::reinit_close_bracket( context[28] );
    refalrts::reinit_open_bracket( context[33] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[33], context[22] );
    refalrts::link_brackets( context[17], context[26] );
    refalrts::link_brackets( context[18], context[28] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[36] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[32];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[28], context[33] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E )(E )(#OpenS #TkOpenADT)E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Open/27 s.LnNum#1/29 # TkOpenADT/28 )/26 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Open<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[23], context[24] );
    if( ! context[28] )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } </30 & EL_AddErrorAt/31 Tile{ AsIs: t.ErrorList#1/9 } s.LnNum#1/29/32"Expected name after \"[\""/33 >/35 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: (/18 HalfReuse: # ADT_Brackets/21 } Tile{ AsIs: s.LnNum#1/29 } # TkCloseADT/36 Tile{ AsIs: e.Scanned#1/19 } )/37 Tile{ AsIs: )/22 AsIs: (/25 HalfReuse: (/27 } </38 & ST_GetAnyName/39 t.SymTable#1/11/40 >/42 Tile{ HalfReuse: )/28 AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[29]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[33], context[34], "Expected name after \"[\"", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[36], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[39], ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[40], context[41], context[11], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[42] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_ident( context[21], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_open_bracket( context[27] );
    refalrts::reinit_close_bracket( context[28] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::push_stack( context[42] );
    refalrts::push_stack( context[38] );
    refalrts::link_brackets( context[17], context[22] );
    refalrts::link_brackets( context[18], context[37] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[38], context[42] );
    res = refalrts::splice_evar( res, context[22], context[27] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[11], context[21] );
    res = refalrts::splice_evar( res, context[32], context[35] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E )(E )(#OpenS S )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Open/27 s.LnNum#1/28 s.OpenBracket#1/29 )/26 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Open<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: (/18 HalfReuse: </21 } & Fetch/30 Tile{ HalfReuse: s.OpenBracket1 #29/22 HalfReuse: & lambda_ParseResult_1/25 HalfReuse: >/27 AsIs: s.LnNum#1/28 } </31 & Fetch/32 Tile{ AsIs: s.OpenBracket#1/29 } & lambda_ParseResult_2/33 >/34 Tile{ AsIs: e.Scanned#1/19 } )/35 )/36 (/37 Tile{ AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[30], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], lambda_ParseResult_2, "lambda_ParseResult_2" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_open_call( context[21] );
    refalrts::reinit_svar( context[22], context[29] );
    refalrts::reinit_name( context[25], lambda_ParseResult_1, "lambda_ParseResult_1" );
    refalrts::reinit_close_call( context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[37], context[26] );
    refalrts::link_brackets( context[17], context[36] );
    refalrts::link_brackets( context[18], context[35] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[22], context[28] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E (S S S E ))(E )(#CloseS S )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 (/30 s.BracketsSign#1/32 s.OpenLnNum#1/33 s.CloseBracket#1/34 e.Scanned#1/28 )/31 )/18 (/21 e.InnerScanned#1/19 )/22 (/25 # Close/27 s.LnNum#1/36 s.CloseBracket#1/35 )/26 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Close<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[46] = context[15];
    context[47] = context[16];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_right( context[28], context[29], context[46], context[47] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 46(15)
    // closed e.InnerScanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[28], context[29] ) )
      continue;
    if( ! refalrts::svar_left( context[34], context[28], context[29] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[35], context[34], context[23], context[24] ) )
      continue;
    // closed e.Scanned#1 as range 28
    if( ! refalrts::svar_left( context[36], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.BracketsSign#1/32 s.OpenLnNum#1/33 s.CloseBracket#1/34 {REMOVED TILE}  )/31 {REMOVED TILE}  {REMOVED TILE}  # Close/27 s.LnNum#1/36 s.CloseBracket#1/35 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/46(15) HalfReuse: )/30 } Tile{ AsIs: (/25 } Tile{ AsIs: e.Scanned#1/28 } Tile{ HalfReuse: (/18 HalfReuse: s.BracketsSign1 #32/21 AsIs: e.InnerScanned#1/19 AsIs: )/22 } Tile{ AsIs: )/26 AsIs: e.Tail#1/44(2) AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[30] );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_svar( context[21], context[32] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[18], context[22] );
    refalrts::link_brackets( context[17], context[30] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[18], context[22] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[30], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E )(E )(#TkOpenBlockS )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkOpenBlock/27 s.LnNum#1/28 )/26 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/28 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 HalfReuse: & ParseResult_Block/27 } Tile{ AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ParseBlock/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 } Tile{ AsIs: e.Tail#1/44(2) } Tile{ HalfReuse: >/26 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_name( context[27], ParseResult_Block, "ParseResult_Block" );
    refalrts::update_name( context[4], ParseBlock, "ParseBlock" );
    refalrts::reinit_close_call( context[26] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[17], context[22] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T (E (S S S E ))(E )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 (/25 s.BracketsSign#1/27 s.OpenLnNum#1/28 s.CloseBracket#1/29 e.Scanned#1/23 )/26 )/18 (/21 e.InnerScanned#1/19 )/22 e.Tail#1/2 >/1
    context[44] = context[15];
    context[45] = context[16];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_right( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    // closed e.Functions#1 as range 5
    // closed e.MultiBracket#1 as range 44(15)
    // closed e.InnerScanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    // closed e.Scanned#1 as range 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.CloseBracket#1/29 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } </30 & EL_AddErrorAt/31 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: s.OpenLnNum#1/28 } 'U'/32 Tile{ HalfReuse: 'n'/26 HalfReuse: 'b'/18 HalfReuse: 'a'/21 }"lanced bracket \""/33 </35 & StrFromBracket/36 Tile{ AsIs: s.BracketsSign#1/27 } >/37 '\"'/38 >/39 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/44(15) HalfReuse: )/25 } (/40 Tile{ AsIs: e.Scanned#1/23 } (/41 s.BracketsSign#1/27/42 Tile{ AsIs: e.InnerScanned#1/19 } )/43 Tile{ AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[33], context[34], "lanced bracket \"", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[36], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[41] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[42], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[43] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[26], 'n' );
    refalrts::reinit_char( context[18], 'b' );
    refalrts::reinit_char( context[21], 'a' );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[40], context[22] );
    refalrts::link_brackets( context[41], context[43] );
    refalrts::link_brackets( context[17], context[25] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[35] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[43], context[43] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[11], context[25] );
    res = refalrts::splice_evar( res, context[37], context[39] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[26], context[21] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )T T T ()(E )(#CloseS S )E 
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Close/27 s.LnNum#1/28 s.CloseBracket#1/29 )/26 e.Tail#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[44], context[45] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Close<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[46] = context[15];
    context[47] = context[16];
    if( ! refalrts::empty_seq( context[46], context[47] ) )
      continue;
    // closed e.Functions#1 as range 5
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 44(2)
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } </30 & EL_AddErrorAt/31 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: s.LnNum#1/28 }"Un"/32 Tile{ HalfReuse: 'b'/25 HalfReuse: 'a'/27 }"lanced bracket \""/34 </36 & StrFromBracket/37 Tile{ AsIs: s.CloseBracket#1/29 HalfReuse: >/26 } '\"'/38 >/39 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 } Tile{ AsIs: e.Tail#1/44(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[32], context[33], "Un", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[34], context[35], "lanced bracket \"", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[37], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[25], 'b' );
    refalrts::reinit_char( context[27], 'a' );
    refalrts::reinit_close_call( context[26] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[36] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[11], context[22] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[29], context[26] );
    res = refalrts::splice_evar( res, context[34], context[37] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )T T T ()(E )E 
  // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 )/18 (/21 e.Result#1/19 )/22 e.Tail#1/2 >/1
  if( ! refalrts::empty_seq( context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 5
  // closed e.Result#1 as range 19
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ParseResult/4 {REMOVED TILE}  )/18 (/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 } Tile{ AsIs: e.Result#1/19 } Tile{ AsIs: )/22 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[17], context[22] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[7], context[17] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CheckUseVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { InvalidModeVariableError, "InvalidModeVariableError" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name,
    & ident_InvalidMode<int>::name,
    & ident_ExistVariable<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"not foun", 8},
    {"Variable ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:T S S (E )T S E 
    // </0 & lambda_CheckUseVariable_0/4 t.idx#0/5 s.idxV#0/7 s.idxVV#0/8 (/11 e.idxVVVB#0/9 )/12 t.idxVVVT#0/13 s.idxVVVTV#0/15 e.idxVVVTVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.idxVVVB#0 as range 9
    {refalrts::ictVarLeftSave, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 2},
    // closed e.idxVVVTVV#0 as range 2
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //T S S (E )T #ExistVariableS 
    // </0 & lambda_CheckUseVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # ExistVariable/15 s.Depth#2/16 >/1
    {refalrts::icIdentTerm, 0, 2, 15},
    // closed e.Index#1 as range 9
    {refalrts::icSave, 0, 20, 2},
    {refalrts::icsVarLeft, 0, 16, 20},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_CheckUseVariable_0/4 {REMOVED TILE}  s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Context#2/13 HalfReuse: s.Mode1 #8/15 AsIs: s.Depth#2/16 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 8, 15},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 16, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //T S S (E )T #InvalidModeS S 
    // </0 & lambda_CheckUseVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # InvalidMode/15 s.Depth#2/16 s.OldMode#2/17 >/1
    {refalrts::icIdentTerm, 0, 1, 15},
    // closed e.Index#1 as range 9
    {refalrts::icSave, 0, 20, 2},
    {refalrts::icsVarLeft, 0, 16, 20},
    {refalrts::icsVarLeft, 0, 17, 20},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Mode#1/8 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & InvalidModeVariableError/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 } Tile{ AsIs: s.OldMode#2/17 } Tile{ HalfReuse: s.Mode1 #8/11 AsIs: e.Index#1/9 HalfReuse: >/12 AsIs: t.Context#2/13 HalfReuse: s.OldMode2 #17/15 AsIs: s.Depth#2/16 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitSVar, 0, 8, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icReinitSVar, 0, 17, 15},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 16, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T S S (E )T #NotFound
    // </0 & lambda_CheckUseVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # NotFound/15 >/1
    {refalrts::icIdentTerm, 0, 0, 15},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Index#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 }"Variable "/16 Tile{ AsIs: s.Mode#1/8 HalfReuse: '.'/11 AsIs: e.Index#1/9 HalfReuse: ' '/12 }"not foun"/18 Tile{ HalfReuse: 'd'/15 AsIs: >/1 } Tile{ AsIs: t.Context#2/13 } Tile{ ]] }
    {refalrts::icAllocString, 0, 1, 16},
    {refalrts::icAllocString, 0, 0, 18},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, '.', 11},
    {refalrts::icReinitChar, 0, ' ', 12},
    {refalrts::icReinitChar, 0, 'd', 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 15, 1, 0},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icSpliceTile, 8, 12, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:T S S (E )T S E 
  // </0 & lambda_CheckUseVariable_0/4 t.idx#0/5 s.idxV#0/7 s.idxVV#0/8 (/11 e.idxVVVB#0/9 )/12 t.idxVVVT#0/13 s.idxVVVTV#0/15 e.idxVVVTVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVVVB#0 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVTVV#0 as range 2
  do {
    refalrts::start_sentence();
    //T S S (E )T #ExistVariableS 
    // </0 & lambda_CheckUseVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # ExistVariable/15 s.Depth#2/16 >/1
    if( ! refalrts::ident_term(  & ident_ExistVariable<int>::name, context[15] ) )
      continue;
    // closed e.Index#1 as range 9
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::svar_left( context[16], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_CheckUseVariable_0/4 {REMOVED TILE}  s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Context#2/13 HalfReuse: s.Mode1 #8/15 AsIs: s.Depth#2/16 } Tile{ ]] }
    refalrts::reinit_svar( context[15], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T S S (E )T #InvalidModeS S 
    // </0 & lambda_CheckUseVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # InvalidMode/15 s.Depth#2/16 s.OldMode#2/17 >/1
    if( ! refalrts::ident_term(  & ident_InvalidMode<int>::name, context[15] ) )
      continue;
    // closed e.Index#1 as range 9
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::svar_left( context[16], context[20], context[21] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Mode#1/8 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & InvalidModeVariableError/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 } Tile{ AsIs: s.OldMode#2/17 } Tile{ HalfReuse: s.Mode1 #8/11 AsIs: e.Index#1/9 HalfReuse: >/12 AsIs: t.Context#2/13 HalfReuse: s.OldMode2 #17/15 AsIs: s.Depth#2/16 } Tile{ ]] }
    refalrts::update_name( context[4], InvalidModeVariableError, "InvalidModeVariableError" );
    refalrts::reinit_svar( context[11], context[8] );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_svar( context[15], context[17] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[16] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //T S S (E )T #NotFound
  // </0 & lambda_CheckUseVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # NotFound/15 >/1
  if( ! refalrts::ident_term(  & ident_NotFound<int>::name, context[15] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 }"Variable "/16 Tile{ AsIs: s.Mode#1/8 HalfReuse: '.'/11 AsIs: e.Index#1/9 HalfReuse: ' '/12 }"not foun"/18 Tile{ HalfReuse: 'd'/15 AsIs: >/1 } Tile{ AsIs: t.Context#2/13 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[16], context[17], "Variable ", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "not foun", 8 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
  refalrts::reinit_char( context[11], '.' );
  refalrts::reinit_char( context[12], ' ' );
  refalrts::reinit_char( context[15], 'd' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CheckUseVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { lambda_CheckUseVariable_0, "lambda_CheckUseVariable_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Cntx_CheckVariable, "Cntx_CheckVariable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & CheckUseVariable/4 t.ErrorList#1/5 t.Context#1/7 s.LnNum#1/9 s.Mode#1/10 e.Index#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    // closed e.Index#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Cntx_CheckVariable/12 Tile{ AsIs: t.Context#1/7 } Tile{ AsIs: s.Mode#1/10 AsIs: e.Index#1/2 AsIs: >/1 } </13 & CreateClosure /14 & lambda_CheckUseVariable_0/15 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/9 } s.Mode#1/10/16 (/17 e.Index#1/2/18 )/20 >/21 >/22 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 3, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 2, 14},
    {refalrts::icAllocFunc, 0, 1, 15},
    {refalrts::icCopySTVar, 16, 10, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icCopyEVar, 18, 2, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 16, 22, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 13, 15, 0},
    {refalrts::icSpliceTile, 10, 1, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
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
  // </0 & CheckUseVariable/4 t.ErrorList#1/5 t.Context#1/7 s.LnNum#1/9 s.Mode#1/10 e.Index#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Cntx_CheckVariable/12 Tile{ AsIs: t.Context#1/7 } Tile{ AsIs: s.Mode#1/10 AsIs: e.Index#1/2 AsIs: >/1 } </13 & CreateClosure /14 & lambda_CheckUseVariable_0/15 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/9 } s.Mode#1/10/16 (/17 e.Index#1/2/18 )/20 >/21 >/22 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Cntx_CheckVariable, "Cntx_CheckVariable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], lambda_CheckUseVariable_0, "lambda_CheckUseVariable_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[16], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[22] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_Block_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseResult, "ParseResult" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_LambdaName<int>::name,
    & ident_CallBrackets<int>::name,
    & ident_TkName<int>::name,
    & ident_CreateClosure<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseResult_Block_0/4 s.NextNum#1/9 (/12 e.Functions#1/10 )/13 t.ErrorList#1/14 t.SymTable#1/16 t.Context#1/18 (/22 e.MultiBracket#1/20 )/23 (/26 e.Scanned#1/24 )/27 (/30 e.Tail#1/28 )/31 s.FunctionNumber#2/32 (/7 e.RealContext#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    // closed e.RealContext#2 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 10, 2},
    // closed e.Functions#1 as range 10
    {refalrts::ictVarLeftSave, 0, 14, 2},
    {refalrts::ictVarLeftSave, 0, 16, 2},
    {refalrts::ictVarLeftSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 20, 2},
    {refalrts::icBracketLeftSave, 0, 24, 2},
    {refalrts::icBracketLeftSave, 0, 28, 2},
    // closed e.MultiBracket#1 as range 20
    // closed e.Scanned#1 as range 24
    // closed e.Tail#1 as range 28
    {refalrts::icsVarLeft, 0, 32, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.NextNum#1/9 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseResult/4 } (/33 Tile{ HalfReuse: s.NextNum1 #9/12 AsIs: e.Functions#1/10 AsIs: )/13 AsIs: t.ErrorList#1/14 AsIs: t.SymTable#1/16 AsIs: t.Context#1/18 AsIs: (/22 AsIs: e.MultiBracket#1/20 AsIs: )/23 AsIs: (/26 AsIs: e.Scanned#1/24 HalfReuse: (/27 HalfReuse: # CallBrackets/30 } (/34 # TkName/35 # CreateClosure/36 )/37 (/38 # TkName/39 Tile{ HalfReuse: # LambdaName/31 AsIs: s.FunctionNumber#2/32 HalfReuse: )/7 AsIs: e.RealContext#2/5 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: e.Tail#1/28 } >/40 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icAllocIdent, 0, 2, 35},
    {refalrts::icAllocIdent, 0, 3, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 38},
    {refalrts::icAllocIdent, 0, 2, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 9, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icReinitIdent, 0, 1, 30},
    {refalrts::icReinitIdent, 0, 0, 31},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 26, 1, 0},
    {refalrts::icLinkBrackets, 27, 8, 0},
    {refalrts::icLinkBrackets, 38, 7, 0},
    {refalrts::icLinkBrackets, 34, 37, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 33, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 40, 40, 0},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceTile, 31, 1, 0},
    {refalrts::icSpliceTile, 34, 39, 0},
    {refalrts::icSpliceTile, 12, 30, 0},
    {refalrts::icSpliceTile, 33, 33, 0},
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
  // </0 & lambda_ParseResult_Block_0/4 s.NextNum#1/9 (/12 e.Functions#1/10 )/13 t.ErrorList#1/14 t.SymTable#1/16 t.Context#1/18 (/22 e.MultiBracket#1/20 )/23 (/26 e.Scanned#1/24 )/27 (/30 e.Tail#1/28 )/31 s.FunctionNumber#2/32 (/7 e.RealContext#2/5 )/8 >/1
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
  // closed e.RealContext#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Functions#1 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_left( context[28], context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  // closed e.MultiBracket#1 as range 20
  // closed e.Scanned#1 as range 24
  // closed e.Tail#1 as range 28
  if( ! refalrts::svar_left( context[32], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.NextNum#1/9 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseResult/4 } (/33 Tile{ HalfReuse: s.NextNum1 #9/12 AsIs: e.Functions#1/10 AsIs: )/13 AsIs: t.ErrorList#1/14 AsIs: t.SymTable#1/16 AsIs: t.Context#1/18 AsIs: (/22 AsIs: e.MultiBracket#1/20 AsIs: )/23 AsIs: (/26 AsIs: e.Scanned#1/24 HalfReuse: (/27 HalfReuse: # CallBrackets/30 } (/34 # TkName/35 # CreateClosure/36 )/37 (/38 # TkName/39 Tile{ HalfReuse: # LambdaName/31 AsIs: s.FunctionNumber#2/32 HalfReuse: )/7 AsIs: e.RealContext#2/5 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: e.Tail#1/28 } >/40 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[35], & ident_TkName<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[36], & ident_CreateClosure<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[39], & ident_TkName<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ParseResult, "ParseResult" );
  refalrts::reinit_svar( context[12], context[9] );
  refalrts::reinit_open_bracket( context[27] );
  refalrts::reinit_ident( context[30], & ident_CallBrackets<int>::name );
  refalrts::reinit_ident( context[31], & ident_LambdaName<int>::name );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[26], context[1] );
  refalrts::link_brackets( context[27], context[8] );
  refalrts::link_brackets( context[38], context[7] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[33], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[31], context[1] );
  res = refalrts::splice_evar( res, context[34], context[39] );
  res = refalrts::splice_evar( res, context[12], context[30] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseResult_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { CreateContext, "CreateContext" },
    { Dec, "Dec" },
    { ParseResult, "ParseResult" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_LambdaName<int>::name,
    & ident_TkName<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )(E )(S E )T T (E )E 
    //GLOBAL GEN:(E )(E )(S E )T T (T E )E 
    // </0 & ParseResult_Block/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 s.idxTTB#0/17 e.idxTTBV#0/13 )/16 t.idxTTT#0/18 t.idxTTTV#0/20 (/24 t.idxTTTVVB#0/26 e.idxTTTVVBV#0/22 )/25 e.idxTTTVVT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    {refalrts::icsVarLeft, 0, 17, 13},
    // closed e.idxTTBV#0 as range 13
    {refalrts::ictVarLeftSave, 0, 18, 2},
    {refalrts::ictVarLeftSave, 0, 20, 2},
    {refalrts::icBracketLeftSave, 0, 22, 2},
    // closed e.idxTTTVVT#0 as range 2
    {refalrts::ictVarLeftSave, 0, 26, 22},
    // closed e.idxTTTVVBV#0 as range 22
    {refalrts::icOnFailGoTo, +29, 0, 0},
    //(E )(E )(S E )T T (T )E 
    // </0 & ParseResult_Block/4 (/7 e.MultiBracket#1/5 )/8 (/11 e.Scanned#1/9 )/12 (/15 s.NextNum#1/17 e.Functions#1/13 )/16 t.ErrorList#1/18 t.SymTable#1/20 (/24 t.Context#1/26 )/25 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 41, 22},
    {refalrts::icEmpty, 0, 0, 41},
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 9
    // closed e.Functions#1 as range 13
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ParseResult/12 AsIs: (/15 AsIs: s.NextNum#1/17 AsIs: e.Functions#1/13 AsIs: )/16 AsIs: t.ErrorList#1/18 AsIs: t.SymTable#1/20 } Tile{ AsIs: t.Context#1/26 } Tile{ AsIs: (/7 AsIs: e.MultiBracket#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/24 } # TkName/28 # LambdaName/29 </30 Tile{ Reuse: & Dec/4 } s.NextNum#1/17/31 >/32 )/33 Tile{ AsIs: )/25 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocIdent, 0, 1, 28},
    {refalrts::icAllocIdent, 0, 0, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icCopySTVar, 31, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icReinitFunc, 0, 5, 12},
    {refalrts::icUpdateFunc, 0, 4, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 25, 0},
    {refalrts::icLinkBrackets, 24, 33, 0},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetRes, 0, 0, 25},
    {refalrts::icSpliceTile, 31, 33, 0},
    {refalrts::icSpliceTile, 4, 4, 0},
    {refalrts::icSpliceTile, 28, 30, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 7, 11, 0},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icSpliceTile, 12, 21, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )(E )(S E )T T (T E )E 
    // </0 & ParseResult_Block/4 (/7 e.MultiBracket#1/5 )/8 (/11 e.Scanned#1/9 )/12 (/15 s.NextNum#1/17 e.Functions#1/13 )/16 t.ErrorList#1/18 t.SymTable#1/20 (/24 t.Context#1/26 e.FreeContext#1/22 )/25 e.Tail#1/2 >/1
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 9
    // closed e.Functions#1 as range 13
    // closed e.FreeContext#1 as range 22
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </28 & Dec/29 Tile{ AsIs: s.NextNum#1/17 } >/30 (/31 </32 & CreateContext/33 Tile{ AsIs: e.FreeContext#1/22 } >/34 Tile{ AsIs: )/25 } </35 & CreateClosure /36 & lambda_ParseResult_Block_0/37 s.NextNum#1/17/38 Tile{ AsIs: (/24 } Tile{ AsIs: e.Functions#1/13 } Tile{ AsIs: )/16 AsIs: t.ErrorList#1/18 AsIs: t.SymTable#1/20 } Tile{ AsIs: t.Context#1/26 } Tile{ AsIs: (/7 AsIs: e.MultiBracket#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Tail#1/2 } )/39 >/40 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icAllocFunc, 0, 4, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icAllocFunc, 0, 3, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 35},
    {refalrts::icAllocFunc, 0, 2, 36},
    {refalrts::icAllocFunc, 0, 1, 37},
    {refalrts::icCopySTVar, 38, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icLinkBrackets, 15, 39, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 24, 16, 0},
    {refalrts::icLinkBrackets, 31, 25, 0},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 39, 40, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 7, 15, 0},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icSpliceTile, 16, 21, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 35, 38, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 34, 34, 0},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceTile, 30, 33, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 28, 29, 0},
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
  //FAST GEN:(E )(E )(S E )T T (E )E 
  //GLOBAL GEN:(E )(E )(S E )T T (T E )E 
  // </0 & ParseResult_Block/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 s.idxTTB#0/17 e.idxTTBV#0/13 )/16 t.idxTTT#0/18 t.idxTTTV#0/20 (/24 t.idxTTTVVB#0/26 e.idxTTTVVBV#0/22 )/25 e.idxTTTVVT#0/2 >/1
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
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTBV#0 as range 13
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[21] = refalrts::tvar_left( context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.idxTTTVVT#0 as range 2
  context[27] = refalrts::tvar_left( context[26], context[22], context[23] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTTVVBV#0 as range 22
  do {
    refalrts::start_sentence();
    //(E )(E )(S E )T T (T )E 
    // </0 & ParseResult_Block/4 (/7 e.MultiBracket#1/5 )/8 (/11 e.Scanned#1/9 )/12 (/15 s.NextNum#1/17 e.Functions#1/13 )/16 t.ErrorList#1/18 t.SymTable#1/20 (/24 t.Context#1/26 )/25 e.Tail#1/2 >/1
    context[41] = context[22];
    context[42] = context[23];
    if( ! refalrts::empty_seq( context[41], context[42] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 9
    // closed e.Functions#1 as range 13
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ParseResult/12 AsIs: (/15 AsIs: s.NextNum#1/17 AsIs: e.Functions#1/13 AsIs: )/16 AsIs: t.ErrorList#1/18 AsIs: t.SymTable#1/20 } Tile{ AsIs: t.Context#1/26 } Tile{ AsIs: (/7 AsIs: e.MultiBracket#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/24 } # TkName/28 # LambdaName/29 </30 Tile{ Reuse: & Dec/4 } s.NextNum#1/17/31 >/32 )/33 Tile{ AsIs: )/25 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[28], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_LambdaName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[12], ParseResult, "ParseResult" );
    refalrts::update_name( context[4], Dec, "Dec" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[24], context[33] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[12], context[21] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )(E )(S E )T T (T E )E 
  // </0 & ParseResult_Block/4 (/7 e.MultiBracket#1/5 )/8 (/11 e.Scanned#1/9 )/12 (/15 s.NextNum#1/17 e.Functions#1/13 )/16 t.ErrorList#1/18 t.SymTable#1/20 (/24 t.Context#1/26 e.FreeContext#1/22 )/25 e.Tail#1/2 >/1
  // closed e.MultiBracket#1 as range 5
  // closed e.Scanned#1 as range 9
  // closed e.Functions#1 as range 13
  // closed e.FreeContext#1 as range 22
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </28 & Dec/29 Tile{ AsIs: s.NextNum#1/17 } >/30 (/31 </32 & CreateContext/33 Tile{ AsIs: e.FreeContext#1/22 } >/34 Tile{ AsIs: )/25 } </35 & CreateClosure /36 & lambda_ParseResult_Block_0/37 s.NextNum#1/17/38 Tile{ AsIs: (/24 } Tile{ AsIs: e.Functions#1/13 } Tile{ AsIs: )/16 AsIs: t.ErrorList#1/18 AsIs: t.SymTable#1/20 } Tile{ AsIs: t.Context#1/26 } Tile{ AsIs: (/7 AsIs: e.MultiBracket#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Tail#1/2 } )/39 >/40 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], Dec, "Dec" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], CreateContext, "CreateContext" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[36], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[38], context[17]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[35] );
  refalrts::link_brackets( context[15], context[39] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[24], context[16] );
  refalrts::link_brackets( context[31], context[25] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[28] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[16], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[35], context[38] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[30], context[33] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
