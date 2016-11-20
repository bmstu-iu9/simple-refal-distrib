// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
#define str_Div refalrts::RefalFuncName("Div", 0U, 0U)
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
#define str_Mod refalrts::RefalFuncName("Mod", 0U, 0U)
static refalrts::ExternalReference ref_Ord("Ord", 0U, 0U);
#define str_Ord refalrts::RefalFuncName("Ord", 0U, 0U)
static refalrts::ExternalReference ref_Compare("Compare", 0U, 0U);
#define str_Compare refalrts::RefalFuncName("Compare", 0U, 0U)
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
#define str_Fetch refalrts::RefalFuncName("Fetch", 0U, 0U)
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
#define str_Map refalrts::RefalFuncName("Map", 0U, 0U)
static refalrts::ExternalReference ref_OctDigit("OctDigit", 1335600754U, 1331116615U);
static refalrts::ExternalReference ref_gen_EscapeChar_S7L1("EscapeChar$7\\1", 1335600754U, 1331116615U);
static refalrts::ExternalReference ref_EscapeChar("EscapeChar", 0U, 0U);
static refalrts::ExternalReference ref_EscapeString("EscapeString", 0U, 0U);

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

static refalrts::RefalNativeFunction descr_OctDigit(func_OctDigit, refalrts::RefalFuncName("OctDigit", 1335600754U, 1331116615U));

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

static refalrts::RefalNativeFunction descr_gen_EscapeChar_S7L1(func_gen_EscapeChar_S7L1, refalrts::RefalFuncName("EscapeChar$7\\1", 1335600754U, 1331116615U));

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
  if( ! refalrts::alloc_name( context[14], & refalrts::create_closure ) )
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

static refalrts::RefalNativeFunction descr_EscapeChar(func_EscapeChar, refalrts::RefalFuncName("EscapeChar", 0U, 0U));

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

static refalrts::RefalNativeFunction descr_EscapeString(func_EscapeString, refalrts::RefalFuncName("EscapeString", 0U, 0U));


//End of file
