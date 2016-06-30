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
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseProgram_0/4 t.ErrorList#2/5 t.SymTable#2/7 e.AST#2/2 >/1
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
}

refalrts::FnResult ParseProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseProgram/4 t.ErrorList#1/5 e.Tokens#1/2 >/1
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
}

static refalrts::FnResult PrepareBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrepareBracket/4 (/7 # TkOpenBracket/9 s.LnNum#1/10 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenBracket/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Open<int>::name );
    refalrts::reinit_ident( context[8], & ident_TkOpenBracket<int>::name );
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
    // </0 & PrepareBracket/4 (/7 # TkCloseBracket/9 s.LnNum#1/10 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseBracket/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Close<int>::name );
    refalrts::reinit_ident( context[8], & ident_TkCloseBracket<int>::name );
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
    // </0 & PrepareBracket/4 (/7 # TkOpenADT/9 s.LnNum#1/10 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenADT/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Open<int>::name );
    refalrts::reinit_ident( context[8], & ident_TkOpenADT<int>::name );
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
    // </0 & PrepareBracket/4 (/7 # TkCloseADT/9 s.LnNum#1/10 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseADT/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Close<int>::name );
    refalrts::reinit_ident( context[8], & ident_TkCloseADT<int>::name );
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
    // </0 & PrepareBracket/4 (/7 # TkOpenCall/9 s.LnNum#1/10 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenCall/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Open<int>::name );
    refalrts::reinit_ident( context[8], & ident_TkOpenCall<int>::name );
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
    // </0 & PrepareBracket/4 (/7 # TkCloseCall/9 s.LnNum#1/10 )/8 >/1
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
    //TRASH: {REMOVED TILE}  </0 & PrepareBracket/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseCall/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Close<int>::name );
    refalrts::reinit_ident( context[8], & ident_TkCloseCall<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrepareBracket/4 t.OtherToken#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

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
}

static refalrts::FnResult lambda_ParseElements_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseElements_0/4 (/7 s.ScopeClass#2/9 e.Name#2/5 )/8 >/1
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
}

static refalrts::FnResult lambda_ParseElements_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseElements_1/4 (/7 e.Name#2/5 )/8 >/1
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
}

static refalrts::FnResult lambda_ParseElements_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseElements_2/4 (/7 e.AST#1/5 )/8 (/11 e.NewASTItems#2/9 )/12 t.ErrorList#2/13 t.SymTable#2/15 e.Tail#2/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/11 {REMOVED TILE}  )/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements/4 } Tile{ AsIs: t.ErrorList#2/13 AsIs: t.SymTable#2/15 } Tile{ AsIs: (/7 } Tile{ AsIs: e.AST#1/5 } Tile{ AsIs: e.NewASTItems#2/9 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ParseElements, "ParseElements" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseElements_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseElements_3/4 (/7 e.AST#1/5 )/8 (/11 e.NewASTItems#2/9 )/12 t.ErrorList#2/13 t.SymTable#2/15 e.Tail#2/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/11 {REMOVED TILE}  )/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements/4 } Tile{ AsIs: t.ErrorList#2/13 AsIs: t.SymTable#2/15 } Tile{ AsIs: (/7 } Tile{ AsIs: e.AST#1/5 } Tile{ AsIs: e.NewASTItems#2/9 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ParseElements, "ParseElements" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElements/4 t.ErrorList#1/15 t.SymTable#1/17 (/12 e.AST#1/10 )/13 (/7 # TkEOF/9 s.LnNum#1/14 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkEOF<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.AST#1 as range 10
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/15 AsIs: t.SymTable#1/17 HalfReuse: </12 } & Map/19 & lambda_ParseElements_0/20 Tile{ AsIs: </0 Reuse: & Sort/4 } </21 & ST_AllFunctions/22 t.SymTable#1/17/23 Tile{ HalfReuse: >/8 AsIs: >/1 } Tile{ HalfReuse: >/13 AsIs: (/7 Reuse: # Separator/9 } )/25 </26 & Map/27 & lambda_ParseElements_1/28 </29 & Sort/30 </31 & ST_AllIdents/32 t.SymTable#1/17/33 >/35 >/36 >/37 Tile{ AsIs: e.AST#1/10 } Tile{ ]] }
    if( ! refalrts::alloc_name( context[19], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], lambda_ParseElements_0, "lambda_ParseElements_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ST_AllFunctions, "ST_AllFunctions" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
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
    if (! refalrts::copy_evar(context[33], context[34], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[12] );
    refalrts::update_name( context[4], Sort, "Sort" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_call( context[13] );
    refalrts::update_ident( context[9], & ident_Separator<int>::name );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[31] );
    refalrts::link_brackets( context[7], context[25] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[25], context[37] );
    res = refalrts::splice_evar( res, context[13], context[9] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[15], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/15 # TkDirective/17 s.LnNum#1/18 s.Directive#1/19 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
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
    context[17] = refalrts::ident_left(  & ident_TkDirective<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.AST#1 as range 9
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/18 s.Directive#1/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </17 } & Fetch/20 Tile{ AsIs: </0 Reuse: & ParseElement_SwDirective/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 HalfReuse: s.Directive1 #19/11 } Tile{ AsIs: e.Tail#1/2 } >/21 </22 & CreateClosure /23 Tile{ HalfReuse: & lambda_ParseElements_2/12 AsIs: (/15 } Tile{ AsIs: e.AST#1/9 } Tile{ AsIs: )/16 } >/24 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[20], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[17] );
    refalrts::update_name( context[4], ParseElement_SwDirective, "ParseElement_SwDirective" );
    refalrts::reinit_svar( context[11], context[19] );
    refalrts::reinit_name( context[12], lambda_ParseElements_2, "lambda_ParseElements_2" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/15 # TkName/17 s.LnNum#1/18 e.Name#1/13 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
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
    context[17] = refalrts::ident_left(  & ident_TkName<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.AST#1 as range 9
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    // closed e.Name#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </19 & Fetch/20 </21 & ParseFunction/22 # GN_Local/23 (/24 e.Name#1/13/25 )/27 Tile{ AsIs: </0 Reuse: & ST_AddDefined/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } Tile{ Reuse: # GN_Local/17 AsIs: s.LnNum#1/18 AsIs: e.Name#1/13 HalfReuse: >/16 AsIs: e.Tail#1/2 AsIs: >/1 } </28 & CreateClosure /29 & lambda_ParseElements_3/30 Tile{ AsIs: (/11 AsIs: e.AST#1/9 AsIs: )/12 HalfReuse: >/15 } >/31 Tile{ ]] }
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
    if (! refalrts::copy_evar(context[25], context[26], context[13], context[14]))
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
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_call( context[15] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 (/15 # TkSemicolon/17 s.LnNum#1/18 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
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
    context[17] = refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.AST#1 as range 9
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/15 # TkSemicolon/17 s.LnNum#1/18 )/16 {REMOVED TILE}  {REMOVED TILE} 
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseElements/4 t.ErrorList#1/5 t.SymTable#1/7 (/11 e.AST#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
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
  // closed e.AST#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseElements/4 } </15 & EL_AddUnexpected/16 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/13 } 'd'/17 'i'/18 'r'/19 'e'/20 'c'/21 't'/22 'i'/23 'v'/24 'e'/25 ' '/26 'o'/27 'r'/28 ' '/29 'n'/30 'a'/31 'm'/32 'e'/33 >/34 Tile{ AsIs: t.SymTable#1/7 AsIs: (/11 AsIs: e.AST#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  res = refalrts::splice_evar( res, context[17], context[34] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenFunctionsFromDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenFunctionsFromDirective/4 # EEnum/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_EEnum<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenFunctionsFromDirective/4 # Enum/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Enum<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenFunctionsFromDirective/4 # ESwap/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ESwap<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenFunctionsFromDirective/4 # Swap/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Swap<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenFunctionsFromDirective/4 # Extern/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Extern<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenFunctionsFromDirective/4 # Forward/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Forward<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenFunctionsFromDirective/4 # Ident/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Ident<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
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
}

static refalrts::FnResult AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AddExtern/4 t.ErrorList#1/5 t.SymTable#1/7 s.ScopeClass#1/9 s.LnNum#1/10 e.Name#1/2 >/1
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
}

static refalrts::FnResult DontAdd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DontAdd/4 t.ErrorList#1/5 t.SymTable#1/7 s.ScopeClass#1/9 s.LnNum#1/10 e.Name#1/2 >/1
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
}

static refalrts::FnResult ParseElement_SwDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElement_SwDirective/4 t.ErrorList#1/5 t.SymTable#1/7 # Entry/9 (/12 # TkName/14 s.LnNum#1/15 e.Name#1/10 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  & ident_Entry<int>::name, context[2], context[3] );
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
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    // closed e.Name#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </16 & ParseFunction/17 Tile{ Reuse: # GN_Entry/9 AsIs: (/12 } e.Name#1/10/18 )/20 Tile{ AsIs: </0 Reuse: & ST_AddDefined/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 } Tile{ Reuse: # GN_Entry/14 AsIs: s.LnNum#1/15 AsIs: e.Name#1/10 HalfReuse: >/13 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElement_SwDirective/4 t.ErrorList#1/5 t.SymTable#1/7 # Entry/9 t.Unexpected#1/10 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  & ident_Entry<int>::name, context[2], context[3] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 } )/12 Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/10 } 'f'/13 'u'/14 'n'/15 'c'/16 't'/17 'i'/18 'o'/19 'n'/20 ' '/21 'n'/22 'a'/23 'm'/24 'e'/25 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/7 } t.Unexpected#1/10/26 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_close_bracket( context[12] ) )
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
    if (! refalrts::copy_evar(context[26], context[27], context[10], context[11]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[9] );
    refalrts::update_name( context[4], EL_AddUnexpected, "EL_AddUnexpected" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[13], context[25] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseElement_SwDirective/4 t.ErrorList#1/5 t.SymTable#1/7 s.Directive#1/9 e.Tail#1/2 >/1
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
}

static refalrts::FnResult ParseNameList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseNameList/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/18 # TkName/20 s.LnNum#1/21 e.Name#1/16 )/19 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.AST#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  & ident_TkName<int>::name, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
      continue;
    // closed e.Name#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/21 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList_Tail/4 AsIs: (/7 AsIs: e.AST#1/5 HalfReuse: (/8 } Tile{ HalfReuse: s.ASTItem1 #13/20 } s.ScopeClass#1/15/22 Tile{ AsIs: e.Name#1/16 } )/23 )/24 </25 s.TableChangeFunc#1/14/26 Tile{ AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 } Tile{ AsIs: s.ScopeClass#1/15 HalfReuse: s.LnNum1 #21/18 } e.Name#1/16/27 >/29 Tile{ AsIs: s.ASTItem#1/13 AsIs: s.TableChangeFunc#1/14 } Tile{ HalfReuse: s.ScopeClass1 #15/19 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[22], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[26], context[14]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[27], context[28], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ParseNameList_Tail, "ParseNameList_Tail" );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_svar( context[20], context[13] );
    refalrts::reinit_svar( context[18], context[21] );
    refalrts::reinit_svar( context[19], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::link_brackets( context[8], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[15], context[18] );
    res = refalrts::splice_evar( res, context[9], context[12] );
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseNameList/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 t.Unexpected#1/16 e.Tail#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.AST#1 as range 5
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
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Unexpected#1/16 } 'f'/18 'u'/19 'n'/20 'c'/21 't'/22 'i'/23 'o'/24 'n'/25 ' '/26 'n'/27 'a'/28 'm'/29 'e'/30 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/11 } t.Unexpected#1/16/31 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_char( context[18], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'e' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[31], context[32], context[16], context[17]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddUnexpected, "EL_AddUnexpected" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[18], context[30] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ParseNameList_Tail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseNameList_Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/18 # TkComma/20 s.LnNum#1/21 )/19 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.AST#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  & ident_TkComma<int>::name, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/18 # TkComma/20 s.LnNum#1/21 )/19 {REMOVED TILE}  {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseNameList_Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/18 # TkSemicolon/20 s.LnNum#1/21 )/19 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.AST#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ParseNameList_Tail/4 {REMOVED TILE}  s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 (/18 # TkSemicolon/20 s.LnNum#1/21 )/19 {REMOVED TILE}  >/1 {REMOVED TILE} 
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseNameList_Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 t.Unexpected#1/16 e.Tail#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.AST#1 as range 5
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
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ASTItem#1/13 s.TableChangeFunc#1/14 s.ScopeClass#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & EL_AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Unexpected#1/16 } 'c'/18 'o'/19 'm'/20 'm'/21 'a'/22 ' '/23 'o'/24 'r'/25 ' '/26 's'/27 'e'/28 'm'/29 'i'/30 'c'/31 'o'/32 'l'/33 'o'/34 'n'/35 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/11 } t.Unexpected#1/16/36 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_char( context[18], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'n' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[36], context[37], context[16], context[17]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddUnexpected, "EL_AddUnexpected" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[18], context[35] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CreateLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CreateLambdaName/4 e.Name#1/2 s.Number#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'l'/0 HalfReuse: 'a'/4 } 'm'/6 'b'/7 'd'/8 'a'/9 '_'/10 Tile{ AsIs: e.Name#1/2 } '_'/11 </12 & StrFromInt/13 Tile{ AsIs: s.Number#1/5 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[6], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'l' );
  refalrts::reinit_char( context[4], 'a' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[5];
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseFunction_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseFunction_0/4 (/7 e.Name#1/5 )/8 (/11 s.Number#3/13 e.Sentences#3/9 )/12 >/1
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
}

static refalrts::FnResult lambda_ParseFunction_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseFunction_1/4 s.ScopeClass#1/13 (/11 e.Name#1/9 )/12 (/7 s.Number#3/14 e.Sentences#3/5 )/8 >/1
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
}

static refalrts::FnResult lambda_ParseFunction_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseFunction_2/4 (/7 e.Name#1/5 )/8 s.ScopeClass#1/9 (/12 s.NextNumber#2/14 e.FunctionBodies#2/10 t.MainBody#2/25 )/13 t.ErrorList#2/15 t.SymTable#2/17 (/21 t.Context#2/23 )/22 e.Tail#2/2 >/1
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
  //RESULT: Tile{ [[ } </27 Tile{ HalfReuse: & Cntx_Destroy/21 AsIs: t.Context#2/23 HalfReuse: >/22 } (/28 </29 & Map/30 </31 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ParseFunction_0/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: >/1 } Tile{ AsIs: e.FunctionBodies#2/10 } >/32 </33 & Fetch/34 Tile{ AsIs: t.MainBody#2/25 } </35 & CreateClosure /36 & lambda_ParseFunction_1/37 Tile{ AsIs: s.ScopeClass#1/9 AsIs: (/12 } e.Name#1/5/38 )/40 >/41 >/42 Tile{ AsIs: )/13 AsIs: t.ErrorList#2/15 AsIs: t.SymTable#2/17 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
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
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[1] );
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
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[28], context[31] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ParseFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.ErrorList#1/10 t.SymTable#1/12 (/16 # TkOpenBlock/18 s.LnNum#1/19 )/17 e.Tail#1/2 >/1
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
    // closed e.Name#1 as range 6
    context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </20 & ParseBlock/21 (/22 0/23 Tile{ AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.SymTable#1/12 HalfReuse: </16 HalfReuse: & Cntx_Create/18 } Tile{ HalfReuse: >/17 AsIs: e.Tail#1/2 AsIs: >/1 } </24 & CreateClosure /25 & lambda_ParseFunction_2/26 (/27 Tile{ AsIs: e.Name#1/6 } )/28 Tile{ AsIs: s.ScopeClass#1/5 HalfReuse: >/8 } >/29 Tile{ ]] }
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
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_name( context[18], Cntx_Create, "Cntx_Create" );
    refalrts::reinit_close_call( context[17] );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[22], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[5], context[8] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[9], context[18] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.ErrorList#1/10 t.SymTable#1/12 t.Unexpected#1/14 e.Tail#1/2 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.ScopeClass#1/5 {REMOVED TILE}  e.Name#1/6 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 } Tile{ HalfReuse: </8 } Tile{ HalfReuse: & EL_AddUnexpected/9 AsIs: t.ErrorList#1/10 } t.Unexpected#1/14/16 'o'/18 'p'/19 'e'/20 'n'/21 ' '/22 'b'/23 'r'/24 'a'/25 'c'/26 'e'/27 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#1/12 AsIs: t.Unexpected#1/14 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if (! refalrts::copy_evar(context[16], context[17], context[14], context[15]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[9], EL_AddUnexpected, "EL_AddUnexpected" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[16], context[27] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ResolveLambdaName_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/11 # TkName/13 # LambdaName/14 s.Number#2/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_TkName<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::ident_left(  & ident_LambdaName<int>::name, context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.MainName#1 as range 5
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Number#2/15 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/14 } Tile{ HalfReuse: # TkName/0 HalfReuse: </4 HalfReuse: & CreateLambdaName/7 AsIs: e.MainName#1/5 HalfReuse: s.Number2 #15/8 HalfReuse: >/11 HalfReuse: )/13 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_ident( context[0], & ident_TkName<int>::name );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], CreateLambdaName, "CreateLambdaName" );
    refalrts::reinit_svar( context[8], context[15] );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::link_brackets( context[14], context[13] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/11 # Brackets/13 e.SubResult#2/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.MainName#1 as range 5
    // closed e.SubResult#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Brackets/13 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.SubResult#2/9 } Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ResolveLambdaName, "ResolveLambdaName" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/11 # ADT_Brackets/13 (/16 e.Name#2/14 )/17 e.SubResult#2/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
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
    // closed e.MainName#1 as range 5
    // closed e.Name#2 as range 14
    // closed e.SubResult#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # ADT_Brackets/13 AsIs: (/16 AsIs: e.Name#2/14 AsIs: )/17 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.SubResult#2/9 } Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ResolveLambdaName, "ResolveLambdaName" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 (/11 # CallBrackets/13 e.SubResult#2/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.MainName#1 as range 5
    // closed e.SubResult#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # CallBrackets/13 } Tile{ AsIs: </0 Reuse: & ResolveLambdaName/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.SubResult#2/9 } Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ResolveLambdaName, "ResolveLambdaName" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ResolveLambdaName_0/4 (/7 e.MainName#1/5 )/8 t.OtherTerm#2/9 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

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
}

static refalrts::FnResult ResolveLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ResolveLambdaName/4 (/7 e.MainName#1/5 )/8 e.Result#1/2 >/1
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
}

static refalrts::FnResult lambda_GenFunctionBody_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenFunctionBody_0/4 (/7 e.MainName#1/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
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
}

static refalrts::FnResult GenFunctionBody(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenFunctionBody/4 s.ScopeClass#1/5 (/8 e.MainName#1/6 )/9 (/12 e.Name#1/10 )/13 e.Sentences#1/2 >/1
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
}

static refalrts::FnResult ParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseBlock/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 e.Tokens#1/2 >/1
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
}

static refalrts::FnResult lambda_DoParseBlock_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_DoParseBlock_0/4 s.Number#1/5 (/8 e.Functions#1/6 )/9 (/12 e.Sentences#1/10 )/13 t.ErrorList#1/14 t.SymTable#1/16 t.Context#2/18 e.FreeContext#2/2 >/1
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
}

static refalrts::FnResult DoParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 64 elems
  refalrts::Iter context[64];
  refalrts::zeros( context, 64 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoParseBlock/4 (/7 s.Number#1/9 e.Functions#1/5 )/8 t.ErrorList#1/10 t.SymTable#1/12 t.Context#1/14 (/18 e.Sentences#1/16 )/19 (/22 # TkCloseBlock/24 s.LnNumber#1/25 )/23 e.Tail#1/2 >/1
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
    // closed e.Functions#1 as range 5
    context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[20], context[21] );
    if( ! context[24] )
      continue;
    // closed e.Sentences#1 as range 16
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[25], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumber#1/25 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & Cntx_PopScope/24 } Tile{ AsIs: t.Context#1/14 HalfReuse: >/18 } Tile{ HalfReuse: </23 } & CreateClosure /26 & lambda_DoParseBlock_0/27 Tile{ AsIs: s.Number#1/9 } (/28 Tile{ AsIs: e.Functions#1/5 } Tile{ AsIs: )/19 AsIs: (/22 } Tile{ AsIs: e.Sentences#1/16 } Tile{ AsIs: )/8 AsIs: t.ErrorList#1/10 AsIs: t.SymTable#1/12 } Tile{ AsIs: >/1 } >/29 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_name( context[26], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], lambda_DoParseBlock_0, "lambda_DoParseBlock_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[24], Cntx_PopScope, "Cntx_PopScope" );
    refalrts::reinit_close_call( context[18] );
    refalrts::reinit_open_call( context[23] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::link_brackets( context[28], context[19] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoParseBlock/4 (/7 s.Number#1/9 e.Functions#1/5 )/8 t.ErrorList#1/10 t.SymTable#1/12 t.Context#1/14 (/18 e.Sentences#1/16 )/19 (/22 # TkEOF/24 s.LnNum#1/25 )/23 e.Tail#1/2 >/1
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
    // closed e.Functions#1 as range 5
    context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  & ident_TkEOF<int>::name, context[20], context[21] );
    if( ! context[24] )
      continue;
    // closed e.Sentences#1 as range 16
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[25], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Inc/7 AsIs: s.Number#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Functions#1/5 } (/26 s.Number#1/9/27 Tile{ AsIs: e.Sentences#1/16 } )/28 )/29 </30 Tile{ HalfReuse: & EL_AddErrorAt/8 AsIs: t.ErrorList#1/10 } s.LnNum#1/25/31 'U'/32 'n'/33 'e'/34 'x'/35 'p'/36 'e'/37 'c'/38 't'/39 'e'/40 'd'/41 ' '/42 'E'/43 'O'/44 'F'/45 ','/46 ' '/47 'e'/48 'x'/49 'p'/50 'e'/51 'c'/52 't'/53 'e'/54 'd'/55 ' '/56 '\"'/57 '}'/58 '\"'/59 >/60 Tile{ AsIs: t.SymTable#1/12 } (/61 </62 & Cntx_PopScope/63 Tile{ AsIs: t.Context#1/14 HalfReuse: >/18 } Tile{ AsIs: )/19 AsIs: (/22 AsIs: # TkEOF/24 AsIs: s.LnNum#1/25 AsIs: )/23 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[27], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'O' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'F' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[60] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[61] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[62] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[63], Cntx_PopScope, "Cntx_PopScope" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], Inc, "Inc" );
    refalrts::reinit_name( context[8], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_close_call( context[18] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[61], context[19] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[62] );
    refalrts::push_stack( context[60] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[0], context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    res = refalrts::splice_evar( res, context[61], context[63] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[31], context[60] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoParseBlock/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.Sentences#1/15 )/18 e.Tokens#1/2 >/1
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
}

static refalrts::FnResult AddContextToSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AddContextToSentence/4 e.Context#1/2 (/7 (/11 e.Pattern#1/9 )/12 (/15 e.Result#1/13 )/16 )/8 >/1
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
}

static refalrts::FnResult lambda_CreateContext_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_CreateContext_0/4 (/7 'e'/9 e.Index#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'e', context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CreateContext_0/4 (/7 s.Mode#2/9 e.Index#2/5 )/8 >/1
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
}

static refalrts::FnResult CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CreateContext/4 e.Context#1/2 >/1
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
}

static refalrts::FnResult lambda_ParseSentence_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseSentence_0/4 t.ErrorList#2/5 t.SymTable#2/7 t.Context#2/9 (/13 e.Pattern#2/11 )/14 (/17 # TkReplace/19 s.LnNum#2/20 )/18 e.Tokens#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = refalrts::ident_left(  & ident_TkReplace<int>::name, context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Pattern#2 as range 11
    // closed e.Tokens#2 as range 2
    if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseSentence_0/4 t.ErrorList#2/5 t.SymTable#2/7 t.Context#2/9 (/13 e.Pattern#2/11 )/14 (/17 s.NextResultTerm#2/19 s.LnNum#2/20 e.Info#2/15 )/18 e.Tokens#2/2 >/1
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
  // closed e.Pattern#2 as range 11
  // closed e.Tokens#2 as range 2
  if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.NextResultTerm#2/19 {REMOVED TILE}  e.Info#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: s.LnNum#2/20 } Tile{ HalfReuse: 'I'/17 } Tile{ HalfReuse: 'n'/18 } 'c'/21 'o'/22 'r'/23 'r'/24 'e'/25 'c'/26 't'/27 ' '/28 'p'/29 'a'/30 't'/31 't'/32 'e'/33 'r'/34 'n'/35 ' '/36 't'/37 'e'/38 'r'/39 'm'/40 'i'/41 'n'/42 'a'/43 't'/44 'i'/45 'o'/46 'n'/47 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#2/7 AsIs: t.Context#2/9 AsIs: (/13 AsIs: e.Pattern#2/11 AsIs: )/14 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_char( context[21], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 'n' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
  refalrts::reinit_char( context[17], 'I' );
  refalrts::reinit_char( context[18], 'n' );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[14] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[21], context[47] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseSentence_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseSentence_1/4 (/7 e.Functions#1/5 )/8 t.ErrorList#2/9 t.SymTable#2/11 t.Context#2/13 (/17 e.Pattern#2/15 )/18 e.Tokens#2/2 >/1
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
}

static refalrts::FnResult lambda_ParseSentence_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseSentence_2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Functions#2/13 )/16 t.ErrorList#2/17 t.SymTable#2/19 t.Context#2/21 (/25 e.Result#2/23 )/26 (/29 # TkSemicolon/31 s.LnNum#2/32 )/30 e.Tokens#2/2 >/1
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
    // closed e.Sentences#1 as range 5
    // closed e.Pattern#2 as range 9
    // closed e.Functions#2 as range 13
    context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[2], context[3] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[27], context[28] );
    if( ! context[31] )
      continue;
    // closed e.Result#2 as range 23
    // closed e.Tokens#2 as range 2
    if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#2/32 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/13 } Tile{ AsIs: )/16 AsIs: t.ErrorList#2/17 AsIs: t.SymTable#2/19 } Tile{ HalfReuse: </25 } Tile{ HalfReuse: & Cntx_ResetAfterSentence/30 } Tile{ AsIs: t.Context#2/21 } Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: e.Sentences#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Result#2/23 } Tile{ AsIs: )/26 HalfReuse: )/29 HalfReuse: )/31 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_name( context[30], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" );
    refalrts::reinit_close_call( context[4] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[29] );
    refalrts::reinit_close_bracket( context[31] );
    refalrts::link_brackets( context[7], context[31] );
    refalrts::link_brackets( context[8], context[29] );
    refalrts::link_brackets( context[15], context[26] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[26], context[31] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseSentence_2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Functions#2/13 )/16 t.ErrorList#2/17 t.SymTable#2/19 t.Context#2/21 (/25 e.Result#2/23 )/26 (/29 # TkCloseBlock/31 s.LnNum#2/32 )/30 e.Tokens#2/2 >/1
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
    // closed e.Sentences#1 as range 5
    // closed e.Pattern#2 as range 9
    // closed e.Functions#2 as range 13
    context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[2], context[3] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[27], context[28] );
    if( ! context[31] )
      continue;
    // closed e.Result#2 as range 23
    // closed e.Tokens#2 as range 2
    if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/13 } Tile{ HalfReuse: )/25 } </33 Tile{ HalfReuse: & EL_AddErrorAt/16 AsIs: t.ErrorList#2/17 } s.LnNum#2/32/34 'M'/35 'i'/36 's'/37 's'/38 'e'/39 'd'/40 ' '/41 's'/42 'e'/43 'm'/44 'i'/45 'c'/46 'o'/47 'l'/48 'o'/49 'n'/50 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#2/19 } </51 & Cntx_ResetAfterSentence/52 Tile{ AsIs: t.Context#2/21 } Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: e.Sentences#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Result#2/23 } )/53 )/54 Tile{ AsIs: )/26 AsIs: (/29 AsIs: # TkCloseBlock/31 AsIs: s.LnNum#2/32 AsIs: )/30 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[32]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[51] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[52], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[53] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[54] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::reinit_name( context[16], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_close_call( context[4] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[7], context[26] );
    refalrts::link_brackets( context[8], context[54] );
    refalrts::link_brackets( context[15], context[53] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[51] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[33] );
    refalrts::link_brackets( context[0], context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[26], context[30] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[34], context[50] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseSentence_2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Functions#2/13 )/16 t.ErrorList#2/17 t.SymTable#2/19 t.Context#2/21 (/25 e.Result#2/23 )/26 t.Unexpected#2/27 e.Tokens#2/2 >/1
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
  // closed e.Sentences#1 as range 5
  // closed e.Pattern#2 as range 9
  // closed e.Functions#2 as range 13
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
  // closed e.Result#2 as range 23
  context[28] = refalrts::tvar_left( context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/13 } Tile{ HalfReuse: )/25 } </29 Tile{ HalfReuse: & EL_AddUnexpected/16 AsIs: t.ErrorList#2/17 } t.Unexpected#2/27/30 's'/32 'e'/33 'm'/34 'i'/35 'c'/36 'o'/37 'l'/38 'o'/39 'n'/40 Tile{ AsIs: >/1 } Tile{ AsIs: t.SymTable#2/19 } </41 & Cntx_ResetAfterSentence/42 Tile{ AsIs: t.Context#2/21 } Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: e.Sentences#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Result#2/23 } )/43 )/44 Tile{ AsIs: )/26 AsIs: t.Unexpected#2/27 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[30], context[31], context[27], context[28]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[42], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[44] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[25] );
  refalrts::reinit_name( context[16], EL_AddUnexpected, "EL_AddUnexpected" );
  refalrts::reinit_close_call( context[4] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::link_brackets( context[7], context[26] );
  refalrts::link_brackets( context[8], context[44] );
  refalrts::link_brackets( context[15], context[43] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[41] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[29] );
  refalrts::link_brackets( context[0], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[43], context[44] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[30], context[40] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseSentence/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.Sentences#1/15 )/18 e.Tokens#1/2 >/1
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
}

static refalrts::FnResult lambda_ParsePattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParsePattern_0/4 t.SymTable#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/17 e.Index#1/15 )/18 (/21 e.Tail#1/19 )/22 t.ErrorList#2/23 t.Context#2/25 s.Mode#2/27 s.Depth#2/28 >/1
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
}

static refalrts::FnResult lambda_ParsePattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParsePattern_1/4 t.SymTable#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/17 e.Index#1/15 )/18 (/21 e.Tail#1/19 )/22 t.ErrorList#2/23 t.Context#2/25 s.Mode#2/27 s.Depth#2/28 >/1
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
}

static refalrts::FnResult ParsePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 75 elems
  refalrts::Iter context[75];
  refalrts::zeros( context, 75 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkChar/23 s.LnNum#1/24 s.Char#1/25 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkChar<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.LnNum#1/24 s.Char#1/25 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkChar/21 HalfReuse: s.Char1 #25/23 } )/26 Tile{ AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkNumber/23 s.LnNum#1/24 s.Number#1/25 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.LnNum#1/24 s.Number#1/25 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkNumber/21 HalfReuse: s.Number1 #25/23 } )/26 Tile{ AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkName/23 s.LnNum#1/24 e.Name#1/19 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkName<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    // closed e.Name#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: </23 } & ST_AddFunctionCall/25 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: s.LnNum#1/24 } Tile{ AsIs: e.Name#1/19 } >/26 Tile{ AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkName/21 } e.Name#1/19/27 )/29 Tile{ AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[25], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[27], context[28], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_ident( context[21], & ident_TkName<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[22] );
    refalrts::link_brackets( context[18], context[29] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[9], context[21] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkIdentMarker/23 s.LnNumMarker#1/29 )/22 (/26 # TkName/28 s.LnNumName#1/30 e.Name#1/24 )/27 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = refalrts::ident_left(  & ident_TkName<int>::name, context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[29], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[24], context[25] ) )
      continue;
    // closed e.Name#1 as range 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumMarker#1/29 {REMOVED TILE}  {REMOVED TILE}  s.LnNumName#1/30 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: </26 HalfReuse: & ST_AddIdent/28 } Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: e.Name#1/24 } Tile{ HalfReuse: >/23 } Tile{ AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 HalfReuse: (/18 HalfReuse: # TkIdentifier/21 } e.Name#1/24/31 Tile{ AsIs: )/22 } Tile{ AsIs: )/27 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[9], context[21] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBrackets#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkIdentMarker/23 s.LnNum#1/24 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBrackets#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } Tile{ HalfReuse: </21 HalfReuse: & EL_AddErrorAt/23 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/24 HalfReuse: 'M'/22 } 'i'/25 's'/26 's'/27 'e'/28 'd'/29 ' '/30 'n'/31 'a'/32 'm'/33 'e'/34 ' '/35 'a'/36 'f'/37 't'/38 'e'/39 'r'/40 ' '/41 '\''/42 '#'/43 '\''/44 >/45 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBrackets#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[25], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'd' ) )
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
    if( ! refalrts::alloc_char( context[35], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[45] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[21] );
    refalrts::reinit_name( context[23], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_char( context[22], 'M' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    res = refalrts::splice_evar( res, context[25], context[45] );
    res = refalrts::splice_evar( res, context[24], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkVariable/23 s.LnNumVar#1/29 s.Mode#1/30 e.Index#1/19 )/22 (/26 # TkRedefinition/28 s.LnNumRedef#1/31 )/27 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 2
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </32 & CheckAddVariable/33 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Context#1/9 } Tile{ HalfReuse: & Cntx_AddNewVariable/23 AsIs: s.LnNumVar#1/29 AsIs: s.Mode#1/30 AsIs: e.Index#1/19 HalfReuse: >/22 HalfReuse: </26 HalfReuse: & CreateClosure /28 } & lambda_ParsePattern_0/34 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 AsIs: (/21 } e.Index#1/19/35 Tile{ AsIs: )/27 } (/37 Tile{ AsIs: e.Tail#1/2 } )/38 >/39 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], CheckAddVariable, "CheckAddVariable" ) )
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
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_name( context[23], Cntx_AddNewVariable, "Cntx_AddNewVariable" );
    refalrts::reinit_close_call( context[22] );
    refalrts::reinit_open_call( context[26] );
    refalrts::reinit_name( context[28], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[37], context[38] );
    refalrts::link_brackets( context[21], context[27] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[23], context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkVariable/23 s.LnNum#1/24 s.Mode#1/25 e.Index#1/19 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    // closed e.Index#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </26 & CheckAddVariable/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Context#1/9 } Tile{ HalfReuse: & Cntx_AddVariable/23 AsIs: s.LnNum#1/24 AsIs: s.Mode#1/25 AsIs: e.Index#1/19 HalfReuse: >/22 } </28 & CreateClosure /29 & lambda_ParsePattern_1/30 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 AsIs: (/21 } e.Index#1/19/31 )/33 (/34 Tile{ AsIs: e.Tail#1/2 } )/35 >/36 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], CheckAddVariable, "CheckAddVariable" ) )
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
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_name( context[23], Cntx_AddVariable, "Cntx_AddVariable" );
    refalrts::reinit_close_call( context[22] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[34], context[35] );
    refalrts::link_brackets( context[21], context[33] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[23], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # TkRedefinition/23 s.LnNum#1/24 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } Tile{ HalfReuse: </21 HalfReuse: & EL_AddErrorAt/23 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/24 HalfReuse: 'N'/22 } 'a'/25 'k'/26 'e'/27 'd'/28 ' '/29 'r'/30 'e'/31 'd'/32 'e'/33 'f'/34 'i'/35 'n'/36 'i'/37 't'/38 'i'/39 'o'/40 'n'/41 ' '/42 's'/43 'i'/44 'g'/45 'n'/46 >/47 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[25], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[47] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[21] );
    refalrts::reinit_name( context[23], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_char( context[22], 'N' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[47] );
    refalrts::push_stack( context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    res = refalrts::splice_evar( res, context[25], context[47] );
    res = refalrts::splice_evar( res, context[24], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNum#1/25 # TkOpenBracket/24 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
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
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # Brackets/17 } Tile{ AsIs: s.LnNum#1/25 } Tile{ Reuse: # TkCloseBracket/23 } Tile{ AsIs: e.Scanned#1/15 } Tile{ AsIs: )/18 HalfReuse: )/21 } Tile{ HalfReuse: (/24 AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNumBracket#1/30 # TkOpenADT/24 )/22 (/27 # TkName/29 s.LnNumName#1/31 e.Name#1/25 )/28 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
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
    context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  & ident_TkName<int>::name, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    // closed e.Name#1 as range 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumBracket#1/30 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 } </32 & ST_AddFunctionCall/33 Tile{ AsIs: t.SymTable#1/7 } Tile{ AsIs: s.LnNumName#1/31 } Tile{ AsIs: e.Name#1/25 } >/34 Tile{ AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # ADT_Brackets/17 } Tile{ HalfReuse: s.LnNumBracket1 #30/21 Reuse: # TkCloseADT/23 } Tile{ AsIs: e.Scanned#1/15 } Tile{ HalfReuse: )/24 AsIs: )/22 AsIs: (/27 HalfReuse: (/29 } e.Name#1/25/35 Tile{ AsIs: )/18 } Tile{ AsIs: )/28 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNum#1/25 # TkOpenADT/24 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
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
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/25 } 'E'/28 'x'/29 'p'/30 'e'/31 'c'/32 't'/33 'e'/34 'd'/35 ' '/36 'n'/37 'a'/38 'm'/39 'e'/40 ' '/41 'a'/42 'f'/43 't'/44 'e'/45 'r'/46 ' '/47 '\"'/48 '['/49 '\"'/50 >/51 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # ADT_Brackets/17 } s.LnNum#1/25/52 # TkCloseADT/53 Tile{ AsIs: e.Scanned#1/15 } )/54 Tile{ AsIs: )/18 AsIs: (/21 HalfReuse: (/23 } </55 & ST_GetAnyName/56 t.SymTable#1/7/57 >/59 Tile{ HalfReuse: )/24 AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[51] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[52], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[53], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[54] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[55] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[56], ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[57], context[58], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[59] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_ident( context[17], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_close_bracket( context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::push_stack( context[59] );
    refalrts::push_stack( context[55] );
    refalrts::link_brackets( context[13], context[18] );
    refalrts::link_brackets( context[14], context[54] );
    refalrts::push_stack( context[51] );
    refalrts::push_stack( context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[55], context[59] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    res = refalrts::splice_evar( res, context[54], context[54] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[52], context[53] );
    res = refalrts::splice_evar( res, context[7], context[17] );
    res = refalrts::splice_evar( res, context[28], context[51] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Open/23 s.LnNum#1/25 # TkOpenCall/24 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
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
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/25 } 'U'/28 'n'/29 'e'/30 'x'/31 'p'/32 'e'/33 'c'/34 't'/35 'e'/36 'd'/37 ' '/38 'c'/39 'a'/40 'l'/41 'l'/42 ' '/43 'b'/44 'r'/45 'a'/46 'c'/47 'k'/48 'e'/49 't'/50 ' '/51 'i'/52 'n'/53 ' '/54 'p'/55 'a'/56 't'/57 't'/58 'e'/59 'r'/60 'n'/61 ' '/62 'e'/63 'x'/64 'p'/65 'r'/66 'e'/67 's'/68 's'/69 'i'/70 'o'/71 'n'/72 >/73 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: (/14 HalfReuse: # Brackets/17 } s.LnNum#1/25/74 Tile{ Reuse: # TkCloseCall/23 } Tile{ AsIs: e.Scanned#1/15 } Tile{ AsIs: )/18 HalfReuse: )/21 } Tile{ HalfReuse: (/24 AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[73] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[74], context[25]))
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
    refalrts::push_stack( context[73] );
    refalrts::push_stack( context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[18], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[74], context[74] );
    res = refalrts::splice_evar( res, context[7], context[17] );
    res = refalrts::splice_evar( res, context[28], context[73] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 (/26 s.BracketsSign#1/28 s.InnerLnNum#1/29 s.CloseBracket#1/30 e.Scanned#1/24 )/27 )/14 (/17 e.InnerScanned#1/15 )/18 (/21 # Close/23 s.ClosedLnNum#1/32 s.CloseBracket#1/31 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Close<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_right( context[24], context[25], context[11], context[12] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.MultiBracket#1 as range 11
    // closed e.InnerScanned#1 as range 15
    // closed e.Tail#1 as range 2
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
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: )/26 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Scanned#1/24 } Tile{ HalfReuse: (/14 HalfReuse: s.BracketsSign1 #28/17 AsIs: e.InnerScanned#1/15 AsIs: )/18 } Tile{ AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 (/26 s.BracketsSign#1/28 s.InnerLnNum#1/29 s.CloseBracket#1/30 e.Scanned#1/24 )/27 )/14 (/17 e.InnerScanned#1/15 )/18 (/21 # Close/23 s.LnNum#1/31 s.OtherCloseBracket#1/32 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Close<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_right( context[24], context[25], context[11], context[12] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.MultiBracket#1 as range 11
    // closed e.InnerScanned#1 as range 15
    // closed e.Tail#1 as range 2
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
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.CloseBracket#1/30 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </33 & EL_AddErrorAt/34 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.InnerLnNum#1/29 } Tile{ HalfReuse: 'U'/27 HalfReuse: 'n'/14 HalfReuse: 'b'/17 } 'a'/35 'l'/36 'a'/37 'n'/38 'c'/39 'e'/40 'd'/41 ' '/42 'b'/43 'r'/44 'a'/45 'c'/46 'k'/47 'e'/48 't'/49 ' '/50 '\"'/51 </52 & StrFromBracket/53 Tile{ AsIs: s.BracketsSign#1/28 } >/54 '\"'/55 >/56 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: )/26 } (/57 Tile{ AsIs: e.Scanned#1/24 } (/58 s.BracketsSign#1/28/59 Tile{ AsIs: e.InnerScanned#1/15 } )/60 Tile{ AsIs: )/18 AsIs: (/21 AsIs: # Close/23 AsIs: s.LnNum#1/31 AsIs: s.OtherCloseBracket#1/32 AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[52] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[53], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[54] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[56] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[57] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[58] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[59], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[60] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[27], 'U' );
    refalrts::reinit_char( context[14], 'n' );
    refalrts::reinit_char( context[17], 'b' );
    refalrts::reinit_close_bracket( context[26] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[57], context[18] );
    refalrts::link_brackets( context[58], context[60] );
    refalrts::link_brackets( context[13], context[26] );
    refalrts::push_stack( context[56] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[54] );
    refalrts::push_stack( context[52] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[60], context[60] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[58], context[59] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[57], context[57] );
    res = refalrts::splice_evar( res, context[7], context[26] );
    res = refalrts::splice_evar( res, context[54], context[56] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[35], context[53] );
    res = refalrts::splice_evar( res, context[27], context[17] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 )/14 (/17 e.Scanned#1/15 )/18 (/21 # Close/23 s.LnNum#1/24 s.CloseBracket#1/25 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Close<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } Tile{ HalfReuse: </21 HalfReuse: & EL_AddErrorAt/23 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/24 } 'U'/26 'n'/27 'b'/28 'a'/29 'l'/30 'a'/31 'n'/32 'c'/33 'e'/34 'd'/35 ' '/36 'b'/37 'r'/38 'a'/39 'c'/40 'k'/41 'e'/42 't'/43 ' '/44 '\"'/45 </46 & StrFromBracket/47 Tile{ AsIs: s.CloseBracket#1/25 HalfReuse: >/22 } '\"'/48 >/49 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: )/14 AsIs: (/17 AsIs: e.Scanned#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[26], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[46] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[47], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[49] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[21] );
    refalrts::reinit_name( context[23], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_close_call( context[22] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[49] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[46] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[25], context[22] );
    res = refalrts::splice_evar( res, context[26], context[47] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 e.MultiBracket#1/11 (/21 s.BracketsSign#1/23 s.InnerLnNum#1/24 s.CloseBracket#1/25 e.Scanned#1/19 )/22 )/14 (/17 e.InnerScanned#1/15 )/18 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_right( context[19], context[20], context[11], context[12] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.MultiBracket#1 as range 11
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
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParsePattern/4 } </26 & EL_AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.InnerLnNum#1/24 } Tile{ HalfReuse: 'U'/22 HalfReuse: 'n'/14 HalfReuse: 'b'/17 } 'a'/28 'l'/29 'a'/30 'n'/31 'c'/32 'e'/33 'd'/34 ' '/35 'b'/36 'r'/37 'a'/38 'c'/39 'k'/40 'e'/41 't'/42 ' '/43 '\"'/44 </45 & StrFromBracket/46 Tile{ AsIs: s.BracketsSign#1/23 } >/47 '\"'/48 >/49 Tile{ AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 AsIs: e.MultiBracket#1/11 HalfReuse: )/21 } (/50 Tile{ AsIs: e.Scanned#1/19 } (/51 s.BracketsSign#1/23/52 Tile{ AsIs: e.InnerScanned#1/15 } )/53 Tile{ AsIs: )/18 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[46], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[49] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[50] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[51] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[52], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[53] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[22], 'U' );
    refalrts::reinit_char( context[14], 'n' );
    refalrts::reinit_char( context[17], 'b' );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[50], context[18] );
    refalrts::link_brackets( context[51], context[53] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::push_stack( context[49] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[47] );
    refalrts::push_stack( context[45] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[53], context[53] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[50], context[50] );
    res = refalrts::splice_evar( res, context[7], context[21] );
    res = refalrts::splice_evar( res, context[47], context[49] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[28], context[46] );
    res = refalrts::splice_evar( res, context[22], context[17] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParsePattern/4 t.ErrorList#1/5 t.SymTable#1/7 t.Context#1/9 (/13 )/14 (/17 e.Pattern#1/15 )/18 e.Tail#1/2 >/1
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
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 15
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ParsePattern/4 {REMOVED TILE}  {REMOVED TILE}  (/17 {REMOVED TILE}  )/18 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: t.SymTable#1/7 AsIs: t.Context#1/9 AsIs: (/13 } Tile{ AsIs: e.Pattern#1/15 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult InvalidModeVariableError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & InvalidModeVariableError/4 t.ErrorList#1/5 s.LnNum#1/7 s.OldMode#1/8 s.NewMode#1/9 e.Index#1/2 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 } 'V'/10 'a'/11 'r'/12 'i'/13 'a'/14 'b'/15 'l'/16 'e'/17 's'/18 ' '/19 Tile{ AsIs: s.OldMode#1/8 } '.'/20 Tile{ AsIs: e.Index#1/2 } ' '/21 'a'/22 'n'/23 'd'/24 ' '/25 Tile{ AsIs: s.NewMode#1/9 } '.'/26 e.Index#1/2/27 ' '/29 'h'/30 'a'/31 's'/32 ' '/33 'd'/34 'i'/35 'f'/36 'f'/37 'e'/38 'r'/39 'e'/40 'n'/41 't'/42 ' '/43 'm'/44 'o'/45 'd'/46 'e'/47 's'/48 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[10], 'V' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], '.' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 's' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[48] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[19] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_CheckAddVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 88 elems
  refalrts::Iter context[88];
  refalrts::zeros( context, 88 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_CheckAddVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # Success/15 s.Depth#2/16 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Index#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::ident_left(  & ident_Success<int>::name, context[2], context[3] );
    if( ! context[15] )
      continue;
    if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_CheckAddVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # InvalidMode/15 s.Depth#2/16 s.OldMode#2/17 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Index#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::ident_left(  & ident_InvalidMode<int>::name, context[2], context[3] );
    if( ! context[15] )
      continue;
    if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CheckAddVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # AlreadyBounded/15 s.Depth#2/16 >/1
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
  // closed e.Index#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::ident_left(  & ident_AlreadyBounded<int>::name, context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Depth#2/16 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: s.LnNum#1/7 } 'V'/17 'a'/18 'r'/19 'i'/20 'a'/21 'b'/22 'l'/23 'e'/24 ' '/25 'h'/26 'i'/27 'd'/28 'e'/29 ' '/30 'o'/31 'p'/32 'e'/33 'r'/34 'a'/35 't'/36 'o'/37 'r'/38 '^'/39 ' '/40 'm'/41 'u'/42 's'/43 't'/44 ' '/45 'b'/46 'e'/47 ' '/48 'a'/49 'p'/50 'p'/51 'l'/52 'i'/53 'e'/54 'd'/55 ' '/56 't'/57 'o'/58 ' '/59 'f'/60 'i'/61 'r'/62 's'/63 't'/64 ' '/65 'o'/66 'c'/67 'c'/68 'u'/69 'r'/70 'e'/71 'n'/72 'c'/73 'e'/74 ' '/75 'o'/76 'f'/77 ' '/78 'v'/79 'a'/80 'r'/81 'i'/82 'a'/83 'b'/84 'l'/85 'e'/86 ' '/87 Tile{ AsIs: s.Mode#1/8 HalfReuse: '.'/11 AsIs: e.Index#1/9 HalfReuse: >/12 AsIs: t.Context#2/13 HalfReuse: s.Depth2 #16/15 } Tile{ HalfReuse: s.Mode1 #8/1 ]] }
  if( ! refalrts::alloc_char( context[17], 'V' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], '^' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[58], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[71], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[72], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[73], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[74], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[75], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[76], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[77], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[78], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[79], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[80], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[81], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[82], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[83], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[84], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[85], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[86], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[87], ' ' ) )
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
  res = refalrts::splice_evar( res, context[17], context[87] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CheckAddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CheckAddVariable/4 t.ErrorList#1/5 t.Context#1/7 s.FnContextModifier#1/9 s.LnNum#1/10 s.Mode#1/11 e.Index#1/2 >/1
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
}

static refalrts::FnResult StrFromBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrFromBracket/4 # TkOpenBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & StrFromBracket/4 # TkOpenBracket/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '('/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], '(' );
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
    // </0 & StrFromBracket/4 # TkCloseBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & StrFromBracket/4 # TkCloseBracket/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ')'/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], ')' );
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
    // </0 & StrFromBracket/4 # TkOpenCall/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & StrFromBracket/4 # TkOpenCall/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '<'/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], '<' );
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
    // </0 & StrFromBracket/4 # TkCloseCall/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & StrFromBracket/4 # TkCloseCall/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '>'/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], '>' );
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
    // </0 & StrFromBracket/4 # TkOpenADT/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & StrFromBracket/4 # TkOpenADT/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '['/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], '[' );
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
    // </0 & StrFromBracket/4 # TkCloseADT/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & StrFromBracket/4 # TkCloseADT/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ']'/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], ']' );
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
    // </0 & StrFromBracket/4 # Brackets/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Brackets<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & StrFromBracket/4 # Brackets/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '('/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], '(' );
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
    // </0 & StrFromBracket/4 # ADT_Brackets/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & StrFromBracket/4 # ADT_Brackets/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '['/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], '[' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StrFromBracket/4 # CallBrackets/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & StrFromBracket/4 # CallBrackets/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: '<'/0 } Tile{ ]] }
  refalrts::reinit_char( context[0], '<' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseResult_0/4 (/7 e.Functions#1/5 )/8 t.SymTable#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 e.Tail#1/19 )/22 (/25 e.Index#1/23 )/26 t.ErrorList#2/27 t.Context#2/29 s.Mode#2/31 s.Depth#2/32 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    // closed e.MultiBracket#1 as range 11
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 19
    // closed e.Index#1 as range 23
    context[28] = refalrts::tvar_left( context[27], context[2], context[3] );
    if( ! context[28] )
      continue;
    context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
    if( ! context[30] )
      continue;
    if( ! refalrts::svar_left( context[31], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseResult_0/4 (/7 e.Functions#1/5 )/8 t.SymTable#1/9 (/13 e.MultiBracket#1/11 )/14 (/17 e.Scanned#1/15 )/18 (/21 e.Tail#1/19 )/22 (/25 e.Index#1/23 )/26 t.ErrorList#2/27 t.Context#2/29 >/1
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
  // closed e.MultiBracket#1 as range 11
  // closed e.Scanned#1 as range 15
  // closed e.Tail#1 as range 19
  // closed e.Index#1 as range 23
  context[28] = refalrts::tvar_left( context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

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
}

static refalrts::FnResult lambda_ParseResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseResult_1/4 # TkOpenBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_ParseResult_1/4 # TkOpenBracket/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Brackets/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_Brackets<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseResult_1/4 # TkOpenCall/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_ParseResult_1/4 # TkOpenCall/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: # CallBrackets/0 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_CallBrackets<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseResult_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseResult_2/4 # TkOpenBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_ParseResult_2/4 # TkOpenBracket/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkCloseBracket/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkCloseBracket<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseResult_2/4 # TkOpenCall/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_ParseResult_2/4 # TkOpenCall/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: # TkCloseCall/0 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_TkCloseCall<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ParseResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 64 elems
  refalrts::Iter context[64];
  refalrts::zeros( context, 64 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkChar/27 s.LnNum#1/28 s.Char#1/29 )/26 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkChar<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.LnNum#1/28 s.Char#1/29 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkChar/25 HalfReuse: s.Char1 #29/27 } )/30 Tile{ AsIs: )/26 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkNumber/27 s.LnNum#1/28 s.Number#1/29 )/26 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.LnNum#1/28 s.Number#1/29 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkNumber/25 HalfReuse: s.Number1 #29/27 } )/30 Tile{ AsIs: )/26 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkName/27 s.LnNum#1/28 e.Name#1/23 )/26 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkName<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    // closed e.Name#1 as range 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } Tile{ HalfReuse: </27 } & ST_AddFunctionCall/29 Tile{ AsIs: t.SymTable#1/11 } Tile{ AsIs: s.LnNum#1/28 } Tile{ AsIs: e.Name#1/23 } >/30 Tile{ AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkName/25 } e.Name#1/23/31 )/33 Tile{ AsIs: )/26 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[29], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[31], context[32], context[23], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[27] );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_ident( context[25], & ident_TkName<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[26] );
    refalrts::link_brackets( context[22], context[33] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[13], context[25] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkIdentMarker/27 s.MarkerLnNum#1/33 )/26 (/30 # TkName/32 s.NameLnNum#1/34 e.Name#1/28 )/31 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[2], context[3] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_TkName<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[33], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[34], context[28], context[29] ) )
      continue;
    // closed e.Name#1 as range 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.MarkerLnNum#1/33 {REMOVED TILE}  {REMOVED TILE}  s.NameLnNum#1/34 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } Tile{ HalfReuse: </30 HalfReuse: & ST_AddIdent/32 } Tile{ AsIs: t.SymTable#1/11 } Tile{ AsIs: e.Name#1/28 } Tile{ HalfReuse: >/27 } Tile{ AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 HalfReuse: (/22 HalfReuse: # TkIdentifier/25 } e.Name#1/28/35 Tile{ AsIs: )/26 } Tile{ AsIs: )/31 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[13], context[25] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkIdentMarker/27 s.LnNum#1/28 )/26 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } Tile{ HalfReuse: </25 HalfReuse: & EL_AddErrorAt/27 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: s.LnNum#1/28 HalfReuse: 'M'/26 } 'i'/29 's'/30 's'/31 'e'/32 'd'/33 ' '/34 'n'/35 'a'/36 'm'/37 'e'/38 ' '/39 'a'/40 'f'/41 't'/42 'e'/43 'r'/44 ' '/45 '\"'/46 '#'/47 '\"'/48 >/49 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[49] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_name( context[27], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_char( context[26], 'M' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[49] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[22] );
    res = refalrts::splice_evar( res, context[29], context[49] );
    res = refalrts::splice_evar( res, context[28], context[26] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkVariable/27 s.LnNum#1/28 s.Mode#1/29 e.Index#1/23 )/26 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    // closed e.Index#1 as range 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </27 } & Fetch/30 </31 & CheckUseVariable/32 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Context#1/13 } Tile{ AsIs: s.LnNum#1/28 AsIs: s.Mode#1/29 AsIs: e.Index#1/23 HalfReuse: >/26 } </33 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ParseResult_0/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } Tile{ AsIs: t.SymTable#1/11 } Tile{ AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 AsIs: (/25 } Tile{ AsIs: e.Tail#1/2 } )/34 (/35 e.Index#1/23/36 )/38 >/39 Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Open/27 s.LnNumADT#1/34 # TkOpenADT/28 )/26 (/31 # TkName/33 s.LnNumName#1/35 e.Name#1/29 )/32 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
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
    context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    context[33] = refalrts::ident_left(  & ident_TkName<int>::name, context[29], context[30] );
    if( ! context[33] )
      continue;
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[34], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[35], context[29], context[30] ) )
      continue;
    // closed e.Name#1 as range 29

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNumADT#1/34 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } </36 & ST_AddFunctionCall/37 Tile{ AsIs: t.SymTable#1/11 } Tile{ AsIs: s.LnNumName#1/35 } Tile{ AsIs: e.Name#1/29 } >/38 Tile{ AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: (/18 HalfReuse: # ADT_Brackets/21 } Tile{ HalfReuse: s.LnNumADT1 #34/25 Reuse: # TkCloseADT/27 } Tile{ AsIs: e.Scanned#1/19 } Tile{ HalfReuse: )/28 AsIs: )/26 AsIs: (/31 HalfReuse: (/33 } e.Name#1/29/39 Tile{ AsIs: )/22 } Tile{ AsIs: )/32 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Open/27 s.LnNum#1/29 # TkOpenADT/28 )/26 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Open<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[23], context[24] );
    if( ! context[28] )
      continue;
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } </30 & EL_AddErrorAt/31 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: s.LnNum#1/29 } 'E'/32 'x'/33 'p'/34 'e'/35 'c'/36 't'/37 'e'/38 'd'/39 ' '/40 'n'/41 'a'/42 'm'/43 'e'/44 ' '/45 'a'/46 'f'/47 't'/48 'e'/49 'r'/50 ' '/51 '\"'/52 '['/53 '\"'/54 >/55 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: (/18 HalfReuse: # ADT_Brackets/21 } s.LnNum#1/29/56 # TkCloseADT/57 Tile{ AsIs: e.Scanned#1/19 } )/58 Tile{ AsIs: )/22 AsIs: (/25 HalfReuse: (/27 } </59 & ST_GetAnyName/60 t.SymTable#1/11/61 >/63 Tile{ HalfReuse: )/28 AsIs: )/26 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'E' ) )
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
    if( ! refalrts::alloc_char( context[41], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[55] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[56], context[29]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[57], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[58] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[59] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[60], ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[61], context[62], context[11], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[63] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_ident( context[21], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_open_bracket( context[27] );
    refalrts::reinit_close_bracket( context[28] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::push_stack( context[63] );
    refalrts::push_stack( context[59] );
    refalrts::link_brackets( context[17], context[22] );
    refalrts::link_brackets( context[18], context[58] );
    refalrts::push_stack( context[55] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[59], context[63] );
    res = refalrts::splice_evar( res, context[22], context[27] );
    res = refalrts::splice_evar( res, context[58], context[58] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[56], context[57] );
    res = refalrts::splice_evar( res, context[11], context[21] );
    res = refalrts::splice_evar( res, context[32], context[55] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Open/27 s.LnNum#1/28 s.OpenBracket#1/29 )/26 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Open<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: (/18 HalfReuse: </21 } & Fetch/30 Tile{ HalfReuse: s.OpenBracket1 #29/22 HalfReuse: & lambda_ParseResult_1/25 HalfReuse: >/27 AsIs: s.LnNum#1/28 } </31 & Fetch/32 Tile{ AsIs: s.OpenBracket#1/29 } & lambda_ParseResult_2/33 >/34 Tile{ AsIs: e.Scanned#1/19 } )/35 )/36 (/37 Tile{ AsIs: )/26 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 (/30 s.BracketsSign#1/32 s.OpenLnNum#1/33 s.CloseBracket#1/34 e.Scanned#1/28 )/31 )/18 (/21 e.InnerScanned#1/19 )/22 (/25 # Close/27 s.LnNum#1/36 s.CloseBracket#1/35 )/26 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Close<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_right( context[28], context[29], context[15], context[16] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.MultiBracket#1 as range 15
    // closed e.InnerScanned#1 as range 19
    // closed e.Tail#1 as range 2
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
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: )/30 } Tile{ AsIs: (/25 } Tile{ AsIs: e.Scanned#1/28 } Tile{ HalfReuse: (/18 HalfReuse: s.BracketsSign1 #32/21 AsIs: e.InnerScanned#1/19 AsIs: )/22 } Tile{ AsIs: )/26 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 )/18 (/21 e.Scanned#1/19 )/22 (/25 # TkOpenBlock/27 s.LnNum#1/28 )/26 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/28 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 HalfReuse: & ParseResult_Block/27 } Tile{ AsIs: (/17 AsIs: e.MultiBracket#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ParseBlock/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ HalfReuse: >/26 } Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[17], context[22] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 e.MultiBracket#1/15 (/25 s.BracketsSign#1/27 s.OpenLnNum#1/28 s.CloseBracket#1/29 e.Scanned#1/23 )/26 )/18 (/21 e.InnerScanned#1/19 )/22 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_right( context[23], context[24], context[15], context[16] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    // closed e.MultiBracket#1 as range 15
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
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } </30 & EL_AddErrorAt/31 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: s.OpenLnNum#1/28 } Tile{ HalfReuse: 'U'/26 HalfReuse: 'n'/18 HalfReuse: 'b'/21 } 'a'/32 'l'/33 'a'/34 'n'/35 'c'/36 'e'/37 'd'/38 ' '/39 'b'/40 'r'/41 'a'/42 'c'/43 'k'/44 'e'/45 't'/46 ' '/47 '\"'/48 </49 & StrFromBracket/50 Tile{ AsIs: s.BracketsSign#1/27 } >/51 '\"'/52 >/53 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: e.MultiBracket#1/15 HalfReuse: )/25 } (/54 Tile{ AsIs: e.Scanned#1/23 } (/55 s.BracketsSign#1/27/56 Tile{ AsIs: e.InnerScanned#1/19 } )/57 Tile{ AsIs: )/22 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
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
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[49] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[50], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[51] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[53] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[54] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[55] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[56], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[57] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[26], 'U' );
    refalrts::reinit_char( context[18], 'n' );
    refalrts::reinit_char( context[21], 'b' );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[54], context[22] );
    refalrts::link_brackets( context[55], context[57] );
    refalrts::link_brackets( context[17], context[25] );
    refalrts::push_stack( context[53] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[51] );
    refalrts::push_stack( context[49] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[57], context[57] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[54], context[54] );
    res = refalrts::splice_evar( res, context[11], context[25] );
    res = refalrts::splice_evar( res, context[51], context[53] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[32], context[50] );
    res = refalrts::splice_evar( res, context[26], context[21] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 )/18 (/21 e.Scanned#1/19 )/22 (/25 # Close/27 s.LnNum#1/28 s.CloseBracket#1/29 )/26 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Functions#1 as range 5
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
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Close<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseResult/4 AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } Tile{ HalfReuse: </25 HalfReuse: & EL_AddErrorAt/27 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: s.LnNum#1/28 } 'U'/30 'n'/31 'b'/32 'a'/33 'l'/34 'a'/35 'n'/36 'c'/37 'e'/38 'd'/39 ' '/40 'b'/41 'r'/42 'a'/43 'c'/44 'k'/45 'e'/46 't'/47 ' '/48 '\"'/49 </50 & StrFromBracket/51 Tile{ AsIs: s.CloseBracket#1/29 HalfReuse: >/26 } '\"'/52 >/53 Tile{ AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 AsIs: )/18 AsIs: (/21 AsIs: e.Scanned#1/19 AsIs: )/22 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[30], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[50] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[51], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[53] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_name( context[27], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_close_call( context[26] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[53] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[50] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[22] );
    res = refalrts::splice_evar( res, context[52], context[53] );
    res = refalrts::splice_evar( res, context[29], context[26] );
    res = refalrts::splice_evar( res, context[30], context[51] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseResult/4 (/7 e.Functions#1/5 )/8 t.ErrorList#1/9 t.SymTable#1/11 t.Context#1/13 (/17 )/18 (/21 e.Result#1/19 )/22 e.Tail#1/2 >/1
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
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  if( ! refalrts::empty_seq( context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 19
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ParseResult/4 {REMOVED TILE}  {REMOVED TILE}  (/21 {REMOVED TILE}  )/22 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.SymTable#1/11 AsIs: t.Context#1/13 AsIs: (/17 } Tile{ AsIs: e.Result#1/19 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[7], context[17] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_CheckUseVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_CheckUseVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # ExistVariable/15 s.Depth#2/16 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Index#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::ident_left(  & ident_ExistVariable<int>::name, context[2], context[3] );
    if( ! context[15] )
      continue;
    if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_CheckUseVariable_0/4 t.ErrorList#1/5 s.LnNum#1/7 s.Mode#1/8 (/11 e.Index#1/9 )/12 t.Context#2/13 # InvalidMode/15 s.Depth#2/16 s.OldMode#2/17 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Index#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::ident_left(  & ident_InvalidMode<int>::name, context[2], context[3] );
    if( ! context[15] )
      continue;
    if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CheckUseVariable_0/4 t.ErrorList#1/6 s.LnNum#1/8 s.Mode#1/9 (/12 e.Index#1/10 )/13 t.Context#2/14 # NotFound/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_right(  & ident_NotFound<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Index#1 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/6 AsIs: s.LnNum#1/8 } 'V'/16 'a'/17 'r'/18 'i'/19 'a'/20 'b'/21 'l'/22 'e'/23 ' '/24 Tile{ AsIs: s.Mode#1/9 HalfReuse: '.'/12 AsIs: e.Index#1/10 HalfReuse: ' '/13 } 'n'/25 'o'/26 't'/27 ' '/28 'f'/29 'o'/30 'u'/31 'n'/32 Tile{ HalfReuse: 'd'/5 AsIs: >/1 } Tile{ AsIs: t.Context#2/14 } Tile{ ]] }
  if( ! refalrts::alloc_char( context[16], 'V' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'n' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
  refalrts::reinit_char( context[12], '.' );
  refalrts::reinit_char( context[13], ' ' );
  refalrts::reinit_char( context[5], 'd' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[1] );
  res = refalrts::splice_evar( res, context[25], context[32] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[16], context[24] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CheckUseVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CheckUseVariable/4 t.ErrorList#1/5 t.Context#1/7 s.LnNum#1/9 s.Mode#1/10 e.Index#1/2 >/1
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
}

static refalrts::FnResult lambda_ParseResult_Block_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseResult_Block_0/4 s.NextNum#1/9 (/12 e.Functions#1/10 )/13 t.ErrorList#1/14 t.SymTable#1/16 t.Context#1/18 (/22 e.MultiBracket#1/20 )/23 (/26 e.Scanned#1/24 )/27 (/30 e.Tail#1/28 )/31 s.FunctionNumber#2/32 (/7 e.RealContext#2/5 )/8 >/1
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
}

static refalrts::FnResult ParseResult_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseResult_Block/4 (/7 e.MultiBracket#1/5 )/8 (/11 e.Scanned#1/9 )/12 (/15 s.NextNum#1/17 e.Functions#1/13 )/16 t.ErrorList#1/18 t.SymTable#1/20 (/24 t.Context#1/26 )/25 e.Tail#1/2 >/1
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
    // closed e.MultiBracket#1 as range 5
    // closed e.Scanned#1 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    // closed e.Functions#1 as range 13
    context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    // closed e.Tail#1 as range 2
    context[27] = refalrts::tvar_left( context[26], context[22], context[23] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;

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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseResult_Block/4 (/7 e.MultiBracket#1/5 )/8 (/11 e.Scanned#1/9 )/12 (/15 s.NextNum#1/17 e.Functions#1/13 )/16 t.ErrorList#1/18 t.SymTable#1/20 (/24 t.Context#1/26 e.FreeContext#1/22 )/25 e.Tail#1/2 >/1
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
  // closed e.MultiBracket#1 as range 5
  // closed e.Scanned#1 as range 9
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 13
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
  // closed e.Tail#1 as range 2
  context[27] = refalrts::tvar_left( context[26], context[22], context[23] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  // closed e.FreeContext#1 as range 22

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </28 & Dec/29 Tile{ AsIs: s.NextNum#1/17 } >/30 Tile{ AsIs: (/24 } </31 & CreateContext/32 Tile{ AsIs: e.FreeContext#1/22 } >/33 Tile{ AsIs: )/25 } </34 & CreateClosure /35 & lambda_ParseResult_Block_0/36 s.NextNum#1/17/37 (/38 Tile{ AsIs: e.Functions#1/13 } Tile{ AsIs: )/16 AsIs: t.ErrorList#1/18 AsIs: t.SymTable#1/20 } Tile{ AsIs: t.Context#1/26 } Tile{ AsIs: (/7 AsIs: e.MultiBracket#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Tail#1/2 } )/39 >/40 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], Dec, "Dec" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], CreateContext, "CreateContext" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[35], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[36], lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[37], context[17]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[34] );
  refalrts::link_brackets( context[15], context[39] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[38], context[16] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[31] );
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
  res = refalrts::splice_evar( res, context[34], context[38] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
