// This file automatically generated from '../common/Escape.sref'
// Don't edit! Edit '../common/Escape.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2896966701_3378406771
static const refalrts::IdentReference ident_BadEscapeCode("BadEscapeCode");
static const refalrts::IdentReference ident_BadEscapeSymbol("BadEscapeSymbol");
static const refalrts::IdentReference ident_EOLAfterSlash("EOLAfterSlash");
static const refalrts::IdentReference ident_Fail("Fail");
static const refalrts::IdentReference ident_Fails("Fails");
static const refalrts::IdentReference ident_Success("Success");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_CharFromNum("CharFromNum", 0U, 0U);
static refalrts::ExternalReference ref_gen_CharFromNum_L1("CharFromNum\\1", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_Chr("Chr", 0U, 0U);
static refalrts::ExternalReference ref_DecDigits("DecDigits", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_DigitFromChar("DigitFromChar", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_gen_DigitFromChar_L1("DigitFromChar\\1", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_DoUnEscapeStringm_SR("DoUnEscapeString-SR", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_DoUnEscapeStringm_SRm_DecOct("DoUnEscapeString-SR-DecOct", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_DoUnEscapeStringm_SRm_Escape("DoUnEscapeString-SR-Escape", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_gen_DoUnEscapeStringm_SRm_Escape_S2L1("DoUnEscapeString-SR-Escape$2\\1", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_DoUnEscapeStringm_SRm_Hex("DoUnEscapeString-SR-Hex", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_EscapeChar("EscapeChar", 0U, 0U);
static refalrts::ExternalReference ref_gen_EscapeChar_S7L1("EscapeChar$7\\1", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_EscapeString("EscapeString", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_HexDigits("HexDigits", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_OctDigit("OctDigit", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_OctDigits("OctDigits", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_Ord("Ord", 0U, 0U);
static refalrts::ExternalReference ref_Prefix3("Prefix3", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_Reduce("Reduce", 0U, 0U);
static refalrts::ExternalReference ref_SingularEscape("SingularEscape", 2896966701U, 3378406771U);
static refalrts::ExternalReference ref_TermCompare("TermCompare", 0U, 0U);
static refalrts::ExternalReference ref_UnEscapeStringm_SR("UnEscapeString-SR", 0U, 0U);

static refalrts::FnResult func_OctDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & OctDigit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OctDigit/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OctDigit/4 0/5 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 0/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '0'/1 ]] }
    refalrts::reinit_char( context[1], '0' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 1/5 >/1
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '1'/1 ]] }
    refalrts::reinit_char( context[1], '1' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 2/5 >/1
    if( ! refalrts::number_term( 2UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '2'/1 ]] }
    refalrts::reinit_char( context[1], '2' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 3/5 >/1
    if( ! refalrts::number_term( 3UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 3/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '3'/1 ]] }
    refalrts::reinit_char( context[1], '3' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 4/5 >/1
    if( ! refalrts::number_term( 4UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 4/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '4'/1 ]] }
    refalrts::reinit_char( context[1], '4' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 5/5 >/1
    if( ! refalrts::number_term( 5UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 5/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '5'/1 ]] }
    refalrts::reinit_char( context[1], '5' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 6/5 >/1
    if( ! refalrts::number_term( 6UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 6/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '6'/1 ]] }
    refalrts::reinit_char( context[1], '6' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OctDigit/4 7/5 >/1
  if( ! refalrts::number_term( 7UL, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OctDigit/4 7/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '7'/1 ]] }
  refalrts::reinit_char( context[1], '7' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OctDigit("OctDigit", 2896966701U, 3378406771U, func_OctDigit);


static refalrts::FnResult func_gen_EscapeChar_S7L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & EscapeChar$7\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscapeChar$7\1/4 s.new#1/5 s.new#2/6 s.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EscapeChar$7\1/4 s.Other#1/5 '<'/6 s.Code#2/7 >/1
    if( ! refalrts::char_term( '<', context[6] ) )
      continue;
    //DEBUG: s.Other#1: 5
    //DEBUG: s.Code#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Other#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } '\\'/8 Tile{ AsIs: </0 Reuse: & OctDigit/4 } </9 Tile{ HalfReuse: & Div/6 AsIs: s.Code#2/7 } 64/10 >/11 >/12 </13 & OctDigit/14 </15 & Mod/16 </17 & Div/18 s.Code#2/7/19 8/20 >/21 8/22 >/23 >/24 </25 & OctDigit/26 </27 & Mod/28 s.Code#2/7/29 8/30 >/31 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( vm, context[8], '\\' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( vm, context[10], 64UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[14], ref_OctDigit.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[16], ref_Mod.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[18], ref_Div.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[19], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( vm, context[20], 8UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( vm, context[22], 8UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[26], ref_OctDigit.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[28], ref_Mod.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[29], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( vm, context[30], 8UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[31] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_OctDigit.ref(vm) );
    refalrts::reinit_name( context[6], ref_Div.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[31] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscapeChar$7\1/4 s.Other#1/5 s.Compare#2/6 s.Code#2/7 >/1
  //DEBUG: s.Other#1: 5
  //DEBUG: s.Compare#2: 6
  //DEBUG: s.Code#2: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EscapeChar$7\1/4 s.Other#1/5 s.Compare#2/6 s.Code#2/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Other1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EscapeChar_S7L1("EscapeChar$7\\1", 2896966701U, 3378406771U, func_gen_EscapeChar_S7L1);


static refalrts::FnResult func_EscapeChar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & EscapeChar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscapeChar/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EscapeChar/4 '\n'/5 >/1
    if( ! refalrts::char_term( '\n', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'n'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\t'/5 >/1
    if( ! refalrts::char_term( '\t', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 't'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], 't' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\r'/5 >/1
    if( ! refalrts::char_term( '\r', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'r'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\''/5 >/1
    if( ! refalrts::char_term( '\'', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\''/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\"'/5 >/1
    if( ! refalrts::char_term( '\"', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\"'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\\'/5 >/1
    if( ! refalrts::char_term( '\\', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: '\\'/5 HalfReuse: '\\'/1 ]] }
    refalrts::reinit_char( context[1], '\\' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscapeChar/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Fetch/7 </8 & TermCompare/9 s.Other#1/5/10 ' '/11 >/12 Tile{ AsIs: </0 Reuse: & Ord/4 AsIs: s.Other#1/5 AsIs: >/1 } [*]/13 & EscapeChar$7\1/14 s.Other#1/5/15 {*}/16 >/17 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[7], ref_Fetch.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], ref_TermCompare.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[11], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_gen_EscapeChar_S7L1.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[16], context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Ord.ref(vm) );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscapeChar("EscapeChar", 0U, 0U, func_EscapeChar);


static refalrts::FnResult func_EscapeString(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & EscapeChar/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref(vm) );
  refalrts::update_name( context[4], ref_EscapeChar.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscapeString("EscapeString", 0U, 0U, func_EscapeString);


static refalrts::FnResult func_gen_CharFromNum_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } </8 & Mul/9 Tile{ AsIs: s.Accum#2/6 } Tile{ AsIs: s.Base#1/5 } >/10 Tile{ AsIs: s.Next#2/7 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], ref_Mul.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Add.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
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

static refalrts::NativeReference nat_ref_gen_CharFromNum_L1("CharFromNum\\1", 2896966701U, 3378406771U, func_gen_CharFromNum_L1);


static refalrts::FnResult func_CharFromNum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chr/4 } </6 & Reduce/7 [*]/8 & CharFromNum\1/9 Tile{ AsIs: s.Base#1/5 } {*}/10 0/11 </12 & Map/13 & DigitFromChar/14 Tile{ AsIs: e.Chars#1/2 } >/15 >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[7], ref_Reduce.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], ref_gen_CharFromNum_L1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[10], context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[11], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[13], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_DigitFromChar.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Chr.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CharFromNum("CharFromNum", 0U, 0U, func_CharFromNum);


static refalrts::FnResult func_gen_DigitFromChar_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  refalrts::start_e_loop(vm);
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
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[10];
      context[18] = context[11];
      if( ! refalrts::repeated_stvar_left( vm, context[19], context[5], context[17], context[18] ) )
        continue;
      // closed e.Vars-E#2 as range 17
      //DEBUG: s.Char#1: 5
      //DEBUG: e.Assoc-B#2: 6
      //DEBUG: e.Assoc-E#2: 8
      //DEBUG: s.Digit#2: 14
      //DEBUG: e.Vars-B#2: 15
      //DEBUG: e.Vars-E#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DigitFromChar\1/4 s.Char#1/5 e.Assoc-B#2/6 (/12 s.Digit#2/14 e.Vars-B#2/15 s.Char#1/19 e.Vars-E#2/17 )/13 e.Assoc-E#2/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Digit2 #14/1 ]] }
      refalrts::reinit_svar( context[1], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[10], context[11] ) );
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_DigitFromChar_L1("DigitFromChar\\1", 2896966701U, 3378406771U, func_gen_DigitFromChar_L1);


static refalrts::FnResult func_DigitFromChar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 79 elems
  refalrts::Iter context[79];
  refalrts::zeros( context, 79 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } (/6 0/7 '0'/8 )/9 (/10 1/11 '1'/12 )/13 (/14 2/15 '2'/16 )/17 (/18 3/19 '3'/20 )/21 (/22 4/23 '4'/24 )/25 (/26 5/27 '5'/28 )/29 (/30 6/31 '6'/32 )/33 (/34 7/35 '7'/36 )/37 (/38 8/39 '8'/40 )/41 (/42 9/43 '9'/44 )/45 (/46 10/47"Aa"/48 )/50 (/51 11/52"Bb"/53 )/55 (/56 12/57"Cc"/58 )/60 (/61 13/62"Dd"/63 )/65 (/66 14/67"Ee"/68 )/70 (/71 15/72"Ff"/73 )/75 [*]/76 & DigitFromChar\1/77 Tile{ AsIs: s.Char#1/5 } {*}/78 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[7], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[8], '0' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[11], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[12], '1' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[15], 2UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[16], '2' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[19], 3UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[20], '3' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[23], 4UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[24], '4' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[27], 5UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[28], '5' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[31], 6UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[32], '6' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[35], 7UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[36], '7' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[39], 8UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[40], '8' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[43], 9UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[44], '9' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[47], 10UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[48], context[49], "Aa", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[50] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[52], 11UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[53], context[54], "Bb", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[55] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[56] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[57], 12UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[58], context[59], "Cc", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[60] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[61] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[62], 13UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[63], context[64], "Dd", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[65] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[66] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[67], 14UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[68], context[69], "Ee", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[70] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[71] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[72], 15UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[73], context[74], "Ff", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[75] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[76] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[77], ref_gen_DigitFromChar_L1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[78], context[76] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[71], context[75] );
  refalrts::link_brackets( context[66], context[70] );
  refalrts::link_brackets( context[61], context[65] );
  refalrts::link_brackets( context[56], context[60] );
  refalrts::link_brackets( context[51], context[55] );
  refalrts::link_brackets( context[46], context[50] );
  refalrts::link_brackets( context[42], context[45] );
  refalrts::link_brackets( context[38], context[41] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::link_brackets( context[30], context[33] );
  refalrts::link_brackets( context[26], context[29] );
  refalrts::link_brackets( context[22], context[25] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[10], context[13] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[78], context[78] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[77] );
  refalrts::use( res );
  refalrts::wrap_closure( context[78] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DigitFromChar("DigitFromChar", 2896966701U, 3378406771U, func_DigitFromChar);


static refalrts::FnResult func_UnEscapeStringm_SR(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoUnEscapeString-SR/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[6], ref_DoUnEscapeStringm_SR.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnEscapeStringm_SR("UnEscapeString-SR", 0U, 0U, func_UnEscapeStringm_SR);


static refalrts::FnResult func_OctDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"34567"/5 Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[5], context[6], "34567", 5 ) )
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

static refalrts::NativeReference nat_ref_OctDigits("OctDigits", 2896966701U, 3378406771U, func_OctDigits);


static refalrts::FnResult func_DecDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"3456789"/5 Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[5], context[6], "3456789", 7 ) )
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

static refalrts::NativeReference nat_ref_DecDigits("DecDigits", 2896966701U, 3378406771U, func_DecDigits);


static refalrts::FnResult func_HexDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"34567AaBbCcDdEeFf"/5 Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[5], context[6], "34567AaBbCcDdEeFf", 17 ) )
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

static refalrts::NativeReference nat_ref_HexDigits("HexDigits", 2896966701U, 3378406771U, func_HexDigits);


static refalrts::FnResult func_DoUnEscapeStringm_SR(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoUnEscapeString-SR/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-SR/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoUnEscapeString-SR/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & DoUnEscapeString-SR/4 (/7 e.new#6/5 )/8 '\\'/11 e.new#7/9 >/1
      if( ! refalrts::char_term( '\\', context[11] ) )
        continue;
      // closed e.new#6 as range 5
      // closed e.new#7 as range 9
      do {
        // </0 & DoUnEscapeString-SR/4 (/7 e.new#8/5 )/8 '\\'/11 s.new#9/14 e.new#10/12 >/1
        context[12] = context[9];
        context[13] = context[10];
        // closed e.new#8 as range 5
        if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
          continue;
        // closed e.new#10 as range 12
        do {
          // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/5 )/8 '\\'/11 'x'/14 e.HexAndTail#1/12 >/1
          if( ! refalrts::char_term( 'x', context[14] ) )
            continue;
          // closed e.Scanned#1 as range 5
          // closed e.HexAndTail#1 as range 12
          //DEBUG: e.Scanned#1: 5
          //DEBUG: e.HexAndTail#1: 12

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-Hex/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 HalfReuse: (/11 HalfReuse: </14 } & HexDigits/15 >/16 )/17 (/18 )/19 Tile{ AsIs: e.HexAndTail#1/12 } Tile{ AsIs: >/1 ]] }
          if( ! refalrts::alloc_name( vm, context[15], ref_HexDigits.ref(vm) ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_call( vm, context[16] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( vm, context[17] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( vm, context[18] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_Hex.ref(vm) );
          refalrts::reinit_open_bracket( context[11] );
          refalrts::reinit_open_call( context[14] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[18], context[19] );
          refalrts::link_brackets( context[11], context[17] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[14] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[12], context[13] );
          res = refalrts::splice_evar( res, context[15], context[19] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/5 )/8 '\\'/11 'X'/14 e.HexAndTail#1/12 >/1
          if( ! refalrts::char_term( 'X', context[14] ) )
            continue;
          // closed e.Scanned#1 as range 5
          // closed e.HexAndTail#1 as range 12
          //DEBUG: e.Scanned#1: 5
          //DEBUG: e.HexAndTail#1: 12

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-Hex/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 HalfReuse: (/11 HalfReuse: </14 } & HexDigits/15 >/16 )/17 (/18 )/19 Tile{ AsIs: e.HexAndTail#1/12 } Tile{ AsIs: >/1 ]] }
          if( ! refalrts::alloc_name( vm, context[15], ref_HexDigits.ref(vm) ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_call( vm, context[16] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( vm, context[17] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( vm, context[18] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_Hex.ref(vm) );
          refalrts::reinit_open_bracket( context[11] );
          refalrts::reinit_open_call( context[14] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[18], context[19] );
          refalrts::link_brackets( context[11], context[17] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[14] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[12], context[13] );
          res = refalrts::splice_evar( res, context[15], context[19] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/5 )/8 '\\'/11 'd'/14 e.DecAndTail#1/12 >/1
          if( ! refalrts::char_term( 'd', context[14] ) )
            continue;
          // closed e.Scanned#1 as range 5
          // closed e.DecAndTail#1 as range 12
          //DEBUG: e.Scanned#1: 5
          //DEBUG: e.DecAndTail#1: 12

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 HalfReuse: (/11 HalfReuse: 10/14 } </15 & DecDigits/16 >/17 )/18 (/19 )/20 Tile{ AsIs: e.DecAndTail#1/12 } Tile{ AsIs: >/1 ]] }
          if( ! refalrts::alloc_open_call( vm, context[15] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_name( vm, context[16], ref_DecDigits.ref(vm) ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_call( vm, context[17] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( vm, context[20] ) )
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_DecOct.ref(vm) );
          refalrts::reinit_open_bracket( context[11] );
          refalrts::reinit_number( context[14], 10UL );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::link_brackets( context[11], context[18] );
          refalrts::push_stack( vm, context[17] );
          refalrts::push_stack( vm, context[15] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[12], context[13] );
          res = refalrts::splice_evar( res, context[15], context[20] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/5 )/8 '\\'/11 'D'/14 e.DecAndTail#1/12 >/1
        if( ! refalrts::char_term( 'D', context[14] ) )
          continue;
        // closed e.Scanned#1 as range 5
        // closed e.DecAndTail#1 as range 12
        //DEBUG: e.Scanned#1: 5
        //DEBUG: e.DecAndTail#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 HalfReuse: (/11 HalfReuse: 10/14 } </15 & DecDigits/16 >/17 )/18 (/19 )/20 Tile{ AsIs: e.DecAndTail#1/12 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_open_call( vm, context[15] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[16], ref_DecDigits.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[17] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[20] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_DecOct.ref(vm) );
        refalrts::reinit_open_bracket( context[11] );
        refalrts::reinit_number( context[14], 10UL );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[11], context[18] );
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[15], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/5 )/8 '\\'/11 e.EscapedAndTail#1/9 >/1
      // closed e.Scanned#1 as range 5
      // closed e.EscapedAndTail#1 as range 9
      //DEBUG: e.Scanned#1: 5
      //DEBUG: e.EscapedAndTail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-Escape/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 HalfReuse: (/11 } </12 & OctDigits/13 >/14 )/15 Tile{ AsIs: e.EscapedAndTail#1/9 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[13], ref_OctDigits.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[15] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_Escape.ref(vm) );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[15] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/5 )/8 s.SimpleChar#1/11 e.Tail#1/9 >/1
    // closed e.Scanned#1 as range 5
    // closed e.Tail#1 as range 9
    //DEBUG: s.SimpleChar#1: 11
    //DEBUG: e.Scanned#1: 5
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.SimpleChar#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: s.SimpleChar1 #11/8 } )/12 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( vm, context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[8], context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & DoUnEscapeString-SR/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Success/0 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::reinit_ident( context[0], ident_Success.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SR("DoUnEscapeString-SR", 2896966701U, 3378406771U, func_DoUnEscapeStringm_SR);


static refalrts::FnResult func_DoUnEscapeStringm_SRm_Hex(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & DoUnEscapeString-SR-Hex/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 e.new#4/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 2
  do {
    // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.Scanned#1/5 )/8 (/11 e.ValidDigits-B#1/22 s.Digit#1/26 e.ValidDigits-E#1/24 )/12 (/15 e.ScannedNumber#1/13 )/16 s.Digit#1/21 e.Tail#1/19 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.Scanned#1 as range 5
    // closed e.ScannedNumber#1 as range 13
    if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
      continue;
    // closed e.Tail#1 as range 19
    context[22] = 0;
    context[23] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[24] = context[17];
      context[25] = context[18];
      if( ! refalrts::repeated_stvar_left( vm, context[26], context[21], context[24], context[25] ) )
        continue;
      // closed e.ValidDigits-E#1 as range 24
      //DEBUG: e.Scanned#1: 5
      //DEBUG: e.ScannedNumber#1: 13
      //DEBUG: s.Digit#1: 21
      //DEBUG: e.Tail#1: 19
      //DEBUG: e.ValidDigits-B#1: 22
      //DEBUG: e.ValidDigits-E#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Digit#1/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-SR-Hex/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.ValidDigits-B#1/22 AsIs: s.Digit#1/26 AsIs: e.ValidDigits-E#1/24 AsIs: )/12 AsIs: (/15 AsIs: e.ScannedNumber#1/13 HalfReuse: s.Digit1 #26/16 } )/27 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[27] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[16], context[26] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[27] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      refalrts::splice_to_freelist_open( vm, context[16], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[22], context[23], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.Scanned#1/5 )/8 (/11 e.ValidDigits#1/9 )/12 (/15 )/16 e.Tail#1/2 >/1
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.ValidDigits#1 as range 9
    // closed e.Tail#1 as range 2
    //DEBUG: e.Scanned#1: 5
    //DEBUG: e.ValidDigits#1: 9
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Scanned#1/5 )/8 (/11 e.ValidDigits#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fail/0 HalfReuse: # BadEscapeCode/4 HalfReuse: '\\'/7 } Tile{ HalfReuse: 'x'/12 HalfReuse: </15 HalfReuse: & Prefix3/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_ident( context[0], ident_Fail.ref(vm) );
    refalrts::reinit_ident( context[4], ident_BadEscapeCode.ref(vm) );
    refalrts::reinit_char( context[7], '\\' );
    refalrts::reinit_char( context[12], 'x' );
    refalrts::reinit_open_call( context[15] );
    refalrts::reinit_name( context[16], ref_Prefix3.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.Scanned#1/5 )/8 (/11 e.ValidDitits#1/9 )/12 (/15 e.ScannedHex#1/13 )/16 e.Tail#1/2 >/1
  // closed e.Scanned#1 as range 5
  // closed e.ValidDitits#1 as range 9
  // closed e.ScannedHex#1 as range 13
  // closed e.Tail#1 as range 2
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.ValidDitits#1: 9
  //DEBUG: e.ScannedHex#1: 13
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.ValidDitits#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: </8 HalfReuse: & CharFromNum/11 } Tile{ HalfReuse: 16/15 } Tile{ AsIs: e.ScannedHex#1/13 } Tile{ HalfReuse: >/12 } Tile{ AsIs: )/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoUnEscapeStringm_SR.ref(vm) );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[11], ref_CharFromNum.ref(vm) );
  refalrts::reinit_number( context[15], 16UL );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::splice_to_freelist_open( vm, context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SRm_Hex("DoUnEscapeString-SR-Hex", 2896966701U, 3378406771U, func_DoUnEscapeStringm_SRm_Hex);


static refalrts::FnResult func_Prefix3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Prefix3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
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

    refalrts::reset_allocator(vm);
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
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Prefix3/4 e.ShortExpr#1/2 >/1
  // closed e.ShortExpr#1 as range 2
  //DEBUG: e.ShortExpr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Prefix3/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ShortExpr#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Prefix3("Prefix3", 2896966701U, 3378406771U, func_Prefix3);


static refalrts::FnResult func_DoUnEscapeStringm_SRm_DecOct(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & DoUnEscapeString-SR-DecOct/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.new#1/5 )/8 (/11 s.new#2/17 e.new#3/9 )/12 (/15 e.new#4/13 )/16 e.new#5/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#4 as range 13
  // closed e.new#5 as range 2
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  do {
    // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/5 )/8 (/11 s.Base#1/17 e.ValidDigits#1/9 )/12 (/15 s.D1#1/20 s.D2#1/21 s.D3#1/22 )/16 e.Tail#1/2 >/1
    context[18] = context[13];
    context[19] = context[14];
    // closed e.Scanned#1 as range 5
    // closed e.ValidDigits#1 as range 9
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[20], context[18], context[19] ) )
      continue;
    if( ! refalrts::svar_left( context[21], context[18], context[19] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: s.Base#1: 17
    //DEBUG: e.Scanned#1: 5
    //DEBUG: e.ValidDigits#1: 9
    //DEBUG: e.Tail#1: 2
    //DEBUG: s.D1#1: 20
    //DEBUG: s.D2#1: 21
    //DEBUG: s.D3#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.ValidDigits#1/9 )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: </8 HalfReuse: & CharFromNum/11 AsIs: s.Base#1/17 } Tile{ AsIs: s.D1#1/20 AsIs: s.D2#1/21 AsIs: s.D3#1/22 } Tile{ HalfReuse: >/15 } Tile{ AsIs: )/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoUnEscapeStringm_SR.ref(vm) );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], ref_CharFromNum.ref(vm) );
    refalrts::reinit_close_call( context[15] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    refalrts::splice_to_freelist_open( vm, context[17], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/5 )/8 (/11 s.Base#1/17 e.ValidDigits-B#1/23 s.Digit#1/27 e.ValidDigits-E#1/25 )/12 (/15 e.ScannedNumber#1/13 )/16 s.Digit#1/22 e.Tail#1/20 >/1
    context[18] = context[9];
    context[19] = context[10];
    context[20] = context[2];
    context[21] = context[3];
    // closed e.Scanned#1 as range 5
    // closed e.ScannedNumber#1 as range 13
    if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
      continue;
    // closed e.Tail#1 as range 20
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[25] = context[18];
      context[26] = context[19];
      if( ! refalrts::repeated_stvar_left( vm, context[27], context[22], context[25], context[26] ) )
        continue;
      // closed e.ValidDigits-E#1 as range 25
      //DEBUG: s.Base#1: 17
      //DEBUG: e.Scanned#1: 5
      //DEBUG: e.ScannedNumber#1: 13
      //DEBUG: s.Digit#1: 22
      //DEBUG: e.Tail#1: 20
      //DEBUG: e.ValidDigits-B#1: 23
      //DEBUG: e.ValidDigits-E#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Digit#1/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: (/11 AsIs: s.Base#1/17 AsIs: e.ValidDigits-B#1/23 AsIs: s.Digit#1/27 AsIs: e.ValidDigits-E#1/25 AsIs: )/12 AsIs: (/15 AsIs: e.ScannedNumber#1/13 HalfReuse: s.Digit1 #27/16 } )/28 Tile{ AsIs: e.Tail#1/20 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[28] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[16], context[27] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[28] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      refalrts::splice_to_freelist_open( vm, context[16], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[23], context[24], context[18], context[19] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/5 )/8 (/11 s.Base#1/17 e.ValidDigits#1/9 )/12 (/15 )/16 e.Tail#1/2 >/1
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.ValidDigits#1 as range 9
    // closed e.Tail#1 as range 2
    //DEBUG: s.Base#1: 17
    //DEBUG: e.Scanned#1: 5
    //DEBUG: e.ValidDigits#1: 9
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Scanned#1/5 )/8 (/11 s.Base#1/17 e.ValidDigits#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fail/0 HalfReuse: # BadEscapeCode/4 HalfReuse: '\\'/7 } Tile{ HalfReuse: 'd'/12 HalfReuse: </15 HalfReuse: & Prefix3/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_ident( context[0], ident_Fail.ref(vm) );
    refalrts::reinit_ident( context[4], ident_BadEscapeCode.ref(vm) );
    refalrts::reinit_char( context[7], '\\' );
    refalrts::reinit_char( context[12], 'd' );
    refalrts::reinit_open_call( context[15] );
    refalrts::reinit_name( context[16], ref_Prefix3.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/5 )/8 (/11 s.Base#1/17 e.ValidDigits#1/9 )/12 (/15 e.ScannedNumber#1/13 )/16 e.Tail#1/2 >/1
  // closed e.Scanned#1 as range 5
  // closed e.ValidDigits#1 as range 9
  // closed e.ScannedNumber#1 as range 13
  // closed e.Tail#1 as range 2
  //DEBUG: s.Base#1: 17
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.ValidDigits#1: 9
  //DEBUG: e.ScannedNumber#1: 13
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.ValidDigits#1/9 )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: </8 HalfReuse: & CharFromNum/11 AsIs: s.Base#1/17 } Tile{ AsIs: e.ScannedNumber#1/13 } Tile{ HalfReuse: >/15 } Tile{ AsIs: )/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoUnEscapeStringm_SR.ref(vm) );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[11], ref_CharFromNum.ref(vm) );
  refalrts::reinit_close_call( context[15] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[17], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SRm_DecOct("DoUnEscapeString-SR-DecOct", 2896966701U, 3378406771U, func_DoUnEscapeStringm_SRm_DecOct);


static refalrts::FnResult func_gen_DoUnEscapeStringm_SRm_Escape_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & DoUnEscapeString-SR-Escape$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-SR-Escape$2\1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 s.new#4/14 s.new#5/13 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  if( ! refalrts::svar_right( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & DoUnEscapeString-SR-Escape$2\1/4 (/7 e.Scanned#1/5 )/8 (/11 e.Tail#1/9 )/12 s.Next#1/17 # Success/14 s.Char#2/13 >/1
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term(  ident_Success.ref(vm), context[14] ) )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Tail#1 as range 9
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: s.Char#2: 13
    //DEBUG: e.Scanned#1: 5
    //DEBUG: e.Tail#1: 9
    //DEBUG: s.Next#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Next#1/17 # Success/14 s.Char#2/13 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: s.Char2 #13/8 HalfReuse: )/11 AsIs: e.Tail#1/9 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoUnEscapeStringm_SR.ref(vm) );
    refalrts::reinit_svar( context[8], context[13] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[12], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnEscapeString-SR-Escape$2\1/4 (/7 e.Scanned#1/5 )/8 (/11 e.Tail#1/9 )/12 s.Next#1/14 # Fails/13 >/1
  if( ! refalrts::ident_term(  ident_Fails.ref(vm), context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  // closed e.Tail#1 as range 9
  //DEBUG: s.Next#1: 14
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.Tail#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Scanned#1/5 )/8 (/11 e.Tail#1/9 )/12 s.Next#1/14 # Fails/13 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # BadEscapeSymbol/4 HalfReuse: '\\'/7 } Tile{ HalfReuse: s.Next1 #14/1 ]] }
  refalrts::reinit_ident( context[0], ident_Fails.ref(vm) );
  refalrts::reinit_ident( context[4], ident_BadEscapeSymbol.ref(vm) );
  refalrts::reinit_char( context[7], '\\' );
  refalrts::reinit_svar( context[1], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoUnEscapeStringm_SRm_Escape_S2L1("DoUnEscapeString-SR-Escape$2\\1", 2896966701U, 3378406771U, func_gen_DoUnEscapeStringm_SRm_Escape_S2L1);


static refalrts::FnResult func_DoUnEscapeStringm_SRm_Escape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoUnEscapeString-SR-Escape/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.new#4/5 )/8 (/11 e.new#5/9 )/12 s.new#6/15 e.new#7/13 >/1
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#4 as range 5
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/5 )/8 (/11 e.Octs-B#1/18 s.Oct#1/22 e.Octs-E#1/20 )/12 s.Oct#1/15 e.Tail#1/13 >/1
      context[16] = context[9];
      context[17] = context[10];
      // closed e.Scanned#1 as range 5
      // closed e.Tail#1 as range 13
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[16];
        context[21] = context[17];
        if( ! refalrts::repeated_stvar_left( vm, context[22], context[15], context[20], context[21] ) )
          continue;
        // closed e.Octs-E#1 as range 20
        //DEBUG: s.Oct#1: 15
        //DEBUG: e.Scanned#1: 5
        //DEBUG: e.Tail#1: 13
        //DEBUG: e.Octs-B#1: 18
        //DEBUG: e.Octs-E#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: (/11 } 8/23 Tile{ AsIs: e.Octs-B#1/18 } Tile{ AsIs: s.Oct#1/22 AsIs: e.Octs-E#1/20 AsIs: )/12 } (/24 Tile{ AsIs: s.Oct#1/15 } )/25 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_number( vm, context[23], 8UL ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[24] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_DoUnEscapeStringm_SRm_DecOct.ref(vm) );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[24], context[25] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[22], context[12] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[16], context[17] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/5 )/8 (/11 e.Octs#1/9 )/12 s.Next#1/15 e.Tail#1/13 >/1
    // closed e.Scanned#1 as range 5
    // closed e.Octs#1 as range 9
    // closed e.Tail#1 as range 13
    //DEBUG: s.Next#1: 15
    //DEBUG: e.Scanned#1: 5
    //DEBUG: e.Octs#1: 9
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Octs#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </16 & Fetch/17 </18 & SingularEscape/19 s.Next#1/15/20 >/21 Tile{ HalfReuse: [*]/0 Reuse: & DoUnEscapeString-SR-Escape$2\1/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/12 AsIs: s.Next#1/15 } {*}/22 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[17], ref_Fetch.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[19], ref_SingularEscape.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[20], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[22], context[0] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_DoUnEscapeStringm_SRm_Escape_S2L1.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[16], context[21] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[22] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/5 )/8 (/11 e.Octs#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  // closed e.Octs#1 as range 9
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.Octs#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/5 )/8 (/11 e.Octs#1/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/12 HalfReuse: # EOLAfterSlash/1 ]] }
  refalrts::reinit_ident( context[12], ident_Fails.ref(vm) );
  refalrts::reinit_ident( context[1], ident_EOLAfterSlash.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SRm_Escape("DoUnEscapeString-SR-Escape", 2896966701U, 3378406771U, func_DoUnEscapeStringm_SRm_Escape);


static refalrts::FnResult func_SingularEscape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & SingularEscape/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SingularEscape/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SingularEscape/4 'r'/5 >/1
    if( ! refalrts::char_term( 'r', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\r'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success.ref(vm) );
    refalrts::reinit_char( context[1], '\r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 'n'/5 >/1
    if( ! refalrts::char_term( 'n', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\n'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success.ref(vm) );
    refalrts::reinit_char( context[1], '\n' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 't'/5 >/1
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\t'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success.ref(vm) );
    refalrts::reinit_char( context[1], '\t' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 'a'/5 >/1
    if( ! refalrts::char_term( 'a', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\007'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success.ref(vm) );
    refalrts::reinit_char( context[1], '\007' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 'b'/5 >/1
    if( ! refalrts::char_term( 'b', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\010'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success.ref(vm) );
    refalrts::reinit_char( context[1], '\010' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 'f'/5 >/1
    if( ! refalrts::char_term( 'f', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\014'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success.ref(vm) );
    refalrts::reinit_char( context[1], '\014' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 'v'/5 >/1
    if( ! refalrts::char_term( 'v', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\013'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success.ref(vm) );
    refalrts::reinit_char( context[1], '\013' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 '\\'/5 >/1
    if( ! refalrts::char_term( '\\', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\\'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success.ref(vm) );
    refalrts::reinit_char( context[1], '\\' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 '\''/5 >/1
    if( ! refalrts::char_term( '\'', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success.ref(vm) );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 '\"'/5 >/1
    if( ! refalrts::char_term( '\"', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_ident( context[5], ident_Success.ref(vm) );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SingularEscape/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SingularEscape/4 s.Other#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], ident_Fails.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SingularEscape("SingularEscape", 2896966701U, 3378406771U, func_SingularEscape);


//End of file
