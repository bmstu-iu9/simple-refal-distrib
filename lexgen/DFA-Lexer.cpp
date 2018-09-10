// This file automatically generated from 'DFA-Lexer.sref'
// Don't edit! Edit 'DFA-Lexer.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3951043167_4061451251
static const refalrts::IdentReference ident_EOF("EOF");
static const refalrts::IdentReference ident_Success("Success");
static const refalrts::IdentReference ident_TAlternative("TAlternative");
static const refalrts::IdentReference ident_TDot("TDot");
static const refalrts::IdentReference ident_TEOF("TEOF");
static const refalrts::IdentReference ident_TEquals("TEquals");
static const refalrts::IdentReference ident_TError("TError");
static const refalrts::IdentReference ident_TErrorFlush("TErrorFlush");
static const refalrts::IdentReference ident_TFlush("TFlush");
static const refalrts::IdentReference ident_TLiteral("TLiteral");
static const refalrts::IdentReference ident_TName("TName");
static const refalrts::IdentReference ident_TNamedFlush("TNamedFlush");
static const refalrts::IdentReference ident_TNewLine("TNewLine");
static const refalrts::IdentReference ident_TPunctuation("TPunctuation");
static const refalrts::IdentReference ident_TSetName("TSetName");
static const refalrts::IdentReference ident_TUnexpectedChar("TUnexpectedChar");
static const refalrts::IdentReference ident_TokenError("TokenError");
static refalrts::ExternalReference ref_Chr("Chr", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_TextFromToken("DFA-TextFromToken", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_Tokens("DFA-Tokens", 0U, 0U);
static refalrts::ExternalReference ref_gen_DFAm_Tokens_L1("DFA-Tokens\\1", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_gen_DFAm_Tokens_L2("DFA-Tokens\\2", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_gen_DFAm_Tokens_L3("DFA-Tokens\\3", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_ErrorFlush("ErrorFlush", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_EscapeString("EscapeString", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_FilterTokens("FilterTokens", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_gen_FilterTokens_L1("FilterTokens\\1", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_Flush("Flush", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_FlushName("FlushName", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_FlushNameTail("FlushNameTail", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_IntFromStr("IntFromStr", 0U, 0U);
static refalrts::ExternalReference ref_Literal("Literal", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_Literalm_DecCode("Literal-DecCode", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_Literalm_Escape("Literal-Escape", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_Literalm_Quote("Literal-Quote", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_LoTokens("LoTokens", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_Name("Name", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_Pipe("Pipe", 0U, 0U);
static refalrts::ExternalReference ref_Root("Root", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_SetName("SetName", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_Unescape("Unescape", 3951043167U, 4061451251U);
static refalrts::ExternalReference ref_gen_Unescape_S6L1("Unescape$6\\1", 3951043167U, 4061451251U);

static refalrts::FnResult func_DFAm_TextFromToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & DFA-TextFromToken/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DFA-TextFromToken/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DFA-TextFromToken/4 # TSetName/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  ident_TSetName.ref(vm), context[5] ) )
      continue;
    // closed e.Name#1 as range 2
    //DEBUG: e.Name#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'e'/4 HalfReuse: 't'/5 }" n"/6 Tile{ HalfReuse: 'a'/1 }"me "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( vm, context[6], context[7], " n", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[8], context[9], "me ", 3 ) )
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
  refalrts::stop_sentence(vm);

  do {
    // </0 & DFA-TextFromToken/4 # TLiteral/5 e.Text#1/2 >/1
    if( ! refalrts::ident_term(  ident_TLiteral.ref(vm), context[5] ) )
      continue;
    // closed e.Text#1 as range 2
    //DEBUG: e.Text#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"literal "/6 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeString/5 AsIs: e.Text#1/2 AsIs: >/1 } '\''/8 Tile{ ]] }
    if( ! refalrts::alloc_chars( vm, context[6], context[7], "literal ", 8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[8], '\'' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\'' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], ref_EscapeString.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DFA-TextFromToken/4 # TName/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  ident_TName.ref(vm), context[5] ) )
      continue;
    // closed e.Name#1 as range 2
    //DEBUG: e.Name#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 } Tile{ HalfReuse: 'e'/1 } ' '/6 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_char( vm, context[6], ' ' ) )
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
  refalrts::stop_sentence(vm);

  do {
    // </0 & DFA-TextFromToken/4 # TNamedFlush/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  ident_TNamedFlush.ref(vm), context[5] ) )
      continue;
    // closed e.Name#1 as range 2
    //DEBUG: e.Name#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 }"ed"/6 Tile{ HalfReuse: ' '/1 }"flush "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( vm, context[6], context[7], "ed", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[8], context[9], "flush ", 6 ) )
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
  refalrts::stop_sentence(vm);

  do {
    // </0 & DFA-TextFromToken/4 s.new#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & DFA-TextFromToken/4 # TEquals/5 >/1
      if( ! refalrts::ident_term(  ident_TEquals.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '='/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char( context[4], '\"' );
      refalrts::reinit_char( context[5], '=' );
      refalrts::reinit_char( context[1], '\"' );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DFA-TextFromToken/4 # TDot/5 >/1
      if( ! refalrts::ident_term(  ident_TDot.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '.'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char( context[4], '\"' );
      refalrts::reinit_char( context[5], '.' );
      refalrts::reinit_char( context[1], '\"' );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DFA-TextFromToken/4 # TAlternative/5 >/1
      if( ! refalrts::ident_term(  ident_TAlternative.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '|'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char( context[4], '\"' );
      refalrts::reinit_char( context[5], '|' );
      refalrts::reinit_char( context[1], '\"' );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DFA-TextFromToken/4 # TFlush/5 >/1
    if( ! refalrts::ident_term(  ident_TFlush.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'f'/0 HalfReuse: 'l'/4 HalfReuse: 'u'/5 HalfReuse: 's'/1 } 'h'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( vm, context[6], 'h' ) )
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
  refalrts::stop_sentence(vm);

  do {
    // </0 & DFA-TextFromToken/4 # TErrorFlush/5 e.Text#1/2 >/1
    if( ! refalrts::ident_term(  ident_TErrorFlush.ref(vm), context[5] ) )
      continue;
    // closed e.Text#1 as range 2
    //DEBUG: e.Text#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"error flus"/6 Tile{ HalfReuse: 'h'/0 HalfReuse: ' '/4 HalfReuse: '\"'/5 AsIs: e.Text#1/2 HalfReuse: '\"'/1 ]] }
    if( ! refalrts::alloc_chars( vm, context[6], context[7], "error flus", 10 ) )
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
  refalrts::stop_sentence(vm);

  // </0 & DFA-TextFromToken/4 # TEOF/5 >/1
  if( ! refalrts::ident_term(  ident_TEOF.ref(vm), context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 }"of file"/6 Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[6], context[7], "of file", 7 ) )
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

static refalrts::NativeReference nat_ref_DFAm_TextFromToken("DFA-TextFromToken", 0U, 0U, func_DFAm_TextFromToken);


static refalrts::FnResult func_gen_DFAm_Tokens_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DFA-Tokens\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char( context[1], '\n' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Tokens_L1("DFA-Tokens\\1", 3951043167U, 4061451251U, func_gen_DFAm_Tokens_L1);


static refalrts::FnResult func_gen_DFAm_Tokens_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & DFA-Tokens\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DFA-Tokens\2/4 s.new#1/9 (/7 s.new#2/10 e.new#3/5 )/8 >/1
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
  // closed e.new#3 as range 5
  do {
    // </0 & DFA-Tokens\2/4 s.LineNumber#2/9 (/7 # TNewLine/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TNewLine.ref(vm), context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.LineNumber#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TNewLine/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNumber#2/9 HalfReuse: >/7 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Inc.ref(vm) );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DFA-Tokens\2/4 s.LineNumber#2/9 (/7 s.TokName#2/10 e.Content#2/5 )/8 >/1
  // closed e.Content#2 as range 5
  //DEBUG: s.LineNumber#2: 9
  //DEBUG: s.TokName#2: 10
  //DEBUG: e.Content#2: 5

  refalrts::reset_allocator(vm);
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
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Tokens_L2("DFA-Tokens\\2", 3951043167U, 4061451251U, func_gen_DFAm_Tokens_L2);


static refalrts::FnResult func_gen_DFAm_Tokens_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & DFA-Tokens\3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DFA-Tokens\3/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DFA-Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/6 (/10 # EOF/12 s.EOFLineNumber#2/13 )/11 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_right( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = refalrts::ident_left(  ident_EOF.ref(vm), context[8], context[9] );
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

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DFA-Tokens\3/4 s.LineNumber#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/6 } Tile{ AsIs: (/10 Reuse: # TEOF/12 AsIs: s.EOFLineNumber#2/13 AsIs: )/11 } Tile{ ]] }
    refalrts::update_ident( context[12], ident_TEOF.ref(vm) );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DFA-Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/2 >/1
  // closed e.Tokens#2 as range 2
  //DEBUG: s.LineNumber#2: 5
  //DEBUG: e.Tokens#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/2 } Tile{ HalfReuse: (/0 HalfReuse: # TEOF/4 AsIs: s.LineNumber#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_TEOF.ref(vm) );
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

static refalrts::NativeReference nat_ref_gen_DFAm_Tokens_L3("DFA-Tokens\\3", 3951043167U, 4061451251U, func_gen_DFAm_Tokens_L3);


static refalrts::FnResult func_DFAm_Tokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Lines#1/2 } </6 & Pipe/7 (/8 & Map/9 & DFA-Tokens\1/10 )/11 & LoTokens/12 (/13 & MapReduce/14 & DFA-Tokens\2/15 </16 & Inc/17 Tile{ AsIs: s.FirstLineNumber#1/5 } >/18 )/19 & DFA-Tokens\3/20 >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[7], ref_Pipe.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[10], ref_gen_DFAm_Tokens_L1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[12], ref_LoTokens.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_MapReduce.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], ref_gen_DFAm_Tokens_L2.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[17], ref_Inc.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[20], ref_gen_DFAm_Tokens_L3.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[6] );
  refalrts::link_brackets( context[13], context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
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


static refalrts::FnResult func_LoTokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FilterTokens/4 } </5 & Root/6 (/7 )/8 Tile{ AsIs: e.Text#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[6], ref_Root.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_FilterTokens.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[5] );
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

static refalrts::NativeReference nat_ref_LoTokens("LoTokens", 3951043167U, 4061451251U, func_LoTokens);


static refalrts::FnResult func_gen_FilterTokens_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & FilterTokens\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FilterTokens\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & FilterTokens\1/4 (/7 s.new#3/9 e.new#4/10 s.new#5/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_right( context[12], context[10], context[11] ) )
      continue;
    // closed e.new#4 as range 10
    do {
      // </0 & FilterTokens\1/4 (/7 # TNewLine/9 '\n'/12 )/8 >/1
      if( ! refalrts::char_term( '\n', context[12] ) )
        continue;
      if( ! refalrts::ident_term(  ident_TNewLine.ref(vm), context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNewLine/9 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket( context[12] );
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FilterTokens\1/4 (/7 # TSetName/9 e.SetName#2/10 ':'/12 )/8 >/1
      if( ! refalrts::char_term( ':', context[12] ) )
        continue;
      if( ! refalrts::ident_term(  ident_TSetName.ref(vm), context[9] ) )
        continue;
      // closed e.SetName#2 as range 10
      //DEBUG: e.SetName#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TSetName/9 AsIs: e.SetName#2/10 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket( context[12] );
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FilterTokens\1/4 (/7 # TFlush/9 '-'/12 )/8 >/1
      if( ! refalrts::char_term( '-', context[12] ) )
        continue;
      if( ! refalrts::ident_term(  ident_TFlush.ref(vm), context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TFlush/9 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket( context[12] );
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FilterTokens\1/4 (/7 # TErrorFlush/9 e.Message#2/10 '\"'/12 )/8 >/1
    if( ! refalrts::char_term( '\"', context[12] ) )
      continue;
    if( ! refalrts::ident_term(  ident_TErrorFlush.ref(vm), context[9] ) )
      continue;
    // closed e.Message#2 as range 10
    //DEBUG: e.Message#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TErrorFlush/9 AsIs: e.Message#2/10 HalfReuse: )/12 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[12] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TNamedFlush/9 e.FlushName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_TNamedFlush.ref(vm), context[9] ) )
      continue;
    // closed e.FlushName#2 as range 5
    //DEBUG: e.FlushName#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNamedFlush/9 AsIs: e.FlushName#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TLiteral/9 e.Content#2/10 '\''/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TLiteral.ref(vm), context[9] ) )
      continue;
    context[12] = refalrts::char_right( '\'', context[10], context[11] );
    if( ! context[12] )
      continue;
    // closed e.Content#2 as range 10
    //DEBUG: e.Content#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TLiteral/4 HalfReuse: </7 HalfReuse: & Unescape/9 AsIs: e.Content#2/10 HalfReuse: >/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TLiteral.ref(vm) );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ref_Unescape.ref(vm) );
    refalrts::reinit_close_call( context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TokenError/9 e.Message#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_TokenError.ref(vm), context[9] ) )
      continue;
    // closed e.Message#2 as range 5
    //DEBUG: e.Message#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TError/9 AsIs: e.Message#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], ident_TError.ref(vm) );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 s.new#3/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TPunctuation.ref(vm), context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    do {
      // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '='/12 )/8 >/1
      if( ! refalrts::char_term( '=', context[12] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TEquals/8 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[8], ident_TEquals.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[12], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '.'/12 )/8 >/1
      if( ! refalrts::char_term( '.', context[12] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TDot/8 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[8], ident_TDot.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[12], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '|'/12 )/8 >/1
    if( ! refalrts::char_term( '|', context[12] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TAlternative/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[8], ident_TAlternative.ref(vm) );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TName/9 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_TName.ref(vm), context[9] ) )
      continue;
    // closed e.Name#2 as range 5
    //DEBUG: e.Name#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TName/9 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TUnexpectedChar/9 s.Char#2/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TUnexpectedChar.ref(vm), context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Char#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/13 # TError/14 'U'/15 Tile{ HalfReuse: 'n'/1 }"expected charac"/16 Tile{ HalfReuse: 't'/0 HalfReuse: 'e'/4 HalfReuse: 'r'/7 HalfReuse: ' '/9 AsIs: s.Char#2/12 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( vm, context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[14], ident_TError.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[15], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[16], context[17], "expected charac", 15 ) )
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
  refalrts::stop_sentence(vm);

  // </0 & FilterTokens\1/4 (/7 # TEOF/9 )/8 >/1
  if( ! refalrts::ident_term(  ident_TEOF.ref(vm), context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TEOF/9 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FilterTokens_L1("FilterTokens\\1", 3951043167U, 4061451251U, func_gen_FilterTokens_L1);


static refalrts::FnResult func_FilterTokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FilterTokens\1/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref(vm) );
  refalrts::update_name( context[4], ref_gen_FilterTokens_L1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FilterTokens("FilterTokens", 3951043167U, 4061451251U, func_FilterTokens);


static refalrts::FnResult func_gen_Unescape_S6L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Unescape$6\1/4 # Success/5 s.Number#2/6 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  ident_Success.ref(vm), context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: s.Number#2: 6
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Number#2/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chr/4 HalfReuse: s.Number2 #6/5 } >/7 </8 & Unescape/9 Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], ref_Unescape.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Chr.ref(vm) );
  refalrts::reinit_svar( context[5], context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unescape_S6L1("Unescape$6\\1", 3951043167U, 4061451251U, func_gen_Unescape_S6L1);


static refalrts::FnResult func_Unescape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Unescape/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Unescape/4 s.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Unescape/4 s.new#3/7 s.new#4/10 e.new#5/8 >/1
      context[8] = context[5];
      context[9] = context[6];
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      // closed e.new#5 as range 8
      do {
        // </0 & Unescape/4 '\\'/7 s.new#6/10 e.new#7/8 >/1
        if( ! refalrts::char_term( '\\', context[7] ) )
          continue;
        // closed e.new#7 as range 8
        do {
          // </0 & Unescape/4 '\\'/7 'n'/10 e.Tail#1/8 >/1
          if( ! refalrts::char_term( 'n', context[10] ) )
            continue;
          // closed e.Tail#1 as range 8
          //DEBUG: e.Tail#1: 8

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: '\n'/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail#1/8 AsIs: >/1 ]] }
          refalrts::reinit_char( context[4], '\n' );
          refalrts::reinit_open_call( context[7] );
          refalrts::reinit_name( context[10], ref_Unescape.ref(vm) );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Unescape/4 '\\'/7 'r'/10 e.Tail#1/8 >/1
          if( ! refalrts::char_term( 'r', context[10] ) )
            continue;
          // closed e.Tail#1 as range 8
          //DEBUG: e.Tail#1: 8

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: '\r'/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail#1/8 AsIs: >/1 ]] }
          refalrts::reinit_char( context[4], '\r' );
          refalrts::reinit_open_call( context[7] );
          refalrts::reinit_name( context[10], ref_Unescape.ref(vm) );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Unescape/4 '\\'/7 '\\'/10 e.Tail#1/8 >/1
          if( ! refalrts::char_term( '\\', context[10] ) )
            continue;
          // closed e.Tail#1 as range 8
          //DEBUG: e.Tail#1: 8

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: '\\'/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail#1/8 AsIs: >/1 ]] }
          refalrts::reinit_char( context[4], '\\' );
          refalrts::reinit_open_call( context[7] );
          refalrts::reinit_name( context[10], ref_Unescape.ref(vm) );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Unescape/4 '\\'/7 't'/10 e.Tail#1/8 >/1
          if( ! refalrts::char_term( 't', context[10] ) )
            continue;
          // closed e.Tail#1 as range 8
          //DEBUG: e.Tail#1: 8

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: '\t'/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail#1/8 AsIs: >/1 ]] }
          refalrts::reinit_char( context[4], '\t' );
          refalrts::reinit_open_call( context[7] );
          refalrts::reinit_name( context[10], ref_Unescape.ref(vm) );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Unescape/4 '\\'/7 '\''/10 e.Tail#1/8 >/1
          if( ! refalrts::char_term( '\'', context[10] ) )
            continue;
          // closed e.Tail#1 as range 8
          //DEBUG: e.Tail#1: 8

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail#1/8 AsIs: >/1 ]] }
          refalrts::reinit_char( context[4], '\'' );
          refalrts::reinit_open_call( context[7] );
          refalrts::reinit_name( context[10], ref_Unescape.ref(vm) );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Unescape/4 '\\'/7 'd'/10 e.Tail#1/8 >/1
        if( ! refalrts::char_term( 'd', context[10] ) )
          continue;
        // closed e.Tail#1 as range 8
        //DEBUG: e.Tail#1: 8

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & IntFromStr/10 AsIs: e.Tail#1/8 AsIs: >/1 } & Unescape$6\1/11 >/12 Tile{ ]] }
        if( ! refalrts::alloc_name( vm, context[11], ref_gen_Unescape_S6L1.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[12] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_Fetch.ref(vm) );
        refalrts::reinit_open_call( context[7] );
        refalrts::reinit_name( context[10], ref_IntFromStr.ref(vm) );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[11], context[12] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Unescape/4 '\''/7 '\''/10 e.Tail#1/8 >/1
      if( ! refalrts::char_term( '\'', context[7] ) )
        continue;
      if( ! refalrts::char_term( '\'', context[10] ) )
        continue;
      // closed e.Tail#1 as range 8
      //DEBUG: e.Tail#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail#1/8 AsIs: >/1 ]] }
      refalrts::reinit_char( context[4], '\'' );
      refalrts::reinit_open_call( context[7] );
      refalrts::reinit_name( context[10], ref_Unescape.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Unescape/4 s.Other#1/7 e.Tail#1/5 >/1
    // closed e.Tail#1 as range 5
    //DEBUG: s.Other#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Other#1/7 } Tile{ AsIs: </0 AsIs: & Unescape/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Unescape/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Unescape/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Unescape("Unescape", 3951043167U, 4061451251U, func_Unescape);


static refalrts::FnResult func_Root(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Root/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Root/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Root/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 ' '/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ' ', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\t'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\t', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TNewLine/12 Tile{ AsIs: e.Accum#1/5 } '\n'/13 )/14 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( vm, context[12], ident_TNewLine.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[13], '\n' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 ':'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ':', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetName/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_SetName.ref(vm) );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '!'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '!', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Flush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Flush.ref(vm) );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\''/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\'', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '='/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '=', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/12 Tile{ AsIs: e.Accum#1/5 } '='/13 )/14 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( vm, context[12], ident_TPunctuation.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[13], '=' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '.'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '.', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/12 Tile{ AsIs: e.Accum#1/5 } '.'/13 )/14 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( vm, context[12], ident_TPunctuation.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[13], '.' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '|'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '|', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/12 Tile{ AsIs: e.Accum#1/5 } '|'/13 )/14 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( vm, context[12], ident_TPunctuation.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[13], '|' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'A' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'B' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'C' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'D' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'E' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'F' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'G'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'G' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'H'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'H' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'I'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'I' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'J'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'J' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'K'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'K' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'L'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'L' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'M'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'M' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'N'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'N' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'O'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'O', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'O' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'P'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'P', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'P' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'Q' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'R'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'R', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'R' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'S'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'S', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'S' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'T'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'T', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'T' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'U'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'U', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'U' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'V'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'V', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'V' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'W'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'W', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'W' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'X' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'Y' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Name.ref(vm) );
      refalrts::reinit_char( context[8], 'Z' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Root/4 (/7 e.Accum#1/5 )/8 s.Any#1/11 e.Text#1/9 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: s.Any#1: 11
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # TUnexpectedChar/13 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/11 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } )/14 Tile{ AsIs: e.Text#1/9 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( vm, context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[13], ident_TUnexpectedChar.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Root/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5
  //DEBUG: e.Accum#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TEOF/7 AsIs: e.Accum#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_TEOF.ref(vm) );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Root("Root", 3951043167U, 4061451251U, func_Root);


static refalrts::FnResult func_SetName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & SetName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetName/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & SetName/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 ':'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ':', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TSetName/4 } Tile{ AsIs: e.Accum#1/5 } ':'/12 Tile{ HalfReuse: )/7 } </13 & Root/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( vm, context[12], ':' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[14], ref_Root.ref(vm) ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_TSetName.ref(vm) );
      refalrts::reinit_close_bracket( context[7] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '0' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '1' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '2' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '3' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '4' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '5' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '6' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '7' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '8' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '9' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'a'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'a' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'b'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'b' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'c'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'c' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'd'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'd' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'e'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'e' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'f'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'f', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'f' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'g'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'g', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'g' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'h'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'h', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'h' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'i'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'i', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'i' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'j'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'j', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'j' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'k'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'k', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'k' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'l'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'l', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'l' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'm'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'm', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'm' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'n' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'o'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'o', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'o' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'p'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'p' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'q' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'r' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 's'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 's', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 's' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 't'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 't' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'u'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'u', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'u' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'v'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'v', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'v' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'w'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'w', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'w' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'x'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'x' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'y' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'z' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'A' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'B' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'C' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'D' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'E' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'F' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'G'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'G' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'H'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'H' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'I'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'I' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'J'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'J' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'K'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'K' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'L'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'L' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'M'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'M' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'N'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'N' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'O'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'O', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'O' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'P'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'P', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'P' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Q' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'R'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'R', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'R' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'S'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'S', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'S' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'T'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'T', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'T' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'U'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'U', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'U' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'V'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'V', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'V' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'W'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'W', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'W' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'X' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Y' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Z' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '-'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '-', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '-' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '_'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '_', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Accum#1 as range 5
    //DEBUG: e.Accum#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'e'/7 }"xpected end of set name, got EO"/9 Tile{ HalfReuse: 'F'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( vm, context[9], context[10], "xpected end of set name, got EO", 31 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TokenError.ref(vm) );
    refalrts::reinit_char( context[7], 'e' );
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetName/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"expected end of set name"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[10], ident_TokenError.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[11], context[12], "expected end of set name", 24 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetName("SetName", 3951043167U, 4061451251U, func_SetName);


static refalrts::FnResult func_Flush(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Flush/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Flush/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Flush/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '-'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '-', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TFlush/4 } Tile{ AsIs: e.Accum#1/5 } '-'/12 Tile{ HalfReuse: )/7 } </13 & Root/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( vm, context[12], '-' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[14], ref_Root.ref(vm) ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_TFlush.ref(vm) );
      refalrts::reinit_close_bracket( context[7] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '\"'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\"', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorFlush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_ErrorFlush.ref(vm) );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '#'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '#', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '#'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushName.ref(vm) );
    refalrts::reinit_char( context[8], '#' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flush/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_FlushName.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flush("Flush", 3951043167U, 4061451251U, func_Flush);


static refalrts::FnResult func_Literal(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Literal/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Literal/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Literal/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\\'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\\', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-Escape/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\\'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literalm_Escape.ref(vm) );
      refalrts::reinit_char( context[8], '\\' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\''/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\'', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-Quote/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literalm_Quote.ref(vm) );
      refalrts::reinit_char( context[8], '\'' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\n'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '\n', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of line at literal"/12 )/14 </15 & Root/16 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( vm, context[12], context[13], "nexpected end of line at literal", 32 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[16], ref_Root.ref(vm) ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TokenError.ref(vm) );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::link_brackets( context[0], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[16] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Literal/4 (/7 e.Accum#1/5 )/8 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Accum#1 as range 5
    //DEBUG: e.Accum#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of file at litera"/9 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( vm, context[9], context[10], "nexpected end of file at litera", 31 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TokenError.ref(vm) );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Literal/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: s.Any#1: 9
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Any#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: s.Any1 #9/8 } )/10 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literal("Literal", 3951043167U, 4061451251U, func_Literal);


static refalrts::FnResult func_Name(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Name/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Name/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Name/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '0' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '1' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '2' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '3' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '4' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '5' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '6' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '7' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '8' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '9' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'a'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'a' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'b'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'b' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'c'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'c' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'd'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'd' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'e'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'e' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'f'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'f', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'f' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'g'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'g', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'g' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'h'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'h', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'h' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'i'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'i', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'i' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'j'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'j', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'j' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'k'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'k', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'k' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'l'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'l', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'l' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'm'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'm', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'm' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'n' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'o'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'o', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'o' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'p'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'p' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'q' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'r' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 's'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 's', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 's' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 't'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 't' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'u'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'u', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'u' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'v'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'v', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'v' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'w'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'w', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'w' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'x'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'x' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'y' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'z' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'A' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'B' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'C' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'D' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'E' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'F' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'G'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'G' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'H'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'H' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'I'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'I' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'J'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'J' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'K'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'K' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'L'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'L' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'M'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'M' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'N'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'N' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'O'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'O', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'O' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'P'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'P', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'P' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Q' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'R'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'R', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'R' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'S'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'S', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'S' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'T'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'T', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'T' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'U'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'U', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'U' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'V'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'V', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'V' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'W'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'W', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'W' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'X' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Y' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Z' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '-'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '-', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '-' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '_'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '_', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Name/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TName/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[10], ident_TName.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_Name("Name", 3951043167U, 4061451251U, func_Name);


static refalrts::FnResult func_ErrorFlush(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ErrorFlush/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ErrorFlush/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ErrorFlush/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '0' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '1' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '2' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '3' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '4' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '5' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '6' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '7' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '8' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '9' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'a'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'a' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'b'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'b' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'c'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'c' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'd'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'd' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'e'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'e' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'f'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'f', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'f' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'g'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'g', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'g' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'h'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'h', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'h' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'i'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'i', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'i' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'j'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'j', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'j' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'k'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'k', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'k' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'l'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'l', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'l' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'm'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'm', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'm' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'n' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'o'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'o', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'o' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'p'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'p' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'q' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'r' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 's'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 's', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 's' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 't'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 't' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'u'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'u', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'u' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'v'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'v', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'v' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'w'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'w', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'w' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'x'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'x' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'y' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'z' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'A' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'B' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'C' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'D' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'E' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'F' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'G'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'G' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'H'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'H' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'I'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'I' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'J'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'J' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'K'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'K' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'L'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'L' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'M'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'M' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'N'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'N' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'O'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'O', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'O' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'P'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'P', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'P' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Q' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'R'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'R', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'R' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'S'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'S', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'S' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'T'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'T', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'T' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'U'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'U', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'U' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'V'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'V', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'V' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'W'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'W', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'W' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'X' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Y' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Z' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '-'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '-', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '-' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '_'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '_', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '_' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ' '/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ' ', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ' '/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], ' ' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '\t'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\t', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\t'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '\t' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ','/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ',', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ','/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], ',' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '.'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '.', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '.'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '.' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ':'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ':', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ':'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], ':' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ';'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ';', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ';'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], ';' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '('/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '(', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '('/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '(' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ')'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ')', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ')'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], ')' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '{'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '{', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '{'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '{' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '}'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '}', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '}'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '}' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '['/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '[', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '['/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '[' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ']'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ']', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ']'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], ']' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '*'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '*', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '*'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '*' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '&'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '&', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '&'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '&' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '!'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '!', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '!'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '!' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '@'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '@', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '@'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '@' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '#'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '#', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '#'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '#' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '$'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '$', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '$'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '$' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '%'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '%', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '%'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '%' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '^'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '^', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '^'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '^' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '='/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '=', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '='/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '=' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '+'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '+', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '+'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '+' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '/'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '/', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '/'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '/' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '\"'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '\"', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TErrorFlush/4 } Tile{ AsIs: e.Accum#1/5 } '\"'/12 Tile{ HalfReuse: )/7 } </13 & Root/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( vm, context[12], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[14], ref_Root.ref(vm) ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TErrorFlush.ref(vm) );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected error text or double quote"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[10], ident_TokenError.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[11], context[12], "Expected error text or double quote", 35 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ErrorFlush("ErrorFlush", 3951043167U, 4061451251U, func_ErrorFlush);


static refalrts::FnResult func_FlushName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FlushName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FlushName/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & FlushName/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'A' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'B' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'C' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'D' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'E' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'F' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'G'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'G' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'H'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'H' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'I'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'I' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'J'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'J' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'K'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'K' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'L'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'L' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'M'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'M' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'N'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'N' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'O'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'O', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'O' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'P'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'P', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'P' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'Q' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'R'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'R', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'R' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'S'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'S', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'S' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'T'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'T', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'T' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'U'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'U', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'U' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'V'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'V', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'V' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'W'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'W', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'W' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'X' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
      refalrts::reinit_char( context[8], 'Y' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Z'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( 'Z', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FlushNameTail.ref(vm) );
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected flush name"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[10], ident_TokenError.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[11], context[12], "Expected flush name", 19 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlushName("FlushName", 3951043167U, 4061451251U, func_FlushName);


static refalrts::FnResult func_Literalm_Escape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Literal-Escape/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Literal-Escape/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Literal-Escape/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], 'n' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], 'r' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 '\\'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\\', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\\'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '\\' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 't'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], 't' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 '\''/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\'', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '\'' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'd'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( 'd', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-DecCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literalm_DecCode.ref(vm) );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Unexpected escaped character"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[10], ident_TokenError.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[11], context[12], "Unexpected escaped character", 28 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literalm_Escape("Literal-Escape", 3951043167U, 4061451251U, func_Literalm_Escape);


static refalrts::FnResult func_Literalm_Quote(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Literal-Quote/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Literal-Quote/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Literal-Quote/4 (/7 e.Accum#1/5 )/8 '\''/11 e.Text#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = refalrts::char_left( '\'', context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref(vm) );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Literal-Quote/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TLiteral/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[10], ident_TLiteral.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_Literalm_Quote("Literal-Quote", 3951043167U, 4061451251U, func_Literalm_Quote);


static refalrts::FnResult func_FlushNameTail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FlushNameTail/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FlushNameTail/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & FlushNameTail/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '0' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '1' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '2' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '3' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '4' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '5' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '6' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '7' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '8' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '9' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'a'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'a' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'b'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'b' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'c'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'c' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'd'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'd' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'e'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'e' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'f'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'f', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'f' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'g'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'g', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'g' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'h'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'h', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'h' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'i'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'i', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'i' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'j'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'j', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'j' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'k'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'k', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'k' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'l'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'l', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'l' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'm'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'm', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'm' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'n' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'o'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'o', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'o' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'p'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'p' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'q' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'r' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 's'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 's', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 's' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 't'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 't' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'u'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'u', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'u' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'v'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'v', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'v' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'w'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'w', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'w' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'x'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'x' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'y' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'z' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'A' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'B' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'C' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'D' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'E' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'F' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'G'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'G' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'H'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'H' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'I'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'I' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'J'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'J' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'K'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'K' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'L'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'L' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'M'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'M' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'N'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'N' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'O'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'O', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'O' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'P'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'P', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'P' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Q' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'R'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'R', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'R' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'S'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'S', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'S' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'T'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'T', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'T' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'U'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'U', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'U' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'V'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'V', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'V' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'W'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'W', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'W' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'X' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Y' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], 'Z' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '-'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '-', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[8], '-' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '_'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '_', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TNamedFlush/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[10], ident_TNamedFlush.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Root.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_FlushNameTail("FlushNameTail", 3951043167U, 4061451251U, func_FlushNameTail);


static refalrts::FnResult func_Literalm_DecCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Literal-DecCode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Literal-DecCode/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Literal-DecCode/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '0' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '1' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '2' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '3' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '4' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '5' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '6' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '7' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Literal.ref(vm) );
      refalrts::reinit_char( context[8], '8' );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '9', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Literal.ref(vm) );
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected digits"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[10], ident_TokenError.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[11], context[12], "Expected digits", 15 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Root.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5
  //DEBUG: e.Accum#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of fil"/9 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_chars( vm, context[9], context[10], "nexpected end of fil", 20 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_TokenError.ref(vm) );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literalm_DecCode("Literal-DecCode", 3951043167U, 4061451251U, func_Literalm_DecCode);


//End of file
