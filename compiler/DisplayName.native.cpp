// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_CreateClosure = refalrts::ident_from_static("CreateClosure");
const refalrts::RefalIdentifier ident_Hash = refalrts::ident_from_static("Hash");
const refalrts::RefalIdentifier ident_SUF = refalrts::ident_from_static("SUF");
const refalrts::RefalIdentifier ident_VAR = refalrts::ident_from_static("VAR");
extern refalrts::RefalFunction& StrFromInt_0_0;
#define StrFromInt_alias StrFromInt_0_0
#define StrFromInt_str "StrFromInt#0:0"

extern refalrts::RefalFunction& EscapeString_0_0;
#define EscapeString_alias EscapeString_0_0
#define EscapeString_str "EscapeString#0:0"

extern refalrts::RefalFunction& DisplayName_0_0;
#define DisplayName_alias DisplayName_0_0

extern refalrts::RefalFunction& DisplayNameSuf_2758278484_1268811382;
#define DisplayNameSuf_alias DisplayNameSuf_2758278484_1268811382

extern refalrts::RefalFunction& DisplayCName_0_0;
#define DisplayCName_alias DisplayCName_0_0

extern refalrts::RefalFunction& CName_0_0;
#define CName_alias CName_0_0

extern refalrts::RefalFunction& CNameSuf_2758278484_1268811382;
#define CNameSuf_alias CNameSuf_2758278484_1268811382


static refalrts::FnResult func_DisplayName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
    // </0 & DisplayName/4 e.Name#1/2 # Hash/7 s.Cookie1#1/6 s.Cookie2#1/5 >/1
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::svar_right( context[5], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_right( context[6], context[15], context[16] ) )
      continue;
    context[7] = refalrts::ident_right(  ident_Hash, context[15], context[16] );
    if( ! context[7] )
      continue;
    // closed e.Name#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DisplayName/4 AsIs: e.Name#1/15(2) HalfReuse: >/7 } '#'/8 </9 & StrFromInt/10 Tile{ AsIs: s.Cookie1#1/6 } >/11 ':'/12 </13 & StrFromInt/14 Tile{ AsIs: s.Cookie2#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[8], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], & StrFromInt_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & StrFromInt_alias ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CreateClosure
    // </0 & DisplayName/4 # CreateClosure/5 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[5] = refalrts::ident_left(  ident_CreateClosure, context[15], context[16] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '@'/0 HalfReuse: 'c'/4 HalfReuse: 'r'/5 HalfReuse: 'e'/1 }"ate_closure@"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "ate_closure@", 12 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '@' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'r' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # VAR s.idx e.idx s.idx
    // </0 & DisplayName/4 # VAR/5 s.Mode#1/6 e.Index#1/2 s.Depth#1/7 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[5] = refalrts::ident_left(  ident_VAR, context[15], context[16] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_right( context[7], context[15], context[16] ) )
      continue;
    // closed e.Index#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Mode1 #6/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/15(2) } '#'/8 Tile{ HalfReuse: </5 } & StrFromInt/9 Tile{ AsIs: s.Depth#1/7 AsIs: >/1 } ':'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[8], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], & StrFromInt_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[0], context[6] );
    refalrts::reinit_char( context[4], '.' );
    refalrts::reinit_open_call( context[5] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & DisplayName/4 e.Name#1/5 # SUF/7 e.Suffix#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[15];
      context[18] = context[16];
      context[7] = refalrts::ident_left(  ident_SUF, context[17], context[18] );
      if( ! context[7] )
        continue;
      // closed e.Suffix#1 as range 17(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} & DisplayName/4 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: </0 } Tile{ HalfReuse: & DisplayNameSuf/7 AsIs: e.Suffix#1/17(2) AsIs: >/1 ]] }
      refalrts::reinit_name( context[7], & DisplayNameSuf_alias );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & DisplayName/4 e.Name#1/2 >/1
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DisplayName/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_DisplayName(func_DisplayName, "DisplayName#0:0");
refalrts::RefalFunction& DisplayName_0_0 = descr_DisplayName;

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
    // '\\' s.idx e.idx
    // </0 & DisplayNameSuf/4 '\\'/5 s.Num#1/6 e.Suffix#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[5] = refalrts::char_left( '\\', context[10], context[11] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[10], context[11] ) )
      continue;
    // closed e.Suffix#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\\'/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Num#1/6 } >/7 </8 & DisplayNameSuf/9 Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], & DisplayNameSuf_alias ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\\' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & StrFromInt_alias );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx e.idx
    // </0 & DisplayNameSuf/4 s.Tag#1/5 s.Num#1/6 e.Suffix#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::svar_left( context[5], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[10], context[11] ) )
      continue;
    // closed e.Suffix#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Tag#1/5 } </7 & StrFromInt/8 Tile{ AsIs: s.Num#1/6 } >/9 Tile{ AsIs: </0 AsIs: & DisplayNameSuf/4 } Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], & StrFromInt_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & DisplayNameSuf/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
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

static refalrts::RefalNativeFunction descr_DisplayNameSuf(func_DisplayNameSuf, "DisplayNameSuf#2758278484:1268811382");
refalrts::RefalFunction& DisplayNameSuf_2758278484_1268811382 = descr_DisplayNameSuf;

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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & EscapeString/6 Tile{ AsIs: </0 Reuse: & DisplayName/4 AsIs: e.Name#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & EscapeString_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & DisplayName_alias );
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

static refalrts::RefalNativeFunction descr_DisplayCName(func_DisplayCName, "DisplayCName#0:0");
refalrts::RefalFunction& DisplayCName_0_0 = descr_DisplayCName;

static refalrts::FnResult func_CName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
    // </0 & CName/4 e.Name#1/2 # Hash/7 s.Cookie1#1/6 s.Cookie2#1/5 >/1
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::svar_right( context[5], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_right( context[6], context[15], context[16] ) )
      continue;
    context[7] = refalrts::ident_right(  ident_Hash, context[15], context[16] );
    if( ! context[7] )
      continue;
    // closed e.Name#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CName/4 AsIs: e.Name#1/15(2) HalfReuse: >/7 } '_'/8 </9 & StrFromInt/10 Tile{ AsIs: s.Cookie1#1/6 } >/11 '_'/12 </13 & StrFromInt/14 Tile{ AsIs: s.Cookie2#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[8], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], & StrFromInt_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & StrFromInt_alias ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CreateClosure
    // </0 & CName/4 # CreateClosure/5 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[5] = refalrts::ident_left(  ident_CreateClosure, context[15], context[16] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 'a'/1 }"lrts::create_closure"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "lrts::create_closure", 20 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # VAR s.idx e.idx s.idx
    // </0 & CName/4 # VAR/5 s.Mode#1/6 e.Index#1/2 s.Depth#1/7 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[5] = refalrts::ident_left(  ident_VAR, context[15], context[16] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_right( context[7], context[15], context[16] ) )
      continue;
    // closed e.Index#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } 'v'/8 Tile{ HalfReuse: 'a'/0 HalfReuse: 'r'/4 HalfReuse: '_'/5 AsIs: s.Mode#1/6 } </9 & CName/10 Tile{ AsIs: e.Index#1/15(2) } >/11 '_'/12 </13 & StrFromInt/14 Tile{ AsIs: s.Depth#1/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[8], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], & CName_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & StrFromInt_alias ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'a' );
    refalrts::reinit_char( context[4], 'r' );
    refalrts::reinit_char( context[5], '_' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & CName/4 e.Name#1/5 # SUF/7 e.Suffix#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[15];
      context[18] = context[16];
      context[7] = refalrts::ident_left(  ident_SUF, context[17], context[18] );
      if( ! context[7] )
        continue;
      // closed e.Suffix#1 as range 17(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }"gen_"/8 Tile{ AsIs: </0 AsIs: & CName/4 AsIs: e.Name#1/5 HalfReuse: >/7 } '_'/10 </11 & CNameSuf/12 Tile{ AsIs: e.Suffix#1/17(2) } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( context[8], context[9], "gen_", 4 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[10], '_' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[12], & CNameSuf_alias ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[7] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[11] );
      refalrts::push_stack( context[7] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[10], context[12] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & CName/4 e.Name-B#1/5 '-'/7 e.Name-E#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[15];
      context[18] = context[16];
      context[7] = refalrts::char_left( '-', context[17], context[18] );
      if( ! context[7] )
        continue;
      // closed e.Name-E#1 as range 17(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name-B#1/5 } Tile{ HalfReuse: '_'/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & CName/7 AsIs: e.Name-E#1/17(2) AsIs: >/1 ]] }
      refalrts::reinit_char( context[4], '_' );
      refalrts::reinit_name( context[7], & CName_alias );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & CName/4 e.Name#1/2 >/1
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CName/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_CName(func_CName, "CName#0:0");
refalrts::RefalFunction& CName_0_0 = descr_CName;

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
    // </0 & CNameSuf/4 '$'/5 s.Num#1/6 e.Suffix#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[5] = refalrts::char_left( '$', context[10], context[11] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[10], context[11] ) )
      continue;
    // closed e.Suffix#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'S'/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Num#1/6 } >/7 </8 & CNameSuf/9 Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], & CNameSuf_alias ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'S' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & StrFromInt_alias );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\' s.idx e.idx
    // </0 & CNameSuf/4 '\\'/5 s.Num#1/6 e.Suffix#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[5] = refalrts::char_left( '\\', context[10], context[11] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[10], context[11] ) )
      continue;
    // closed e.Suffix#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'L'/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Num#1/6 } >/7 </8 & CNameSuf/9 Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], & CNameSuf_alias ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'L' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & StrFromInt_alias );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & CNameSuf/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
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

static refalrts::RefalNativeFunction descr_CNameSuf(func_CNameSuf, "CNameSuf#2758278484:1268811382");
refalrts::RefalFunction& CNameSuf_2758278484_1268811382 = descr_CNameSuf;


//End of file
