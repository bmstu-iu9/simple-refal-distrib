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
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_IntFromStr("IntFromStr", 0U, 0U);
static refalrts::ExternalReference ref_Chr("Chr", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_TextFromToken("DFA-TextFromToken", 0U, 0U);
static refalrts::ExternalReference ref_gen_DFAm_Tokens_L1("DFA-Tokens\\1", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_gen_DFAm_Tokens_L2("DFA-Tokens\\2", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_gen_DFAm_Tokens_L3("DFA-Tokens\\3", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_DFAm_Tokens("DFA-Tokens", 0U, 0U);
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
static refalrts::ExternalReference ref_Literalm_Escape("Literal-Escape", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_Literalm_Quote("Literal-Quote", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_FlushNameTail("FlushNameTail", 2065463025U, 228192413U);
static refalrts::ExternalReference ref_Literalm_DecCode("Literal-DecCode", 2065463025U, 228192413U);

static refalrts::FnResult func_DFAm_TextFromToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // </0 & DFA-TextFromToken/4 # TSetName/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_TSetName, context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'e'/4 HalfReuse: 't'/5 }" n"/8 Tile{ HalfReuse: 'a'/1 }"me "/10 Tile{ AsIs: e.Name#1/6 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[8], context[9], " n", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], "me ", 3 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TLiteral e.idx
    // </0 & DFA-TextFromToken/4 # TLiteral/5 e.Text#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_TLiteral, context[5] ) )
      continue;
    // closed e.Text#1 as range 6
    //DEBUG: e.Text#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"literal "/8 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeString/5 AsIs: e.Text#1/6 AsIs: >/1 } '\''/10 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[8], context[9], "literal ", 8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], '\'' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\'' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], ref_EscapeString.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TName e.idx
    // </0 & DFA-TextFromToken/4 # TName/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_TName, context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 } Tile{ HalfReuse: 'e'/1 } ' '/8 Tile{ AsIs: e.Name#1/6 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[8], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TNamedFlush e.idx
    // </0 & DFA-TextFromToken/4 # TNamedFlush/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_TNamedFlush, context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 }"ed"/8 Tile{ HalfReuse: ' '/1 }"flush "/10 Tile{ AsIs: e.Name#1/6 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[8], context[9], "ed", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], "flush ", 6 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TEquals
    // </0 & DFA-TextFromToken/4 # TEquals/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_TEquals, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
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
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_TDot, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
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
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_TAlternative, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
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
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_TFlush, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'f'/0 HalfReuse: 'l'/4 HalfReuse: 'u'/5 HalfReuse: 's'/1 } 'h'/8 Tile{ ]] }
    if( ! refalrts::alloc_char( context[8], 'h' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'f' );
    refalrts::reinit_char( context[4], 'l' );
    refalrts::reinit_char( context[5], 'u' );
    refalrts::reinit_char( context[1], 's' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TErrorFlush e.idx
    // </0 & DFA-TextFromToken/4 # TErrorFlush/5 e.Text#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_TErrorFlush, context[5] ) )
      continue;
    // closed e.Text#1 as range 6
    //DEBUG: e.Text#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"error flus"/8 Tile{ HalfReuse: 'h'/0 HalfReuse: ' '/4 HalfReuse: '\"'/5 AsIs: e.Text#1/6 HalfReuse: '\"'/1 ]] }
    if( ! refalrts::alloc_chars( context[8], context[9], "error flus", 10 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'h' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[5], '\"' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # TEOF
  // </0 & DFA-TextFromToken/4 # TEOF/5 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_TEOF, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 }"of file"/8 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[8], context[9], "of file", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], 'n' );
  refalrts::reinit_char( context[5], 'd' );
  refalrts::reinit_char( context[1], ' ' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DFAm_TextFromToken("DFA-TextFromToken", 0U, 0U, func_DFAm_TextFromToken);

static refalrts::FnResult func_gen_DFAm_Tokens_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
  //DEBUG: e.Line#2: 5

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

static refalrts::NativeReference nat_ref_gen_DFAm_Tokens_L1("DFA-Tokens\\1", 2065463025U, 228192413U, func_gen_DFAm_Tokens_L1);

static refalrts::FnResult func_gen_DFAm_Tokens_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term(  ident_TNewLine, context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: s.LineNumber#2: 9

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
  // </0 & DFA-Tokens\2/4 s.LineNumber#2/9 (/7 s.TokName#2/10 e.Content#2/11 )/8 >/1
  context[11] = context[5];
  context[12] = context[6];
  // closed e.Content#2 as range 11
  //DEBUG: s.LineNumber#2: 9
  //DEBUG: s.TokName#2: 10
  //DEBUG: e.Content#2: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DFA-Tokens\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber#2/9 AsIs: (/7 AsIs: s.TokName#2/10 } Tile{ HalfReuse: s.LineNumber2 #9/8 } Tile{ AsIs: e.Content#2/11 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Tokens_L2("DFA-Tokens\\2", 2065463025U, 228192413U, func_gen_DFAm_Tokens_L2);

static refalrts::FnResult func_gen_DFAm_Tokens_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // </0 & DFA-Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/6 (/10 # EOF/12 s.EOFLineNumber#2/13 )/11 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_right( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = refalrts::ident_left(  ident_EOF, context[8], context[9] );
    if( ! context[12] )
      continue;
    // closed e.Tokens#2 as range 6
    if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //DEBUG: s.LineNumber#2: 5
    //DEBUG: e.Tokens#2: 6
    //DEBUG: s.EOFLineNumber#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DFA-Tokens\3/4 s.LineNumber#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/6 } Tile{ AsIs: (/10 Reuse: # TEOF/12 AsIs: s.EOFLineNumber#2/13 AsIs: )/11 } Tile{ ]] }
    refalrts::update_ident( context[12], ident_TEOF );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx e.idx
  // </0 & DFA-Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  // closed e.Tokens#2 as range 6
  //DEBUG: s.LineNumber#2: 5
  //DEBUG: e.Tokens#2: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/6 } Tile{ HalfReuse: (/0 HalfReuse: # TEOF/4 AsIs: s.LineNumber#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_TEOF );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Tokens_L3("DFA-Tokens\\3", 2065463025U, 228192413U, func_gen_DFAm_Tokens_L3);

static refalrts::FnResult func_DFAm_Tokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
  //DEBUG: s.FirstLineNumber#1: 5
  //DEBUG: e.Lines#1: 2

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
  if( ! refalrts::alloc_name( context[10], ref_gen_DFAm_Tokens_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_LoTokens.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_gen_DFAm_Tokens_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_Inc.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_gen_DFAm_Tokens_L3.ref.function ) )
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

static refalrts::NativeReference nat_ref_DFAm_Tokens("DFA-Tokens", 0U, 0U, func_DFAm_Tokens);

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
  //DEBUG: e.Text#1: 2

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

static refalrts::NativeReference nat_ref_LoTokens("LoTokens", 2065463025U, 228192413U, func_LoTokens);

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
    // </0 & FilterTokens\1/4 (/7 # TNewLine/9 '\n'/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TNewLine, context[9] ) )
      continue;
    context[12] = refalrts::char_left( '\n', context[10], context[11] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNewLine/9 HalfReuse: )/12 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[12] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TSetName e.idx ':' )
    // </0 & FilterTokens\1/4 (/7 # TSetName/9 e.SetName#2/10 ':'/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TSetName, context[9] ) )
      continue;
    context[12] = refalrts::char_right( ':', context[10], context[11] );
    if( ! context[12] )
      continue;
    // closed e.SetName#2 as range 10
    //DEBUG: e.SetName#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TSetName/9 AsIs: e.SetName#2/10 HalfReuse: )/12 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[12] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TFlush '-' )
    // </0 & FilterTokens\1/4 (/7 # TFlush/9 '-'/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TFlush, context[9] ) )
      continue;
    context[12] = refalrts::char_left( '-', context[10], context[11] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TFlush/9 HalfReuse: )/12 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[12] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TErrorFlush e.idx '\"' )
    // </0 & FilterTokens\1/4 (/7 # TErrorFlush/9 e.Message#2/10 '\"'/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TErrorFlush, context[9] ) )
      continue;
    context[12] = refalrts::char_right( '\"', context[10], context[11] );
    if( ! context[12] )
      continue;
    // closed e.Message#2 as range 10
    //DEBUG: e.Message#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TErrorFlush/9 AsIs: e.Message#2/10 HalfReuse: )/12 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[12] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TNamedFlush e.idx )
    // </0 & FilterTokens\1/4 (/7 # TNamedFlush/9 e.FlushName#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TNamedFlush, context[9] ) )
      continue;
    // closed e.FlushName#2 as range 10
    //DEBUG: e.FlushName#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNamedFlush/9 AsIs: e.FlushName#2/10 AsIs: )/8 } Tile{ ]] }
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
    // </0 & FilterTokens\1/4 (/7 # TLiteral/9 e.Content#2/10 '\''/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TLiteral, context[9] ) )
      continue;
    context[12] = refalrts::char_right( '\'', context[10], context[11] );
    if( ! context[12] )
      continue;
    // closed e.Content#2 as range 10
    //DEBUG: e.Content#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TLiteral/4 HalfReuse: </7 HalfReuse: & Unescape/9 AsIs: e.Content#2/10 HalfReuse: >/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TLiteral );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ref_Unescape.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( context[12] );
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
    // </0 & FilterTokens\1/4 (/7 # TokenError/9 e.Message#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TokenError, context[9] ) )
      continue;
    // closed e.Message#2 as range 10
    //DEBUG: e.Message#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TError/9 AsIs: e.Message#2/10 AsIs: )/8 } Tile{ ]] }
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
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '='/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TPunctuation, context[9] ) )
      continue;
    context[12] = refalrts::char_left( '=', context[10], context[11] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TEquals/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[8], ident_TEquals );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TPunctuation '.' )
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '.'/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TPunctuation, context[9] ) )
      continue;
    context[12] = refalrts::char_left( '.', context[10], context[11] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TDot/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[8], ident_TDot );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TPunctuation '|' )
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '|'/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TPunctuation, context[9] ) )
      continue;
    context[12] = refalrts::char_left( '|', context[10], context[11] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TAlternative/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[8], ident_TAlternative );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TName e.idx )
    // </0 & FilterTokens\1/4 (/7 # TName/9 e.Name#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TName, context[9] ) )
      continue;
    // closed e.Name#2 as range 10
    //DEBUG: e.Name#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TName/9 AsIs: e.Name#2/10 AsIs: )/8 } Tile{ ]] }
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
    // </0 & FilterTokens\1/4 (/7 # TUnexpectedChar/9 s.Char#2/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TUnexpectedChar, context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Char#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/13 # TError/14 'U'/15 Tile{ HalfReuse: 'n'/1 }"expected charac"/16 Tile{ HalfReuse: 't'/0 HalfReuse: 'e'/4 HalfReuse: 'r'/7 HalfReuse: ' '/9 AsIs: s.Char#2/12 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], ident_TError ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "expected charac", 15 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[1], 'n' );
    refalrts::reinit_char( context[0], 't' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[7], 'r' );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::link_brackets( context[13], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[13], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # TEOF )
  // </0 & FilterTokens\1/4 (/7 # TEOF/9 )/8 >/1
  context[10] = context[5];
  context[11] = context[6];
  if( ! refalrts::ident_term(  ident_TEOF, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[10], context[11] ) )
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

static refalrts::NativeReference nat_ref_gen_FilterTokens_L1("FilterTokens\\1", 2065463025U, 228192413U, func_gen_FilterTokens_L1);

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
  //DEBUG: e.Tokens#1: 2

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

static refalrts::NativeReference nat_ref_FilterTokens("FilterTokens", 2065463025U, 228192413U, func_FilterTokens);

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
  //DEBUG: s.Number#2: 6
  //DEBUG: e.Tail#2: 2

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

static refalrts::NativeReference nat_ref_gen_Unescape_S6L1("Unescape$6\\1", 2065463025U, 228192413U, func_gen_Unescape_S6L1);

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
    // </0 & Unescape/4 '\\'/7 'n'/8 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '\\', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'n', context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\n'/4 HalfReuse: </7 HalfReuse: & Unescape/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\n' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\r' e.idx
    // </0 & Unescape/4 '\\'/7 'r'/8 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '\\', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'r', context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\r'/4 HalfReuse: </7 HalfReuse: & Unescape/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\r' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\\\' e.idx
    // </0 & Unescape/4 '\\'/7 '\\'/8 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '\\', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( '\\', context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\\'/4 HalfReuse: </7 HalfReuse: & Unescape/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\\' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\t' e.idx
    // </0 & Unescape/4 '\\'/7 't'/8 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '\\', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 't', context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\t'/4 HalfReuse: </7 HalfReuse: & Unescape/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\t' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\\'' e.idx
    // </0 & Unescape/4 '\\'/7 '\''/8 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '\\', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( '\'', context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & Unescape/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\d' e.idx
    // </0 & Unescape/4 '\\'/7 'd'/8 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '\\', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'd', context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & IntFromStr/8 AsIs: e.Tail#1/5 AsIs: >/1 } & Unescape$6\1/9 >/10 Tile{ ]] }
    if( ! refalrts::alloc_name( context[9], ref_gen_Unescape_S6L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Fetch.ref.function );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ref_IntFromStr.ref.function );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\'\'' e.idx
    // </0 & Unescape/4 '\''/7 '\''/8 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '\'', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( '\'', context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & Unescape/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ref_Unescape.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx
    // </0 & Unescape/4 s.Other#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: s.Other#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Other#1/7 } Tile{ AsIs: </0 AsIs: & Unescape/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & Unescape/4 >/1
  context[5] = context[2];
  context[6] = context[3];
  if( ! refalrts::empty_seq( context[5], context[6] ) )
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

static refalrts::NativeReference nat_ref_Unescape("Unescape", 2065463025U, 228192413U, func_Unescape);

static refalrts::FnResult func_Root(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 ' '/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( ' ', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/9 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\t' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 '\t'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\t', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/9 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\r' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 '\r'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\r', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/9 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\n' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 '\n'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\n', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TNewLine/14 Tile{ AsIs: e.Accum#1/9 } '\n'/15 )/16 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[14], ident_TNewLine ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], '\n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ':' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 ':'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( ':', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetName/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_SetName.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '!' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 '!'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '!', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Flush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Flush.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\'' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 '\''/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\'', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '=' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 '='/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '=', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/14 Tile{ AsIs: e.Accum#1/9 } '='/15 )/16 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[14], ident_TPunctuation ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '.' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 '.'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '.', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/14 Tile{ AsIs: e.Accum#1/9 } '.'/15 )/16 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[14], ident_TPunctuation ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '|' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 '|'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '|', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/14 Tile{ AsIs: e.Accum#1/9 } '|'/15 )/16 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[14], ident_TPunctuation ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], '|' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'A' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'A'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'A', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'B'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'B', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'C'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'C', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'D'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'D', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'E'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'E', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'F'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'F', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'G'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'G', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'H'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'H', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'I'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'I', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'J'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'J', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'K'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'K', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'L'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'L', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'M'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'M', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'N'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'N', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'O'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'O', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'P'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'P', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'Q'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Q', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'R'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'R', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'S'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'S', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'T'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'T', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'U'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'U', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'V'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'V', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'W'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'W', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'X'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'X', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'Y'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Y', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 'Z'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Z', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Name.ref.function );
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx e.idx
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 s.Any#1/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Accum#1 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: s.Any#1: 13
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/14 # TUnexpectedChar/15 Tile{ AsIs: e.Accum#1/9 } Tile{ AsIs: s.Any#1/13 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } )/16 Tile{ AsIs: e.Text#1/11 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[15], ident_TUnexpectedChar ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[14], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & Root/4 (/7 e.Accum#1/9 )/8 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 9
  //DEBUG: e.Accum#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TEOF/7 AsIs: e.Accum#1/9 AsIs: )/8 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_Root("Root", 2065463025U, 228192413U, func_Root);

static refalrts::FnResult func_SetName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 ':'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( ':', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TSetName/4 } Tile{ AsIs: e.Accum#1/9 } ':'/14 Tile{ HalfReuse: )/7 } </15 & Root/16 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[14], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_Root.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TSetName );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '0' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '0'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '0', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '1' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '1'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '1', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '2' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '2'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '2', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '3' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '3'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '3', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '4' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '4'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '4', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '5' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '5'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '5', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '6' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '6'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '6', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '7' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '7'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '7', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '8' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '8'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '8', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '9' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '9'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '9', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'a' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'a'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'a', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'b' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'b'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'b', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'c' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'c'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'c', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'd' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'd'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'd', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'e' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'e'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'e', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'f' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'f'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'f', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'g' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'g'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'g', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'g'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'h' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'h'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'h', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'h'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'i' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'i'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'i', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'i'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'j' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'j'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'j', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'j'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'k' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'k'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'k', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'k'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'l' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'l'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'l', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'l'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'm' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'm'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'm', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'm'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'n' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'n'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'n', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'o' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'o'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'o', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'o'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'p' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'p'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'p', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'p'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'q' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'q'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'q', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'q'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'r' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'r'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'r', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 's' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 's'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 's', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 's'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 't' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 't'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 't', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'u' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'u'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'u', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'u'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'v' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'v'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'v', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'v'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'w' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'w'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'w', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'w'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'x' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'x'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'x', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'x'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'y' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'y'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'y', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'y'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'z' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'z'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'z', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'z'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'A' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'A'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'A', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'B'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'B', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'C'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'C', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'D'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'D', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'E'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'E', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'F'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'F', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'G'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'G', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'H'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'H', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'I'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'I', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'J'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'J', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'K'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'K', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'L'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'L', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'M'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'M', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'N'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'N', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'O'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'O', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'P'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'P', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'Q'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Q', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'R'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'R', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'S'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'S', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'T'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'T', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'U'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'U', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'V'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'V', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'W'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'W', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'X'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'X', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'Y'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Y', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 'Z'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Z', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '-' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '-'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '-', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '_' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 '_'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '_', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx )
    // </0 & SetName/4 (/7 e.Accum#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.Accum#1 as range 9
    //DEBUG: e.Accum#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'e'/7 }"xpected end of set name, got EO"/13 Tile{ HalfReuse: 'F'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[13], context[14], "xpected end of set name, got EO", 31 ) )
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
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & SetName/4 (/7 e.Accum#1/9 )/8 e.Text#1/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Accum#1 as range 9
  // closed e.Text#1 as range 11
  //DEBUG: e.Accum#1: 9
  //DEBUG: e.Text#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 # TokenError/14"expected end of set name"/15 )/17 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/11 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], ident_TokenError ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "expected end of set name", 24 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetName("SetName", 2065463025U, 228192413U, func_SetName);

static refalrts::FnResult func_Flush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
    // </0 & Flush/4 (/7 e.Accum#1/9 )/8 '-'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '-', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TFlush/4 } Tile{ AsIs: e.Accum#1/9 } '-'/14 Tile{ HalfReuse: )/7 } </15 & Root/16 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[14], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_Root.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TFlush );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\"' e.idx
    // </0 & Flush/4 (/7 e.Accum#1/9 )/8 '\"'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\"', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorFlush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ErrorFlush.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '#' e.idx
    // </0 & Flush/4 (/7 e.Accum#1/9 )/8 '#'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '#', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '#'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushName.ref.function );
    refalrts::reinit_char( context[8], '#' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Flush/4 (/7 e.Accum#1/9 )/8 e.Text#1/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Accum#1 as range 9
  // closed e.Text#1 as range 11
  //DEBUG: e.Accum#1: 9
  //DEBUG: e.Text#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum#1/9 AsIs: )/8 AsIs: e.Text#1/11 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_FlushName.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flush("Flush", 2065463025U, 228192413U, func_Flush);

static refalrts::FnResult func_Literal(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
    // </0 & Literal/4 (/7 e.Accum#1/9 )/8 '\\'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\\', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-Escape/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '\\'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literalm_Escape.ref.function );
    refalrts::reinit_char( context[8], '\\' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\'' e.idx
    // </0 & Literal/4 (/7 e.Accum#1/9 )/8 '\''/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\'', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-Quote/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '\''/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literalm_Quote.ref.function );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\n' e.idx
    // </0 & Literal/4 (/7 e.Accum#1/9 )/8 '\n'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\n', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of line at literal"/14 )/16 </17 & Root/18 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[14], context[15], "nexpected end of line at literal", 32 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ref_Root.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TokenError );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[18] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx )
    // </0 & Literal/4 (/7 e.Accum#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.Accum#1 as range 9
    //DEBUG: e.Accum#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of file at litera"/13 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[13], context[14], "nexpected end of file at litera", 31 ) )
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
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx e.idx
  // </0 & Literal/4 (/7 e.Accum#1/9 )/8 s.Any#1/13 e.Text#1/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Accum#1 as range 9
  if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 11
  //DEBUG: e.Accum#1: 9
  //DEBUG: s.Any#1: 13
  //DEBUG: e.Text#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Any#1/13 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: s.Any1 #13/8 } )/14 Tile{ AsIs: e.Text#1/11 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[8], context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literal("Literal", 2065463025U, 228192413U, func_Literal);

static refalrts::FnResult func_Name(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '0'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '0', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '1' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '1'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '1', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '2' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '2'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '2', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '3' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '3'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '3', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '4' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '4'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '4', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '5' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '5'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '5', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '6' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '6'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '6', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '7' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '7'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '7', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '8' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '8'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '8', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '9' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '9'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '9', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'a' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'a'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'a', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'b' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'b'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'b', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'c' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'c'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'c', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'd' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'd'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'd', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'e' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'e'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'e', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'f' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'f'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'f', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'g' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'g'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'g', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'g'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'h' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'h'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'h', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'h'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'i' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'i'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'i', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'i'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'j' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'j'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'j', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'j'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'k' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'k'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'k', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'k'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'l' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'l'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'l', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'l'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'm' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'm'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'm', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'm'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'n' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'n'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'n', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'o' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'o'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'o', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'o'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'p' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'p'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'p', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'p'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'q' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'q'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'q', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'q'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'r' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'r'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'r', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 's' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 's'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 's', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 's'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 't' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 't'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 't', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'u' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'u'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'u', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'u'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'v' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'v'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'v', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'v'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'w' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'w'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'w', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'w'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'x' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'x'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'x', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'x'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'y' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'y'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'y', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'y'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'z' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'z'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'z', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'z'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'A' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'A'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'A', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'B'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'B', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'C'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'C', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'D'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'D', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'E'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'E', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'F'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'F', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'G'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'G', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'H'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'H', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'I'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'I', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'J'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'J', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'K'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'K', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'L'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'L', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'M'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'M', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'N'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'N', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'O'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'O', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'P'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'P', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'Q'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Q', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'R'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'R', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'S'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'S', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'T'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'T', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'U'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'U', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'V'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'V', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'W'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'W', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'X'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'X', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'Y'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Y', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 'Z'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Z', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '-' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '-'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '-', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '_' e.idx
    // </0 & Name/4 (/7 e.Accum#1/9 )/8 '_'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '_', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Name/4 (/7 e.Accum#1/9 )/8 e.Text#1/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Accum#1 as range 9
  // closed e.Text#1 as range 11
  //DEBUG: e.Accum#1: 9
  //DEBUG: e.Text#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 # TName/14 Tile{ AsIs: e.Accum#1/9 } )/15 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/11 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], ident_TName ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Name("Name", 2065463025U, 228192413U, func_Name);

static refalrts::FnResult func_ErrorFlush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '0'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '0', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '1' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '1'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '1', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '2' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '2'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '2', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '3' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '3'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '3', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '4' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '4'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '4', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '5' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '5'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '5', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '6' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '6'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '6', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '7' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '7'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '7', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '8' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '8'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '8', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '9' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '9'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '9', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'a' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'a'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'a', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'b' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'b'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'b', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'c' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'c'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'c', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'd' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'd'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'd', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'e' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'e'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'e', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'f' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'f'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'f', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'g' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'g'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'g', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'g'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'h' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'h'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'h', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'h'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'i' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'i'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'i', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'i'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'j' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'j'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'j', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'j'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'k' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'k'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'k', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'k'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'l' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'l'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'l', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'l'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'm' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'm'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'm', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'm'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'n' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'n'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'n', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'o' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'o'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'o', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'o'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'p' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'p'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'p', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'p'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'q' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'q'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'q', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'q'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'r' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'r'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'r', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 's' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 's'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 's', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 's'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 't' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 't'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 't', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'u' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'u'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'u', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'u'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'v' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'v'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'v', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'v'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'w' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'w'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'w', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'w'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'x' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'x'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'x', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'x'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'y' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'y'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'y', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'y'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'z' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'z'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'z', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'z'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'A' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'A'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'A', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'B'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'B', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'C'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'C', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'D'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'D', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'E'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'E', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'F'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'F', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'G'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'G', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'H'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'H', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'I'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'I', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'J'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'J', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'K'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'K', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'L'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'L', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'M'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'M', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'N'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'N', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'O'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'O', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'P'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'P', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'Q'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Q', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'R'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'R', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'S'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'S', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'T'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'T', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'U'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'U', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'V'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'V', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'W'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'W', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'X'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'X', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'Y'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Y', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 'Z'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Z', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '-' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '-'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '-', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '_' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '_'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '_', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ' ' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 ' '/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( ' ', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: ' '/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ' ' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\t' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '\t'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\t', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '\t'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '\t' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ',' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 ','/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( ',', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: ','/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ',' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '.' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '.'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '.', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '.'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '.' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ':' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 ':'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( ':', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: ':'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ':' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ';' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 ';'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( ';', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: ';'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '(' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '('/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '(', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '('/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '(' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ')' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 ')'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( ')', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: ')'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ')' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '{' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '{'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '{', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '{'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '{' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '}' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '}'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '}', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '}'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '}' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '[' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '['/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '[', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '['/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '[' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ']' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 ']'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( ']', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: ']'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ']' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '*' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '*'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '*', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '*'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '*' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '&' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '&'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '&', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '&'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '&' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '!' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '!'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '!', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '!'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '!' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '@' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '@'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '@', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '@'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '@' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '#' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '#'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '#', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '#'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '#' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '$' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '$'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '$', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '$'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '$' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '%' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '%'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '%', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '%'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '%' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '^' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '^'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '^', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '^'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '^' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '=' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '='/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '=', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '='/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '=' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '+' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '+'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '+', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '+'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '+' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '/' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '/'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '/', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '/'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '/' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\"' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 '\"'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\"', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TErrorFlush/4 } Tile{ AsIs: e.Accum#1/9 } '\"'/14 Tile{ HalfReuse: )/7 } </15 & Root/16 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[14], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_Root.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TErrorFlush );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & ErrorFlush/4 (/7 e.Accum#1/9 )/8 e.Text#1/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Accum#1 as range 9
  // closed e.Text#1 as range 11
  //DEBUG: e.Accum#1: 9
  //DEBUG: e.Text#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 # TokenError/14"Expected error text or double quote"/15 )/17 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/11 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], ident_TokenError ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "Expected error text or double quote", 35 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ErrorFlush("ErrorFlush", 2065463025U, 228192413U, func_ErrorFlush);

static refalrts::FnResult func_FlushName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'A'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'A', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'B'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'B', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'C'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'C', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'D'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'D', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'E'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'E', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'F'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'F', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'G'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'G', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'H'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'H', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'I'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'I', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'J'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'J', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'K'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'K', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'L'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'L', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'M'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'M', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'N'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'N', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'O'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'O', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'P'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'P', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'Q'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Q', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'R'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'R', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'S'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'S', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'T'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'T', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'U'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'U', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'V'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'V', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'W'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'W', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'X'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'X', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'Y'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Y', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 'Z'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Z', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref.function );
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & FlushName/4 (/7 e.Accum#1/9 )/8 e.Text#1/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Accum#1 as range 9
  // closed e.Text#1 as range 11
  //DEBUG: e.Accum#1: 9
  //DEBUG: e.Text#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 # TokenError/14"Expected flush name"/15 )/17 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/11 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], ident_TokenError ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "Expected flush name", 19 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlushName("FlushName", 2065463025U, 228192413U, func_FlushName);

static refalrts::FnResult func_Literalm_Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & Literal-Escape/4 (/7 e.Accum#1/9 )/8 'n'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'n', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'r' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/9 )/8 'r'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'r', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\\' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/9 )/8 '\\'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\\', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '\\'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '\\' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 't' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/9 )/8 't'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 't', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\'' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/9 )/8 '\''/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\'', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '\''/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'd' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/9 )/8 'd'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'd', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-DecCode/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literalm_DecCode.ref.function );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Literal-Escape/4 (/7 e.Accum#1/9 )/8 e.Text#1/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Accum#1 as range 9
  // closed e.Text#1 as range 11
  //DEBUG: e.Accum#1: 9
  //DEBUG: e.Text#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 # TokenError/14"Unexpected escaped character"/15 )/17 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/11 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], ident_TokenError ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "Unexpected escaped character", 28 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literalm_Escape("Literal-Escape", 2065463025U, 228192413U, func_Literalm_Escape);

static refalrts::FnResult func_Literalm_Quote(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    // </0 & Literal-Quote/4 (/7 e.Accum#1/9 )/8 '\''/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\'', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '\''/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Literal-Quote/4 (/7 e.Accum#1/9 )/8 e.Text#1/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Accum#1 as range 9
  // closed e.Text#1 as range 11
  //DEBUG: e.Accum#1: 9
  //DEBUG: e.Text#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 # TLiteral/14 Tile{ AsIs: e.Accum#1/9 } )/15 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/11 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], ident_TLiteral ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literalm_Quote("Literal-Quote", 2065463025U, 228192413U, func_Literalm_Quote);

static refalrts::FnResult func_FlushNameTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '0'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '0', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '1' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '1'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '1', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '2' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '2'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '2', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '3' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '3'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '3', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '4' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '4'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '4', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '5' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '5'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '5', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '6' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '6'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '6', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '7' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '7'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '7', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '8' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '8'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '8', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '9' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '9'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '9', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'a' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'a'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'a', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'b' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'b'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'b', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'c' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'c'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'c', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'd' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'd'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'd', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'e' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'e'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'e', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'f' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'f'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'f', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'g' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'g'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'g', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'g'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'h' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'h'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'h', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'h'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'i' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'i'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'i', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'i'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'j' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'j'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'j', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'j'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'k' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'k'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'k', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'k'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'l' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'l'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'l', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'l'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'm' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'm'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'm', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'm'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'n' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'n'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'n', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'o' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'o'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'o', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'o'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'p' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'p'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'p', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'p'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'q' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'q'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'q', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'q'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'r' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'r'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'r', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 's' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 's'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 's', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 's'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 't' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 't'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 't', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'u' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'u'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'u', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'u'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'v' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'v'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'v', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'v'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'w' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'w'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'w', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'w'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'x' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'x'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'x', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'x'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'y' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'y'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'y', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'y'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'z' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'z'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'z', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'z'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'A' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'A'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'A', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'B' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'B'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'B', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'C' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'C'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'C', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'D' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'D'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'D', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'E' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'E'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'E', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'F' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'F'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'F', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'G' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'G'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'G', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'H' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'H'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'H', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'I' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'I'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'I', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'J' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'J'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'J', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'K' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'K'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'K', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'L' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'L'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'L', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'M' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'M'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'M', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'N' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'N'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'N', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'O' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'O'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'O', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'P' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'P'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'P', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Q' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'Q'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Q', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'R' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'R'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'R', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'S' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'S'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'S', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'T' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'T'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'T', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'U' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'U'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'U', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'V' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'V'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'V', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'W' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'W'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'W', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'X' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'X'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'X', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Y' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'Y'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Y', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) 'Z' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 'Z'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( 'Z', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '-' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '-'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '-', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '_' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 '_'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '_', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & FlushNameTail/4 (/7 e.Accum#1/9 )/8 e.Text#1/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Accum#1 as range 9
  // closed e.Text#1 as range 11
  //DEBUG: e.Accum#1: 9
  //DEBUG: e.Text#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 # TNamedFlush/14 Tile{ AsIs: e.Accum#1/9 } )/15 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/11 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], ident_TNamedFlush ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlushNameTail("FlushNameTail", 2065463025U, 228192413U, func_FlushNameTail);

static refalrts::FnResult func_Literalm_DecCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 '0'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '0', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '1' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 '1'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '1', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '2' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 '2'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '2', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '3' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 '3'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '3', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '4' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 '4'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '4', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '5' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 '5'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '5', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '6' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 '6'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '6', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '7' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 '7'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '7', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '8' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 '8'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '8', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '9' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 '9'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '9', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref.function );
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/13 # TokenError/14"Expected digits"/15 )/17 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], ident_TokenError ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], "Expected digits", 15 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Root.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[13], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & Literal-DecCode/4 (/7 e.Accum#1/9 )/8 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 9
  //DEBUG: e.Accum#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of fil"/13 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_chars( context[13], context[14], "nexpected end of fil", 20 ) )
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
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literalm_DecCode("Literal-DecCode", 2065463025U, 228192413U, func_Literalm_DecCode);


//End of file
