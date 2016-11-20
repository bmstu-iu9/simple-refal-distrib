// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_EOF = refalrts::ident_from_static("EOF");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
const refalrts::RefalIdentifier ident_TAlternative = refalrts::ident_from_static("TAlternative");
const refalrts::RefalIdentifier ident_TDot = refalrts::ident_from_static("TDot");
const refalrts::RefalIdentifier ident_TEOF = refalrts::ident_from_static("TEOF");
const refalrts::RefalIdentifier ident_TEquals = refalrts::ident_from_static("TEquals");
const refalrts::RefalIdentifier ident_TError = refalrts::ident_from_static("TError");
const refalrts::RefalIdentifier ident_TErrorFlush = refalrts::ident_from_static("TErrorFlush");
const refalrts::RefalIdentifier ident_TFlush = refalrts::ident_from_static("TFlush");
const refalrts::RefalIdentifier ident_TLiteral = refalrts::ident_from_static("TLiteral");
const refalrts::RefalIdentifier ident_TName = refalrts::ident_from_static("TName");
const refalrts::RefalIdentifier ident_TNamedFlush = refalrts::ident_from_static("TNamedFlush");
const refalrts::RefalIdentifier ident_TNewLine = refalrts::ident_from_static("TNewLine");
const refalrts::RefalIdentifier ident_TPunctuation = refalrts::ident_from_static("TPunctuation");
const refalrts::RefalIdentifier ident_TSetName = refalrts::ident_from_static("TSetName");
const refalrts::RefalIdentifier ident_TUnexpectedChar = refalrts::ident_from_static("TUnexpectedChar");
const refalrts::RefalIdentifier ident_TokenError = refalrts::ident_from_static("TokenError");
static refalrts::ExternalReference ref_EscapeString("EscapeString", 0U, 0U);
#define str_EscapeString refalrts::RefalFuncName("EscapeString", 0U, 0U)
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
#define str_Fetch refalrts::RefalFuncName("Fetch", 0U, 0U)
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
#define str_Seq refalrts::RefalFuncName("Seq", 0U, 0U)
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
#define str_Map refalrts::RefalFuncName("Map", 0U, 0U)
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
#define str_MapReduce refalrts::RefalFuncName("MapReduce", 0U, 0U)
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
#define str_Inc refalrts::RefalFuncName("Inc", 0U, 0U)
static refalrts::ExternalReference ref_IntFromStr("IntFromStr", 0U, 0U);
#define str_IntFromStr refalrts::RefalFuncName("IntFromStr", 0U, 0U)
static refalrts::ExternalReference ref_Chr("Chr", 0U, 0U);
#define str_Chr refalrts::RefalFuncName("Chr", 0U, 0U)
static refalrts::ExternalReference ref_DFA_TextFromToken("DFA-TextFromToken", 0U, 0U);
static refalrts::ExternalReference ref_gen_DFA_Tokens_L1("DFA-Tokens\\1", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_gen_DFA_Tokens_L2("DFA-Tokens\\2", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_gen_DFA_Tokens_L3("DFA-Tokens\\3", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_DFA_Tokens("DFA-Tokens", 0U, 0U);
static refalrts::ExternalReference ref_LoTokens("LoTokens", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_gen_FilterTokens_L1("FilterTokens\\1", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_FilterTokens("FilterTokens", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_gen_Unescape_S6L1("Unescape$6\\1", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_Unescape("Unescape", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_Root("Root", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_SetName("SetName", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_Flush("Flush", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_Literal("Literal", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_Name("Name", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_ErrorFlush("ErrorFlush", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_FlushName("FlushName", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_Literal_Escape("Literal-Escape", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_Literal_Quote("Literal-Quote", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_FlushNameTail("FlushNameTail", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_Literal_DecCode("Literal-DecCode", 2065463025U, 228192413U);

static refalrts::FnResult func_DFA_TextFromToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & DFA-TextFromToken/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # TSetName e.idx
    // </0 & DFA-TextFromToken/4 # TSetName/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  ident_TSetName, context[5] ) )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'e'/4 HalfReuse: 't'/5 }" n"/6 Tile{ HalfReuse: 'a'/1 }"me "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], " n", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "me ", 3 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TLiteral e.idx
    // </0 & DFA-TextFromToken/4 # TLiteral/5 e.Text#1/2 >/1
    if( ! refalrts::ident_term(  ident_TLiteral, context[5] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"literal "/6 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeString/5 AsIs: e.Text#1/2 AsIs: >/1 } '\''/8 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "literal ", 8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], '\'' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\'' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], ref_EscapeString.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TName e.idx
    // </0 & DFA-TextFromToken/4 # TName/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  ident_TName, context[5] ) )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TNamedFlush e.idx
    // </0 & DFA-TextFromToken/4 # TNamedFlush/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  ident_TNamedFlush, context[5] ) )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 }"ed"/6 Tile{ HalfReuse: ' '/1 }"flush "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "ed", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "flush ", 6 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TEquals
    // </0 & DFA-TextFromToken/4 # TEquals/5 >/1
    if( ! refalrts::ident_term(  ident_TEquals, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '='/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_char( context[5], '=' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TDot
    // </0 & DFA-TextFromToken/4 # TDot/5 >/1
    if( ! refalrts::ident_term(  ident_TDot, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '.'/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_char( context[5], '.' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TAlternative
    // </0 & DFA-TextFromToken/4 # TAlternative/5 >/1
    if( ! refalrts::ident_term(  ident_TAlternative, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '|'/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_char( context[5], '|' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TFlush
    // </0 & DFA-TextFromToken/4 # TFlush/5 >/1
    if( ! refalrts::ident_term(  ident_TFlush, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TErrorFlush e.idx
    // </0 & DFA-TextFromToken/4 # TErrorFlush/5 e.Text#1/2 >/1
    if( ! refalrts::ident_term(  ident_TErrorFlush, context[5] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"error flus"/6 Tile{ HalfReuse: 'h'/0 HalfReuse: ' '/4 HalfReuse: '\"'/5 AsIs: e.Text#1/2 HalfReuse: '\"'/1 ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "error flus", 10 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'h' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[5], '\"' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # TEOF
  // </0 & DFA-TextFromToken/4 # TEOF/5 >/1
  if( ! refalrts::ident_term(  ident_TEOF, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 }"of file"/6 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "of file", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], 'n' );
  refalrts::reinit_char( context[5], 'd' );
  refalrts::reinit_char( context[1], ' ' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_DFA_TextFromToken(func_DFA_TextFromToken, refalrts::RefalFuncName("DFA-TextFromToken", 0U, 0U));

static refalrts::FnResult func_gen_DFA_Tokens_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & DFA-Tokens\1/4 (/7 e.Line#2/5 )/8 >/1
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
  // closed e.Line#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DFA-Tokens\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char( context[1], '\n' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_DFA_Tokens_L1(func_gen_DFA_Tokens_L1, refalrts::RefalFuncName("DFA-Tokens\\1", 2065463025U, 228192413U));

static refalrts::FnResult func_gen_DFA_Tokens_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: s.$ ( e.$ )
  //GLOBAL GEN: s.$ ( s.$ e.$ )
  // </0 & DFA-Tokens\2/4 s.idx#0/9 (/7 s.idxVB#0/10 e.idxVBV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBV#0 as range 5
  do {
    // s.idx ( # TNewLine )
    // </0 & DFA-Tokens\2/4 s.LineNumber#2/9 (/7 # TNewLine/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TNewLine, context[10] ) )
      continue;
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # TNewLine/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNumber#2/9 HalfReuse: >/7 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Inc.ref.function );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( s.idx e.idx )
  // </0 & DFA-Tokens\2/4 s.LineNumber#2/9 (/7 s.TokName#2/10 e.Content#2/5 )/8 >/1
  // closed e.Content#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DFA-Tokens\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber#2/9 AsIs: (/7 AsIs: s.TokName#2/10 } Tile{ HalfReuse: s.LineNumber2 #9/8 } Tile{ AsIs: e.Content#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_DFA_Tokens_L2(func_gen_DFA_Tokens_L2, refalrts::RefalFuncName("DFA-Tokens\\2", 2065463025U, 228192413U));

static refalrts::FnResult func_gen_DFA_Tokens_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & DFA-Tokens\3/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // s.idx e.idx ( # EOF s.idx )
    // </0 & DFA-Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/2 (/8 # EOF/10 s.EOFLineNumber#2/11 )/9 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_right( context[6], context[7], context[12], context[13] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_left(  ident_EOF, context[6], context[7] );
    if( ! context[10] )
      continue;
    // closed e.Tokens#2 as range 12(2)
    if( ! refalrts::svar_left( context[11], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DFA-Tokens\3/4 s.LineNumber#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/12(2) } Tile{ AsIs: (/8 Reuse: # TEOF/10 AsIs: s.EOFLineNumber#2/11 AsIs: )/9 } Tile{ ]] }
    refalrts::update_ident( context[10], ident_TEOF );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx e.idx
  // </0 & DFA-Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/2 >/1
  // closed e.Tokens#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/2 } Tile{ HalfReuse: (/0 HalfReuse: # TEOF/4 AsIs: s.LineNumber#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_TEOF );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_DFA_Tokens_L3(func_gen_DFA_Tokens_L3, refalrts::RefalFuncName("DFA-Tokens\\3", 2065463025U, 228192413U));

static refalrts::FnResult func_DFA_Tokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DFA-Tokens/4 s.FirstLineNumber#1/5 e.Lines#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Lines#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Lines#1/2 } </6 & Seq/7 (/8 & Map/9 & DFA-Tokens\1/10 )/11 & LoTokens/12 (/13 & MapReduce/14 & DFA-Tokens\2/15 </16 & Inc/17 Tile{ AsIs: s.FirstLineNumber#1/5 } >/18 )/19 & DFA-Tokens\3/20 >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_DFA_Tokens_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_LoTokens.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_gen_DFA_Tokens_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_Inc.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_gen_DFA_Tokens_L3.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
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
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_DFA_Tokens(func_DFA_Tokens, refalrts::RefalFuncName("DFA-Tokens", 0U, 0U));

static refalrts::FnResult func_LoTokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & LoTokens/4 e.Text#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FilterTokens/4 } </5 & Root/6 (/7 )/8 Tile{ AsIs: e.Text#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_Root.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_FilterTokens.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_LoTokens(func_LoTokens, refalrts::RefalFuncName("LoTokens", 2065463025U, 228192413U));

static refalrts::FnResult func_gen_FilterTokens_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & FilterTokens\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    // ( # TNewLine '\n' )
    // </0 & FilterTokens\1/4 (/7 # TNewLine/9 '\n'/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TNewLine, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_left( '\n', context[16], context[17] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNewLine/9 HalfReuse: )/10 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[10] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TSetName e.idx ':' )
    // </0 & FilterTokens\1/4 (/7 # TSetName/9 e.SetName#2/5 ':'/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TSetName, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_right( ':', context[16], context[17] );
    if( ! context[10] )
      continue;
    // closed e.SetName#2 as range 16(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TSetName/9 AsIs: e.SetName#2/16(5) HalfReuse: )/10 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[10] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TFlush '-' )
    // </0 & FilterTokens\1/4 (/7 # TFlush/9 '-'/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TFlush, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_left( '-', context[16], context[17] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TFlush/9 HalfReuse: )/10 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[10] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TErrorFlush e.idx '\"' )
    // </0 & FilterTokens\1/4 (/7 # TErrorFlush/9 e.Message#2/5 '\"'/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TErrorFlush, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_right( '\"', context[16], context[17] );
    if( ! context[10] )
      continue;
    // closed e.Message#2 as range 16(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TErrorFlush/9 AsIs: e.Message#2/16(5) HalfReuse: )/10 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[10] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TNamedFlush e.idx )
    // </0 & FilterTokens\1/4 (/7 # TNamedFlush/9 e.FlushName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_TNamedFlush, context[9] ) )
      continue;
    // closed e.FlushName#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNamedFlush/9 AsIs: e.FlushName#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TLiteral e.idx '\'' )
    // </0 & FilterTokens\1/4 (/7 # TLiteral/9 e.Content#2/5 '\''/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TLiteral, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_right( '\'', context[16], context[17] );
    if( ! context[10] )
      continue;
    // closed e.Content#2 as range 16(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TLiteral/4 HalfReuse: </7 HalfReuse: & Unescape/9 AsIs: e.Content#2/16(5) HalfReuse: >/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TLiteral );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ref_Unescape.ref.function );
    refalrts::reinit_close_call( context[10] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TokenError e.idx )
    // </0 & FilterTokens\1/4 (/7 # TokenError/9 e.Message#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_TokenError, context[9] ) )
      continue;
    // closed e.Message#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TError/9 AsIs: e.Message#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], ident_TError );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TPunctuation '=' )
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '='/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TPunctuation, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_left( '=', context[16], context[17] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 HalfReuse: # TEquals/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[8], ident_TEquals );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TPunctuation '.' )
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '.'/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TPunctuation, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_left( '.', context[16], context[17] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 HalfReuse: # TDot/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[8], ident_TDot );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TPunctuation '|' )
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '|'/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TPunctuation, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_left( '|', context[16], context[17] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 HalfReuse: # TAlternative/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[8], ident_TAlternative );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TName e.idx )
    // </0 & FilterTokens\1/4 (/7 # TName/9 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_TName, context[9] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TName/9 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TUnexpectedChar s.idx )
    // </0 & FilterTokens\1/4 (/7 # TUnexpectedChar/9 s.Char#2/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TUnexpectedChar, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[10], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/11 # TError/12 'U'/13 Tile{ HalfReuse: 'n'/1 }"expected charac"/14 Tile{ HalfReuse: 't'/0 HalfReuse: 'e'/4 HalfReuse: 'r'/7 HalfReuse: ' '/9 AsIs: s.Char#2/10 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], ident_TError ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "expected charac", 15 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[1], 'n' );
    refalrts::reinit_char( context[0], 't' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[7], 'r' );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # TEOF )
  // </0 & FilterTokens\1/4 (/7 # TEOF/9 )/8 >/1
  if( ! refalrts::ident_term(  ident_TEOF, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TEOF/9 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_FilterTokens_L1(func_gen_FilterTokens_L1, refalrts::RefalFuncName("FilterTokens\\1", 2065463025U, 228192413U));

static refalrts::FnResult func_FilterTokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FilterTokens/4 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FilterTokens\1/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_FilterTokens_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_FilterTokens(func_FilterTokens, refalrts::RefalFuncName("FilterTokens", 2065463025U, 228192413U));

static refalrts::FnResult func_gen_Unescape_S6L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Unescape$6\1/4 # Success/5 s.Number#2/6 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  ident_Success, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Number#2/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chr/4 HalfReuse: s.Number2 #6/5 } >/7 </8 & Unescape/9 Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Unescape.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Chr.ref.function );
  refalrts::reinit_svar( context[5], context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_Unescape_S6L1(func_gen_Unescape_S6L1, refalrts::RefalFuncName("Unescape$6\\1", 2065463025U, 228192413U));

static refalrts::FnResult func_Unescape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Unescape/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // '\\n' e.idx
    // </0 & Unescape/4 '\\'/5 'n'/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'n', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\n'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\n' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\r' e.idx
    // </0 & Unescape/4 '\\'/5 'r'/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'r', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\r'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\r' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\\\' e.idx
    // </0 & Unescape/4 '\\'/5 '\\'/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\\'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\\' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\t' e.idx
    // </0 & Unescape/4 '\\'/5 't'/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 't', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\t'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\t' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\\'' e.idx
    // </0 & Unescape/4 '\\'/5 '\''/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( '\'', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\d' e.idx
    // </0 & Unescape/4 '\\'/5 'd'/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'd', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & IntFromStr/6 AsIs: e.Tail#1/9(2) AsIs: >/1 } & Unescape$6\1/7 >/8 Tile{ ]] }
    if( ! refalrts::alloc_name( context[7], ref_gen_Unescape_S6L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Fetch.ref.function );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], ref_IntFromStr.ref.function );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\'\'' e.idx
    // </0 & Unescape/4 '\''/5 '\''/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\'', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( '\'', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx
    // </0 & Unescape/4 s.Other#1/5 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_left( context[5], context[9], context[10] ) )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Other#1/5 } Tile{ AsIs: </0 AsIs: & Unescape/4 } Tile{ AsIs: e.Tail#1/9(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & Unescape/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Unescape/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Unescape(func_Unescape, refalrts::RefalFuncName("Unescape", 2065463025U, 228192413U));

static refalrts::FnResult func_Root(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Root/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) ' ' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 ' '/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( ' ', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\t' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\t'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\t', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\r' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\r'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\r', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\n' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\n', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TNewLine/10 Tile{ AsIs: e.Accum#1/5 } '\n'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], ident_TNewLine ) )
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ':' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 ':'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( ':', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetName/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_SetName.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '!' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '!'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '!', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Flush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Flush.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\'' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\'', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '=' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '='/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '=', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '='/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], ident_TPunctuation ) )
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '.' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '.'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '.', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '.'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], ident_TPunctuation ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '.' ) )
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '|' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '|'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '|', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '|'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], ident_TPunctuation ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '|' ) )
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'A' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'A', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'B', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'C', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'D', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'E', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'F', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'G', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'H', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'I', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'J', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'K', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'L', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'M', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'N', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'O', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'P', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'Q', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'R', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'S', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'T', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'U', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'V', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'W', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'X', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'Y', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'Z', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
    // closed e.Accum#1 as range 5
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[9], context[13], context[14] ) )
      continue;
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/10 # TUnexpectedChar/11 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/13(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], ident_TUnexpectedChar ) )
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
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & Root/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TEOF/7 AsIs: e.Accum#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_TEOF );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Root(func_Root, refalrts::RefalFuncName("Root", 2065463025U, 228192413U));

static refalrts::FnResult func_SetName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & SetName/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) ':' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 ':'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ':', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TSetName/4 } Tile{ AsIs: e.Accum#1/5 } ':'/10 Tile{ HalfReuse: )/7 } </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_Root.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TSetName );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '0' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '0', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '1' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '1', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '2' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '2', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '3' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '3', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '4' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '4', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '5' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '5', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '6' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '6', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '7' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '7', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '8' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '8', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '9' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '9', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'a' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'a', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'b' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'b', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'c' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'c', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'd' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'd', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'e' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'e', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'f' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'f', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'g' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'g', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'h' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'h', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'i' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'i', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'j' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'j', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'k' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'k', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'l' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'l', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'm' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'm', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'n' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'n', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'o' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'o', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'p' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'p', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'q' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'q', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'r' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'r', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 's' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 's', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 't' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 't', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'u' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'u', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'v' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'v', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'w' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'w', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'x' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'x', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'y' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'y', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'z' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'z', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'A' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'A', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'B', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'C', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'D', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'E', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'F', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'G', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'H', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'I', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'J', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'K', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'L', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'M', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'N', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'O', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'P', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Q', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'R', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'S', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'T', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'U', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'V', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'W', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'X', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Y', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Z', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '-' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '-', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '_' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '_', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx )
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.Accum#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'e'/7 }"xpected end of set name, got EO"/9 Tile{ HalfReuse: 'F'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "xpected end of set name, got EO", 31 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TokenError );
    refalrts::reinit_char( context[7], 'e' );
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & SetName/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"expected end of set name"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_TokenError ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "expected end of set name", 24 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_SetName(func_SetName, refalrts::RefalFuncName("SetName", 2065463025U, 228192413U));

static refalrts::FnResult func_Flush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Flush/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) '-' e.idx
    // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '-', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TFlush/4 } Tile{ AsIs: e.Accum#1/5 } '-'/10 Tile{ HalfReuse: )/7 } </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_Root.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TFlush );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\"' e.idx
    // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '\"'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\"', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorFlush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ErrorFlush.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '#' e.idx
    // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '#'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '#', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '#'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushName.ref.function );
    refalrts::reinit_char( context[8], '#' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Flush/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_FlushName.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Flush(func_Flush, refalrts::RefalFuncName("Flush", 2065463025U, 228192413U));

static refalrts::FnResult func_Literal(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Literal/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) '\\' e.idx
    // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\\'/9 e.Text#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = refalrts::char_left( '\\', context[15], context[16] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-Escape/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\\'/8 HalfReuse: )/9 AsIs: e.Text#1/15(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal_Escape.ref.function );
    refalrts::reinit_char( context[8], '\\' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\'' e.idx
    // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = refalrts::char_left( '\'', context[15], context[16] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-Quote/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/15(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal_Quote.ref.function );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\n' e.idx
    // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = refalrts::char_left( '\n', context[15], context[16] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of line at literal"/10 )/12 </13 & Root/14 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/15(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], "nexpected end of line at literal", 32 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_Root.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TokenError );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx )
    // </0 & Literal/4 (/7 e.Accum#1/5 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Accum#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of file at litera"/9 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "nexpected end of file at litera", 31 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TokenError );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx e.idx
  // </0 & Literal/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Any#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: s.Any1 #9/8 } )/10 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
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
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Literal(func_Literal, refalrts::RefalFuncName("Literal", 2065463025U, 228192413U));

static refalrts::FnResult func_Name(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Name/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) '0' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '0', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '1' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '1', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '2' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '2', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '3' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '3', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '4' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '4', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '5' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '5', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '6' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '6', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '7' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '7', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '8' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '8', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '9' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '9', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'a' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'a', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'b' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'b', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'c' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'c', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'd' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'd', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'e' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'e', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'f' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'f', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'g' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'g', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'h' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'h', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'i' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'i', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'j' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'j', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'k' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'k', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'l' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'l', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'm' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'm', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'n' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'n', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'o' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'o', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'p' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'p', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'q' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'q', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'r' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'r', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 's' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 's', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 't' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 't', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'u' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'u', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'v' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'v', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'w' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'w', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'x' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'x', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'y' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'y', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'z' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'z', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'A' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'A', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'B', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'C', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'D', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'E', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'F', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'G', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'H', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'I', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'J', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'K', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'L', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'M', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'N', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'O', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'P', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Q', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'R', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'S', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'T', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'U', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'V', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'W', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'X', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Y', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Z', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '-' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '-', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '_' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '_', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Name/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TName/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_TName ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
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
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Name(func_Name, refalrts::RefalFuncName("Name", 2065463025U, 228192413U));

static refalrts::FnResult func_ErrorFlush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & ErrorFlush/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) '0' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '0', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '1' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '1', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '2' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '2', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '3' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '3', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '4' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '4', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '5' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '5', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '6' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '6', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '7' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '7', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '8' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '8', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '9' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '9', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'a' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'a', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'b' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'b', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'c' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'c', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'd' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'd', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'e' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'e', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'f' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'f', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'g' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'g', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'h' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'h', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'i' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'i', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'j' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'j', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'k' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'k', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'l' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'l', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'm' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'm', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'n' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'n', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'o' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'o', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'p' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'p', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'q' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'q', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'r' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'r', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 's' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 's', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 't' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 't', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'u' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'u', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'v' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'v', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'w' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'w', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'x' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'x', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'y' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'y', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'z' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'z', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'A' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'A', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'B', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'C', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'D', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'E', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'F', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'G', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'H', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'I', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'J', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'K', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'L', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'M', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'N', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'O', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'P', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Q', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'R', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'S', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'T', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'U', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'V', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'W', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'X', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Y', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Z', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '-' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '-', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '_' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '_', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ' ' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ' '/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ' ', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ' '/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ' ' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\t' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '\t'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '\t', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\t'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '\t' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ',' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ','/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ',', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ','/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ',' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '.' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '.'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '.', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '.'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '.' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ':' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ':'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ':', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ':'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ':' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ';' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ';'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ';', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ';'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '(' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '('/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '(', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '('/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '(' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ')' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ')'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ')', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ')'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ')' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '{' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '{'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '{', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '{'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '{' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '}' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '}'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '}', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '}'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '}' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '[' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '['/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '[', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '['/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '[' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ']' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ']'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ']', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ']'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ']' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '*' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '*'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '*', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '*'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '*' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '&' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '&'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '&', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '&'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '&' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '!' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '!'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '!', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '!'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '!' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '@' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '@'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '@', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '@'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '@' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '#' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '#'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '#', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '#'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '#' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '$' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '$'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '$'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '$' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '%' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '%'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '%', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '%'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '%' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '^' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '^'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '^', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '^'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '^' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '=' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '='/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '=', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '='/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '=' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '+' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '+'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '+', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '+'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '+' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '/' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '/'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '/', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '/'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '/' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\"' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '\"'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '\"', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TErrorFlush/4 } Tile{ AsIs: e.Accum#1/5 } '\"'/10 Tile{ HalfReuse: )/7 } </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_Root.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TErrorFlush );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected error text or double quote"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_TokenError ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "Expected error text or double quote", 35 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_ErrorFlush(func_ErrorFlush, refalrts::RefalFuncName("ErrorFlush", 2065463025U, 228192413U));

static refalrts::FnResult func_FlushName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & FlushName/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) 'A' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'A', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'B', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'C', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'D', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'E', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'F', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'G', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'H', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'I', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'J', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'K', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'L', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'M', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'N', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'O', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'P', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Q', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'R', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'S', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'T', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'U', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'V', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'W', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'X', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Y', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Z', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected flush name"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_TokenError ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "Expected flush name", 19 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_FlushName(func_FlushName, refalrts::RefalFuncName("FlushName", 2065463025U, 228192413U));

static refalrts::FnResult func_Literal_Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Literal-Escape/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) 'n' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'n', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'r' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'r', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\\' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 '\\'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '\\', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\\'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '\\' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 't' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 't', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\'' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '\'', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'd' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'd', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-DecCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal_DecCode.ref.function );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Unexpected escaped character"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_TokenError ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "Unexpected escaped character", 28 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Literal_Escape(func_Literal_Escape, refalrts::RefalFuncName("Literal-Escape", 2065463025U, 228192413U));

static refalrts::FnResult func_Literal_Quote(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Literal-Quote/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) '\'' e.idx
    // </0 & Literal-Quote/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '\'', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Literal-Quote/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TLiteral/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_TLiteral ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
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
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Literal_Quote(func_Literal_Quote, refalrts::RefalFuncName("Literal-Quote", 2065463025U, 228192413U));

static refalrts::FnResult func_FlushNameTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & FlushNameTail/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) '0' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '0', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '1' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '1', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '2' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '2', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '3' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '3', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '4' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '4', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '5' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '5', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '6' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '6', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '7' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '7', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '8' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '8', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '9' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '9', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'a' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'a', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'b' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'b', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'c' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'c', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'd' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'd', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'e' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'e', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'f' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'f', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'g' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'g', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'h' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'h', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'i' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'i', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'j' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'j', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'k' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'k', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'l' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'l', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'm' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'm', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'n' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'n', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'o' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'o', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'p' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'p', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'q' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'q', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'r' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'r', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 's' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 's', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 't' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 't', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'u' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'u', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'v' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'v', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'w' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'w', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'x' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'x', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'y' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'y', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'z' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'z', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'A' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'A', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'B', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'C', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'D', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'E', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'F', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'G', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'H', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'I', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'J', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'K', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'L', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'M', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'N', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'O', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'P', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Q', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'R', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'S', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'T', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'U', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'V', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'W', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'X', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Y', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Z', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '-' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '-', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '_' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '_', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TNamedFlush/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_TNamedFlush ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
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
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_FlushNameTail(func_FlushNameTail, refalrts::RefalFuncName("FlushNameTail", 2065463025U, 228192413U));

static refalrts::FnResult func_Literal_DecCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Literal-DecCode/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) '0' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '0', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '1' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '1', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '2' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '2', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '3' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '3', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '4' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '4', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '5' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '5', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '6' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '6', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '7' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '7', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '8' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '8', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '9' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '9', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected digits"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], ident_TokenError ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "Expected digits", 15 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Root.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of fil"/9 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_chars( context[9], context[10], "nexpected end of fil", 20 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_TokenError );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Literal_DecCode(func_Literal_DecCode, refalrts::RefalFuncName("Literal-DecCode", 2065463025U, 228192413U));


//End of file
