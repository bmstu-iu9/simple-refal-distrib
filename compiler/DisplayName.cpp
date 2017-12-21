// This file automatically generated from 'DisplayName.sref'
// Don't edit! Edit 'DisplayName.sref' and recompile it

#include "refalrts.h"

static const refalrts::RefalIdentifier ident_Hash = refalrts::ident_from_static("Hash");
static const refalrts::RefalIdentifier ident_SUF = refalrts::ident_from_static("SUF");
static const refalrts::RefalIdentifier ident_VAR = refalrts::ident_from_static("VAR");
static refalrts::ExternalReference ref_AlphaNumber("AlphaNumber", 1779512106U, 2265383920U);
static refalrts::ExternalReference ref_CName("CName", 0U, 0U);
static refalrts::ExternalReference ref_CNameSuf("CNameSuf", 1779512106U, 2265383920U);
static refalrts::ExternalReference ref_DecorateChars("DecorateChars", 1779512106U, 2265383920U);
static refalrts::ExternalReference ref_gen_DecorateChars_L1("DecorateChars\\1", 1779512106U, 2265383920U);
static refalrts::ExternalReference ref_gen_DecorateChars_L1S3L1("DecorateChars\\1$3\\1", 1779512106U, 2265383920U);
static refalrts::ExternalReference ref_DisplayCName("DisplayCName", 0U, 0U);
static refalrts::ExternalReference ref_DisplayName("DisplayName", 0U, 0U);
static refalrts::ExternalReference ref_DisplayNameSuf("DisplayNameSuf", 1779512106U, 2265383920U);
static refalrts::ExternalReference ref_EscapeString("EscapeString", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Ord("Ord", 0U, 0U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);

static refalrts::FnResult func_DisplayName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & DisplayName/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx # Hash s.idx s.idx
    // </0 & DisplayName/4 e.Name#1/5 # Hash/9 s.Cookie1#1/8 s.Cookie2#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_right( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[8], context[5], context[6] ) )
      continue;
    context[9] = refalrts::ident_right(  ident_Hash, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: s.Cookie2#1: 7
    //DEBUG: s.Cookie1#1: 8
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DisplayName/4 AsIs: e.Name#1/5 HalfReuse: >/9 } '#'/10 </11 & StrFromInt/12 Tile{ AsIs: s.Cookie1#1/8 } >/13 ':'/14 </15 & StrFromInt/16 Tile{ AsIs: s.Cookie2#1/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_StrFromInt.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_StrFromInt.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[13], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # VAR s.idx e.idx s.idx
    // </0 & DisplayName/4 # VAR/7 s.Mode#1/8 e.Index#1/5 s.Depth#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::ident_left(  ident_VAR, context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[9], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5
    //DEBUG: s.Mode#1: 8
    //DEBUG: s.Depth#1: 9
    //DEBUG: e.Index#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Mode1 #8/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/5 } '#'/10 Tile{ HalfReuse: </7 } & StrFromInt/11 Tile{ AsIs: s.Depth#1/9 AsIs: >/1 } ':'/12 Tile{ ]] }
    if( ! refalrts::alloc_char( context[10], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_StrFromInt.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], ':' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[0], context[8] );
    refalrts::reinit_char( context[4], '.' );
    refalrts::reinit_open_call( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & DisplayName/4 e.Name#1/7 # SUF/11 e.Suffix#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::ident_left(  ident_SUF, context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.Suffix#1 as range 9
      //DEBUG: e.Name#1: 7
      //DEBUG: e.Suffix#1: 9

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} & DisplayName/4 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/7 } Tile{ AsIs: </0 } Tile{ HalfReuse: & DisplayNameSuf/11 AsIs: e.Suffix#1/9 AsIs: >/1 ]] }
      refalrts::reinit_name( context[11], ref_DisplayNameSuf.ref.function );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & DisplayName/4 e.Name#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Name#1 as range 5
  //DEBUG: e.Name#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DisplayName/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DisplayName("DisplayName", 0U, 0U, func_DisplayName);


static refalrts::FnResult func_DisplayNameSuf(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & DisplayNameSuf/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // s.idx s.idx e.idx
    // </0 & DisplayNameSuf/4 s.Tag#1/7 s.Num#1/8 e.Suffix#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    // closed e.Suffix#1 as range 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: s.Num#1: 8
    //DEBUG: e.Suffix#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Tag#1/7 } </9 & StrFromInt/10 Tile{ AsIs: s.Num#1/8 } >/11 Tile{ AsIs: </0 AsIs: & DisplayNameSuf/4 } Tile{ AsIs: e.Suffix#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ref_StrFromInt.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & DisplayNameSuf/4 >/1
  context[5] = context[2];
  context[6] = context[3];
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DisplayNameSuf/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DisplayNameSuf("DisplayNameSuf", 1779512106U, 2265383920U, func_DisplayNameSuf);


static refalrts::FnResult func_DisplayCName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & DisplayCName/4 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & EscapeString/6 Tile{ AsIs: </0 Reuse: & DisplayName/4 AsIs: e.Name#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_EscapeString.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DisplayName.ref.function );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DisplayCName("DisplayCName", 0U, 0U, func_DisplayCName);


static refalrts::FnResult func_CName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & CName/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx # Hash s.idx s.idx
    // </0 & CName/4 e.Name#1/5 # Hash/9 s.Cookie1#1/8 s.Cookie2#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_right( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[8], context[5], context[6] ) )
      continue;
    context[9] = refalrts::ident_right(  ident_Hash, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: s.Cookie2#1: 7
    //DEBUG: s.Cookie1#1: 8
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CName/4 AsIs: e.Name#1/5 HalfReuse: >/9 } '_'/10 </11 & StrFromInt/12 Tile{ AsIs: s.Cookie1#1/8 } >/13 '_'/14 </15 & StrFromInt/16 Tile{ AsIs: s.Cookie2#1/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_StrFromInt.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_StrFromInt.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[13], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # VAR s.idx e.idx s.idx
    // </0 & CName/4 # VAR/7 s.Mode#1/8 e.Index#1/5 s.Depth#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::ident_left(  ident_VAR, context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[9], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5
    //DEBUG: s.Mode#1: 8
    //DEBUG: s.Depth#1: 9
    //DEBUG: e.Index#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } 'v'/10 Tile{ HalfReuse: 'a'/0 HalfReuse: 'r'/4 HalfReuse: '_'/7 AsIs: s.Mode#1/8 } </11 & CName/12 Tile{ AsIs: e.Index#1/5 } >/13 '_'/14 </15 & StrFromInt/16 Tile{ AsIs: s.Depth#1/9 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_CName.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_StrFromInt.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'a' );
    refalrts::reinit_char( context[4], 'r' );
    refalrts::reinit_char( context[7], '_' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[13], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & CName/4 e.Name#1/7 # SUF/11 e.Suffix#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::ident_left(  ident_SUF, context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.Suffix#1 as range 9
      //DEBUG: e.Name#1: 7
      //DEBUG: e.Suffix#1: 9

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }"gen_"/12 Tile{ AsIs: </0 AsIs: & CName/4 AsIs: e.Name#1/7 HalfReuse: >/11 } '_'/14 </15 & CNameSuf/16 Tile{ AsIs: e.Suffix#1/9 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( context[12], context[13], "gen_", 4 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[14], '_' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[16], ref_CNameSuf.ref.function ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[11] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[15] );
      refalrts::push_stack( context[11] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[14], context[16] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & CName/4 e.Name#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Name#1 as range 5
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DecorateChars/4 AsIs: e.Name#1/5 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DecorateChars.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & CName/4 e.Name#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Name#1 as range 5
  //DEBUG: e.Name#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CName/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CName("CName", 0U, 0U, func_CName);


static refalrts::FnResult func_gen_DecorateChars_L1S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & DecorateChars\1$3\1/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // s.idx e.idx
    // </0 & DecorateChars\1$3\1/4 s.Other#2/5 e.AlNum-B#3/8 s.Other#2/12 e.AlNum-E#3/10 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[6];
      context[11] = context[7];
      if( ! refalrts::repeated_stvar_left( context[12], context[5], context[10], context[11] ) )
        continue;
      // closed e.AlNum-E#3 as range 10
      //DEBUG: s.Other#2: 5
      //DEBUG: e.AlNum-B#3: 8
      //DEBUG: e.AlNum-E#3: 10

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & DecorateChars\1$3\1/4 s.Other#2/5 e.AlNum-B#3/8 s.Other#2/12 e.AlNum-E#3/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Other2 #12/1 ]] }
      refalrts::reinit_svar( context[1], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[8], context[9], context[6], context[7] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx e.idx
  // </0 & DecorateChars\1$3\1/4 s.Other#2/5 e.AlNum#3/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  // closed e.AlNum#3 as range 6
  //DEBUG: s.Other#2: 5
  //DEBUG: e.AlNum#3: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.AlNum#3/6 {REMOVED TILE}
  //RESULT: Tile{ [[ } 'k'/8 </9 & StrFromInt/10 Tile{ AsIs: </0 Reuse: & Ord/4 AsIs: s.Other#2/5 } >/11 >/12 Tile{ HalfReuse: '_'/1 ]] }
  if( ! refalrts::alloc_char( context[8], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_StrFromInt.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Ord.ref.function );
  refalrts::reinit_char( context[1], '_' );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecorateChars_L1S3L1("DecorateChars\\1$3\\1", 1779512106U, 2265383920U, func_gen_DecorateChars_L1S3L1);


static refalrts::FnResult func_gen_DecorateChars_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & DecorateChars\1/4 s.idx#0/5 >/1
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
    // '-'
    // </0 & DecorateChars\1/4 '-'/5 >/1
    if( ! refalrts::char_term( '-', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DecorateChars\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: 'm'/5 HalfReuse: '_'/1 ]] }
    refalrts::update_char( context[5], 'm' );
    refalrts::reinit_char( context[1], '_' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '_'
    // </0 & DecorateChars\1/4 '_'/5 >/1
    if( ! refalrts::char_term( '_', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DecorateChars\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: 'u'/5 HalfReuse: '_'/1 ]] }
    refalrts::update_char( context[5], 'u' );
    refalrts::reinit_char( context[1], '_' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx
  // </0 & DecorateChars\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </6 & AlphaNumber/7 >/8 [*]/9 & DecorateChars\1$3\1/10 Tile{ AsIs: s.Other#2/5 } {*}/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_AlphaNumber.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_DecorateChars_L1S3L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[11], context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecorateChars_L1("DecorateChars\\1", 1779512106U, 2265383920U, func_gen_DecorateChars_L1);


static refalrts::FnResult func_DecorateChars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & DecorateChars/4 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & DecorateChars\1/4 AsIs: e.Name#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_DecorateChars_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DecorateChars("DecorateChars", 1779512106U, 2265383920U, func_DecorateChars);


static refalrts::FnResult func_AlphaNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & AlphaNumber/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'A'/0 HalfReuse: 'B'/4 HalfReuse: 'C'/1 }"DEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"/5 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], "DEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789", 59 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'A' );
  refalrts::reinit_char( context[4], 'B' );
  refalrts::reinit_char( context[1], 'C' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AlphaNumber("AlphaNumber", 1779512106U, 2265383920U, func_AlphaNumber);


static refalrts::FnResult func_CNameSuf(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & CNameSuf/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // '$' s.idx e.idx
    // </0 & CNameSuf/4 '$'/7 s.Num#1/8 e.Suffix#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '$', context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    // closed e.Suffix#1 as range 5
    //DEBUG: s.Num#1: 8
    //DEBUG: e.Suffix#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'S'/0 HalfReuse: </4 HalfReuse: & StrFromInt/7 AsIs: s.Num#1/8 } >/9 </10 & CNameSuf/11 Tile{ AsIs: e.Suffix#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_CNameSuf.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'S' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_StrFromInt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\' s.idx e.idx
    // </0 & CNameSuf/4 '\\'/7 s.Num#1/8 e.Suffix#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '\\', context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    // closed e.Suffix#1 as range 5
    //DEBUG: s.Num#1: 8
    //DEBUG: e.Suffix#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'L'/0 HalfReuse: </4 HalfReuse: & StrFromInt/7 AsIs: s.Num#1/8 } >/9 </10 & CNameSuf/11 Tile{ AsIs: e.Suffix#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_CNameSuf.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'L' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_StrFromInt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '=' s.idx e.idx
    // </0 & CNameSuf/4 '='/7 s.Num#1/8 e.Suffix#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '=', context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    // closed e.Suffix#1 as range 5
    //DEBUG: s.Num#1: 8
    //DEBUG: e.Suffix#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'A'/0 HalfReuse: </4 HalfReuse: & StrFromInt/7 AsIs: s.Num#1/8 } >/9 </10 & CNameSuf/11 Tile{ AsIs: e.Suffix#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_CNameSuf.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'A' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_StrFromInt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ':' s.idx e.idx
    // </0 & CNameSuf/4 ':'/7 s.Num#1/8 e.Suffix#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( ':', context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    // closed e.Suffix#1 as range 5
    //DEBUG: s.Num#1: 8
    //DEBUG: e.Suffix#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'B'/0 HalfReuse: </4 HalfReuse: & StrFromInt/7 AsIs: s.Num#1/8 } >/9 </10 & CNameSuf/11 Tile{ AsIs: e.Suffix#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_CNameSuf.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'B' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_StrFromInt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '?' s.idx e.idx
    // </0 & CNameSuf/4 '?'/7 s.Num#1/8 e.Suffix#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '?', context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    // closed e.Suffix#1 as range 5
    //DEBUG: s.Num#1: 8
    //DEBUG: e.Suffix#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'C'/0 HalfReuse: </4 HalfReuse: & StrFromInt/7 AsIs: s.Num#1/8 } >/9 </10 & CNameSuf/11 Tile{ AsIs: e.Suffix#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_CNameSuf.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'C' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_StrFromInt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & CNameSuf/4 >/1
  context[5] = context[2];
  context[6] = context[3];
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CNameSuf/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CNameSuf("CNameSuf", 1779512106U, 2265383920U, func_CNameSuf);


//End of file
