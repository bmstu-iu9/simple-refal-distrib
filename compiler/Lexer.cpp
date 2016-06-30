// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Chr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FastIntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LexFolding(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Mul(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromToken(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AddLineNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CComment_CheckEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CComment_CheckNested(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CharFromNum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CppComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DigitFromChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Directive(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DirectiveTail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LinearizeLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Name(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NormalizeName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NormalizeToken(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NormalizeTokens(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Number(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Root(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SL_E_C1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SL_E_C2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SL_E_OC1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SL_E_OC2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StartComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StrDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StringLiteral(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StringLiteral_Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StringLiteral_Escape_Code(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StringLiteral_Escape_OCode(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StringLiteral_Escape_XCode(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StringLiteral_Quote(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StringLiteral_Start(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwPunctuation(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ValidDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult VariableIndex(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult VariableIndexTail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult VariableStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #Close
template <typename SREFAL_PARAM_INT>
struct ident_Close {
  static const char *name() {
    return "Close";
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

// identifier #Ident
template <typename SREFAL_PARAM_INT>
struct ident_Ident {
  static const char *name() {
    return "Ident";
  }
};

// identifier #Open
template <typename SREFAL_PARAM_INT>
struct ident_Open {
  static const char *name() {
    return "Open";
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

// identifier #TkError
template <typename SREFAL_PARAM_INT>
struct ident_TkError {
  static const char *name() {
    return "TkError";
  }
};

// identifier #TkIdentMarker
template <typename SREFAL_PARAM_INT>
struct ident_TkIdentMarker {
  static const char *name() {
    return "TkIdentMarker";
  }
};

// identifier #TkLiteral_BS
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_BS {
  static const char *name() {
    return "TkLiteral_BS";
  }
};

// identifier #TkLiteral_Bell
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_Bell {
  static const char *name() {
    return "TkLiteral_Bell";
  }
};

// identifier #TkLiteral_CarriageReturn
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_CarriageReturn {
  static const char *name() {
    return "TkLiteral_CarriageReturn";
  }
};

// identifier #TkLiteral_Char
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_Char {
  static const char *name() {
    return "TkLiteral_Char";
  }
};

// identifier #TkLiteral_Code
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_Code {
  static const char *name() {
    return "TkLiteral_Code";
  }
};

// identifier #TkLiteral_FF
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_FF {
  static const char *name() {
    return "TkLiteral_FF";
  }
};

// identifier #TkLiteral_NewLine
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_NewLine {
  static const char *name() {
    return "TkLiteral_NewLine";
  }
};

// identifier #TkLiteral_OCode
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_OCode {
  static const char *name() {
    return "TkLiteral_OCode";
  }
};

// identifier #TkLiteral_Tab
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_Tab {
  static const char *name() {
    return "TkLiteral_Tab";
  }
};

// identifier #TkLiteral_VT
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_VT {
  static const char *name() {
    return "TkLiteral_VT";
  }
};

// identifier #TkLiteral_XCode
template <typename SREFAL_PARAM_INT>
struct ident_TkLiteral_XCode {
  static const char *name() {
    return "TkLiteral_XCode";
  }
};

// identifier #TkName
template <typename SREFAL_PARAM_INT>
struct ident_TkName {
  static const char *name() {
    return "TkName";
  }
};

// identifier #TkNewLine
template <typename SREFAL_PARAM_INT>
struct ident_TkNewLine {
  static const char *name() {
    return "TkNewLine";
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

// identifier #TkPunctuation
template <typename SREFAL_PARAM_INT>
struct ident_TkPunctuation {
  static const char *name() {
    return "TkPunctuation";
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

// identifier #TkUnexpected
template <typename SREFAL_PARAM_INT>
struct ident_TkUnexpected {
  static const char *name() {
    return "TkUnexpected";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

// identifier #TokenAccum
template <typename SREFAL_PARAM_INT>
struct ident_TokenAccum {
  static const char *name() {
    return "TokenAccum";
  }
};

// identifier #TokenError
template <typename SREFAL_PARAM_INT>
struct ident_TokenError {
  static const char *name() {
    return "TokenError";
  }
};

// identifier #TokenUnexpected
template <typename SREFAL_PARAM_INT>
struct ident_TokenUnexpected {
  static const char *name() {
    return "TokenUnexpected";
  }
};

// identifier #TokenUnexpectedEOF
template <typename SREFAL_PARAM_INT>
struct ident_TokenUnexpectedEOF {
  static const char *name() {
    return "TokenUnexpectedEOF";
  }
};

static refalrts::FnResult LinearizeLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & LinearizeLine/4 (/7 e.Line#1/5 )/8 >/1
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
  // closed e.Line#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & LinearizeLine/4 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#1/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char( context[1], '\n' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_LexFolding_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_LexFolding_0/4 '\357'/5 '\273'/6 '\277'/7 e.Content#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '\357', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( '\273', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_left( '\277', context[2], context[3] );
    if( ! context[7] )
      continue;
    // closed e.Content#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_LexFolding_0/4 '\357'/5 '\273'/6 '\277'/7 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Content#2/2 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_LexFolding_0/4 e.Content#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Content#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_LexFolding_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Content#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult LexFolding(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & LexFolding/4 e.FileName#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & NormalizeTokens/6 </7 & Root/8 (/9 )/10 </11 & Fetch/12 </13 & Map/14 & LinearizeLine/15 Tile{ AsIs: </0 Reuse: & LoadFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } >/16 & lambda_LexFolding_0/17 >/18 >/19 >/20 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], NormalizeTokens, "NormalizeTokens" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Root, "Root" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], LinearizeLine, "LinearizeLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], lambda_LexFolding_0, "lambda_LexFolding_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], LoadFile, "LoadFile" );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult StrDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrDirective/4 # EEnum/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_EEnum<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/5 HalfReuse: 'U'/1 } 'M'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'M' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'E' );
    refalrts::reinit_char( context[4], 'E' );
    refalrts::reinit_char( context[5], 'N' );
    refalrts::reinit_char( context[1], 'U' );
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
    // </0 & StrDirective/4 # Entry/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Entry<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'N'/4 HalfReuse: 'T'/5 HalfReuse: 'R'/1 } 'Y'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'Y' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'E' );
    refalrts::reinit_char( context[4], 'N' );
    refalrts::reinit_char( context[5], 'T' );
    refalrts::reinit_char( context[1], 'R' );
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
    // </0 & StrDirective/4 # Enum/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Enum<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'N'/4 HalfReuse: 'U'/5 HalfReuse: 'M'/1 ]] }
    refalrts::reinit_char( context[0], 'E' );
    refalrts::reinit_char( context[4], 'N' );
    refalrts::reinit_char( context[5], 'U' );
    refalrts::reinit_char( context[1], 'M' );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrDirective/4 # Extern/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Extern<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'X'/4 HalfReuse: 'T'/5 HalfReuse: 'E'/1 } 'R'/6 'N'/7 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'N' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'E' );
    refalrts::reinit_char( context[4], 'X' );
    refalrts::reinit_char( context[5], 'T' );
    refalrts::reinit_char( context[1], 'E' );
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
    // </0 & StrDirective/4 # Forward/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Forward<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'F'/0 HalfReuse: 'O'/4 HalfReuse: 'R'/5 HalfReuse: 'W'/1 } 'A'/6 'R'/7 'D'/8 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'D' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'F' );
    refalrts::reinit_char( context[4], 'O' );
    refalrts::reinit_char( context[5], 'R' );
    refalrts::reinit_char( context[1], 'W' );
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
    // </0 & StrDirective/4 # Swap/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Swap<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'S'/0 HalfReuse: 'W'/4 HalfReuse: 'A'/5 HalfReuse: 'P'/1 ]] }
    refalrts::reinit_char( context[0], 'S' );
    refalrts::reinit_char( context[4], 'W' );
    refalrts::reinit_char( context[5], 'A' );
    refalrts::reinit_char( context[1], 'P' );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrDirective/4 # ESwap/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ESwap<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'S'/4 HalfReuse: 'W'/5 HalfReuse: 'A'/1 } 'P'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'P' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'E' );
    refalrts::reinit_char( context[4], 'S' );
    refalrts::reinit_char( context[5], 'W' );
    refalrts::reinit_char( context[1], 'A' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StrDirective/4 # Ident/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Ident<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'L'/0 HalfReuse: 'A'/4 HalfReuse: 'B'/5 HalfReuse: 'E'/1 } 'L'/6 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 'L' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'L' );
  refalrts::reinit_char( context[4], 'A' );
  refalrts::reinit_char( context[5], 'B' );
  refalrts::reinit_char( context[1], 'E' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult StrFromToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrFromToken/4 # TkChar/5 s.Char#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkChar<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & StrFromToken/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/5 AsIs: s.Char#1/6 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[5], '\'' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrFromToken/4 # TkCloseADT/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: ']'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], ']' );
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
    // </0 & StrFromToken/4 # TkCloseCall/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '>'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '>' );
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
    // </0 & StrFromToken/4 # TkCloseBlock/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '}'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '}' );
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
    // </0 & StrFromToken/4 # TkCloseBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: ')'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], ')' );
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
    // </0 & StrFromToken/4 # TkComma/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkComma<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: ','/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], ',' );
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
    // </0 & StrFromToken/4 # TkDirective/5 s.Directive#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkDirective<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } '\"'/7 Tile{ HalfReuse: '$'/0 HalfReuse: </4 HalfReuse: & StrDirective/5 AsIs: s.Directive#1/6 AsIs: >/1 } '\"'/8 Tile{ ]] }
    if( ! refalrts::alloc_char( context[7], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], '\"' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '$' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], StrDirective, "StrDirective" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrFromToken/4 # TkEOF/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkEOF<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

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
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrFromToken/4 # TkError/5 e.Message#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkError<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Message#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'L'/0 HalfReuse: 'E'/4 HalfReuse: 'X'/5 } Tile{ HalfReuse: 'E'/1 } 'R'/6 ' '/7 'E'/8 'R'/9 'R'/10 'O'/11 'R'/12 ':'/13 ' '/14 Tile{ AsIs: e.Message#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'O' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'L' );
    refalrts::reinit_char( context[4], 'E' );
    refalrts::reinit_char( context[5], 'X' );
    refalrts::reinit_char( context[1], 'E' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[14] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrFromToken/4 # TkIdentMarker/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '#'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '#' );
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
    // </0 & StrFromToken/4 # TkName/5 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkName<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'N'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 } Tile{ HalfReuse: 'e'/1 } ' '/6 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'N' );
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
    // </0 & StrFromToken/4 # TkNumber/5 s.Number#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } 'N'/7 'u'/8 'm'/9 'b'/10 'e'/11 'r'/12 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Number#1/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[7], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'r' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], StrFromInt, "StrFromInt" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrFromToken/4 # TkOpenADT/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '['/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '[' );
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
    // </0 & StrFromToken/4 # TkOpenCall/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '<'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '<' );
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
    // </0 & StrFromToken/4 # TkOpenBlock/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '{'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '{' );
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
    // </0 & StrFromToken/4 # TkOpenBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '('/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '(' );
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
    // </0 & StrFromToken/4 # TkReplace/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkReplace<int>::name, context[2], context[3] );
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
    // </0 & StrFromToken/4 # TkSemicolon/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: ';'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], ';' );
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
    // </0 & StrFromToken/4 # TkUnexpected/5 e.Unexpected#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkUnexpected<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Unexpected#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } 'U'/6 'n'/7 'e'/8 'x'/9 'p'/10 'e'/11 'c'/12 't'/13 'e'/14 'd'/15 ' '/16 'c'/17 'h'/18 'a'/19 'r'/20 'a'/21 'c'/22 't'/23 'e'/24 'r'/25 Tile{ HalfReuse: 's'/0 HalfReuse: ' '/4 HalfReuse: '<'/5 AsIs: e.Unexpected#1/2 HalfReuse: '>'/1 ]] }
    if( ! refalrts::alloc_char( context[6], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'e' ) )
      return refalrts::cNoMemory;
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
    if( ! refalrts::alloc_char( context[17], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'r' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[5], '<' );
    refalrts::reinit_char( context[1], '>' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[25] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrFromToken/4 # TkVariable/5 s.Mode#1/6 e.Index#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TkVariable/5 s.Mode#1/6 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Mode1 #6/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/2 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[6] );
    refalrts::reinit_char( context[4], '.' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrFromToken/4 # TkRedefinition/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '^'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '^' );
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
    // </0 & StrFromToken/4 # Open/5 s.OpenBracket#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Open<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & StrFromToken/5 AsIs: s.OpenBracket#1/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], StrFromToken, "StrFromToken" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StrFromToken/4 # Close/5 s.CloseBracket#1/6 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Close<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & StrFromToken/5 AsIs: s.CloseBracket#1/6 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[5], StrFromToken, "StrFromToken" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult NormalizeName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeName/4 e.Name_B#1/5 '-'/7 e.Name_E#1/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[2];
      context[9] = context[3];
      context[7] = refalrts::char_left( '-', context[8], context[9] );
      if( ! context[7] )
        continue;
      // closed e.Name_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormalizeName/4 AsIs: e.Name_B#1/5 Reuse: '_'/7 AsIs: e.Name_E#1/8 AsIs: >/1 ]] }
      refalrts::update_char( context[7], '_' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NormalizeName/4 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & NormalizeName/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult NormalizeToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeToken/4 (/7 # TkDirective/9 e.Directive#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkDirective<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Directive#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # TkDirective/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ValidDirective/4 } Tile{ AsIs: e.Directive#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ValidDirective, "ValidDirective" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeToken/4 (/7 # TkEOF/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkEOF<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkEOF/9 AsIs: )/8 } Tile{ ]] }
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
    // </0 & NormalizeToken/4 (/7 # TkLiteral_Char/9 s.Char#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_Char<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 AsIs: s.Char#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TkChar<int>::name );
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
    // </0 & NormalizeToken/4 (/7 # TkLiteral_Code/9 e.DecCode#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_Code<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.DecCode#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 # TkChar/11 Tile{ AsIs: </0 Reuse: & Chr/4 HalfReuse: </7 HalfReuse: & FastIntFromStr/9 AsIs: e.DecCode#1/5 HalfReuse: >/8 AsIs: >/1 } )/12 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_TkChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Chr, "Chr" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], FastIntFromStr, "FastIntFromStr" );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[10], context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeToken/4 (/7 # TkLiteral_OCode/9 e.OctCode#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_OCode<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.OctCode#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TkChar/0 HalfReuse: </4 HalfReuse: & CharFromNum/7 HalfReuse: 8/9 AsIs: e.OctCode#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], & ident_TkChar<int>::name );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], CharFromNum, "CharFromNum" );
    refalrts::reinit_number( context[9], 8UL );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeToken/4 (/7 # TkLiteral_XCode/9 e.HexCode#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_XCode<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.HexCode#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TkChar/0 HalfReuse: </4 HalfReuse: & CharFromNum/7 HalfReuse: 16/9 AsIs: e.HexCode#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], & ident_TkChar<int>::name );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], CharFromNum, "CharFromNum" );
    refalrts::reinit_number( context[9], 16UL );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeToken/4 (/7 # TkLiteral_NewLine/9 'n'/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_NewLine<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'n', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\n'/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TkChar<int>::name );
    refalrts::update_char( context[10], '\n' );
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
    // </0 & NormalizeToken/4 (/7 # TkLiteral_CarriageReturn/9 'r'/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_CarriageReturn<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'r', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\r'/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TkChar<int>::name );
    refalrts::update_char( context[10], '\r' );
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
    // </0 & NormalizeToken/4 (/7 # TkLiteral_Tab/9 't'/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_Tab<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 't', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\t'/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TkChar<int>::name );
    refalrts::update_char( context[10], '\t' );
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
    // </0 & NormalizeToken/4 (/7 # TkLiteral_Bell/9 'a'/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_Bell<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'a', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\007'/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TkChar<int>::name );
    refalrts::update_char( context[10], '\007' );
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
    // </0 & NormalizeToken/4 (/7 # TkLiteral_BS/9 'b'/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_BS<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'b', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\010'/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TkChar<int>::name );
    refalrts::update_char( context[10], '\010' );
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
    // </0 & NormalizeToken/4 (/7 # TkLiteral_FF/9 'f'/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_FF<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'f', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\014'/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TkChar<int>::name );
    refalrts::update_char( context[10], '\014' );
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
    // </0 & NormalizeToken/4 (/7 # TkLiteral_VT/9 'v'/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkLiteral_VT<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'v', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\013'/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TkChar<int>::name );
    refalrts::update_char( context[10], '\013' );
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
    // </0 & NormalizeToken/4 (/7 # TkName/9 e.Name#1/5 )/8 >/1
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
    // closed e.Name#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkName/4 HalfReuse: </7 HalfReuse: & NormalizeName/9 AsIs: e.Name#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkName<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], NormalizeName, "NormalizeName" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeToken/4 (/7 # TkNewLine/9 e.Accumulated#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkNewLine<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Accumulated#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TkNewLine/9 e.Accumulated#1/5 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNewLine/4 HalfReuse: )/7 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkNewLine<int>::name );
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
    // </0 & NormalizeToken/4 (/7 # TkNumber/9 e.Digits#1/5 )/8 >/1
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
    // closed e.Digits#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNumber/4 HalfReuse: </7 HalfReuse: & FastIntFromStr/9 AsIs: e.Digits#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkNumber<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], FastIntFromStr, "FastIntFromStr" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeToken/4 (/7 # TkPunctuation/9 s.Punctuation#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkPunctuation<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: </7 HalfReuse: & SwPunctuation/9 AsIs: s.Punctuation#1/10 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], SwPunctuation, "SwPunctuation" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
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
    // </0 & NormalizeToken/4 (/7 # TkVariable/9 s.Type#1/10 '.'/11 e.Index#1/5 )/8 >/1
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
    context[11] = refalrts::char_left( '.', context[5], context[6] );
    if( ! context[11] )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/9 AsIs: s.Type#1/10 HalfReuse: </11 } Tile{ Reuse: & NormalizeName/4 } Tile{ AsIs: e.Index#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::update_name( context[4], NormalizeName, "NormalizeName" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeToken/4 (/7 # TkUnexpected/9 e.Unexpected#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkUnexpected<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Unexpected#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkUnexpected/9 AsIs: e.Unexpected#1/5 AsIs: )/8 } Tile{ ]] }
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
    // </0 & NormalizeToken/4 (/7 # TokenError/9 e.Message#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TokenError<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Message#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkError/9 AsIs: e.Message#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TkError<int>::name );
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
    // </0 & NormalizeToken/4 (/7 # TokenUnexpected/9 e.Unexpected#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TokenUnexpected<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Unexpected#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & NormalizeToken/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkUnexpected/9 AsIs: e.Unexpected#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TkUnexpected<int>::name );
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
  // </0 & NormalizeToken/4 (/7 # TokenUnexpectedEOF/9 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_TokenUnexpectedEOF<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 HalfReuse: 'U'/7 HalfReuse: 'n'/9 HalfReuse: 'e'/8 HalfReuse: 'x'/1 } 'p'/10 'e'/11 'c'/12 't'/13 'e'/14 'd'/15 ' '/16 'E'/17 'O'/18 'F'/19 )/20 Tile{ ]] }
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
  if( ! refalrts::alloc_char( context[17], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TkError<int>::name );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::reinit_char( context[9], 'n' );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::reinit_char( context[1], 'x' );
  refalrts::link_brackets( context[0], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[20] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_CharFromNum_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CharFromNum_0/4 s.Base#1/5 s.Accum#2/6 s.Next#2/7 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } </8 & Mul/9 Tile{ AsIs: s.Accum#2/6 } Tile{ AsIs: s.Base#1/5 } >/10 Tile{ AsIs: s.Next#2/7 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Mul, "Mul" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Add, "Add" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CharFromNum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CharFromNum/4 s.Base#1/5 e.Chars#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chr/4 } </6 & Reduce/7 </8 & CreateClosure /9 & lambda_CharFromNum_0/10 Tile{ AsIs: s.Base#1/5 } >/11 0/12 </13 & Map/14 & DigitFromChar/15 Tile{ AsIs: e.Chars#1/2 } >/16 >/17 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Reduce, "Reduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], lambda_CharFromNum_0, "lambda_CharFromNum_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[12], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], DigitFromChar, "DigitFromChar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Chr, "Chr" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_DigitFromChar_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_DigitFromChar_0/4 s.Char#1/5 e.Assoc_B#2/6 (/10 s.Digit#2/12 e.Vars_B#2/13 s.Char#1/15 e.Vars_E#2/18 )/11 e.Assoc_E#2/16 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop();
  do {
    context[16] = context[2];
    context[17] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[16], context[17] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    // closed e.Assoc_E#2 as range 2
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[8];
      context[19] = context[9];
      if( ! refalrts::repeated_stvar_left( context[15], context[5], context[18], context[19] ) )
        continue;
      // closed e.Vars_E#2 as range 8

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  & lambda_DigitFromChar_0/4 s.Char#1/5 e.Assoc_B#2/6 (/10 s.Digit#2/12 e.Vars_B#2/13 s.Char#1/15 e.Vars_E#2/18 )/11 e.Assoc_E#2/16 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ HalfReuse: s.Digit2 #12/0 } Tile{ ]] }
      refalrts::reinit_svar( context[0], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[8], context[9] ) );
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

static refalrts::FnResult DigitFromChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 80 elems
  refalrts::Iter context[80];
  refalrts::zeros( context, 80 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DigitFromChar/4 s.Char#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </6 & Fetch/7 (/8 0/9 '0'/10 )/11 (/12 1/13 '1'/14 )/15 (/16 2/17 '2'/18 )/19 (/20 3/21 '3'/22 )/23 (/24 4/25 '4'/26 )/27 (/28 5/29 '5'/30 )/31 (/32 6/33 '6'/34 )/35 (/36 7/37 '7'/38 )/39 (/40 8/41 '8'/42 )/43 (/44 9/45 '9'/46 )/47 (/48 10/49 'A'/50 'a'/51 )/52 (/53 11/54 'B'/55 'b'/56 )/57 (/58 12/59 'C'/60 'c'/61 )/62 (/63 13/64 'D'/65 'd'/66 )/67 (/68 14/69 'E'/70 'e'/71 )/72 (/73 15/74 'F'/75 'f'/76 )/77 </78 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_DigitFromChar_0/4 AsIs: s.Char#1/5 AsIs: >/1 } >/79 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[9], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], '0' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[13], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], '1' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[17], 2UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], '2' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[21], 3UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], '3' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[25], 4UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], '4' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[29], 5UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], '5' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[33], 6UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], '6' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[37], 7UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], '7' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[41], 8UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], '8' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[45], 9UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], '9' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[48] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[49], 10UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[52] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[53] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[54], 11UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], 'B' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[57] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[58] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[59], 12UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], 'C' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[62] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[63] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[64], 13UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], 'D' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[67] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[68] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[69], 14UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[71], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[72] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[73] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[74], 15UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[75], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[76], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[77] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[78] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[79] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_DigitFromChar_0, "lambda_DigitFromChar_0" );
  refalrts::push_stack( context[79] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[78] );
  refalrts::link_brackets( context[73], context[77] );
  refalrts::link_brackets( context[68], context[72] );
  refalrts::link_brackets( context[63], context[67] );
  refalrts::link_brackets( context[58], context[62] );
  refalrts::link_brackets( context[53], context[57] );
  refalrts::link_brackets( context[48], context[52] );
  refalrts::link_brackets( context[44], context[47] );
  refalrts::link_brackets( context[40], context[43] );
  refalrts::link_brackets( context[36], context[39] );
  refalrts::link_brackets( context[32], context[35] );
  refalrts::link_brackets( context[28], context[31] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[79], context[79] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[78] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ValidDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ValidDirective/4 'E'/5 'N'/6 'U'/7 'M'/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'N', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_left( 'U', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'M', context[2], context[3] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  'U'/7 'M'/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkDirective/4 HalfReuse: # Enum/5 HalfReuse: )/6 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkDirective<int>::name );
    refalrts::reinit_ident( context[5], & ident_Enum<int>::name );
    refalrts::reinit_close_bracket( context[6] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ValidDirective/4 'E'/5 'E'/6 'N'/7 'U'/8 'M'/9 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_left( 'N', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'U', context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_left( 'M', context[2], context[3] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  'N'/7 'U'/8 'M'/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkDirective/4 HalfReuse: # EEnum/5 HalfReuse: )/6 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkDirective<int>::name );
    refalrts::reinit_ident( context[5], & ident_EEnum<int>::name );
    refalrts::reinit_close_bracket( context[6] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ValidDirective/4 'E'/5 'N'/6 'T'/7 'R'/8 'Y'/9 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'N', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_left( 'T', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'R', context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_left( 'Y', context[2], context[3] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  'T'/7 'R'/8 'Y'/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkDirective/4 HalfReuse: # Entry/5 HalfReuse: )/6 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkDirective<int>::name );
    refalrts::reinit_ident( context[5], & ident_Entry<int>::name );
    refalrts::reinit_close_bracket( context[6] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ValidDirective/4 'E'/5 'X'/6 'T'/7 'E'/8 'R'/9 'N'/10 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'X', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_left( 'T', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_left( 'R', context[2], context[3] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'N', context[2], context[3] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  'T'/7 'E'/8 'R'/9 'N'/10 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkDirective/4 HalfReuse: # Extern/5 HalfReuse: )/6 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkDirective<int>::name );
    refalrts::reinit_ident( context[5], & ident_Extern<int>::name );
    refalrts::reinit_close_bracket( context[6] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ValidDirective/4 'F'/5 'O'/6 'R'/7 'W'/8 'A'/9 'R'/10 'D'/11 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 'F', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'O', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_left( 'R', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'W', context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'R', context[2], context[3] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( 'D', context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  'R'/7 'W'/8 'A'/9 'R'/10 'D'/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkDirective/4 HalfReuse: # Forward/5 HalfReuse: )/6 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkDirective<int>::name );
    refalrts::reinit_ident( context[5], & ident_Forward<int>::name );
    refalrts::reinit_close_bracket( context[6] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ValidDirective/4 'S'/5 'W'/6 'A'/7 'P'/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 'S', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'W', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'P', context[2], context[3] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  'A'/7 'P'/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkDirective/4 HalfReuse: # Swap/5 HalfReuse: )/6 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkDirective<int>::name );
    refalrts::reinit_ident( context[5], & ident_Swap<int>::name );
    refalrts::reinit_close_bracket( context[6] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ValidDirective/4 'E'/5 'S'/6 'W'/7 'A'/8 'P'/9 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'S', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_left( 'W', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_left( 'P', context[2], context[3] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  'W'/7 'A'/8 'P'/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkDirective/4 HalfReuse: # ESwap/5 HalfReuse: )/6 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkDirective<int>::name );
    refalrts::reinit_ident( context[5], & ident_ESwap<int>::name );
    refalrts::reinit_close_bracket( context[6] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ValidDirective/4 'L'/5 'A'/6 'B'/7 'E'/8 'L'/9 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 'L', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_left( 'B', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_left( 'L', context[2], context[3] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  'B'/7 'E'/8 'L'/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkDirective/4 HalfReuse: # Ident/5 HalfReuse: )/6 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkDirective<int>::name );
    refalrts::reinit_ident( context[5], & ident_Ident<int>::name );
    refalrts::reinit_close_bracket( context[6] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ValidDirective/4 e.Other#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Other#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/5 # TkError/6 'U'/7 'n'/8 'k'/9 'n'/10 'o'/11 'w'/12 'n'/13 ' '/14 'd'/15 'i'/16 'r'/17 'e'/18 'c'/19 't'/20 'i'/21 'v'/22 'e'/23 Tile{ HalfReuse: ' '/0 HalfReuse: '$'/4 AsIs: e.Other#1/2 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_TkError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'w' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_char( context[4], '$' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[5], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[23] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SwPunctuation(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SwPunctuation/4 '<'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '<', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 '<'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkOpenCall/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkOpenCall<int>::name );
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
    // </0 & SwPunctuation/4 '>'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '>', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 '>'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkCloseCall/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkCloseCall<int>::name );
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
    // </0 & SwPunctuation/4 '{'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '{', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 '{'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkOpenBlock/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkOpenBlock<int>::name );
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
    // </0 & SwPunctuation/4 '}'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '}', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 '}'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkCloseBlock/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkCloseBlock<int>::name );
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
    // </0 & SwPunctuation/4 '('/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '(', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 '('/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkOpenBracket/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkOpenBracket<int>::name );
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
    // </0 & SwPunctuation/4 ')'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( ')', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 ')'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkCloseBracket/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkCloseBracket<int>::name );
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
    // </0 & SwPunctuation/4 '='/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '=', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 '='/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkReplace/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkReplace<int>::name );
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
    // </0 & SwPunctuation/4 ','/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( ',', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 ','/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkComma/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkComma<int>::name );
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
    // </0 & SwPunctuation/4 ';'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( ';', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 ';'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkSemicolon/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkSemicolon<int>::name );
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
    // </0 & SwPunctuation/4 '['/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '[', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 '['/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkOpenADT/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkOpenADT<int>::name );
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
    // </0 & SwPunctuation/4 ']'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( ']', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 ']'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkCloseADT/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkCloseADT<int>::name );
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
    // </0 & SwPunctuation/4 '#'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '#', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SwPunctuation/4 '#'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TkIdentMarker/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TkIdentMarker<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SwPunctuation/4 '^'/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_left( '^', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & SwPunctuation/4 '^'/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: # TkRedefinition/0 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_TkRedefinition<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AddLineNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AddLineNumber/4 s.LineNumber#1/10 (/7 # TkNewLine/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkNewLine<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TkNewLine/9 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNumber#1/10 HalfReuse: >/7 } Tile{ ]] }
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AddLineNumber/4 s.LineNumber#1/9 (/7 s.TokType#1/10 e.Info#1/5 )/8 >/1
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
  // closed e.Info#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & AddLineNumber/4 {REMOVED TILE}  {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber#1/9 AsIs: (/7 AsIs: s.TokType#1/10 } Tile{ HalfReuse: s.LineNumber1 #9/0 } Tile{ AsIs: e.Info#1/5 } Tile{ HalfReuse: )/1 ]] }
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

static refalrts::FnResult NormalizeTokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NormalizeTokens/4 e.Tokens#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & DelAccumulator/6 </7 & MapReduce/8 & AddLineNumber/9 1/10 </11 Tile{ HalfReuse: & Map/0 Reuse: & NormalizeToken/4 AsIs: e.Tokens#1/2 AsIs: >/1 } >/12 >/13 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], DelAccumulator, "DelAccumulator" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], AddLineNumber, "AddLineNumber" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[10], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], NormalizeToken, "NormalizeToken" );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Root(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 ' '/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( ' ', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\t'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '\t', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\r'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '\r', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '<'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '<', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '<'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '>'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '>', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '>'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '>' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '('/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '(', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '('/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 ')'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( ')', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } ')'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '{'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '{', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '{'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '}'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '}', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '}'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '['/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '[', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '['/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 ']'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( ']', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } ']'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ']' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '='/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '=', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '='/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 ';'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( ';', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } ';'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 ','/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( ',', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } ','/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '#'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '#', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '#'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '^'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '^', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '^'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '^' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'A' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'B', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'B' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'C', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'C' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'D', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'D' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'E' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'F', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'F' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'G', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'G' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'H', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'H' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'I', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'I' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'J', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'J' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'K', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'K' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'L', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'L' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'M', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'M' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'N', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'N' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'O', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'O' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'P', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'P' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Q', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'Q' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'R', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'R' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'S', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'S' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'T', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'T' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'U', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'U' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'V', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'V' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'W', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'W' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'X', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'X' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Y', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'Y' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Z', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::reinit_char( context[8], 'Z' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 's', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableStart/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableStart, "VariableStart" );
    refalrts::reinit_char( context[8], 's' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'e', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableStart/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableStart, "VariableStart" );
    refalrts::reinit_char( context[8], 'e' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableStart/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableStart, "VariableStart" );
    refalrts::reinit_char( context[8], 't' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Number, "Number" );
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Number, "Number" );
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Number, "Number" );
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Number, "Number" );
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Number, "Number" );
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Number, "Number" );
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Number, "Number" );
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Number, "Number" );
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '8', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Number, "Number" );
    refalrts::reinit_char( context[8], '8' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '9', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Number, "Number" );
    refalrts::reinit_char( context[8], '9' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '$'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '$', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Directive/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Directive, "Directive" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Start/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Start, "StringLiteral_Start" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '/'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '/', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StartComment/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '/'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StartComment, "StartComment" );
    refalrts::reinit_char( context[8], '/' );
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
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkNewLine/10 Tile{ AsIs: e.Accum#1/5 } '\n'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkNewLine<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '\n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 >/1
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
    // closed e.Accum#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkEOF/7 AsIs: e.Accum#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_TkEOF<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 # TkUnexpected/11 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_TkUnexpected<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Root/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Name(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '8', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '9', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'a', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'b', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'c', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'e', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'f', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'g', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'h', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'i', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'j', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'k', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'l', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'm', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'o', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'p', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'q', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 's', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'u', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'v', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'w', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'x', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'y', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'z', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'B', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'C', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'D', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'F', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'G', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'H', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'I', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'J', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'K', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'L', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'M', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'N', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'O', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'P', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Q', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'R', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'S', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'T', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'U', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'V', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'W', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'X', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Y', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Z', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '_', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '-', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
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
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkName/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Name/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult VariableStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & VariableStart/4 (/7 e.Accum#1/5 )/8 '.'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '.', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndex/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '.'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndex, "VariableIndex" );
    refalrts::reinit_char( context[8], '.' );
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
    // </0 & VariableStart/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TokenError/10 'E'/11 'x'/12 'p'/13 'e'/14 'c'/15 't'/16 'e'/17 'd'/18 ' '/19 'd'/20 'o'/21 't'/22 )/23 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TokenError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'E' ) )
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
    if( ! refalrts::alloc_char( context[20], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[9], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & VariableStart/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & VariableStart/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Number(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '8', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
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
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '9', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
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
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkNumber/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkNumber<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Number/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Number/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Directive(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'A' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'B', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'B' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'C', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'C' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'D', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'D' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'E' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'F', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'F' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'G', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'G' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'H', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'H' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'I', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'I' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'J', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'J' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'K', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'K' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'L', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'L' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'M', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'M' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'N', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'N' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'O', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'O' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'P', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'P' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Q', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'Q' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'R', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'R' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'S', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'S' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'T', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'T' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'U', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'U' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'V', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'V' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'W', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'W' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'X', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'X' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Y', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'Y' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Z', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], DirectiveTail, "DirectiveTail" );
    refalrts::reinit_char( context[8], 'Z' );
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
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TokenError/10 'E'/11 'x'/12 'p'/13 'e'/14 'c'/15 't'/16 'e'/17 'd'/18 ' '/19 'd'/20 'i'/21 'r'/22 'e'/23 'c'/24 't'/25 'i'/26 'v'/27 'e'/28 ' '/29 'n'/30 'a'/31 'm'/32 'e'/33 )/34 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TokenError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'E' ) )
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
    if( ! refalrts::alloc_char( context[20], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'e' ) )
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
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[9], context[34] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Directive/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Directive/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult StringLiteral_Start(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Start/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Char/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '\''/7 } )/10 </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], Root, "Root" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Char<int>::name );
    refalrts::reinit_char( context[7], '\'' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Start/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral, "StringLiteral" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Start/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StringLiteral_Start/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult StartComment(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StartComment/4 (/7 e.Accum#1/5 )/8 '*'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '*', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CComment/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], CComment, "CComment" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StartComment/4 (/7 e.Accum#1/5 )/8 '/'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '/', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CppComment/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], CppComment, "CppComment" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StartComment/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkUnexpected/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkUnexpected<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StartComment/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StartComment/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult VariableIndex(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '8', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '8' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '9', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '9' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'a', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'a' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'b', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'b' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'c', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'c' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'd' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'e', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'e' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'f', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'f' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'g', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'g' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'h', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'h' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'i', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'i' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'j', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'j' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'k', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'k' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'l', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'l' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'm', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'm' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'n' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'o', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'o' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'p', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'p' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'q', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'q' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'r' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 's', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 's' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 't' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'u', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'u' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'v', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'v' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'w', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'w' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'x', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'x' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'y', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'y' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'z', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'z' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'A' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'B', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'B' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'C', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'C' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'D', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'D' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'E' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'F', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'F' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'G', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'G' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'H', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'H' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'I', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'I' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'J', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'J' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'K', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'K' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'L', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'L' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'M', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'M' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'N', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'N' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'O', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'O' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'P', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'P' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Q', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'Q' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'R', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'R' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'S', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'S' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'T', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'T' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'U', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'U' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'V', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'V' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'W', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'W' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'X', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'X' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Y', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'Y' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Z', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], 'Z' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '_', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '_' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '-', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], VariableIndexTail, "VariableIndexTail" );
    refalrts::reinit_char( context[8], '-' );
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
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TokenError/10 'E'/11 'x'/12 'p'/13 'e'/14 'c'/15 't'/16 'e'/17 'd'/18 ' '/19 'v'/20 'a'/21 'r'/22 'i'/23 'a'/24 'b'/25 'l'/26 'e'/27 ' '/28 'n'/29 'a'/30 'm'/31 'e'/32 )/33 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TokenError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'E' ) )
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
    if( ! refalrts::alloc_char( context[20], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
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
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[9], context[33] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult DirectiveTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'B', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'C', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'D', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'F', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'G', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'H', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'I', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'J', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'K', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'L', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'M', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'N', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'O', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'P', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Q', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'R', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'S', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'T', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'U', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'V', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'W', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'X', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Y', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Z', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
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
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkDirective/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkDirective<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult StringLiteral(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral/4 (/7 e.Accum#1/5 )/8 '\\'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape, "StringLiteral_Escape" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Quote/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Quote, "StringLiteral_Quote" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 } 'n'/10 'c'/11 'l'/12 'o'/13 's'/14 'e'/15 'd'/16 ' '/17 'q'/18 'u'/19 'o'/20 't'/21 'e'/22 )/23 </24 & Root/25 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'q' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], Root, "Root" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TokenError<int>::name );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral/4 (/7 e.Accum#1/5 )/8 >/1
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
    // closed e.Accum#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 } 'n'/9 'e'/10 'x'/11 'p'/12 'e'/13 'c'/14 't'/15 'e'/16 'd'/17 ' '/18 'E'/19 'O'/20 'F'/21 ' '/22 'i'/23 'n'/24 ' '/25 's'/26 't'/27 'r'/28 'i'/29 'n'/30 'g'/31 ' '/32 'l'/33 'i'/34 't'/35 'e'/36 'r'/37 'a'/38 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
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
    if( ! refalrts::alloc_char( context[19], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'O' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'F' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'a' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TokenError<int>::name );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[38] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 # TkLiteral_Char/11 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & StringLiteral/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_TkLiteral_Char<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StringLiteral/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CComment(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment/4 (/7 e.Accum#1/5 )/8 '/'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '/', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CComment_CheckNested/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], CComment_CheckNested, "CComment_CheckNested" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment/4 (/7 e.Accum#1/5 )/8 '*'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '*', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CComment_CheckEnd/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], CComment_CheckEnd, "CComment_CheckEnd" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkNewLine/10 Tile{ AsIs: e.Accum#1/5 } '\n'/11 )/12 Tile{ AsIs: </0 AsIs: & CComment/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TkNewLine<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '\n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  s.Any#1/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CComment/4 AsIs: (/7 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment/4 (/7 e.Accum#1/5 )/8 >/1
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
    // closed e.Accum#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 } 'n'/9 'e'/10 'x'/11 'p'/12 'e'/13 'c'/14 't'/15 'e'/16 'd'/17 ' '/18 'E'/19 'O'/20 'F'/21 ':'/22 ' '/23 'u'/24 'n'/25 'c'/26 'l'/27 'o'/28 's'/29 'e'/30 'd'/31 ' '/32 'c'/33 'o'/34 'm'/35 'm'/36 'e'/37 'n'/38 Tile{ HalfReuse: 't'/8 HalfReuse: )/1 ]] }
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
    if( ! refalrts::alloc_char( context[19], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'O' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'F' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'n' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TokenError<int>::name );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[38] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CComment/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CppComment(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CppComment/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNewLine/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '\n'/7 } )/10 </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], Root, "Root" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkNewLine<int>::name );
    refalrts::reinit_char( context[7], '\n' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CppComment/4 (/7 e.Accum#1/5 )/8 >/1
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
    // closed e.Accum#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkEOF/7 AsIs: e.Accum#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_TkEOF<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CppComment/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  s.Any#1/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CppComment/4 AsIs: (/7 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CppComment/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CppComment/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult VariableIndexTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '8', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '9', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'a', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'b', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'c', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'e', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'f', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'g', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'h', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'i', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'j', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'k', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'l', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'm', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'o', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'p', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'q', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 's', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'u', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'v', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'w', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'x', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'y', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'z', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'B', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'C', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'D', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'F', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'G', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'H', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'I', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'J', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'K', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'L', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'M', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'N', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'O', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'P', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Q', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'R', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'S', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'T', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'U', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'V', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'W', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'X', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Y', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'Z', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '_', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '-', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
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
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkVariable/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkVariable<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult StringLiteral_Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_NewLine/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: 'n'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_NewLine<int>::name );
    refalrts::reinit_char( context[7], 'n' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_CarriageReturn/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: 'r'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_CarriageReturn<int>::name );
    refalrts::reinit_char( context[7], 'r' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Tab/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: 't'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Tab<int>::name );
    refalrts::reinit_char( context[7], 't' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'a', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Bell/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: 'a'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Bell<int>::name );
    refalrts::reinit_char( context[7], 'a' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'b', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_BS/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: 'b'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_BS<int>::name );
    refalrts::reinit_char( context[7], 'b' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'f', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_FF/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: 'f'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_FF<int>::name );
    refalrts::reinit_char( context[7], 'f' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'v', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_VT/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: 'v'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_VT<int>::name );
    refalrts::reinit_char( context[7], 'v' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '\\'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Char/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '\\'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Char<int>::name );
    refalrts::reinit_char( context[7], '\\' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Char/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '\''/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Char<int>::name );
    refalrts::reinit_char( context[7], '\'' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '\"'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Char/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '\"'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Char<int>::name );
    refalrts::reinit_char( context[7], '\"' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_Code/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_Code, "StringLiteral_Escape_Code" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'D', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_Code/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_Code, "StringLiteral_Escape_Code" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_OCode, "StringLiteral_Escape_OCode" );
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_OCode, "StringLiteral_Escape_OCode" );
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_OCode, "StringLiteral_Escape_OCode" );
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_OCode, "StringLiteral_Escape_OCode" );
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_OCode, "StringLiteral_Escape_OCode" );
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_OCode, "StringLiteral_Escape_OCode" );
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_OCode, "StringLiteral_Escape_OCode" );
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_OCode, "StringLiteral_Escape_OCode" );
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'x', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_XCode/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_XCode, "StringLiteral_Escape_XCode" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'X', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral_Escape_XCode/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], StringLiteral_Escape_XCode, "StringLiteral_Escape_XCode" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 } 'n'/10 'c'/11 'l'/12 'o'/13 's'/14 'e'/15 'd'/16 ' '/17 'q'/18 'u'/19 'o'/20 't'/21 'e'/22 )/23 </24 & Root/25 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'q' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], Root, "Root" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TokenError<int>::name );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TokenError/10 'U'/11 'n'/12 'e'/13 'x'/14 'p'/15 'e'/16 'c'/17 't'/18 'e'/19 'd'/20 ' '/21 'e'/22 's'/23 'c'/24 'a'/25 'p'/26 'e'/27 ' '/28 's'/29 'e'/30 'q'/31 'u'/32 'e'/33 'n'/34 'c'/35 'e'/36 )/37 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TokenError<int>::name ) )
      return refalrts::cNoMemory;
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
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'q' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StringLiteral, "StringLiteral" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[37] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[9], context[37] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StringLiteral_Escape/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult StringLiteral_Quote(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Quote/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Char/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '\''/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Char<int>::name );
    refalrts::reinit_char( context[7], '\'' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Quote/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Root/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Quote/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StringLiteral_Quote/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CComment_CheckNested(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment_CheckNested/4 (/7 e.Accum#1/5 )/8 '*'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '*', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'N'/7 } 'e'/10 's'/11 't'/12 'e'/13 'd'/14 ' '/15 'c'/16 'o'/17 'm'/18 'm'/19 'e'/20 'n'/21 't'/22 's'/23 ' '/24 'i'/25 's'/26 ' '/27 'd'/28 'i'/29 's'/30 'a'/31 'b'/32 'l'/33 'e'/34 'd'/35 )/36 </37 & CComment/38 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[38], CComment, "CComment" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TokenError<int>::name );
    refalrts::reinit_char( context[7], 'N' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[37] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[36] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[38] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment_CheckNested/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CComment/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], CComment, "CComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment_CheckNested/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CComment_CheckNested/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CComment_CheckEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment_CheckEnd/4 (/7 e.Accum#1/5 )/8 '/'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '/', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Accum#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment_CheckEnd/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CComment/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], CComment, "CComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CComment_CheckEnd/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CComment_CheckEnd/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult StringLiteral_Escape_Code(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C1, "SL_E_C1" );
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C1, "SL_E_C1" );
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C1, "SL_E_C1" );
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C1, "SL_E_C1" );
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C1, "SL_E_C1" );
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C1, "SL_E_C1" );
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C1, "SL_E_C1" );
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C1, "SL_E_C1" );
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '8', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C1, "SL_E_C1" );
    refalrts::reinit_char( context[8], '8' );
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
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '9', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C1, "SL_E_C1" );
    refalrts::reinit_char( context[8], '9' );
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
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TokenError/10 'E'/11 'x'/12 'p'/13 'e'/14 'c'/15 't'/16 'e'/17 'd'/18 ' '/19 'd'/20 'e'/21 'c'/22 'i'/23 'm'/24 'a'/25 'l'/26 ' '/27 'd'/28 'i'/29 'g'/30 'i'/31 't'/32 )/33 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TokenError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'E' ) )
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
    if( ! refalrts::alloc_char( context[20], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StringLiteral, "StringLiteral" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[9], context[33] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StringLiteral_Escape_Code/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult StringLiteral_Escape_OCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC1, "SL_E_OC1" );
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC1, "SL_E_OC1" );
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC1, "SL_E_OC1" );
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC1, "SL_E_OC1" );
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC1, "SL_E_OC1" );
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC1, "SL_E_OC1" );
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC1, "SL_E_OC1" );
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC1, "SL_E_OC1" );
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkLiteral_OCode/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkLiteral_OCode<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StringLiteral, "StringLiteral" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StringLiteral_Escape_OCode/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult StringLiteral_Escape_XCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '8', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '9', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'A', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'B', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'C', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'D', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'E', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'F', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'a', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'b', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'c', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
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
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'e', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'f', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral_Escape_XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
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
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkLiteral_XCode/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkLiteral_XCode<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StringLiteral, "StringLiteral" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StringLiteral_Escape_XCode/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SL_E_C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C2, "SL_E_C2" );
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C2, "SL_E_C2" );
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C2, "SL_E_C2" );
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C2, "SL_E_C2" );
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C2, "SL_E_C2" );
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C2, "SL_E_C2" );
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C2, "SL_E_C2" );
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C2, "SL_E_C2" );
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '8', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C2, "SL_E_C2" );
    refalrts::reinit_char( context[8], '8' );
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
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '9', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_C2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_C2, "SL_E_C2" );
    refalrts::reinit_char( context[8], '9' );
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
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkLiteral_Code/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkLiteral_Code<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StringLiteral, "StringLiteral" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SL_E_C1/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SL_E_OC1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC2, "SL_E_OC2" );
    refalrts::reinit_char( context[8], '0' );
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
    // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC2, "SL_E_OC2" );
    refalrts::reinit_char( context[8], '1' );
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
    // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC2, "SL_E_OC2" );
    refalrts::reinit_char( context[8], '2' );
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
    // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC2, "SL_E_OC2" );
    refalrts::reinit_char( context[8], '3' );
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
    // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC2, "SL_E_OC2" );
    refalrts::reinit_char( context[8], '4' );
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
    // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC2, "SL_E_OC2" );
    refalrts::reinit_char( context[8], '5' );
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
    // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC2, "SL_E_OC2" );
    refalrts::reinit_char( context[8], '6' );
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
    // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL_E_OC2/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], SL_E_OC2, "SL_E_OC2" );
    refalrts::reinit_char( context[8], '7' );
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
    // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkLiteral_OCode/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkLiteral_OCode<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StringLiteral, "StringLiteral" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SL_E_OC1/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SL_E_C2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Code/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '0'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Code<int>::name );
    refalrts::reinit_char( context[7], '0' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Code/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '1'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Code<int>::name );
    refalrts::reinit_char( context[7], '1' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Code/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '2'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Code<int>::name );
    refalrts::reinit_char( context[7], '2' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Code/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '3'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Code<int>::name );
    refalrts::reinit_char( context[7], '3' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Code/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '4'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Code<int>::name );
    refalrts::reinit_char( context[7], '4' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Code/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '5'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Code<int>::name );
    refalrts::reinit_char( context[7], '5' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Code/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '6'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Code<int>::name );
    refalrts::reinit_char( context[7], '6' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Code/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '7'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Code<int>::name );
    refalrts::reinit_char( context[7], '7' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '8', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Code/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '8'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Code<int>::name );
    refalrts::reinit_char( context[7], '8' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '9', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_Code/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '9'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_Code<int>::name );
    refalrts::reinit_char( context[7], '9' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkLiteral_Code/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkLiteral_Code<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StringLiteral, "StringLiteral" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SL_E_C2/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SL_E_OC2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '0', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_OCode/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '0'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_OCode<int>::name );
    refalrts::reinit_char( context[7], '0' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '1', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_OCode/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '1'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_OCode<int>::name );
    refalrts::reinit_char( context[7], '1' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '2', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_OCode/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '2'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_OCode<int>::name );
    refalrts::reinit_char( context[7], '2' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '3', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_OCode/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '3'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_OCode<int>::name );
    refalrts::reinit_char( context[7], '3' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '4', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_OCode/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '4'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_OCode<int>::name );
    refalrts::reinit_char( context[7], '4' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '5', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_OCode/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '5'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_OCode<int>::name );
    refalrts::reinit_char( context[7], '5' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '6', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_OCode/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '6'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_OCode<int>::name );
    refalrts::reinit_char( context[7], '6' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '7', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral_OCode/4 } Tile{ AsIs: e.Accum#1/5 } Tile{ HalfReuse: '7'/7 } )/10 </11 & StringLiteral/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StringLiteral, "StringLiteral" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TkLiteral_OCode<int>::name );
    refalrts::reinit_char( context[7], '7' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 # TkLiteral_OCode/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkLiteral_OCode<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StringLiteral, "StringLiteral" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 s.Unexpected#1/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Accum#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Accum#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TokenUnexpected/8 AsIs: s.Unexpected#1/9 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_TokenUnexpected<int>::name );
    refalrts::update_name( context[4], Root, "Root" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SL_E_OC2/4 (/7 e.Accum#1/5 )/8 >/1
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
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TokenAccum/7 AsIs: e.Accum#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # TokenUnexpectedEOF/0 } )/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TokenAccum<int>::name );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_ident( context[0], & ident_TokenUnexpectedEOF<int>::name );
  refalrts::link_brackets( context[1], context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
