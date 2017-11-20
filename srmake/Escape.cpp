// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_BadEscapeCode = refalrts::ident_from_static("BadEscapeCode");
const refalrts::RefalIdentifier ident_BadEscapeSymbol = refalrts::ident_from_static("BadEscapeSymbol");
const refalrts::RefalIdentifier ident_EOLAfterSlash = refalrts::ident_from_static("EOLAfterSlash");
const refalrts::RefalIdentifier ident_Fail = refalrts::ident_from_static("Fail");
const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_Ord("Ord", 0U, 0U);
static refalrts::ExternalReference ref_Compare("Compare", 0U, 0U);
static refalrts::ExternalReference ref_Chr("Chr", 0U, 0U);
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Reduce("Reduce", 0U, 0U);
static refalrts::ExternalReference ref_OctDigit("OctDigit", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_gen_EscapeChar_S7L1("EscapeChar$7\\1", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_EscapeChar("EscapeChar", 0U, 0U);
static refalrts::ExternalReference ref_EscapeString("EscapeString", 0U, 0U);
static refalrts::ExternalReference ref_gen_CharFromNum_L1("CharFromNum\\1", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_CharFromNum("CharFromNum", 0U, 0U);
static refalrts::ExternalReference ref_gen_DigitFromChar_L1("DigitFromChar\\1", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_DigitFromChar("DigitFromChar", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_UnEscapeStringm_SR("UnEscapeString-SR", 0U, 0U);
static refalrts::ExternalReference ref_OctDigits("OctDigits", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_DecDigits("DecDigits", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_HexDigits("HexDigits", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_DoUnEscapeStringm_SR("DoUnEscapeString-SR", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_DoUnEscapeStringm_SRm_Hex("DoUnEscapeString-SR-Hex", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_Prefix3("Prefix3", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_DoUnEscapeStringm_SRm_DecOct("DoUnEscapeString-SR-DecOct", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_gen_DoUnEscapeStringm_SRm_Escape_S2L1("DoUnEscapeString-SR-Escape$2\\1", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_DoUnEscapeStringm_SRm_Escape("DoUnEscapeString-SR-Escape", 1849391136U, 3091360646U);
static refalrts::ExternalReference ref_SingularEscape("SingularEscape", 1849391136U, 3091360646U);

static refalrts::FnResult func_OctDigit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & OctDigit/4 s.idx#0/5 >/1
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
    // 0
    // </0 & OctDigit/4 0/5 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 0/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '0'/1 ]] }
    refalrts::reinit_char( context[1], '0' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 1
    // </0 & OctDigit/4 1/5 >/1
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '1'/1 ]] }
    refalrts::reinit_char( context[1], '1' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 2
    // </0 & OctDigit/4 2/5 >/1
    if( ! refalrts::number_term( 2UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '2'/1 ]] }
    refalrts::reinit_char( context[1], '2' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 3
    // </0 & OctDigit/4 3/5 >/1
    if( ! refalrts::number_term( 3UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 3/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '3'/1 ]] }
    refalrts::reinit_char( context[1], '3' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 4
    // </0 & OctDigit/4 4/5 >/1
    if( ! refalrts::number_term( 4UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 4/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '4'/1 ]] }
    refalrts::reinit_char( context[1], '4' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 5
    // </0 & OctDigit/4 5/5 >/1
    if( ! refalrts::number_term( 5UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 5/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '5'/1 ]] }
    refalrts::reinit_char( context[1], '5' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 6
    // </0 & OctDigit/4 6/5 >/1
    if( ! refalrts::number_term( 6UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 6/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '6'/1 ]] }
    refalrts::reinit_char( context[1], '6' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // 7
  // </0 & OctDigit/4 7/5 >/1
  if( ! refalrts::number_term( 7UL, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & OctDigit/4 7/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '7'/1 ]] }
  refalrts::reinit_char( context[1], '7' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OctDigit("OctDigit", 1849391136U, 3091360646U, func_OctDigit);

static refalrts::FnResult func_gen_EscapeChar_S7L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: s.$ s.$ s.$
  //GLOBAL GEN: s.$ s.$ s.$
  // </0 & EscapeChar$7\1/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  do {
    // s.idx '<' s.idx
    // </0 & EscapeChar$7\1/4 s.Other#1/5 '<'/6 s.Code#2/7 >/1
    if( ! refalrts::char_term( '<', context[6] ) )
      continue;
    //DEBUG: s.Other#1: 5
    //DEBUG: s.Code#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Other#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } '\\'/8 Tile{ AsIs: </0 Reuse: & OctDigit/4 } </9 Tile{ HalfReuse: & Div/6 AsIs: s.Code#2/7 } 64/10 >/11 >/12 </13 & OctDigit/14 </15 & Mod/16 </17 & Div/18 s.Code#2/7/19 8/20 >/21 8/22 >/23 >/24 </25 & OctDigit/26 </27 & Mod/28 s.Code#2/7/29 8/30 >/31 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[8], '\\' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[10], 64UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_OctDigit.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_Mod.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ref_Div.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[19], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[20], 8UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[22], 8UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ref_OctDigit.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], ref_Mod.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[30], 8UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_OctDigit.ref.function );
    refalrts::reinit_name( context[6], ref_Div.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[31] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx s.idx
  // </0 & EscapeChar$7\1/4 s.Other#1/5 s.Compare#2/6 s.Code#2/7 >/1
  //DEBUG: s.Other#1: 5
  //DEBUG: s.Compare#2: 6
  //DEBUG: s.Code#2: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & EscapeChar$7\1/4 s.Other#1/5 s.Compare#2/6 s.Code#2/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Other1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EscapeChar_S7L1("EscapeChar$7\\1", 1849391136U, 3091360646U, func_gen_EscapeChar_S7L1);

static refalrts::FnResult func_EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & EscapeChar/4 s.idx#0/5 >/1
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
    // '\n'
    // </0 & EscapeChar/4 '\n'/5 >/1
    if( ! refalrts::char_term( '\n', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'n'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\t'
    // </0 & EscapeChar/4 '\t'/5 >/1
    if( ! refalrts::char_term( '\t', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 't'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], 't' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\r'
    // </0 & EscapeChar/4 '\r'/5 >/1
    if( ! refalrts::char_term( '\r', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'r'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\''
    // </0 & EscapeChar/4 '\''/5 >/1
    if( ! refalrts::char_term( '\'', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\''/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\"'
    // </0 & EscapeChar/4 '\"'/5 >/1
    if( ! refalrts::char_term( '\"', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\"'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\'
    // </0 & EscapeChar/4 '\\'/5 >/1
    if( ! refalrts::char_term( '\\', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: '\\'/5 HalfReuse: '\\'/1 ]] }
    refalrts::reinit_char( context[1], '\\' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx
  // </0 & EscapeChar/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Fetch/7 </8 & Compare/9 s.Other#1/5/10 ' '/11 >/12 Tile{ AsIs: </0 Reuse: & Ord/4 AsIs: s.Other#1/5 AsIs: >/1 } </13 & @create_closure@/14 & EscapeChar$7\1/15 s.Other#1/5/16 >/17 >/18 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Compare.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_gen_EscapeChar_S7L1.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[16], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Ord.ref.function );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[18] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscapeChar("EscapeChar", 0U, 0U, func_EscapeChar);

static refalrts::FnResult func_EscapeString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & EscapeString/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & EscapeChar/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_EscapeChar.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscapeString("EscapeString", 0U, 0U, func_EscapeString);

static refalrts::FnResult func_gen_CharFromNum_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & CharFromNum\1/4 s.Base#1/5 s.Accum#2/6 s.Next#2/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  //DEBUG: s.Base#1: 5
  //DEBUG: s.Accum#2: 6
  //DEBUG: s.Next#2: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } </8 & Mul/9 Tile{ AsIs: s.Accum#2/6 } Tile{ AsIs: s.Base#1/5 } >/10 Tile{ AsIs: s.Next#2/7 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Mul.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Add.ref.function );
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
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CharFromNum_L1("CharFromNum\\1", 1849391136U, 3091360646U, func_gen_CharFromNum_L1);

static refalrts::FnResult func_CharFromNum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CharFromNum/4 s.Base#1/5 e.Chars#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars#1 as range 2
  //DEBUG: s.Base#1: 5
  //DEBUG: e.Chars#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chr/4 } </6 & Reduce/7 </8 & @create_closure@/9 & CharFromNum\1/10 Tile{ AsIs: s.Base#1/5 } >/11 0/12 </13 & Map/14 & DigitFromChar/15 Tile{ AsIs: e.Chars#1/2 } >/16 >/17 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_Reduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_CharFromNum_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[12], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_DigitFromChar.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Chr.ref.function );
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
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CharFromNum("CharFromNum", 0U, 0U, func_CharFromNum);

static refalrts::FnResult func_gen_DigitFromChar_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & DigitFromChar\1/4 s.Char#1/5 e.Assoc-B#2/6 (/12 s.Digit#2/14 e.Vars-B#2/15 s.Char#1/19 e.Vars-E#2/17 )/13 e.Assoc-E#2/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop();
  do {
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Assoc-E#2 as range 8
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[10];
      context[18] = context[11];
      if( ! refalrts::repeated_stvar_left( context[19], context[5], context[17], context[18] ) )
        continue;
      // closed e.Vars-E#2 as range 17
      //DEBUG: s.Char#1: 5
      //DEBUG: e.Assoc-B#2: 6
      //DEBUG: e.Assoc-E#2: 8
      //DEBUG: s.Digit#2: 14
      //DEBUG: e.Vars-B#2: 15
      //DEBUG: e.Vars-E#2: 17

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & DigitFromChar\1/4 s.Char#1/5 e.Assoc-B#2/6 (/12 s.Digit#2/14 e.Vars-B#2/15 s.Char#1/19 e.Vars-E#2/17 )/13 e.Assoc-E#2/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Digit2 #14/1 ]] }
      refalrts::reinit_svar( context[1], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[10], context[11] ) );
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_DigitFromChar_L1("DigitFromChar\\1", 1849391136U, 3091360646U, func_gen_DigitFromChar_L1);

static refalrts::FnResult func_DigitFromChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 80 elems
  refalrts::Iter context[80];
  refalrts::zeros( context, 80 );
  // </0 & DigitFromChar/4 s.Char#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Char#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Fetch/7 (/8 0/9 '0'/10 )/11 (/12 1/13 '1'/14 )/15 (/16 2/17 '2'/18 )/19 (/20 3/21 '3'/22 )/23 (/24 4/25 '4'/26 )/27 (/28 5/29 '5'/30 )/31 (/32 6/33 '6'/34 )/35 (/36 7/37 '7'/38 )/39 (/40 8/41 '8'/42 )/43 (/44 9/45 '9'/46 )/47 (/48 10/49"Aa"/50 )/52 (/53 11/54"Bb"/55 )/57 (/58 12/59"Cc"/60 )/62 (/63 13/64"Dd"/65 )/67 (/68 14/69"Ee"/70 )/72 (/73 15/74"Ff"/75 )/77 </78 Tile{ HalfReuse: & @create_closure@/0 Reuse: & DigitFromChar\1/4 AsIs: s.Char#1/5 AsIs: >/1 } >/79 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_Fetch.ref.function ) )
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
  if( ! refalrts::alloc_chars( context[50], context[51], "Aa", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[52] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[53] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[54], 11UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[55], context[56], "Bb", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[57] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[58] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[59], 12UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[60], context[61], "Cc", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[62] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[63] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[64], 13UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[65], context[66], "Dd", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[67] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[68] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[69], 14UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[70], context[71], "Ee", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[72] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[73] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[74], 15UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[75], context[76], "Ff", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[77] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[78] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[79] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_DigitFromChar_L1.ref.function );
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
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DigitFromChar("DigitFromChar", 1849391136U, 3091360646U, func_DigitFromChar);

static refalrts::FnResult func_UnEscapeStringm_SR(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & UnEscapeString-SR/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoUnEscapeString-SR/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_DoUnEscapeStringm_SR.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnEscapeStringm_SR("UnEscapeString-SR", 0U, 0U, func_UnEscapeStringm_SR);

static refalrts::FnResult func_OctDigits(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OctDigits/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"34567"/5 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], "34567", 5 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], '0' );
  refalrts::reinit_char( context[4], '1' );
  refalrts::reinit_char( context[1], '2' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OctDigits("OctDigits", 1849391136U, 3091360646U, func_OctDigits);

static refalrts::FnResult func_DecDigits(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & DecDigits/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"3456789"/5 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], "3456789", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], '0' );
  refalrts::reinit_char( context[4], '1' );
  refalrts::reinit_char( context[1], '2' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DecDigits("DecDigits", 1849391136U, 3091360646U, func_DecDigits);

static refalrts::FnResult func_HexDigits(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & HexDigits/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"34567AaBbCcDdEeFf"/5 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], "34567AaBbCcDdEeFf", 17 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], '0' );
  refalrts::reinit_char( context[4], '1' );
  refalrts::reinit_char( context[1], '2' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HexDigits("HexDigits", 1849391136U, 3091360646U, func_HexDigits);

static refalrts::FnResult func_DoUnEscapeStringm_SR(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & DoUnEscapeString-SR/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) '\\x' e.idx
    // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/9 )/8 '\\'/13 'x'/14 e.HexAndTail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\\', context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'x', context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Scanned#1 as range 9
    // closed e.HexAndTail#1 as range 11
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.HexAndTail#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-Hex/4 AsIs: (/7 AsIs: e.Scanned#1/9 AsIs: )/8 HalfReuse: (/13 HalfReuse: </14 } & HexDigits/15 >/16 )/17 (/18 )/19 Tile{ AsIs: e.HexAndTail#1/11 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[15], ref_HexDigits.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_Hex.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_open_call( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[13], context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\\X' e.idx
    // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/9 )/8 '\\'/13 'X'/14 e.HexAndTail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\\', context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'X', context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Scanned#1 as range 9
    // closed e.HexAndTail#1 as range 11
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.HexAndTail#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-Hex/4 AsIs: (/7 AsIs: e.Scanned#1/9 AsIs: )/8 HalfReuse: (/13 HalfReuse: </14 } & HexDigits/15 >/16 )/17 (/18 )/19 Tile{ AsIs: e.HexAndTail#1/11 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[15], ref_HexDigits.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_Hex.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_open_call( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[13], context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\\d' e.idx
    // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/9 )/8 '\\'/13 'd'/14 e.DecAndTail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\\', context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'd', context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Scanned#1 as range 9
    // closed e.DecAndTail#1 as range 11
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.DecAndTail#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/9 AsIs: )/8 HalfReuse: (/13 HalfReuse: 10/14 } </15 & DecDigits/16 >/17 )/18 (/19 )/20 Tile{ AsIs: e.DecAndTail#1/11 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_DecDigits.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_DecOct.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_number( context[14], 10UL );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[13], context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\\D' e.idx
    // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/9 )/8 '\\'/13 'D'/14 e.DecAndTail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\\', context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'D', context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Scanned#1 as range 9
    // closed e.DecAndTail#1 as range 11
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.DecAndTail#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/9 AsIs: )/8 HalfReuse: (/13 HalfReuse: 10/14 } </15 & DecDigits/16 >/17 )/18 (/19 )/20 Tile{ AsIs: e.DecAndTail#1/11 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_DecDigits.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_DecOct.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_number( context[14], 10UL );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[13], context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) '\\' e.idx
    // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/9 )/8 '\\'/13 e.EscapedAndTail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\\', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Scanned#1 as range 9
    // closed e.EscapedAndTail#1 as range 11
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.EscapedAndTail#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-Escape/4 AsIs: (/7 AsIs: e.Scanned#1/9 AsIs: )/8 HalfReuse: (/13 } </14 & OctDigits/15 >/16 )/17 Tile{ AsIs: e.EscapedAndTail#1/11 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ref_OctDigits.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_Escape.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx e.idx
    // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/9 )/8 s.SimpleChar#1/13 e.Tail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Scanned#1 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.Scanned#1: 9
    //DEBUG: s.SimpleChar#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.SimpleChar#1/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/9 HalfReuse: s.SimpleChar1 #13/8 } )/14 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
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
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/9 )/8 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9
  //DEBUG: e.Scanned#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & DoUnEscapeString-SR/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Success/0 } Tile{ AsIs: e.Scanned#1/9 } Tile{ ]] }
  refalrts::reinit_ident( context[0], ident_Success );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SR("DoUnEscapeString-SR", 1849391136U, 3091360646U, func_DoUnEscapeStringm_SR);

static refalrts::FnResult func_DoUnEscapeStringm_SRm_Hex(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) e.$
  // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
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
  // closed e.idxTTT#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) s.idx e.idx
    // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.Scanned#1/17 )/8 (/11 e.ValidDigits-B#1/26 s.Digit#1/30 e.ValidDigits-E#1/28 )/12 (/15 e.ScannedNumber#1/21 )/16 s.Digit#1/25 e.Tail#1/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.Scanned#1 as range 17
    // closed e.ScannedNumber#1 as range 21
    if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
      continue;
    // closed e.Tail#1 as range 23
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop();
    do {
      context[28] = context[19];
      context[29] = context[20];
      if( ! refalrts::repeated_stvar_left( context[30], context[25], context[28], context[29] ) )
        continue;
      // closed e.ValidDigits-E#1 as range 28
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.ScannedNumber#1: 21
      //DEBUG: s.Digit#1: 25
      //DEBUG: e.Tail#1: 23
      //DEBUG: e.ValidDigits-B#1: 26
      //DEBUG: e.ValidDigits-E#1: 28

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} s.Digit#1/25 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-SR-Hex/4 AsIs: (/7 AsIs: e.Scanned#1/17 AsIs: )/8 AsIs: (/11 AsIs: e.ValidDigits-B#1/26 AsIs: s.Digit#1/30 AsIs: e.ValidDigits-E#1/28 AsIs: )/12 AsIs: (/15 AsIs: e.ScannedNumber#1/21 HalfReuse: s.Digit1 #30/16 } )/31 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[16], context[30] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[31] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      refalrts::splice_to_freelist_open( context[16], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[26], context[27], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( ) e.idx
    // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.Scanned#1/17 )/8 (/11 e.ValidDigits#1/19 )/12 (/15 )/16 e.Tail#1/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.Scanned#1 as range 17
    // closed e.ValidDigits#1 as range 19
    // closed e.Tail#1 as range 23
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.ValidDigits#1: 19
    //DEBUG: e.Tail#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Scanned#1/17 )/8 (/11 e.ValidDigits#1/19 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fail/0 HalfReuse: # BadEscapeCode/4 HalfReuse: '\\'/7 } Tile{ HalfReuse: 'x'/12 HalfReuse: </15 HalfReuse: & Prefix3/16 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
    refalrts::reinit_ident( context[0], ident_Fail );
    refalrts::reinit_ident( context[4], ident_BadEscapeCode );
    refalrts::reinit_char( context[7], '\\' );
    refalrts::reinit_char( context[12], 'x' );
    refalrts::reinit_open_call( context[15] );
    refalrts::reinit_name( context[16], ref_Prefix3.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
  // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.Scanned#1/17 )/8 (/11 e.ValidDitits#1/19 )/12 (/15 e.ScannedHex#1/21 )/16 e.Tail#1/23 >/1
  context[17] = context[5];
  context[18] = context[6];
  context[19] = context[9];
  context[20] = context[10];
  context[21] = context[13];
  context[22] = context[14];
  context[23] = context[2];
  context[24] = context[3];
  // closed e.Scanned#1 as range 17
  // closed e.ValidDitits#1 as range 19
  // closed e.ScannedHex#1 as range 21
  // closed e.Tail#1 as range 23
  //DEBUG: e.Scanned#1: 17
  //DEBUG: e.ValidDitits#1: 19
  //DEBUG: e.ScannedHex#1: 21
  //DEBUG: e.Tail#1: 23

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.ValidDitits#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/17 HalfReuse: </8 HalfReuse: & CharFromNum/11 } Tile{ HalfReuse: 16/15 } Tile{ AsIs: e.ScannedHex#1/21 } Tile{ HalfReuse: >/12 } Tile{ AsIs: )/16 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoUnEscapeStringm_SR.ref.function );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[11], ref_CharFromNum.ref.function );
  refalrts::reinit_number( context[15], 16UL );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::splice_to_freelist_open( context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SRm_Hex("DoUnEscapeString-SR-Hex", 1849391136U, 3091360646U, func_DoUnEscapeStringm_SRm_Hex);

static refalrts::FnResult func_Prefix3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Prefix3/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // s.idx s.idx s.idx s.idx e.idx
    // </0 & Prefix3/4 s.1#1/7 s.2#1/8 s.3#1/9 s.4#1/10 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: s.1#1: 7
    //DEBUG: s.2#1: 8
    //DEBUG: s.3#1: 9
    //DEBUG: s.4#1: 10
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.4#1/10 e.Tail#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.1#1/7 AsIs: s.2#1/8 AsIs: s.3#1/9 } Tile{ HalfReuse: '.'/0 HalfReuse: '.'/4 } Tile{ HalfReuse: '.'/1 ]] }
    refalrts::reinit_char( context[0], '.' );
    refalrts::reinit_char( context[4], '.' );
    refalrts::reinit_char( context[1], '.' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Prefix3/4 e.ShortExpr#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.ShortExpr#1 as range 5
  //DEBUG: e.ShortExpr#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Prefix3/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ShortExpr#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Prefix3("Prefix3", 1849391136U, 3091360646U, func_Prefix3);

static refalrts::FnResult func_DoUnEscapeStringm_SRm_DecOct(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  //FAST GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
  // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/17 e.idxTBV#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
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
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTT#0 as range 2
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    // ( e.idx ) ( s.idx e.idx ) ( s.idx s.idx s.idx ) e.idx
    // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/18 )/8 (/11 s.Base#1/17 e.ValidDigits#1/20 )/12 (/15 s.D1#1/26 s.D2#1/27 s.D3#1/28 )/16 e.Tail#1/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    // closed e.Scanned#1 as range 18
    // closed e.ValidDigits#1 as range 20
    // closed e.Tail#1 as range 24
    if( ! refalrts::svar_left( context[26], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[22], context[23] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    //DEBUG: s.Base#1: 17
    //DEBUG: e.Scanned#1: 18
    //DEBUG: e.ValidDigits#1: 20
    //DEBUG: e.Tail#1: 24
    //DEBUG: s.D1#1: 26
    //DEBUG: s.D2#1: 27
    //DEBUG: s.D3#1: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.ValidDigits#1/20 )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/18 HalfReuse: </8 HalfReuse: & CharFromNum/11 AsIs: s.Base#1/17 } Tile{ AsIs: s.D1#1/26 AsIs: s.D2#1/27 AsIs: s.D3#1/28 } Tile{ HalfReuse: >/15 } Tile{ AsIs: )/16 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoUnEscapeStringm_SR.ref.function );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], ref_CharFromNum.ref.function );
    refalrts::reinit_close_call( context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    refalrts::splice_to_freelist_open( context[17], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx e.idx ) ( e.idx ) s.idx e.idx
    // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/18 )/8 (/11 s.Base#1/17 e.ValidDigits-B#1/27 s.Digit#1/31 e.ValidDigits-E#1/29 )/12 (/15 e.ScannedNumber#1/22 )/16 s.Digit#1/26 e.Tail#1/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    // closed e.Scanned#1 as range 18
    // closed e.ScannedNumber#1 as range 22
    if( ! refalrts::svar_left( context[26], context[24], context[25] ) )
      continue;
    // closed e.Tail#1 as range 24
    context[27] = 0;
    context[28] = 0;
    refalrts::start_e_loop();
    do {
      context[29] = context[20];
      context[30] = context[21];
      if( ! refalrts::repeated_stvar_left( context[31], context[26], context[29], context[30] ) )
        continue;
      // closed e.ValidDigits-E#1 as range 29
      //DEBUG: s.Base#1: 17
      //DEBUG: e.Scanned#1: 18
      //DEBUG: e.ScannedNumber#1: 22
      //DEBUG: s.Digit#1: 26
      //DEBUG: e.Tail#1: 24
      //DEBUG: e.ValidDigits-B#1: 27
      //DEBUG: e.ValidDigits-E#1: 29

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} s.Digit#1/26 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/18 AsIs: )/8 AsIs: (/11 AsIs: s.Base#1/17 AsIs: e.ValidDigits-B#1/27 AsIs: s.Digit#1/31 AsIs: e.ValidDigits-E#1/29 AsIs: )/12 AsIs: (/15 AsIs: e.ScannedNumber#1/22 HalfReuse: s.Digit1 #31/16 } )/32 Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[16], context[31] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[32] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      refalrts::splice_to_freelist_open( context[16], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[27], context[28], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx e.idx ) ( ) e.idx
    // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/18 )/8 (/11 s.Base#1/17 e.ValidDigits#1/20 )/12 (/15 )/16 e.Tail#1/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.Scanned#1 as range 18
    // closed e.ValidDigits#1 as range 20
    // closed e.Tail#1 as range 24
    //DEBUG: s.Base#1: 17
    //DEBUG: e.Scanned#1: 18
    //DEBUG: e.ValidDigits#1: 20
    //DEBUG: e.Tail#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Scanned#1/18 )/8 (/11 s.Base#1/17 e.ValidDigits#1/20 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fail/0 HalfReuse: # BadEscapeCode/4 HalfReuse: '\\'/7 } Tile{ HalfReuse: 'd'/12 HalfReuse: </15 HalfReuse: & Prefix3/16 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
    refalrts::reinit_ident( context[0], ident_Fail );
    refalrts::reinit_ident( context[4], ident_BadEscapeCode );
    refalrts::reinit_char( context[7], '\\' );
    refalrts::reinit_char( context[12], 'd' );
    refalrts::reinit_open_call( context[15] );
    refalrts::reinit_name( context[16], ref_Prefix3.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
  // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/18 )/8 (/11 s.Base#1/17 e.ValidDigits#1/20 )/12 (/15 e.ScannedNumber#1/22 )/16 e.Tail#1/24 >/1
  context[18] = context[5];
  context[19] = context[6];
  context[20] = context[9];
  context[21] = context[10];
  context[22] = context[13];
  context[23] = context[14];
  context[24] = context[2];
  context[25] = context[3];
  // closed e.Scanned#1 as range 18
  // closed e.ValidDigits#1 as range 20
  // closed e.ScannedNumber#1 as range 22
  // closed e.Tail#1 as range 24
  //DEBUG: s.Base#1: 17
  //DEBUG: e.Scanned#1: 18
  //DEBUG: e.ValidDigits#1: 20
  //DEBUG: e.ScannedNumber#1: 22
  //DEBUG: e.Tail#1: 24

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.ValidDigits#1/20 )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/18 HalfReuse: </8 HalfReuse: & CharFromNum/11 AsIs: s.Base#1/17 } Tile{ AsIs: e.ScannedNumber#1/22 } Tile{ HalfReuse: >/15 } Tile{ AsIs: )/16 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoUnEscapeStringm_SR.ref.function );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[11], ref_CharFromNum.ref.function );
  refalrts::reinit_close_call( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::splice_to_freelist_open( context[17], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SRm_DecOct("DoUnEscapeString-SR-DecOct", 1849391136U, 3091360646U, func_DoUnEscapeStringm_SRm_DecOct);

static refalrts::FnResult func_gen_DoUnEscapeStringm_SRm_Escape_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) s.$ s.$ e.$
  // </0 & DoUnEscapeString-SR-Escape$2\1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 s.idxTT#0/13 s.idxTTV#0/14 e.idxTTVV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTVV#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) s.idx # Success s.idx
    // </0 & DoUnEscapeString-SR-Escape$2\1/4 (/7 e.Scanned#1/15 )/8 (/11 e.Tail#1/17 )/12 s.Next#1/13 # Success/14 s.Char#2/21 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::ident_term(  ident_Success, context[14] ) )
      continue;
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 17
    if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    //DEBUG: s.Next#1: 13
    //DEBUG: e.Scanned#1: 15
    //DEBUG: e.Tail#1: 17
    //DEBUG: s.Char#2: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Next#1/13 # Success/14 s.Char#2/21 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/15 HalfReuse: s.Char2 #21/8 HalfReuse: )/11 AsIs: e.Tail#1/17 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoUnEscapeStringm_SR.ref.function );
    refalrts::reinit_svar( context[8], context[21] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[12], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) s.idx # Fails
  // </0 & DoUnEscapeString-SR-Escape$2\1/4 (/7 e.Scanned#1/15 )/8 (/11 e.Tail#1/17 )/12 s.Next#1/13 # Fails/14 >/1
  context[15] = context[5];
  context[16] = context[6];
  context[17] = context[9];
  context[18] = context[10];
  context[19] = context[2];
  context[20] = context[3];
  if( ! refalrts::ident_term(  ident_Fails, context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[19], context[20] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 15
  // closed e.Tail#1 as range 17
  //DEBUG: s.Next#1: 13
  //DEBUG: e.Scanned#1: 15
  //DEBUG: e.Tail#1: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.Scanned#1/15 )/8 (/11 e.Tail#1/17 )/12 s.Next#1/13 # Fails/14 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # BadEscapeSymbol/4 HalfReuse: '\\'/7 } Tile{ HalfReuse: s.Next1 #13/1 ]] }
  refalrts::reinit_ident( context[0], ident_Fails );
  refalrts::reinit_ident( context[4], ident_BadEscapeSymbol );
  refalrts::reinit_char( context[7], '\\' );
  refalrts::reinit_svar( context[1], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoUnEscapeStringm_SRm_Escape_S2L1("DoUnEscapeString-SR-Escape$2\\1", 1849391136U, 3091360646U, func_gen_DoUnEscapeStringm_SRm_Escape_S2L1);

static refalrts::FnResult func_DoUnEscapeStringm_SRm_Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
  // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTT#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) s.idx e.idx
    // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/13 )/8 (/11 e.Octs-B#1/20 s.Oct#1/24 e.Octs-E#1/22 )/12 s.Oct#1/19 e.Tail#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned#1 as range 13
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    // closed e.Tail#1 as range 17
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop();
    do {
      context[22] = context[15];
      context[23] = context[16];
      if( ! refalrts::repeated_stvar_left( context[24], context[19], context[22], context[23] ) )
        continue;
      // closed e.Octs-E#1 as range 22
      //DEBUG: e.Scanned#1: 13
      //DEBUG: s.Oct#1: 19
      //DEBUG: e.Tail#1: 17
      //DEBUG: e.Octs-B#1: 20
      //DEBUG: e.Octs-E#1: 22

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/13 AsIs: )/8 AsIs: (/11 } 8/25 Tile{ AsIs: e.Octs-B#1/20 } Tile{ AsIs: s.Oct#1/24 AsIs: e.Octs-E#1/22 AsIs: )/12 } (/26 Tile{ AsIs: s.Oct#1/19 } )/27 Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_number( context[25], 8UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_DecOct.ref.function );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[24], context[12] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) s.idx e.idx
    // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/13 )/8 (/11 e.Octs#1/15 )/12 s.Next#1/19 e.Tail#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned#1 as range 13
    // closed e.Octs#1 as range 15
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    // closed e.Tail#1 as range 17
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Octs#1: 15
    //DEBUG: s.Next#1: 19
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Octs#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 & Fetch/21 </22 & SingularEscape/23 s.Next#1/19/24 >/25 </26 Tile{ HalfReuse: & @create_closure@/0 Reuse: & DoUnEscapeString-SR-Escape$2\1/4 AsIs: (/7 AsIs: e.Scanned#1/13 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/12 AsIs: s.Next#1/19 } >/27 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], ref_SingularEscape.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], refalrts::create_closure );
    refalrts::update_name( context[4], ref_gen_DoUnEscapeStringm_SRm_Escape_S2L1.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[20], context[26] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx )
  // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/13 )/8 (/11 e.Octs#1/15 )/12 >/1
  context[13] = context[5];
  context[14] = context[6];
  context[15] = context[9];
  context[16] = context[10];
  context[17] = context[2];
  context[18] = context[3];
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 13
  // closed e.Octs#1 as range 15
  //DEBUG: e.Scanned#1: 13
  //DEBUG: e.Octs#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/13 )/8 (/11 e.Octs#1/15 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/12 HalfReuse: # EOLAfterSlash/1 ]] }
  refalrts::reinit_ident( context[12], ident_Fails );
  refalrts::reinit_ident( context[1], ident_EOLAfterSlash );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SRm_Escape("DoUnEscapeString-SR-Escape", 1849391136U, 3091360646U, func_DoUnEscapeStringm_SRm_Escape);

static refalrts::FnResult func_SingularEscape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & SingularEscape/4 s.idx#0/5 >/1
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
    // 'r'
    // </0 & SingularEscape/4 'r'/5 >/1
    if( ! refalrts::char_term( 'r', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\r'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success );
    refalrts::reinit_char( context[1], '\r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 'n'
    // </0 & SingularEscape/4 'n'/5 >/1
    if( ! refalrts::char_term( 'n', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\n'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success );
    refalrts::reinit_char( context[1], '\n' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't'
    // </0 & SingularEscape/4 't'/5 >/1
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\t'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success );
    refalrts::reinit_char( context[1], '\t' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 'a'
    // </0 & SingularEscape/4 'a'/5 >/1
    if( ! refalrts::char_term( 'a', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\007'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success );
    refalrts::reinit_char( context[1], '\007' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 'b'
    // </0 & SingularEscape/4 'b'/5 >/1
    if( ! refalrts::char_term( 'b', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\010'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success );
    refalrts::reinit_char( context[1], '\010' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 'f'
    // </0 & SingularEscape/4 'f'/5 >/1
    if( ! refalrts::char_term( 'f', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\014'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success );
    refalrts::reinit_char( context[1], '\014' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 'v'
    // </0 & SingularEscape/4 'v'/5 >/1
    if( ! refalrts::char_term( 'v', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\013'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success );
    refalrts::reinit_char( context[1], '\013' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\'
    // </0 & SingularEscape/4 '\\'/5 >/1
    if( ! refalrts::char_term( '\\', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\\'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success );
    refalrts::reinit_char( context[1], '\\' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\''
    // </0 & SingularEscape/4 '\''/5 >/1
    if( ! refalrts::char_term( '\'', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\"'
    // </0 & SingularEscape/4 '\"'/5 >/1
    if( ! refalrts::char_term( '\"', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx
  // </0 & SingularEscape/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SingularEscape/4 s.Other#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], ident_Fails );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SingularEscape("SingularEscape", 1849391136U, 3091360646U, func_SingularEscape);


//End of file
