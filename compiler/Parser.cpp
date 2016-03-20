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
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ST_AddUnresolved, "ST_AddUnresolved" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#2/2 t.SymTable#2/3 e.AST#2/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    // closed e.AST#2 as range 0
    //0: e.AST#2
    //2: t.ErrorList#2
    //3: t.SymTable#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
  // t.ErrorList#2/2 t.SymTable#2/3 e.AST#2/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 0
  //0: e.AST#2
  //2: t.ErrorList#2
  //3: t.SymTable#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], ST_AddUnresolved, "ST_AddUnresolved" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ParseProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseProgram_0, "lambda_ParseProgram_0" },
    { PrepareBracket, "PrepareBracket" },
    { Map, "Map" },
    { ST_Create, "ST_Create" },
    { ParseElements, "ParseElements" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 e.Tokens#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    // closed e.Tokens#1 as range 0
    //0: e.Tokens#1
    //2: t.ErrorList#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 5, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 4, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 3, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
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
  // t.ErrorList#1/2 e.Tokens#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 0
  //0: e.Tokens#1
  //2: t.ErrorList#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ParseElements, "ParseElements" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ST_Create, "ST_Create" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], PrepareBracket, "PrepareBracket" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], lambda_ParseProgram_0, "lambda_ParseProgram_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrepareBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkOpenBracket s.LnNum#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 3, 6},
    {refalrts::icIdent, 0, 7, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 5, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkCloseBracket s.LnNum#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 1, 6},
    {refalrts::icIdent, 0, 6, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 5, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkOpenADT s.LnNum#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 3, 6},
    {refalrts::icIdent, 0, 5, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 5, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkCloseADT s.LnNum#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 1, 6},
    {refalrts::icIdent, 0, 4, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 5, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkOpenCall s.LnNum#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 3, 6},
    {refalrts::icIdent, 0, 2, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 5, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkCloseCall s.LnNum#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 1, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 5, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.OtherToken#1/2
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: t.OtherToken#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
    // ( # TkOpenBracket s.LnNum#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Open<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TkOpenBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
    // ( # TkCloseBracket s.LnNum#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
    // ( # TkOpenADT s.LnNum#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Open<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TkOpenADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
    // ( # TkCloseADT s.LnNum#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
    // ( # TkOpenCall s.LnNum#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Open<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TkOpenCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
    // ( # TkCloseCall s.LnNum#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TkCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
  // t.OtherToken#1/2
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: t.OtherToken#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseElements_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Declaration<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.ScopeClass#2/4 e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( s.ScopeClass#2/4 e.Name#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 2
  //2: e.Name#2
  //4: s.ScopeClass#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_Declaration<int>::name ) )
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

static refalrts::FnResult lambda_ParseElements_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Ident<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#2 as range 2
    //2: e.Name#2
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
  // ( e.Name#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 2
  //2: e.Name#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_Ident<int>::name ) )
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

static refalrts::FnResult lambda_ParseElements_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.AST#1/2 ) ( e.NewASTItems#2/4 ) t.ErrorList#2/6 t.SymTable#2/7 e.Tail#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.AST#1 as range 2
    // closed e.NewASTItems#2 as range 4
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::ictVarLeft, 0, 7, 0},
    // closed e.Tail#2 as range 0
    //0: e.Tail#2
    //2: e.AST#1
    //4: e.NewASTItems#2
    //6: t.ErrorList#2
    //7: t.SymTable#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
  // ( e.AST#1/2 ) ( e.NewASTItems#2/4 ) t.ErrorList#2/6 t.SymTable#2/7 e.Tail#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  // closed e.NewASTItems#2 as range 4
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 0
  //0: e.Tail#2
  //2: e.AST#1
  //4: e.NewASTItems#2
  //6: t.ErrorList#2
  //7: t.SymTable#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ParseElements, "ParseElements" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseElements_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.AST#1/2 ) ( e.NewASTItems#2/4 ) t.ErrorList#2/6 t.SymTable#2/7 e.Tail#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.AST#1 as range 2
    // closed e.NewASTItems#2 as range 4
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::ictVarLeft, 0, 7, 0},
    // closed e.Tail#2 as range 0
    //0: e.Tail#2
    //2: e.AST#1
    //4: e.NewASTItems#2
    //6: t.ErrorList#2
    //7: t.SymTable#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
  // ( e.AST#1/2 ) ( e.NewASTItems#2/4 ) t.ErrorList#2/6 t.SymTable#2/7 e.Tail#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  // closed e.NewASTItems#2 as range 4
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 0
  //0: e.Tail#2
  //2: e.AST#1
  //4: e.NewASTItems#2
  //6: t.ErrorList#2
  //7: t.SymTable#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ParseElements, "ParseElements" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { ParseElements, "ParseElements" },
    { lambda_ParseElements_3, "lambda_ParseElements_3" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { ST_AddDefined, "ST_AddDefined" },
    { ParseFunction, "ParseFunction" },
    { Fetch, "Fetch" },
    { lambda_ParseElements_2, "lambda_ParseElements_2" },
    { ParseElement_SwDirective, "ParseElement_SwDirective" },
    { ST_AllIdents, "ST_AllIdents" },
    { Sort, "Sort" },
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
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/7 t.SymTable#1/8 ( e.AST#1/4 ) ( # TkEOF s.LnNum#1/6 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.AST#1 as range 4
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //4: e.AST#1
    //6: s.LnNum#1
    //7: t.ErrorList#1
    //8: t.SymTable#1
    //16: t.SymTable#1
    //30: t.SymTable#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 12, 10},
    {refalrts::icFunc, 0, 14, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 10, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 13, 15},
    {refalrts::icCopySTVar, 16, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 4, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 12, 24},
    {refalrts::icFunc, 0, 11, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 10, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icFunc, 0, 9, 29},
    {refalrts::icCopySTVar, 30, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +47, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 ( e.AST#1/4 ) ( # TkDirective s.LnNum#1/8 s.Directive#1/9 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 3, 6},
    // closed e.AST#1 as range 4
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 8, 6},
    {refalrts::icsVarLeft, 0, 9, 6},
    {refalrts::icEmpty, 0, 0, 6},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: e.AST#1
    //8: s.LnNum#1
    //9: s.Directive#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 6, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 8, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 3, 16},
    {refalrts::icFunc, 0, 7, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +65, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 ( e.AST#1/4 ) ( # TkName s.LnNum#1/8 e.Name#1/6 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 2, 6},
    // closed e.AST#1 as range 4
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 8, 6},
    // closed e.Name#1 as range 6
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: e.AST#1
    //6: e.Name#1
    //8: s.LnNum#1
    //19: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 6, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 5, 12},
    {refalrts::icIdent, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 4, 17},
    {refalrts::icIdent, 0, 1, 18},
    {refalrts::icCopyEVar, 19, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 3, 24},
    {refalrts::icFunc, 0, 2, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 ( e.AST#1/4 ) ( # TkSemicolon s.LnNum#1/8 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 0, 6},
    // closed e.AST#1 as range 4
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 8, 6},
    {refalrts::icEmpty, 0, 0, 6},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: e.AST#1
    //8: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 ( e.AST#1/4 ) t.Unexpected#1/6 e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.AST#1 as range 4
    {refalrts::ictVarLeft, 0, 6, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: e.AST#1
    //6: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icString, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
    // t.ErrorList#1/7 t.SymTable#1/8 ( e.AST#1/4 ) ( # TkEOF s.LnNum#1/6 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkEOF<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.AST#1 as range 4
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //4: e.AST#1
    //6: s.LnNum#1
    //7: t.ErrorList#1
    //8: t.SymTable#1
    //16: t.SymTable#1
    //30: t.SymTable#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], lambda_ParseElements_0, "lambda_ParseElements_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], Sort, "Sort" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ST_AllFunctions, "ST_AllFunctions" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[16], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[21], & ident_Separator<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], lambda_ParseElements_1, "lambda_ParseElements_1" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], Sort, "Sort" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ST_AllIdents, "ST_AllIdents" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[30], context[16]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[4], context[5] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[23] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[26] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[28] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[20], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 ( e.AST#1/4 ) ( # TkDirective s.LnNum#1/8 s.Directive#1/9 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkDirective<int>::name, context[6], context[7] ) )
      continue;
    // closed e.AST#1 as range 4
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: e.AST#1
    //8: s.LnNum#1
    //9: s.Directive#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParseElement_SwDirective, "ParseElement_SwDirective" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], lambda_ParseElements_2, "lambda_ParseElements_2" ) )
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
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[13] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 ( e.AST#1/4 ) ( # TkName s.LnNum#1/8 e.Name#1/6 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[6], context[7] ) )
      continue;
    // closed e.AST#1 as range 4
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Name#1 as range 6
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: e.AST#1
    //6: e.Name#1
    //8: s.LnNum#1
    //19: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ParseFunction, "ParseFunction" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], lambda_ParseElements_3, "lambda_ParseElements_3" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[23] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 ( e.AST#1/4 ) ( # TkSemicolon s.LnNum#1/8 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[6], context[7] ) )
      continue;
    // closed e.AST#1 as range 4
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: e.AST#1
    //8: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[10] );
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
  // t.ErrorList#1/2 t.SymTable#1/3 ( e.AST#1/4 ) t.Unexpected#1/6 e.Tail#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 4
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: t.ErrorList#1
  //3: t.SymTable#1
  //4: e.AST#1
  //6: t.Unexpected#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ParseElements, "ParseElements" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "directive or name", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[3] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenFunctionsFromDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
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
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # EEnum
    {refalrts::icIdentLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 8, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Enum
    {refalrts::icIdentLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 8, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icIdent, 0, 3, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ESwap
    {refalrts::icIdentLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 6, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Swap
    {refalrts::icIdentLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 6, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icIdent, 0, 3, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Extern
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 1, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Forward
    {refalrts::icIdentLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 1, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icIdent, 0, 3, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Ident
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 1, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
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
    // # EEnum
    if( ! refalrts::ident_left(  & ident_EEnum<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Enum<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
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
    // # Enum
    if( ! refalrts::ident_left(  & ident_Enum<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Enum<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
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
    // # ESwap
    if( ! refalrts::ident_left(  & ident_ESwap<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Swap<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
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
    // # Swap
    if( ! refalrts::ident_left(  & ident_Swap<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Swap<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
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
    // # Extern
    if( ! refalrts::ident_left(  & ident_Extern<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Stub<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], AddExtern, "AddExtern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
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
    // # Forward
    if( ! refalrts::ident_left(  & ident_Forward<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Stub<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], DontAdd, "DontAdd" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
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
  // # Ident
  if( ! refalrts::ident_left(  & ident_Ident<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_ident( context[2], & ident_Stub<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], DontAdd, "DontAdd" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[4], & ident_GN_Entry<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ST_AddExtern, "ST_AddExtern" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 s.ScopeClass#1/4 s.LnNum#1/5 e.Name#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Name#1 as range 0
    //0: e.Name#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: s.ScopeClass#1
    //5: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // t.ErrorList#1/2 t.SymTable#1/3 s.ScopeClass#1/4 s.LnNum#1/5 e.Name#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 0
  //0: e.Name#1
  //2: t.ErrorList#1
  //3: t.SymTable#1
  //4: s.ScopeClass#1
  //5: s.LnNum#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ST_AddExtern, "ST_AddExtern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DontAdd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // t.ErrorList#1/2 t.SymTable#1/3 s.ScopeClass#1/4 s.LnNum#1/5 e.Name#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Name#1 as range 0
    //0: e.Name#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: s.ScopeClass#1
    //5: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 3},
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
  // t.ErrorList#1/2 t.SymTable#1/3 s.ScopeClass#1/4 s.LnNum#1/5 e.Name#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 0
  //0: e.Name#1
  //2: t.ErrorList#1
  //3: t.SymTable#1
  //4: s.ScopeClass#1
  //5: s.LnNum#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseElement_SwDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenFunctionsFromDirective, "GenFunctionsFromDirective" },
    { ParseNameList, "ParseNameList" },
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
    {"function name", 13}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +41, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 # Entry ( # TkName s.LnNum#1/6 e.Name#1/4 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 2, 4},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 6, 4},
    // closed e.Name#1 as range 4
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: e.Name#1
    //6: s.LnNum#1
    //15: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 4, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 3, 13},
    {refalrts::icIdent, 0, 1, 14},
    {refalrts::icCopyEVar, 15, 4, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +28, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 # Entry t.Unexpected#1/4 e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Unexpected#1
    //12: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 2, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icCopySTVar, 12, 4, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 5, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 s.Directive#1/4 e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: s.Directive#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
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
    // t.ErrorList#1/2 t.SymTable#1/3 # Entry ( # TkName s.LnNum#1/6 e.Name#1/4 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Entry<int>::name, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Name#1 as range 4
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: e.Name#1
    //6: s.LnNum#1
    //15: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ParseFunction, "ParseFunction" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[4], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 # Entry t.Unexpected#1/4 e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Entry<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Unexpected#1
    //12: t.Unexpected#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], EL_AddUnexpected, "EL_AddUnexpected" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "function name", 13 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[12], context[4]))
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[5], context[6] );
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
  // t.ErrorList#1/2 t.SymTable#1/3 s.Directive#1/4 e.Tail#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: t.ErrorList#1
  //3: t.SymTable#1
  //4: s.Directive#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ParseNameList, "ParseNameList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], GenFunctionsFromDirective, "GenFunctionsFromDirective" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseNameList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
    {refalrts::icOnFailGoTo, +55, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.AST#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 s.ASTItem#1/6 s.TableChangeFunc#1/7 s.ScopeClass#1/8 ( # TkName s.LnNum#1/11 e.Name#1/9 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.AST#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 0, 9},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    // closed e.Name#1 as range 9
    //0: e.Tail#1
    //2: e.AST#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: s.ASTItem#1
    //7: s.TableChangeFunc#1
    //8: s.ScopeClass#1
    //9: e.Name#1
    //11: s.LnNum#1
    //19: s.ScopeClass#1
    //20: e.Name#1
    //23: s.ASTItem#1
    //24: s.TableChangeFunc#1
    //25: s.ScopeClass#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icCopySTVar, 19, 8, 0},
    {refalrts::icCopyEVar, 20, 9, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icCopySTVar, 23, 6, 0},
    {refalrts::icCopySTVar, 24, 7, 0},
    {refalrts::icCopySTVar, 25, 19, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.AST#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 s.ASTItem#1/6 s.TableChangeFunc#1/7 s.ScopeClass#1/8 t.Unexpected#1/9 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.AST#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 9, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.AST#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: s.ASTItem#1
    //7: s.TableChangeFunc#1
    //8: s.ScopeClass#1
    //9: t.Unexpected#1
    //17: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icString, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icCopySTVar, 17, 9, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
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
    // ( e.AST#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 s.ASTItem#1/6 s.TableChangeFunc#1/7 s.ScopeClass#1/8 ( # TkName s.LnNum#1/11 e.Name#1/9 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.AST#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9
    //0: e.Tail#1
    //2: e.AST#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: s.ASTItem#1
    //7: s.TableChangeFunc#1
    //8: s.ScopeClass#1
    //9: e.Name#1
    //11: s.LnNum#1
    //19: s.ScopeClass#1
    //20: e.Name#1
    //23: s.ASTItem#1
    //24: s.TableChangeFunc#1
    //25: s.ScopeClass#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParseNameList_Tail, "ParseNameList_Tail" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[19], context[8]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[20], context[21], context[9], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[23], context[6]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[7]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_stvar( res, context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[14], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
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
  // ( e.AST#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 s.ASTItem#1/6 s.TableChangeFunc#1/7 s.ScopeClass#1/8 t.Unexpected#1/9 e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.AST#1
  //4: t.ErrorList#1
  //5: t.SymTable#1
  //6: s.ASTItem#1
  //7: s.TableChangeFunc#1
  //8: s.ScopeClass#1
  //9: t.Unexpected#1
  //17: t.Unexpected#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "function name", 13 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[17], context[9]))
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_stvar( res, context[5] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseNameList_Tail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.AST#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 s.ASTItem#1/6 s.TableChangeFunc#1/7 s.ScopeClass#1/8 ( # TkComma s.LnNum#1/11 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.AST#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 1, 9},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: e.AST#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: s.ASTItem#1
    //7: s.TableChangeFunc#1
    //8: s.ScopeClass#1
    //11: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.AST#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 s.ASTItem#1/6 s.TableChangeFunc#1/7 s.ScopeClass#1/8 ( # TkSemicolon s.LnNum#1/11 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.AST#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 0, 9},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: e.AST#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: s.ASTItem#1
    //7: s.TableChangeFunc#1
    //8: s.ScopeClass#1
    //11: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.AST#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 s.ASTItem#1/6 s.TableChangeFunc#1/7 s.ScopeClass#1/8 t.Unexpected#1/9 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.AST#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 9, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.AST#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: s.ASTItem#1
    //7: s.TableChangeFunc#1
    //8: s.ScopeClass#1
    //9: t.Unexpected#1
    //17: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icString, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icCopySTVar, 17, 9, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
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
    // ( e.AST#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 s.ASTItem#1/6 s.TableChangeFunc#1/7 s.ScopeClass#1/8 ( # TkComma s.LnNum#1/11 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.AST#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkComma<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: e.AST#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: s.ASTItem#1
    //7: s.TableChangeFunc#1
    //8: s.ScopeClass#1
    //11: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParseNameList, "ParseNameList" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( e.AST#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 s.ASTItem#1/6 s.TableChangeFunc#1/7 s.ScopeClass#1/8 ( # TkSemicolon s.LnNum#1/11 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.AST#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: e.AST#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: s.ASTItem#1
    //7: s.TableChangeFunc#1
    //8: s.ScopeClass#1
    //11: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
  // ( e.AST#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 s.ASTItem#1/6 s.TableChangeFunc#1/7 s.ScopeClass#1/8 t.Unexpected#1/9 e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.AST#1
  //4: t.ErrorList#1
  //5: t.SymTable#1
  //6: s.ASTItem#1
  //7: s.TableChangeFunc#1
  //8: s.ScopeClass#1
  //9: t.Unexpected#1
  //17: t.Unexpected#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "comma or semicolon", 18 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[17], context[9]))
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_stvar( res, context[5] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CreateLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
  static const refalrts::StringItem strings[] = {
    {"lambda_", 7}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Name#1/0 s.Number#1/2
    {refalrts::icsVarRight, 0, 2, 0},
    // closed e.Name#1 as range 0
    //0: e.Name#1
    //2: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 3},
    {refalrts::icChar, 0, '_', 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 3},
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
  // e.Name#1/0 s.Number#1/2
  if( ! refalrts::svar_right( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 0
  //0: e.Name#1
  //2: s.Number#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[3], context[4], "lambda_", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[5], '_' ) )
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
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
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
    { CreateLambdaName, "CreateLambdaName" },
    { GenFunctionBody, "GenFunctionBody" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_GN_Local<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Name#1/2 ) ( s.Number#3/6 e.Sentences#3/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 4},
    // closed e.Sentences#3 as range 4
    //2: e.Name#1
    //4: e.Sentences#3
    //6: s.Number#3
    //15: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icCopyEVar, 15, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 12, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // ( e.Name#1/2 ) ( s.Number#3/6 e.Sentences#3/4 )
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
  // closed e.Name#1 as range 2
  if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#3 as range 4
  //2: e.Name#1
  //4: e.Sentences#3
  //6: s.Number#3
  //15: e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], GenFunctionBody, "GenFunctionBody" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_GN_Local<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], CreateLambdaName, "CreateLambdaName" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[15], context[16], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  refalrts::link_brackets( context[12], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
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
    {refalrts::icInitB0, 0, 0, 0},
    // s.ScopeClass#1/6 ( e.Name#1/4 ) ( s.Number#3/7 e.Sentences#3/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Name#1 as range 4
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    // closed e.Sentences#3 as range 2
    //2: e.Sentences#3
    //4: e.Name#1
    //6: s.ScopeClass#1
    //7: s.Number#3
    //13: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icCopyEVar, 13, 4, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
  // s.ScopeClass#1/6 ( e.Name#1/4 ) ( s.Number#3/7 e.Sentences#3/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 4
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#3 as range 2
  //2: e.Sentences#3
  //4: e.Name#1
  //6: s.ScopeClass#1
  //7: s.Number#3
  //13: e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], GenFunctionBody, "GenFunctionBody" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[13], context[14], context[4], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[12], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseFunction_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseFunction_1, "lambda_ParseFunction_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" },
    { lambda_ParseFunction_0, "lambda_ParseFunction_0" },
    { Map, "Map" },
    { Cntx_Destroy, "Cntx_Destroy" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Name#1/2 ) s.ScopeClass#1/4 ( s.NextNumber#2/7 e.FunctionBodies#2/5 t.MainBody#2/13 ) t.ErrorList#2/8 t.SymTable#2/9 ( t.Context#2/12 ) e.Tail#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Name#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 7, 5},
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    // closed e.Tail#2 as range 0
    {refalrts::ictVarLeft, 0, 12, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::ictVarRight, 0, 13, 5},
    // closed e.FunctionBodies#2 as range 5
    //0: e.Tail#2
    //2: e.Name#1
    //4: s.ScopeClass#1
    //5: e.FunctionBodies#2
    //7: s.NextNumber#2
    //8: t.ErrorList#2
    //9: t.SymTable#2
    //12: t.Context#2
    //13: t.MainBody#2
    //33: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 5, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 4, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 1, 21},
    {refalrts::icFunc, 0, 3, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 2, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icFunc, 0, 1, 30},
    {refalrts::icFunc, 0, 0, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icCopyEVar, 33, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 17, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icLinkBrackets, 32, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
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
  // ( e.Name#1/2 ) s.ScopeClass#1/4 ( s.NextNumber#2/7 e.FunctionBodies#2/5 t.MainBody#2/13 ) t.ErrorList#2/8 t.SymTable#2/9 ( t.Context#2/12 ) e.Tail#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 0
  if( ! refalrts::tvar_left( context[12], context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_right( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FunctionBodies#2 as range 5
  //0: e.Tail#2
  //2: e.Name#1
  //4: s.ScopeClass#1
  //5: e.FunctionBodies#2
  //7: s.NextNumber#2
  //8: t.ErrorList#2
  //9: t.SymTable#2
  //12: t.Context#2
  //13: t.MainBody#2
  //33: e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], Cntx_Destroy, "Cntx_Destroy" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], lambda_ParseFunction_0, "lambda_ParseFunction_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], lambda_ParseFunction_1, "lambda_ParseFunction_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[33], context[34], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_stvar( res, context[8] );
  refalrts::link_brackets( context[17], context[38] );
  res = refalrts::splice_elem( res, context[38] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[27] );
  res = refalrts::splice_elem( res, context[37] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[29] );
  res = refalrts::splice_elem( res, context[36] );
  refalrts::link_brackets( context[32], context[35] );
  res = refalrts::splice_elem( res, context[35] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_elem( res, context[27] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[18] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[20] );
  res = refalrts::splice_elem( res, context[25] );
  refalrts::link_brackets( context[23], context[24] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[12] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { lambda_ParseFunction_2, "lambda_ParseFunction_2" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Cntx_Create, "Cntx_Create" },
    { ParseBlock, "ParseBlock" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkOpenBlock<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"open brace", 10}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +62, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ScopeClass#1/2 ( e.Name#1/3 ) t.ErrorList#1/5 t.SymTable#1/6 ( # TkOpenBlock s.LnNum#1/9 ) e.Tail#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Name#1 as range 3
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icIdentLeft, 0, 0, 7},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 9, 7},
    {refalrts::icEmpty, 0, 0, 7},
    //0: e.Tail#1
    //2: s.ScopeClass#1
    //3: e.Name#1
    //5: t.ErrorList#1
    //6: t.SymTable#1
    //9: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 5, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 4, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icInt, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 3, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 2, 22},
    {refalrts::icFunc, 0, 1, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icLinkBrackets, 14, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ScopeClass#1/2 ( e.Name#1/3 ) t.ErrorList#1/5 t.SymTable#1/6 t.Unexpected#1/7 e.Tail#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Name#1 as range 3
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::ictVarLeft, 0, 7, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.ScopeClass#1
    //3: e.Name#1
    //5: t.ErrorList#1
    //6: t.SymTable#1
    //7: t.Unexpected#1
    //15: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icString, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icCopySTVar, 15, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
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
    // s.ScopeClass#1/2 ( e.Name#1/3 ) t.ErrorList#1/5 t.SymTable#1/6 ( # TkOpenBlock s.LnNum#1/9 ) e.Tail#1/0
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 3
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[7], context[8] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //0: e.Tail#1
    //2: s.ScopeClass#1
    //3: e.Name#1
    //5: t.ErrorList#1
    //6: t.SymTable#1
    //9: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParseBlock, "ParseBlock" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[15], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], Cntx_Create, "Cntx_Create" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], lambda_ParseFunction_2, "lambda_ParseFunction_2" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[2] );
    refalrts::link_brackets( context[24], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    refalrts::link_brackets( context[14], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
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
  // s.ScopeClass#1/2 ( e.Name#1/3 ) t.ErrorList#1/5 t.SymTable#1/6 t.Unexpected#1/7 e.Tail#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 3
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: s.ScopeClass#1
  //3: e.Name#1
  //5: t.ErrorList#1
  //6: t.SymTable#1
  //7: t.Unexpected#1
  //15: t.Unexpected#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "open brace", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[7]))
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_stvar( res, context[6] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
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
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.MainName#1/2 ) ( # TkName # LambdaName s.Number#2/6 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 3, 4},
    {refalrts::icIdentLeft, 0, 4, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.MainName#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //2: e.MainName#1
    //6: s.Number#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 3, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.MainName#1/2 ) ( # Brackets e.SubResult#2/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.MainName#1 as range 2
    // closed e.SubResult#2 as range 4
    //2: e.MainName#1
    //4: e.SubResult#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 2, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 6, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.MainName#1/2 ) ( # ADT_Brackets ( e.Name#2/6 ) e.SubResult#2/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.MainName#1 as range 2
    // closed e.Name#2 as range 6
    // closed e.SubResult#2 as range 4
    //2: e.MainName#1
    //4: e.SubResult#2
    //6: e.Name#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 8, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.MainName#1/2 ) ( # CallBrackets e.SubResult#2/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.MainName#1 as range 2
    // closed e.SubResult#2 as range 4
    //2: e.MainName#1
    //4: e.SubResult#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 6, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.MainName#1/2 ) t.OtherTerm#2/4
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.MainName#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.MainName#1
    //4: t.OtherTerm#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 4},
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
    // ( e.MainName#1/2 ) ( # TkName # LambdaName s.Number#2/6 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_LambdaName<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.MainName#1 as range 2
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    //2: e.MainName#1
    //6: s.Number#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], CreateLambdaName, "CreateLambdaName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( e.MainName#1/2 ) ( # Brackets e.SubResult#2/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.MainName#1 as range 2
    // closed e.SubResult#2 as range 4
    //2: e.MainName#1
    //4: e.SubResult#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ResolveLambdaName, "ResolveLambdaName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
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
    // ( e.MainName#1/2 ) ( # ADT_Brackets ( e.Name#2/6 ) e.SubResult#2/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.MainName#1 as range 2
    // closed e.Name#2 as range 6
    // closed e.SubResult#2 as range 4
    //2: e.MainName#1
    //4: e.SubResult#2
    //6: e.Name#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ResolveLambdaName, "ResolveLambdaName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.MainName#1/2 ) ( # CallBrackets e.SubResult#2/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.MainName#1 as range 2
    // closed e.SubResult#2 as range 4
    //2: e.MainName#1
    //4: e.SubResult#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CallBrackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ResolveLambdaName, "ResolveLambdaName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
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

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.MainName#1/2 ) t.OtherTerm#2/4
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MainName#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.MainName#1
  //4: t.OtherTerm#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
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
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.MainName#1/2 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.MainName#1 as range 2
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.MainName#1
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
  // ( e.MainName#1/2 ) e.Result#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MainName#1 as range 2
  // closed e.Result#1 as range 0
  //0: e.Result#1
  //2: e.MainName#1

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
  if( ! refalrts::alloc_name( context[8], lambda_ResolveLambdaName_0, "lambda_ResolveLambdaName_0" ) )
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
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.MainName#1/2 ) ( ( e.Pattern#2/6 ) ( e.Result#2/8 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icBracketLeft, 0, 8, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.MainName#1 as range 2
    // closed e.Pattern#2 as range 6
    // closed e.Result#2 as range 8
    //2: e.MainName#1
    //6: e.Pattern#2
    //8: e.Result#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icLinkBrackets, 10, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 13, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
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
  // ( e.MainName#1/2 ) ( ( e.Pattern#2/6 ) ( e.Result#2/8 ) )
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
  if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MainName#1 as range 2
  // closed e.Pattern#2 as range 6
  // closed e.Result#2 as range 8
  //2: e.MainName#1
  //6: e.Pattern#2
  //8: e.Result#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ResolveLambdaName, "ResolveLambdaName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[10], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::link_brackets( context[13], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::link_brackets( context[16], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
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
    { lambda_GenFunctionBody_0, "lambda_GenFunctionBody_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Function<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.ScopeClass#1/2 ( e.MainName#1/3 ) ( e.Name#1/5 ) e.Sentences#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.MainName#1 as range 3
    // closed e.Name#1 as range 5
    // closed e.Sentences#1 as range 0
    //0: e.Sentences#1
    //2: s.ScopeClass#1
    //3: e.MainName#1
    //5: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 3, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icFunc, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 1, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icLinkBrackets, 7, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 13, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
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
  // s.ScopeClass#1/2 ( e.MainName#1/3 ) ( e.Name#1/5 ) e.Sentences#1/0
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
  // closed e.MainName#1 as range 3
  // closed e.Name#1 as range 5
  // closed e.Sentences#1 as range 0
  //0: e.Sentences#1
  //2: s.ScopeClass#1
  //3: e.MainName#1
  //5: e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], & ident_Function<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
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
  refalrts::link_brackets( context[7], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::link_brackets( context[13], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::link_brackets( context[18], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
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

static refalrts::FnResult ParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Cntx_PushScope, "Cntx_PushScope" },
    { DoParseBlock, "DoParseBlock" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 e.Tokens#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    // closed e.Tokens#1 as range 0
    //0: e.Tokens#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 e.Tokens#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 0
  //0: e.Tokens#1
  //2: e.Functions#1
  //4: t.ErrorList#1
  //5: t.SymTable#1
  //6: t.Context#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], DoParseBlock, "DoParseBlock" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Cntx_PushScope, "Cntx_PushScope" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_DoParseBlock_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { AddContextToSentence, "AddContextToSentence" },
    { Map, "Map" },
    { Inc, "Inc" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Number#1/2 ( e.Functions#1/3 ) ( e.Sentences#1/5 ) t.ErrorList#1/7 t.SymTable#1/8 t.Context#2/9 e.FreeContext#2/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Functions#1 as range 3
    // closed e.Sentences#1 as range 5
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 9, 0},
    // closed e.FreeContext#2 as range 0
    //0: e.FreeContext#2
    //2: s.Number#1
    //3: e.Functions#1
    //5: e.Sentences#1
    //7: t.ErrorList#1
    //8: t.SymTable#1
    //9: t.Context#2
    //15: s.Number#1
    //25: e.FreeContext#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 2, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icCopySTVar, 15, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 1, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icCopyEVar, 25, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icLinkBrackets, 10, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 14, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icLinkBrackets, 18, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
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
  // s.Number#1/2 ( e.Functions#1/3 ) ( e.Sentences#1/5 ) t.ErrorList#1/7 t.SymTable#1/8 t.Context#2/9 e.FreeContext#2/0
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
  // closed e.Functions#1 as range 3
  // closed e.Sentences#1 as range 5
  if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FreeContext#2 as range 0
  //0: e.FreeContext#2
  //2: s.Number#1
  //3: e.Functions#1
  //5: e.Sentences#1
  //7: t.ErrorList#1
  //8: t.SymTable#1
  //9: t.Context#2
  //15: s.Number#1
  //25: e.FreeContext#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[2]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], AddContextToSentence, "AddContextToSentence" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[0], context[1]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[24], context[27] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_stvar( res, context[7] );
  refalrts::link_brackets( context[10], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[14], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[16] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::link_brackets( context[18], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseSentence, "ParseSentence" },
    { DoParseBlock, "DoParseBlock" },
    { Cntx_PopScope, "Cntx_PopScope" },
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { Inc, "Inc" },
    { lambda_DoParseBlock_0, "lambda_DoParseBlock_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
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
    {refalrts::icOnFailGoTo, +56, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Number#1/4 e.Functions#1/2 ) t.ErrorList#1/5 t.SymTable#1/6 t.Context#1/7 ( e.Sentences#1/8 ) ( # TkCloseBlock s.LnNumber#1/12 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Sentences#1 as range 8
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //0: e.Tail#1
    //2: e.Functions#1
    //4: s.Number#1
    //5: t.ErrorList#1
    //6: t.SymTable#1
    //7: t.Context#1
    //8: e.Sentences#1
    //12: s.LnNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 7, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 2, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 6, 19},
    {refalrts::icFunc, 0, 5, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Number#1/4 e.Functions#1/2 ) t.ErrorList#1/5 t.SymTable#1/6 t.Context#1/7 ( e.Sentences#1/8 ) ( # TkEOF s.LnNum#1/12 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 0, 10},
    // closed e.Sentences#1 as range 8
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //0: e.Tail#1
    //2: e.Functions#1
    //4: s.Number#1
    //5: t.ErrorList#1
    //6: t.SymTable#1
    //7: t.Context#1
    //8: e.Sentences#1
    //12: s.LnNum#1
    //18: s.Number#1
    //33: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 4, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icCopySTVar, 18, 4, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 3, 22},
    {refalrts::icString, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 2, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 0, 32},
    {refalrts::icCopySTVar, 33, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 26, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceRange, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 13, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.Sentences#1/7 ) e.Tokens#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    // closed e.Sentences#1 as range 7
    // closed e.Tokens#1 as range 0
    //0: e.Tokens#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.Sentences#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
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
    // ( s.Number#1/4 e.Functions#1/2 ) t.ErrorList#1/5 t.SymTable#1/6 t.Context#1/7 ( e.Sentences#1/8 ) ( # TkCloseBlock s.LnNumber#1/12 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    // closed e.Functions#1 as range 2
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Sentences#1 as range 8
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //0: e.Tail#1
    //2: e.Functions#1
    //4: s.Number#1
    //5: t.ErrorList#1
    //6: t.SymTable#1
    //7: t.Context#1
    //8: e.Sentences#1
    //12: s.LnNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], Cntx_PopScope, "Cntx_PopScope" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], lambda_DoParseBlock_0, "lambda_DoParseBlock_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[16] );
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
    // ( s.Number#1/4 e.Functions#1/2 ) t.ErrorList#1/5 t.SymTable#1/6 t.Context#1/7 ( e.Sentences#1/8 ) ( # TkEOF s.LnNum#1/12 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    // closed e.Functions#1 as range 2
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkEOF<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Sentences#1 as range 8
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //0: e.Tail#1
    //2: e.Functions#1
    //4: s.Number#1
    //5: t.ErrorList#1
    //6: t.SymTable#1
    //7: t.Context#1
    //8: e.Sentences#1
    //12: s.LnNum#1
    //18: s.Number#1
    //33: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[18], context[4]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], "Unexpected EOF, expected \"}\"", 28 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], Cntx_PopScope, "Cntx_PopScope" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_TkEOF<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[26], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[6] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[13], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[17], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[4] );
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
  // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.Sentences#1/7 ) e.Tokens#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#1 as range 7
  // closed e.Tokens#1 as range 0
  //0: e.Tokens#1
  //2: e.Functions#1
  //4: t.ErrorList#1
  //5: t.SymTable#1
  //6: t.Context#1
  //7: e.Sentences#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], DoParseBlock, "DoParseBlock" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ParseSentence, "ParseSentence" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
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
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[15], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
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
    {refalrts::icInitB0, 0, 0, 0},
    // e.Context#1/0 ( ( e.Pattern#1/4 ) ( e.Result#1/6 ) )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Context#1 as range 0
    // closed e.Pattern#1 as range 4
    // closed e.Result#1 as range 6
    //0: e.Context#1
    //4: e.Pattern#1
    //6: e.Result#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  // e.Context#1/0 ( ( e.Pattern#1/4 ) ( e.Result#1/6 ) )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
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
  // closed e.Context#1 as range 0
  // closed e.Pattern#1 as range 4
  // closed e.Result#1 as range 6
  //0: e.Context#1
  //4: e.Pattern#1
  //6: e.Result#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], CreateContext, "CreateContext" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[8], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[9], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
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
    {refalrts::icOnFailGoTo, +23, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( 'e' e.Index#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Index#2 as range 2
    //2: e.Index#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icChar, 0, 'e', 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 4, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Mode#2/4 e.Index#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Index#2 as range 2
    //2: e.Index#2
    //4: s.Mode#2
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
    // ( 'e' e.Index#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Index#2 as range 2
    //2: e.Index#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TkVariable<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[6], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[8] );
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
  // ( s.Mode#2/4 e.Index#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#2 as range 2
  //2: e.Index#2
  //4: s.Mode#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_TkVariable<int>::name ) )
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
    {refalrts::icInitB0, 0, 0, 0},
    // e.Context#1/0
    // closed e.Context#1 as range 0
    //0: e.Context#1
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
  // e.Context#1/0
  // closed e.Context#1 as range 0
  //0: e.Context#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], lambda_CreateContext_0, "lambda_CreateContext_0" ) )
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

static refalrts::FnResult lambda_ParseSentence_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkReplace<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Incorrect pattern termination", 29}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +21, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#2/2 t.SymTable#2/3 t.Context#2/4 ( e.Pattern#2/5 ) ( # TkReplace s.LnNum#2/9 ) e.Tokens#2/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icIdentLeft, 0, 0, 7},
    // closed e.Pattern#2 as range 5
    // closed e.Tokens#2 as range 0
    {refalrts::icsVarLeft, 0, 9, 7},
    {refalrts::icEmpty, 0, 0, 7},
    //0: e.Tokens#2
    //2: t.ErrorList#2
    //3: t.SymTable#2
    //4: t.Context#2
    //5: e.Pattern#2
    //9: s.LnNum#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#2/2 t.SymTable#2/3 t.Context#2/4 ( e.Pattern#2/5 ) ( s.NextResultTerm#2/9 s.LnNum#2/10 e.Info#2/7 ) e.Tokens#2/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    // closed e.Pattern#2 as range 5
    // closed e.Tokens#2 as range 0
    {refalrts::icsVarLeft, 0, 9, 7},
    {refalrts::icsVarLeft, 0, 10, 7},
    // closed e.Info#2 as range 7
    //0: e.Tokens#2
    //2: t.ErrorList#2
    //3: t.SymTable#2
    //4: t.Context#2
    //5: e.Pattern#2
    //7: e.Info#2
    //9: s.NextResultTerm#2
    //10: s.LnNum#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icString, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
    // t.ErrorList#2/2 t.SymTable#2/3 t.Context#2/4 ( e.Pattern#2/5 ) ( # TkReplace s.LnNum#2/9 ) e.Tokens#2/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkReplace<int>::name, context[7], context[8] ) )
      continue;
    // closed e.Pattern#2 as range 5
    // closed e.Tokens#2 as range 0
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //0: e.Tokens#2
    //2: t.ErrorList#2
    //3: t.SymTable#2
    //4: t.Context#2
    //5: e.Pattern#2
    //9: s.LnNum#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
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
  // t.ErrorList#2/2 t.SymTable#2/3 t.Context#2/4 ( e.Pattern#2/5 ) ( s.NextResultTerm#2/9 s.LnNum#2/10 e.Info#2/7 ) e.Tokens#2/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 5
  // closed e.Tokens#2 as range 0
  if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 7
  //0: e.Tokens#2
  //2: t.ErrorList#2
  //3: t.SymTable#2
  //4: t.Context#2
  //5: e.Pattern#2
  //7: e.Info#2
  //9: s.NextResultTerm#2
  //10: s.LnNum#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "Incorrect pattern termination", 29 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[16], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_stvar( res, context[3] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseSentence_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseResult, "ParseResult" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#2/4 t.SymTable#2/5 t.Context#2/6 ( e.Pattern#2/7 ) e.Tokens#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    // closed e.Pattern#2 as range 7
    // closed e.Tokens#2 as range 0
    //0: e.Tokens#2
    //2: e.Functions#1
    //4: t.ErrorList#2
    //5: t.SymTable#2
    //6: t.Context#2
    //7: e.Pattern#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
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
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 7},
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
  // ( e.Functions#1/2 ) t.ErrorList#2/4 t.SymTable#2/5 t.Context#2/6 ( e.Pattern#2/7 ) e.Tokens#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 7
  // closed e.Tokens#2 as range 0
  //0: e.Tokens#2
  //2: e.Functions#1
  //4: t.ErrorList#2
  //5: t.SymTable#2
  //6: t.Context#2
  //7: e.Pattern#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ParseResult, "ParseResult" ) )
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
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[15], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseSentence_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" },
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkCloseBlock<int>::name,
    & ident_TkSemicolon<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"semicolon", 9},
    {"Missed semicolon", 16}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +55, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sentences#1/2 ) ( e.Pattern#2/4 ) ( e.Functions#2/6 ) t.ErrorList#2/8 t.SymTable#2/9 t.Context#2/10 ( e.Result#2/11 ) ( # TkSemicolon s.LnNum#2/15 ) e.Tokens#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Sentences#1 as range 2
    // closed e.Pattern#2 as range 4
    // closed e.Functions#2 as range 6
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 9, 0},
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 13, 0},
    {refalrts::icIdentLeft, 0, 1, 13},
    // closed e.Result#2 as range 11
    // closed e.Tokens#2 as range 0
    {refalrts::icsVarLeft, 0, 15, 13},
    {refalrts::icEmpty, 0, 0, 13},
    //0: e.Tokens#2
    //2: e.Sentences#1
    //4: e.Pattern#2
    //6: e.Functions#2
    //8: t.ErrorList#2
    //9: t.SymTable#2
    //10: t.Context#2
    //11: e.Result#2
    //15: s.LnNum#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 22, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +75, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sentences#1/2 ) ( e.Pattern#2/4 ) ( e.Functions#2/6 ) t.ErrorList#2/8 t.SymTable#2/9 t.Context#2/10 ( e.Result#2/11 ) ( # TkCloseBlock s.LnNum#2/15 ) e.Tokens#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Sentences#1 as range 2
    // closed e.Pattern#2 as range 4
    // closed e.Functions#2 as range 6
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 9, 0},
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 13, 0},
    {refalrts::icIdentLeft, 0, 0, 13},
    // closed e.Result#2 as range 11
    // closed e.Tokens#2 as range 0
    {refalrts::icsVarLeft, 0, 15, 13},
    {refalrts::icEmpty, 0, 0, 13},
    //0: e.Tokens#2
    //2: e.Sentences#1
    //4: e.Pattern#2
    //6: e.Functions#2
    //8: t.ErrorList#2
    //9: t.SymTable#2
    //10: t.Context#2
    //11: e.Result#2
    //15: s.LnNum#2
    //36: s.LnNum#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 2, 19},
    {refalrts::icString, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icIdent, 0, 0, 35},
    {refalrts::icCopySTVar, 36, 15, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 34, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 26, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 27, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceRange, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sentences#1/2 ) ( e.Pattern#2/4 ) ( e.Functions#2/6 ) t.ErrorList#2/8 t.SymTable#2/9 t.Context#2/10 ( e.Result#2/11 ) t.Unexpected#2/13 e.Tokens#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Sentences#1 as range 2
    // closed e.Pattern#2 as range 4
    // closed e.Functions#2 as range 6
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 9, 0},
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    // closed e.Result#2 as range 11
    {refalrts::ictVarLeft, 0, 13, 0},
    // closed e.Tokens#2 as range 0
    //0: e.Tokens#2
    //2: e.Sentences#1
    //4: e.Pattern#2
    //6: e.Functions#2
    //8: t.ErrorList#2
    //9: t.SymTable#2
    //10: t.Context#2
    //11: e.Result#2
    //13: t.Unexpected#2
    //32: t.Unexpected#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 1, 17},
    {refalrts::icString, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icCopySTVar, 32, 13, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 24, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 25, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
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
    // ( e.Sentences#1/2 ) ( e.Pattern#2/4 ) ( e.Functions#2/6 ) t.ErrorList#2/8 t.SymTable#2/9 t.Context#2/10 ( e.Result#2/11 ) ( # TkSemicolon s.LnNum#2/15 ) e.Tokens#2/0
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
    // closed e.Sentences#1 as range 2
    // closed e.Pattern#2 as range 4
    // closed e.Functions#2 as range 6
    if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_left( context[13], context[14], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[13], context[14] ) )
      continue;
    // closed e.Result#2 as range 11
    // closed e.Tokens#2 as range 0
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //0: e.Tokens#2
    //2: e.Sentences#1
    //4: e.Pattern#2
    //6: e.Functions#2
    //8: t.ErrorList#2
    //9: t.SymTable#2
    //10: t.Context#2
    //11: e.Result#2
    //15: s.LnNum#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[21], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[22], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[8] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[6], context[7] );
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
    // ( e.Sentences#1/2 ) ( e.Pattern#2/4 ) ( e.Functions#2/6 ) t.ErrorList#2/8 t.SymTable#2/9 t.Context#2/10 ( e.Result#2/11 ) ( # TkCloseBlock s.LnNum#2/15 ) e.Tokens#2/0
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
    // closed e.Sentences#1 as range 2
    // closed e.Pattern#2 as range 4
    // closed e.Functions#2 as range 6
    if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_left( context[13], context[14], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[13], context[14] ) )
      continue;
    // closed e.Result#2 as range 11
    // closed e.Tokens#2 as range 0
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //0: e.Tokens#2
    //2: e.Sentences#1
    //4: e.Pattern#2
    //6: e.Functions#2
    //8: t.ErrorList#2
    //9: t.SymTable#2
    //10: t.Context#2
    //11: e.Result#2
    //15: s.LnNum#2
    //36: s.LnNum#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[20], context[21], "Missed semicolon", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], & ident_TkCloseBlock<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[34], context[37] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_elem( res, context[34] );
    refalrts::link_brackets( context[26], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::link_brackets( context[27], context[32] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::link_brackets( context[30], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[28], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[23] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[9] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Sentences#1/2 ) ( e.Pattern#2/4 ) ( e.Functions#2/6 ) t.ErrorList#2/8 t.SymTable#2/9 t.Context#2/10 ( e.Result#2/11 ) t.Unexpected#2/13 e.Tokens#2/0
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
  // closed e.Sentences#1 as range 2
  // closed e.Pattern#2 as range 4
  // closed e.Functions#2 as range 6
  if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#2 as range 11
  if( ! refalrts::tvar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#2 as range 0
  //0: e.Tokens#2
  //2: e.Sentences#1
  //4: e.Pattern#2
  //6: e.Functions#2
  //8: t.ErrorList#2
  //9: t.SymTable#2
  //10: t.Context#2
  //11: e.Result#2
  //13: t.Unexpected#2
  //32: t.Unexpected#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "semicolon", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[32], context[13]))
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[32] );
  refalrts::link_brackets( context[24], context[31] );
  res = refalrts::splice_elem( res, context[31] );
  refalrts::link_brackets( context[25], context[30] );
  res = refalrts::splice_elem( res, context[30] );
  refalrts::link_brackets( context[28], context[29] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[28] );
  refalrts::link_brackets( context[26], context[27] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[21] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_stvar( res, context[9] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseSentence_2, "lambda_ParseSentence_2" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { lambda_ParseSentence_1, "lambda_ParseSentence_1" },
    { lambda_ParseSentence_0, "lambda_ParseSentence_0" },
    { Seq, "Seq" },
    { ParsePattern, "ParsePattern" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.Sentences#1/7 ) e.Tokens#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    // closed e.Sentences#1 as range 7
    // closed e.Tokens#1 as range 0
    //0: e.Tokens#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.Sentences#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 6, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 5, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 4, 19},
    {refalrts::icFunc, 0, 3, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 1, 22},
    {refalrts::icFunc, 0, 2, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 1, 28},
    {refalrts::icFunc, 0, 0, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
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
  // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.Sentences#1/7 ) e.Tokens#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#1 as range 7
  // closed e.Tokens#1 as range 0
  //0: e.Tokens#1
  //2: e.Functions#1
  //4: t.ErrorList#1
  //5: t.SymTable#1
  //6: t.Context#1
  //7: e.Sentences#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ParsePattern, "ParsePattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_ParseSentence_0, "lambda_ParseSentence_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], lambda_ParseSentence_1, "lambda_ParseSentence_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], lambda_ParseSentence_2, "lambda_ParseSentence_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[34] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[18] );
  res = refalrts::splice_elem( res, context[33] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[27] );
  res = refalrts::splice_elem( res, context[32] );
  refalrts::link_brackets( context[30], context[31] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_elem( res, context[27] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[21] );
  res = refalrts::splice_elem( res, context[26] );
  refalrts::link_brackets( context[24], context[25] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[15], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParsePattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
    {refalrts::icInitB0, 0, 0, 0},
    // t.SymTable#1/2 ( e.MultiBracket#1/3 ) ( e.Scanned#1/5 ) ( e.Index#1/7 ) ( e.Tail#1/9 ) t.ErrorList#2/11 t.Context#2/12 s.Mode#2/13 s.Depth#2/14
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    // closed e.MultiBracket#1 as range 3
    // closed e.Scanned#1 as range 5
    // closed e.Index#1 as range 7
    // closed e.Tail#1 as range 9
    {refalrts::ictVarLeft, 0, 11, 0},
    {refalrts::ictVarLeft, 0, 12, 0},
    {refalrts::icsVarLeft, 0, 13, 0},
    {refalrts::icsVarLeft, 0, 14, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: t.SymTable#1
    //3: e.MultiBracket#1
    //5: e.Scanned#1
    //7: e.Index#1
    //9: e.Tail#1
    //11: t.ErrorList#2
    //12: t.Context#2
    //13: s.Mode#2
    //14: s.Depth#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 19, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
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
  // t.SymTable#1/2 ( e.MultiBracket#1/3 ) ( e.Scanned#1/5 ) ( e.Index#1/7 ) ( e.Tail#1/9 ) t.ErrorList#2/11 t.Context#2/12 s.Mode#2/13 s.Depth#2/14
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MultiBracket#1 as range 3
  // closed e.Scanned#1 as range 5
  // closed e.Index#1 as range 7
  // closed e.Tail#1 as range 9
  if( ! refalrts::tvar_left( context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: t.SymTable#1
  //3: e.MultiBracket#1
  //5: e.Scanned#1
  //7: e.Index#1
  //9: e.Tail#1
  //11: t.ErrorList#2
  //12: t.Context#2
  //13: s.Mode#2
  //14: s.Depth#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ParsePattern, "ParsePattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[21], & ident_TkVariable<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::link_brackets( context[19], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[20], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_stvar( res, context[12] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_stvar( res, context[11] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParsePattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
    {refalrts::icInitB0, 0, 0, 0},
    // t.SymTable#1/2 ( e.MultiBracket#1/3 ) ( e.Scanned#1/5 ) ( e.Index#1/7 ) ( e.Tail#1/9 ) t.ErrorList#2/11 t.Context#2/12 s.Mode#2/13 s.Depth#2/14
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    // closed e.MultiBracket#1 as range 3
    // closed e.Scanned#1 as range 5
    // closed e.Index#1 as range 7
    // closed e.Tail#1 as range 9
    {refalrts::ictVarLeft, 0, 11, 0},
    {refalrts::ictVarLeft, 0, 12, 0},
    {refalrts::icsVarLeft, 0, 13, 0},
    {refalrts::icsVarLeft, 0, 14, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: t.SymTable#1
    //3: e.MultiBracket#1
    //5: e.Scanned#1
    //7: e.Index#1
    //9: e.Tail#1
    //11: t.ErrorList#2
    //12: t.Context#2
    //13: s.Mode#2
    //14: s.Depth#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 19, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
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
  // t.SymTable#1/2 ( e.MultiBracket#1/3 ) ( e.Scanned#1/5 ) ( e.Index#1/7 ) ( e.Tail#1/9 ) t.ErrorList#2/11 t.Context#2/12 s.Mode#2/13 s.Depth#2/14
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MultiBracket#1 as range 3
  // closed e.Scanned#1 as range 5
  // closed e.Index#1 as range 7
  // closed e.Tail#1 as range 9
  if( ! refalrts::tvar_left( context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: t.SymTable#1
  //3: e.MultiBracket#1
  //5: e.Scanned#1
  //7: e.Index#1
  //9: e.Tail#1
  //11: t.ErrorList#2
  //12: t.Context#2
  //13: s.Mode#2
  //14: s.Depth#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ParsePattern, "ParsePattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[21], & ident_TkVariable<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::link_brackets( context[19], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[20], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_stvar( res, context[12] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_stvar( res, context[11] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParsePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromBracket, "StrFromBracket" },
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { ParsePattern, "ParsePattern" },
    { ST_GetAnyName, "ST_GetAnyName" },
    { ST_AddFunctionCall, "ST_AddFunctionCall" },
    { lambda_ParsePattern_1, "lambda_ParsePattern_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Cntx_AddVariable, "Cntx_AddVariable" },
    { CheckAddVariable, "CheckAddVariable" },
    { Fetch, "Fetch" },
    { lambda_ParsePattern_0, "lambda_ParsePattern_0" },
    { Cntx_AddNewVariable, "Cntx_AddNewVariable" },
    { ST_AddIdent, "ST_AddIdent" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Close<int>::name,
    & ident_TkCloseCall<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_Open<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_ADT_Brackets<int>::name,
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
    {"Unbalanced bracket \"", 20},
    {"Unexpected call bracket in pattern expression", 45},
    {"Expected name after \"[\"", 23},
    {"Naked redefinition sign", 23},
    {"Missed name after \'#\'", 21}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +45, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBrackets#1/5 ) ( e.Scanned#1/7 ) ( # TkChar s.LnNum#1/11 s.Char#1/12 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 16, 9},
    // closed e.MultiBrackets#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icsVarLeft, 0, 12, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBrackets#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    //12: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icIdent, 0, 16, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 18, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +45, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBrackets#1/5 ) ( e.Scanned#1/7 ) ( # TkNumber s.LnNum#1/11 s.Number#1/12 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 15, 9},
    // closed e.MultiBrackets#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icsVarLeft, 0, 12, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBrackets#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    //12: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icIdent, 0, 15, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 18, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +54, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBrackets#1/5 ) ( e.Scanned#1/7 ) ( # TkName s.LnNum#1/11 e.Name#1/9 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 8, 9},
    // closed e.MultiBrackets#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    // closed e.Name#1 as range 9
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBrackets#1
    //7: e.Scanned#1
    //9: e.Name#1
    //11: s.LnNum#1
    //22: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 4, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 8, 21},
    {refalrts::icCopyEVar, 22, 9, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 19, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +57, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBrackets#1/5 ) ( e.Scanned#1/7 ) ( # TkIdentMarker s.LnNumMarker#1/13 ) ( # TkName s.LnNumName#1/14 e.Name#1/11 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 13, 9},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 8, 11},
    // closed e.MultiBrackets#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icsVarLeft, 0, 14, 11},
    // closed e.Name#1 as range 11
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBrackets#1
    //7: e.Scanned#1
    //11: e.Name#1
    //13: s.LnNumMarker#1
    //14: s.LnNumName#1
    //25: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 2, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 12, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 14, 24},
    {refalrts::icCopyEVar, 25, 11, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 22, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 23, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +47, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBrackets#1/5 ) ( e.Scanned#1/7 ) ( # TkIdentMarker s.LnNum#1/11 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 13, 9},
    // closed e.MultiBrackets#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBrackets#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icString, 0, 4, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +75, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # TkVariable s.LnNumVar#1/13 s.Mode#1/14 e.Index#1/9 ) ( # TkRedefinition s.LnNumRedef#1/15 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 12, 9},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 11, 11},
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 9},
    {refalrts::icsVarLeft, 0, 14, 9},
    // closed e.Index#1 as range 9
    {refalrts::icsVarLeft, 0, 15, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //9: e.Index#1
    //13: s.LnNumVar#1
    //14: s.Mode#1
    //15: s.LnNumRedef#1
    //30: e.Index#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 9, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 8, 19},
    {refalrts::icFunc, 0, 11, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icFunc, 0, 6, 23},
    {refalrts::icFunc, 0, 10, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icCopyEVar, 30, 9, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +71, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # TkVariable s.LnNum#1/11 s.Mode#1/12 e.Index#1/9 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 12, 9},
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icsVarLeft, 0, 12, 9},
    // closed e.Index#1 as range 9
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //9: e.Index#1
    //11: s.LnNum#1
    //12: s.Mode#1
    //27: e.Index#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 9, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 8, 16},
    {refalrts::icFunc, 0, 7, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 6, 20},
    {refalrts::icFunc, 0, 5, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icCopyEVar, 27, 9, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +47, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # TkRedefinition s.LnNum#1/11 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 11, 9},
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icString, 0, 3, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +47, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # Open s.LnNum#1/11 # TkOpenBracket ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 4, 9},
    {refalrts::icIdentRight, 0, 10, 9},
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 2, 16},
    {refalrts::icIdent, 0, 9, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +67, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # Open s.LnNumBracket#1/13 # TkOpenADT ) ( # TkName s.LnNumName#1/14 e.Name#1/11 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 4, 9},
    {refalrts::icIdentRight, 0, 7, 9},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 8, 11},
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icsVarLeft, 0, 14, 11},
    // closed e.Name#1 as range 11
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //11: e.Name#1
    //13: s.LnNumBracket#1
    //14: s.LnNumName#1
    //28: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 2, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 4, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 6, 22},
    {refalrts::icIdent, 0, 5, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icCopyEVar, 28, 11, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 26, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 27, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 20, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 21, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # Open s.LnNum#1/11 # TkOpenADT ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 4, 9},
    {refalrts::icIdentRight, 0, 7, 9},
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    //22: s.LnNum#1
    //30: t.SymTable#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icString, 0, 2, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 6, 21},
    {refalrts::icCopySTVar, 22, 11, 0},
    {refalrts::icIdent, 0, 5, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icFunc, 0, 3, 29},
    {refalrts::icCopySTVar, 30, 3, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 26, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 27, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 19, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +59, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # Open s.LnNum#1/11 # TkOpenCall ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 4, 9},
    {refalrts::icIdentRight, 0, 3, 9},
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    //22: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icString, 0, 1, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 2, 21},
    {refalrts::icCopySTVar, 22, 11, 0},
    {refalrts::icIdent, 0, 1, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 19, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ( s.BracketsSign#1/13 s.InnerLnNum#1/14 s.CloseBracket#1/15 e.Scanned#1/11 ) ) ( e.InnerScanned#1/7 ) ( # Close s.ClosedLnNum#1/17 s.CloseBracket#1/16 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketRight, 0, 11, 5},
    // closed e.MultiBracket#1 as range 5
    // closed e.InnerScanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    {refalrts::icsVarLeft, 0, 15, 11},
    {refalrts::icsRepeatRight, 16, 15, 9},
    // closed e.Scanned#1 as range 11
    {refalrts::icsVarLeft, 0, 17, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.InnerScanned#1
    //11: e.Scanned#1
    //13: s.BracketsSign#1
    //14: s.InnerLnNum#1
    //15: s.CloseBracket#1
    //16: s.CloseBracket#1
    //17: s.ClosedLnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 2, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ( s.BracketsSign#1/13 s.InnerLnNum#1/14 s.CloseBracket#1/15 e.Scanned#1/11 ) ) ( e.InnerScanned#1/7 ) ( # Close s.LnNum#1/16 s.OtherCloseBracket#1/17 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketRight, 0, 11, 5},
    // closed e.MultiBracket#1 as range 5
    // closed e.InnerScanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    {refalrts::icsVarLeft, 0, 15, 11},
    // closed e.Scanned#1 as range 11
    {refalrts::icsVarLeft, 0, 16, 9},
    {refalrts::icsVarLeft, 0, 17, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.InnerScanned#1
    //11: e.Scanned#1
    //13: s.BracketsSign#1
    //14: s.InnerLnNum#1
    //15: s.CloseBracket#1
    //16: s.LnNum#1
    //17: s.OtherCloseBracket#1
    //33: s.BracketsSign#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 2, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 1, 21},
    {refalrts::icString, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icChar, 0, '\"', 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icCopySTVar, 33, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icIdent, 0, 0, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 36, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icLinkBrackets, 31, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 32, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceRange, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +59, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( ) ( e.Scanned#1/7 ) ( # Close s.LnNum#1/11 s.CloseBracket#1/12 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icsVarLeft, 0, 12, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    //12: s.CloseBracket#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 1, 16},
    {refalrts::icString, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icChar, 0, '\"', 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceRange, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +66, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ( s.BracketsSign#1/11 s.InnerLnNum#1/12 s.CloseBracket#1/13 e.Scanned#1/9 ) ) ( e.InnerScanned#1/7 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketRight, 0, 9, 5},
    // closed e.MultiBracket#1 as range 5
    // closed e.InnerScanned#1 as range 7
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icsVarLeft, 0, 12, 9},
    {refalrts::icsVarLeft, 0, 13, 9},
    // closed e.Scanned#1 as range 9
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.InnerScanned#1
    //9: e.Scanned#1
    //11: s.BracketsSign#1
    //12: s.InnerLnNum#1
    //13: s.CloseBracket#1
    //29: s.BracketsSign#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 1, 17},
    {refalrts::icString, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icChar, 0, '\"', 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icCopySTVar, 29, 11, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 27, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 28, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( ) ( e.Pattern#1/7 ) e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Pattern#1 as range 7
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //7: e.Pattern#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[16];
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBrackets#1/5 ) ( e.Scanned#1/7 ) ( # TkChar s.LnNum#1/11 s.Char#1/12 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[9], context[10] ) )
      continue;
    // closed e.MultiBrackets#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBrackets#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    //12: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_TkChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[17], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[18], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBrackets#1/5 ) ( e.Scanned#1/7 ) ( # TkNumber s.LnNum#1/11 s.Number#1/12 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[9], context[10] ) )
      continue;
    // closed e.MultiBrackets#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBrackets#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    //12: s.Number#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_TkNumber<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[17], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[18], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBrackets#1/5 ) ( e.Scanned#1/7 ) ( # TkName s.LnNum#1/11 e.Name#1/9 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[9], context[10] ) )
      continue;
    // closed e.MultiBrackets#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBrackets#1
    //7: e.Scanned#1
    //9: e.Name#1
    //11: s.LnNum#1
    //22: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[21], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[22], context[23], context[9], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[19], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[2] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBrackets#1/5 ) ( e.Scanned#1/7 ) ( # TkIdentMarker s.LnNumMarker#1/13 ) ( # TkName s.LnNumName#1/14 e.Name#1/11 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[9], context[10] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBrackets#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    // closed e.Name#1 as range 11
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBrackets#1
    //7: e.Scanned#1
    //11: e.Name#1
    //13: s.LnNumMarker#1
    //14: s.LnNumName#1
    //25: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ST_AddIdent, "ST_AddIdent" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[24], & ident_TkIdentifier<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[11], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[22], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[23], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[2] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBrackets#1/5 ) ( e.Scanned#1/7 ) ( # TkIdentMarker s.LnNum#1/11 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[9], context[10] ) )
      continue;
    // closed e.MultiBrackets#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBrackets#1
    //7: e.Scanned#1
    //11: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "Missed name after \'#\'", 21 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[15] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # TkVariable s.LnNumVar#1/13 s.Mode#1/14 e.Index#1/9 ) ( # TkRedefinition s.LnNumRedef#1/15 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Index#1 as range 9
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //9: e.Index#1
    //13: s.LnNumVar#1
    //14: s.Mode#1
    //15: s.LnNumRedef#1
    //30: e.Index#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], CheckAddVariable, "CheckAddVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Cntx_AddNewVariable, "Cntx_AddNewVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], lambda_ParsePattern_0, "lambda_ParsePattern_0" ) )
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
    if (! refalrts::copy_evar(context[30], context[31], context[9], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[36] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[22] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[33], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::link_brackets( context[29], context[32] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[27], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[2] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # TkVariable s.LnNum#1/11 s.Mode#1/12 e.Index#1/9 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    // closed e.Index#1 as range 9
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //9: e.Index#1
    //11: s.LnNum#1
    //12: s.Mode#1
    //27: e.Index#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], CheckAddVariable, "CheckAddVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Cntx_AddVariable, "Cntx_AddVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], lambda_ParsePattern_1, "lambda_ParsePattern_1" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[27], context[28], context[9], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::link_brackets( context[30], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[26], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[24], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[22], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[16] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # TkRedefinition s.LnNum#1/11 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[9], context[10] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //11: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "Naked redefinition sign", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[15] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # Open s.LnNum#1/11 # TkOpenBracket ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[9], context[10] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenBracket<int>::name, context[9], context[10] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //11: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # Open s.LnNumBracket#1/13 # TkOpenADT ) ( # TkName s.LnNumName#1/14 e.Name#1/11 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[9], context[10] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[9], context[10] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    // closed e.Name#1 as range 11
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //11: e.Name#1
    //13: s.LnNumBracket#1
    //14: s.LnNumName#1
    //28: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[28], context[29], context[11], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[26], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[27], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[20], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[21], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[2] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # Open s.LnNum#1/11 # TkOpenADT ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[9], context[10] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[9], context[10] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    //22: s.LnNum#1
    //30: t.SymTable#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "Expected name after \"[\"", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[21], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[30], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[26], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::link_brackets( context[27], context[32] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[28] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[19], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[15] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( # Open s.LnNum#1/11 # TkOpenCall ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[9], context[10] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenCall<int>::name, context[9], context[10] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    //22: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "Unexpected call bracket in pattern expression", 45 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[21], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_TkCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[19], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[15] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ( s.BracketsSign#1/13 s.InnerLnNum#1/14 s.CloseBracket#1/15 e.Scanned#1/11 ) ) ( e.InnerScanned#1/7 ) ( # Close s.ClosedLnNum#1/17 s.CloseBracket#1/16 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[9], context[10] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_right( context[11], context[12], context[5], context[6] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.InnerScanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[16], context[15], context[9], context[10] ) )
      continue;
    // closed e.Scanned#1 as range 11
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.InnerScanned#1
    //11: e.Scanned#1
    //13: s.BracketsSign#1
    //14: s.InnerLnNum#1
    //15: s.CloseBracket#1
    //16: s.CloseBracket#1
    //17: s.ClosedLnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[22], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ( s.BracketsSign#1/13 s.InnerLnNum#1/14 s.CloseBracket#1/15 e.Scanned#1/11 ) ) ( e.InnerScanned#1/7 ) ( # Close s.LnNum#1/16 s.OtherCloseBracket#1/17 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[9], context[10] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_right( context[11], context[12], context[5], context[6] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.InnerScanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    // closed e.Scanned#1 as range 11
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.InnerScanned#1
    //11: e.Scanned#1
    //13: s.BracketsSign#1
    //14: s.InnerLnNum#1
    //15: s.CloseBracket#1
    //16: s.LnNum#1
    //17: s.OtherCloseBracket#1
    //33: s.BracketsSign#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[37], & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[36], context[38] );
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_elem( res, context[36] );
    refalrts::link_brackets( context[31], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[32], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[29], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[24] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( ) ( e.Scanned#1/7 ) ( # Close s.LnNum#1/11 s.CloseBracket#1/12 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //7: e.Scanned#1
    //11: s.LnNum#1
    //12: s.CloseBracket#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[17], context[18], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[24], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[16] );
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
    // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( e.MultiBracket#1/5 ( s.BracketsSign#1/11 s.InnerLnNum#1/12 s.CloseBracket#1/13 e.Scanned#1/9 ) ) ( e.InnerScanned#1/7 ) e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_right( context[9], context[10], context[5], context[6] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.InnerScanned#1 as range 7
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    // closed e.Scanned#1 as range 9
    //0: e.Tail#1
    //2: t.ErrorList#1
    //3: t.SymTable#1
    //4: t.Context#1
    //5: e.MultiBracket#1
    //7: e.InnerScanned#1
    //9: e.Scanned#1
    //11: s.BracketsSign#1
    //12: s.InnerLnNum#1
    //13: s.CloseBracket#1
    //29: s.BracketsSign#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[27], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[28], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[17] );
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
  // t.ErrorList#1/2 t.SymTable#1/3 t.Context#1/4 ( ) ( e.Pattern#1/7 ) e.Tail#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 7
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: t.ErrorList#1
  //3: t.SymTable#1
  //4: t.Context#1
  //7: e.Pattern#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult InvalidModeVariableError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 s.LnNum#1/3 s.OldMode#1/4 s.NewMode#1/5 e.Index#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Index#1 as range 0
    //0: e.Index#1
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.OldMode#1
    //5: s.NewMode#1
    //14: e.Index#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icString, 0, 2, 8},
    {refalrts::icChar, 0, '.', 10},
    {refalrts::icString, 0, 1, 11},
    {refalrts::icChar, 0, '.', 13},
    {refalrts::icCopyEVar, 14, 0, 0},
    {refalrts::icString, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 8},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // t.ErrorList#1/2 s.LnNum#1/3 s.OldMode#1/4 s.NewMode#1/5 e.Index#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 0
  //0: e.Index#1
  //2: t.ErrorList#1
  //3: s.LnNum#1
  //4: s.OldMode#1
  //5: s.NewMode#1
  //14: e.Index#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "Variables ", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], " and ", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], '.' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[14], context[15], context[0], context[1]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], " has different modes", 20 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CheckAddVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # Success s.Depth#2/8
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Index#1 as range 5
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: t.Context#2
    //8: s.Depth#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # InvalidMode s.Depth#2/8 s.OldMode#2/9
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Index#1 as range 5
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icsVarLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: t.Context#2
    //8: s.Depth#2
    //9: s.OldMode#2
    //13: s.OldMode#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icCopySTVar, 13, 9, 0},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # AlreadyBounded s.Depth#2/8
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Index#1 as range 5
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: t.Context#2
    //8: s.Depth#2
    //15: s.Mode#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icString, 0, 0, 11},
    {refalrts::icChar, 0, '.', 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icCopySTVar, 15, 4, 0},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
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
    // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # Success s.Depth#2/8
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    // closed e.Index#1 as range 5
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Success<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: t.Context#2
    //8: s.Depth#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[2] );
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
    // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # InvalidMode s.Depth#2/8 s.OldMode#2/9
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    // closed e.Index#1 as range 5
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_InvalidMode<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: t.Context#2
    //8: s.Depth#2
    //9: s.OldMode#2
    //13: s.OldMode#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], InvalidModeVariableError, "InvalidModeVariableError" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[13], context[9]))
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_stvar( res, context[7] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
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
  // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # AlreadyBounded s.Depth#2/8
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5
  if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_AlreadyBounded<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: t.ErrorList#1
  //3: s.LnNum#1
  //4: s.Mode#1
  //5: e.Index#1
  //7: t.Context#2
  //8: s.Depth#2
  //15: s.Mode#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "Variable hide operator^ must be applied to first occurence of variable ", 71 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[4]))
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_stvar( res, context[7] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CheckAddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_CheckAddVariable_0, "lambda_CheckAddVariable_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.Context#1/3 s.FnContextModifier#1/4 s.LnNum#1/5 s.Mode#1/6 e.Index#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    // closed e.Index#1 as range 0
    //0: e.Index#1
    //2: t.ErrorList#1
    //3: t.Context#1
    //4: s.FnContextModifier#1
    //5: s.LnNum#1
    //6: s.Mode#1
    //14: s.Mode#1
    //16: e.Index#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 2, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icCopySTVar, 14, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icCopyEVar, 16, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 4},
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
  // t.ErrorList#1/2 t.Context#1/3 s.FnContextModifier#1/4 s.LnNum#1/5 s.Mode#1/6 e.Index#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 0
  //0: e.Index#1
  //2: t.ErrorList#1
  //3: t.Context#1
  //4: s.FnContextModifier#1
  //5: s.LnNum#1
  //6: s.Mode#1
  //14: s.Mode#1
  //16: e.Index#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], lambda_CheckAddVariable_0, "lambda_CheckAddVariable_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[14], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[16], context[17], context[0], context[1]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[15], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult StrFromBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 3 elems
  refalrts::Iter context[3];
  refalrts::zeros( context, 3 );
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
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenBracket
    {refalrts::icIdentLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '(', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkCloseBracket
    {refalrts::icIdentLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, ')', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenCall
    {refalrts::icIdentLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '<', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkCloseCall
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '>', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenADT
    {refalrts::icIdentLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '[', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkCloseADT
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, ']', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Brackets
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '(', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ADT_Brackets
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '[', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # CallBrackets
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '<', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
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
    // # TkOpenBracket
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '(' ) )
      return refalrts::cNoMemory;
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
    // # TkCloseBracket
    if( ! refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], ')' ) )
      return refalrts::cNoMemory;
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
    // # TkOpenCall
    if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '<' ) )
      return refalrts::cNoMemory;
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
    // # TkCloseCall
    if( ! refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '>' ) )
      return refalrts::cNoMemory;
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
    // # TkOpenADT
    if( ! refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '[' ) )
      return refalrts::cNoMemory;
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
    // # TkCloseADT
    if( ! refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], ']' ) )
      return refalrts::cNoMemory;
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
    // # Brackets
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '(' ) )
      return refalrts::cNoMemory;
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
    // # ADT_Brackets
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '[' ) )
      return refalrts::cNoMemory;
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
  // # CallBrackets
  if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_char( context[2], '<' ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
    {refalrts::icOnFailGoTo, +54, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.SymTable#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( e.Tail#1/9 ) ( e.Index#1/11 ) t.ErrorList#2/13 t.Context#2/14 s.Mode#2/15 s.Depth#2/16
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 9
    // closed e.Index#1 as range 11
    {refalrts::ictVarLeft, 0, 13, 0},
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::icsVarLeft, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Functions#1
    //4: t.SymTable#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //9: e.Tail#1
    //11: e.Index#1
    //13: t.ErrorList#2
    //14: t.Context#2
    //15: s.Mode#2
    //16: s.Depth#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 23, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 24, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.SymTable#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( e.Tail#1/9 ) ( e.Index#1/11 ) t.ErrorList#2/13 t.Context#2/14
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 9
    // closed e.Index#1 as range 11
    {refalrts::ictVarLeft, 0, 13, 0},
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Functions#1
    //4: t.SymTable#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //9: e.Tail#1
    //11: e.Index#1
    //13: t.ErrorList#2
    //14: t.Context#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
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
    // ( e.Functions#1/2 ) t.SymTable#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( e.Tail#1/9 ) ( e.Index#1/11 ) t.ErrorList#2/13 t.Context#2/14 s.Mode#2/15 s.Depth#2/16
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 7
    // closed e.Tail#1 as range 9
    // closed e.Index#1 as range 11
    if( ! refalrts::tvar_left( context[13], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: e.Functions#1
    //4: t.SymTable#1
    //5: e.MultiBracket#1
    //7: e.Scanned#1
    //9: e.Tail#1
    //11: e.Index#1
    //13: t.ErrorList#2
    //14: t.Context#2
    //15: s.Mode#2
    //16: s.Depth#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_TkVariable<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::link_brackets( context[23], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[24], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[13] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Functions#1/2 ) t.SymTable#1/4 ( e.MultiBracket#1/5 ) ( e.Scanned#1/7 ) ( e.Tail#1/9 ) ( e.Index#1/11 ) t.ErrorList#2/13 t.Context#2/14
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MultiBracket#1 as range 5
  // closed e.Scanned#1 as range 7
  // closed e.Tail#1 as range 9
  // closed e.Index#1 as range 11
  if( ! refalrts::tvar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Functions#1
  //4: t.SymTable#1
  //5: e.MultiBracket#1
  //7: e.Scanned#1
  //9: e.Tail#1
  //11: e.Index#1
  //13: t.ErrorList#2
  //14: t.Context#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ParseResult, "ParseResult" ) )
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
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::link_brackets( context[21], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::link_brackets( context[19], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_stvar( res, context[13] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 3 elems
  refalrts::Iter context[3];
  refalrts::zeros( context, 3 );
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
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenBracket
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 2, 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenCall
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 0, 2},
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
    // # TkOpenBracket
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
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
  // # TkOpenCall
  if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_ident( context[2], & ident_CallBrackets<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 3 elems
  refalrts::Iter context[3];
  refalrts::zeros( context, 3 );
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
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenBracket
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 2, 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenCall
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 0, 2},
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
    // # TkOpenBracket
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
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
  // # TkOpenCall
  if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_ident( context[2], & ident_TkCloseCall<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromBracket, "StrFromBracket" },
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { ParseResult, "ParseResult" },
    { ParseBlock, "ParseBlock" },
    { ParseResult_Block, "ParseResult_Block" },
    { lambda_ParseResult_2, "lambda_ParseResult_2" },
    { Fetch, "Fetch" },
    { lambda_ParseResult_1, "lambda_ParseResult_1" },
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
    & ident_TkCloseADT<int>::name,
    & ident_ADT_Brackets<int>::name,
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
    {"Unbalanced bracket \"", 20},
    {"Expected name after \"[\"", 23},
    {"Missed name after \"#\"", 21}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +52, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkChar s.LnNum#1/13 s.Char#1/14 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 11, 11},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    //14: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 2, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 11, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +52, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkNumber s.LnNum#1/13 s.Number#1/14 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 10, 11},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    //14: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 2, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 10, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +61, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkName s.LnNum#1/13 e.Name#1/11 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 6, 11},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    // closed e.Name#1 as range 11
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //11: e.Name#1
    //13: s.LnNum#1
    //26: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 9, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 6, 25},
    {refalrts::icCopyEVar, 26, 11, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 23, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 24, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +64, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkIdentMarker s.MarkerLnNum#1/15 ) ( # TkName s.NameLnNum#1/16 e.Name#1/13 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 8, 11},
    {refalrts::icBracketLeft, 0, 13, 0},
    {refalrts::icIdentLeft, 0, 6, 13},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 11},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icsVarLeft, 0, 16, 13},
    // closed e.Name#1 as range 13
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: e.Name#1
    //15: s.MarkerLnNum#1
    //16: s.NameLnNum#1
    //29: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 2, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 13, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icIdent, 0, 9, 28},
    {refalrts::icCopyEVar, 29, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 26, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 27, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +54, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkIdentMarker s.LnNum#1/13 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 8, 11},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icString, 0, 2, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceRange, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +76, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkVariable s.LnNum#1/13 s.Mode#1/14 e.Index#1/11 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 7, 11},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    // closed e.Index#1 as range 11
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //11: e.Index#1
    //13: s.LnNum#1
    //14: s.Mode#1
    //32: e.Index#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 6, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 12, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 11, 21},
    {refalrts::icFunc, 0, 10, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icCopyEVar, 32, 11, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # Open s.LnNumADT#1/15 # TkOpenADT ) ( # TkName s.LnNumName#1/16 e.Name#1/13 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 2, 11},
    {refalrts::icIdentRight, 0, 5, 11},
    {refalrts::icBracketLeft, 0, 13, 0},
    {refalrts::icIdentLeft, 0, 6, 13},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 11},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icsVarLeft, 0, 16, 13},
    // closed e.Name#1 as range 13
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: e.Name#1
    //15: s.LnNumADT#1
    //16: s.LnNumName#1
    //32: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 2, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 9, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 4, 26},
    {refalrts::icIdent, 0, 3, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icCopyEVar, 32, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 30, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 24, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 25, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +81, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # Open s.LnNum#1/13 # TkOpenADT ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 2, 11},
    {refalrts::icIdentRight, 0, 5, 11},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    //26: s.LnNum#1
    //34: t.SymTable#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icString, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 4, 25},
    {refalrts::icCopySTVar, 26, 13, 0},
    {refalrts::icIdent, 0, 3, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icFunc, 0, 8, 33},
    {refalrts::icCopySTVar, 34, 5, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 30, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icLinkBrackets, 31, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 23, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 24, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceRange, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # Open s.LnNum#1/13 s.OpenBracket#1/14 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 2, 11},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    //14: s.OpenBracket#1
    //27: s.OpenBracket#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 2, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 6, 22},
    {refalrts::icFunc, 0, 7, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 6, 26},
    {refalrts::icCopySTVar, 27, 14, 0},
    {refalrts::icFunc, 0, 5, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 19, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 20, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +55, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ( s.BracketsSign#1/15 s.OpenLnNum#1/16 s.CloseBracket#1/17 e.Scanned#1/13 ) ) ( e.InnerScanned#1/9 ) ( # Close s.LnNum#1/19 s.CloseBracket#1/18 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icBracketRight, 0, 13, 7},
    // closed e.MultiBracket#1 as range 7
    // closed e.InnerScanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 13},
    {refalrts::icsVarLeft, 0, 16, 13},
    {refalrts::icsVarLeft, 0, 17, 13},
    {refalrts::icsRepeatRight, 18, 17, 11},
    // closed e.Scanned#1 as range 13
    {refalrts::icsVarLeft, 0, 19, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.InnerScanned#1
    //13: e.Scanned#1
    //15: s.BracketsSign#1
    //16: s.OpenLnNum#1
    //17: s.CloseBracket#1
    //18: s.CloseBracket#1
    //19: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 2, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +51, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkOpenBlock s.LnNum#1/13 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 1, 11},
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 4, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 3, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ( s.BracketsSign#1/13 s.OpenLnNum#1/14 s.CloseBracket#1/15 e.Scanned#1/11 ) ) ( e.InnerScanned#1/9 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketRight, 0, 11, 7},
    // closed e.MultiBracket#1 as range 7
    // closed e.InnerScanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    {refalrts::icsVarLeft, 0, 15, 11},
    // closed e.Scanned#1 as range 11
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.InnerScanned#1
    //11: e.Scanned#1
    //13: s.BracketsSign#1
    //14: s.OpenLnNum#1
    //15: s.CloseBracket#1
    //33: s.BracketsSign#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 2, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 1, 21},
    {refalrts::icString, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icChar, 0, '\"', 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icCopySTVar, 33, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 31, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 32, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceRange, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +66, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( ) ( e.Scanned#1/9 ) ( # Close s.LnNum#1/13 s.CloseBracket#1/14 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    //14: s.CloseBracket#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 2, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icString, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icChar, 0, '\"', 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( ) ( e.Result#1/9 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Functions#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.Result#1 as range 9
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //9: e.Result#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[13];
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkChar s.LnNum#1/13 s.Char#1/14 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    //14: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_TkChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[21], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[22], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkNumber s.LnNum#1/13 s.Number#1/14 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    //14: s.Number#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_TkNumber<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[21], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[22], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkName s.LnNum#1/13 e.Name#1/11 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.Name#1 as range 11
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //11: e.Name#1
    //13: s.LnNum#1
    //26: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[11], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[23], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[24], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[6] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkIdentMarker s.MarkerLnNum#1/15 ) ( # TkName s.NameLnNum#1/16 e.Name#1/13 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[11], context[12] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_left( context[13], context[14], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[13], context[14] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.Name#1 as range 13
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: e.Name#1
    //15: s.MarkerLnNum#1
    //16: s.NameLnNum#1
    //29: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ST_AddIdent, "ST_AddIdent" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_TkIdentifier<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[29], context[30], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[26], context[32] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::link_brackets( context[27], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[24], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[6] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkIdentMarker s.LnNum#1/13 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[20], context[21], "Missed name after \"#\"", 21 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkVariable s.LnNum#1/13 s.Mode#1/14 e.Index#1/11 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    // closed e.Index#1 as range 11
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //11: e.Index#1
    //13: s.LnNum#1
    //14: s.Mode#1
    //32: e.Index#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], CheckUseVariable, "CheckUseVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], lambda_ParseResult_0, "lambda_ParseResult_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
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
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[32], context[33], context[11], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[36] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[29], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[27], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[5] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # Open s.LnNumADT#1/15 # TkOpenADT ) ( # TkName s.LnNumName#1/16 e.Name#1/13 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[11], context[12] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[11], context[12] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_left( context[13], context[14], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[13], context[14] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.Name#1 as range 13
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: e.Name#1
    //15: s.LnNumADT#1
    //16: s.LnNumName#1
    //32: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[32], context[33], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[30], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[24], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[25], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[6] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # Open s.LnNum#1/13 # TkOpenADT ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[11], context[12] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    //26: s.LnNum#1
    //34: t.SymTable#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[20], context[21], "Expected name after \"[\"", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[26], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[30], context[37] );
    res = refalrts::splice_elem( res, context[37] );
    refalrts::link_brackets( context[31], context[36] );
    res = refalrts::splice_elem( res, context[36] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[32] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[23], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[24], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # Open s.LnNum#1/13 s.OpenBracket#1/14 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    //14: s.OpenBracket#1
    //27: s.OpenBracket#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], lambda_ParseResult_1, "lambda_ParseResult_1" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[27], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], lambda_ParseResult_2, "lambda_ParseResult_2" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[32], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::link_brackets( context[19], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[20], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[13] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ( s.BracketsSign#1/15 s.OpenLnNum#1/16 s.CloseBracket#1/17 e.Scanned#1/13 ) ) ( e.InnerScanned#1/9 ) ( # Close s.LnNum#1/19 s.CloseBracket#1/18 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[11], context[12] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_right( context[13], context[14], context[7], context[8] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.InnerScanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[18], context[17], context[11], context[12] ) )
      continue;
    // closed e.Scanned#1 as range 13
    if( ! refalrts::svar_left( context[19], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.InnerScanned#1
    //13: e.Scanned#1
    //15: s.BracketsSign#1
    //16: s.OpenLnNum#1
    //17: s.CloseBracket#1
    //18: s.CloseBracket#1
    //19: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
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
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[26], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[27], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[24], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[22], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ) ( e.Scanned#1/9 ) ( # TkOpenBlock s.LnNum#1/13 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[11], context[12] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.Scanned#1
    //13: s.LnNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ParseResult_Block, "ParseResult_Block" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ParseBlock, "ParseBlock" ) )
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
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[22], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[7], context[8] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( e.MultiBracket#1/7 ( s.BracketsSign#1/13 s.OpenLnNum#1/14 s.CloseBracket#1/15 e.Scanned#1/11 ) ) ( e.InnerScanned#1/9 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_right( context[11], context[12], context[7], context[8] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.InnerScanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //7: e.MultiBracket#1
    //9: e.InnerScanned#1
    //11: e.Scanned#1
    //13: s.BracketsSign#1
    //14: s.OpenLnNum#1
    //15: s.CloseBracket#1
    //33: s.BracketsSign#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[31], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[32], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[29], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[24] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[21] );
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
    // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( ) ( e.Scanned#1/9 ) ( # Close s.LnNum#1/13 s.CloseBracket#1/14 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Functions#1 as range 2
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
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Scanned#1 as range 9
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //0: e.Tail#1
    //2: e.Functions#1
    //4: t.ErrorList#1
    //5: t.SymTable#1
    //6: t.Context#1
    //9: e.Scanned#1
    //13: s.LnNum#1
    //14: s.CloseBracket#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
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
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[30], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[28], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[23] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_stvar( res, context[4] );
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

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Functions#1/2 ) t.ErrorList#1/4 t.SymTable#1/5 t.Context#1/6 ( ) ( e.Result#1/9 ) e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 9
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Functions#1
  //4: t.ErrorList#1
  //5: t.SymTable#1
  //6: t.Context#1
  //9: e.Result#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CheckUseVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    {" not found", 10},
    {"Variable ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # ExistVariable s.Depth#2/8
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Index#1 as range 5
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: t.Context#2
    //8: s.Depth#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # InvalidMode s.Depth#2/8 s.OldMode#2/9
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Index#1 as range 5
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icsVarLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: t.Context#2
    //8: s.Depth#2
    //9: s.OldMode#2
    //13: s.OldMode#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icCopySTVar, 13, 9, 0},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # NotFound
    {refalrts::icIdentRight, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Index#1 as range 5
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: t.Context#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icString, 0, 1, 10},
    {refalrts::icChar, 0, '.', 12},
    {refalrts::icString, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
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
    // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # ExistVariable s.Depth#2/8
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    // closed e.Index#1 as range 5
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ExistVariable<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: t.Context#2
    //8: s.Depth#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[2] );
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
    // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # InvalidMode s.Depth#2/8 s.OldMode#2/9
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    // closed e.Index#1 as range 5
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_InvalidMode<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: t.ErrorList#1
    //3: s.LnNum#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: t.Context#2
    //8: s.Depth#2
    //9: s.OldMode#2
    //13: s.OldMode#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], InvalidModeVariableError, "InvalidModeVariableError" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[13], context[9]))
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_stvar( res, context[7] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
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
  // t.ErrorList#1/2 s.LnNum#1/3 s.Mode#1/4 ( e.Index#1/5 ) t.Context#2/7 # NotFound
  if( ! refalrts::ident_right(  & ident_NotFound<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5
  if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: t.ErrorList#1
  //3: s.LnNum#1
  //4: s.Mode#1
  //5: e.Index#1
  //7: t.Context#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "Variable ", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], " not found", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[7] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CheckUseVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_CheckUseVariable_0, "lambda_CheckUseVariable_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Cntx_CheckVariable, "Cntx_CheckVariable" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 t.Context#1/3 s.LnNum#1/4 s.Mode#1/5 e.Index#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Index#1 as range 0
    //0: e.Index#1
    //2: t.ErrorList#1
    //3: t.Context#1
    //4: s.LnNum#1
    //5: s.Mode#1
    //14: s.Mode#1
    //16: e.Index#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icCopySTVar, 14, 5, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icCopyEVar, 16, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 3},
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
  // t.ErrorList#1/2 t.Context#1/3 s.LnNum#1/4 s.Mode#1/5 e.Index#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 0
  //0: e.Index#1
  //2: t.ErrorList#1
  //3: t.Context#1
  //4: s.LnNum#1
  //5: s.Mode#1
  //14: s.Mode#1
  //16: e.Index#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Cntx_CheckVariable, "Cntx_CheckVariable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], lambda_CheckUseVariable_0, "lambda_CheckUseVariable_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[14], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[16], context[17], context[0], context[1]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[15], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_Block_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseResult, "ParseResult" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_LambdaName<int>::name,
    & ident_TkName<int>::name,
    & ident_CreateClosure<int>::name,
    & ident_CallBrackets<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.NextNum#1/4 ( e.Functions#1/5 ) t.ErrorList#1/7 t.SymTable#1/8 t.Context#1/9 ( e.MultiBracket#1/10 ) ( e.Scanned#1/12 ) ( e.Tail#1/14 ) s.FunctionNumber#2/16 ( e.RealContext#2/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    // closed e.RealContext#2 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Functions#1 as range 5
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 12, 0},
    {refalrts::icBracketLeft, 0, 14, 0},
    // closed e.MultiBracket#1 as range 10
    // closed e.Scanned#1 as range 12
    // closed e.Tail#1 as range 14
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.RealContext#2
    //4: s.NextNum#1
    //5: e.Functions#1
    //7: t.ErrorList#1
    //8: t.SymTable#1
    //9: t.Context#1
    //10: e.MultiBracket#1
    //12: e.Scanned#1
    //14: e.Tail#1
    //16: s.FunctionNumber#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 3, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 1, 27},
    {refalrts::icIdent, 0, 2, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icIdent, 0, 1, 31},
    {refalrts::icIdent, 0, 0, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 23, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 24, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 30, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
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
  // s.NextNum#1/4 ( e.Functions#1/5 ) t.ErrorList#1/7 t.SymTable#1/8 t.Context#1/9 ( e.MultiBracket#1/10 ) ( e.Scanned#1/12 ) ( e.Tail#1/14 ) s.FunctionNumber#2/16 ( e.RealContext#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.RealContext#2 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 5
  if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  if( ! refalrts::brackets_left( context[14], context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MultiBracket#1 as range 10
  // closed e.Scanned#1 as range 12
  // closed e.Tail#1 as range 14
  if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.RealContext#2
  //4: s.NextNum#1
  //5: e.Functions#1
  //7: t.ErrorList#1
  //8: t.SymTable#1
  //9: t.Context#1
  //10: e.MultiBracket#1
  //12: e.Scanned#1
  //14: e.Tail#1
  //16: s.FunctionNumber#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ParseResult, "ParseResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[25], & ident_CallBrackets<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], & ident_TkName<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[28], & ident_CreateClosure<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[31], & ident_TkName<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[32], & ident_LambdaName<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[17] );
  res = refalrts::splice_elem( res, context[36] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::link_brackets( context[23], context[35] );
  res = refalrts::splice_elem( res, context[35] );
  refalrts::link_brackets( context[24], context[34] );
  res = refalrts::splice_elem( res, context[34] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[30], context[33] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_elem( res, context[30] );
  refalrts::link_brackets( context[26], context[29] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[21], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_stvar( res, context[7] );
  refalrts::link_brackets( context[19], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseResult_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { CreateContext, "CreateContext" },
    { Dec, "Dec" },
    { Fetch, "Fetch" },
    { ParseResult, "ParseResult" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_LambdaName<int>::name,
    & ident_TkName<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +62, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.MultiBracket#1/2 ) ( e.Scanned#1/4 ) ( s.NextNum#1/8 e.Functions#1/6 ) t.ErrorList#1/9 t.SymTable#1/10 ( t.Context#1/13 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.MultiBracket#1 as range 2
    // closed e.Scanned#1 as range 4
    {refalrts::icsVarLeft, 0, 8, 6},
    // closed e.Functions#1 as range 6
    {refalrts::ictVarLeft, 0, 9, 0},
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 13, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //0: e.Tail#1
    //2: e.MultiBracket#1
    //4: e.Scanned#1
    //6: e.Functions#1
    //8: s.NextNum#1
    //9: t.ErrorList#1
    //10: t.SymTable#1
    //13: t.Context#1
    //26: s.NextNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 5, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 1, 22},
    {refalrts::icIdent, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 3, 25},
    {refalrts::icCopySTVar, 26, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 20, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 21, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.MultiBracket#1/2 ) ( e.Scanned#1/4 ) ( s.NextNum#1/8 e.Functions#1/6 ) t.ErrorList#1/9 t.SymTable#1/10 ( t.Context#1/13 e.FreeContext#1/11 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.MultiBracket#1 as range 2
    // closed e.Scanned#1 as range 4
    {refalrts::icsVarLeft, 0, 8, 6},
    // closed e.Functions#1 as range 6
    {refalrts::ictVarLeft, 0, 9, 0},
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 11, 0},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 13, 11},
    // closed e.FreeContext#1 as range 11
    //0: e.Tail#1
    //2: e.MultiBracket#1
    //4: e.Scanned#1
    //6: e.Functions#1
    //8: s.NextNum#1
    //9: t.ErrorList#1
    //10: t.SymTable#1
    //11: e.FreeContext#1
    //13: t.Context#1
    //27: s.NextNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 4, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 3, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 2, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 1, 25},
    {refalrts::icFunc, 0, 0, 26},
    {refalrts::icCopySTVar, 27, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icLinkBrackets, 34, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 19, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
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
    // ( e.MultiBracket#1/2 ) ( e.Scanned#1/4 ) ( s.NextNum#1/8 e.Functions#1/6 ) t.ErrorList#1/9 t.SymTable#1/10 ( t.Context#1/13 ) e.Tail#1/0
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
    // closed e.MultiBracket#1 as range 2
    // closed e.Scanned#1 as range 4
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Functions#1 as range 6
    if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //0: e.Tail#1
    //2: e.MultiBracket#1
    //4: e.Scanned#1
    //6: e.Functions#1
    //8: s.NextNum#1
    //9: t.ErrorList#1
    //10: t.SymTable#1
    //13: t.Context#1
    //26: s.NextNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_LambdaName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[26], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[20], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[21], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[24] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_stvar( res, context[9] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_stvar( res, context[8] );
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
  // ( e.MultiBracket#1/2 ) ( e.Scanned#1/4 ) ( s.NextNum#1/8 e.Functions#1/6 ) t.ErrorList#1/9 t.SymTable#1/10 ( t.Context#1/13 e.FreeContext#1/11 ) e.Tail#1/0
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
  // closed e.MultiBracket#1 as range 2
  // closed e.Scanned#1 as range 4
  if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 6
  if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  if( ! refalrts::brackets_left( context[11], context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  if( ! refalrts::tvar_left( context[13], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FreeContext#1 as range 11
  //0: e.Tail#1
  //2: e.MultiBracket#1
  //4: e.Scanned#1
  //6: e.Functions#1
  //8: s.NextNum#1
  //9: t.ErrorList#1
  //10: t.SymTable#1
  //11: e.FreeContext#1
  //13: t.Context#1
  //27: s.NextNum#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], Dec, "Dec" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], CreateContext, "CreateContext" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[27], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
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
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[37] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[24] );
  res = refalrts::splice_elem( res, context[36] );
  refalrts::link_brackets( context[34], context[35] );
  res = refalrts::splice_elem( res, context[35] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[34] );
  refalrts::link_brackets( context[32], context[33] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[32] );
  refalrts::link_brackets( context[30], context[31] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_stvar( res, context[9] );
  refalrts::link_brackets( context[28], context[29] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_stvar( res, context[27] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::link_brackets( context[19], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[20] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
