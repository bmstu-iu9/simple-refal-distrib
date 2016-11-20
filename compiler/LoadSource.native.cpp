// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
#define str_Fetch refalrts::RefalFuncName("Fetch", 0U, 0U)
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
#define str_Map refalrts::RefalFuncName("Map", 0U, 0U)
static refalrts::ExternalReference ref_LoadFile("LoadFile", 0U, 0U);
#define str_LoadFile refalrts::RefalFuncName("LoadFile", 0U, 0U)
static refalrts::ExternalReference ref_gen_LoadSource_L1("LoadSource\\1", 2935148884U, 199067485U);
static refalrts::ExternalReference ref_LoadSource("LoadSource", 0U, 0U);
static refalrts::ExternalReference ref_LinearizeLine("LinearizeLine", 2935148884U, 199067485U);

static refalrts::FnResult func_gen_LoadSource_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & LoadSource\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // '\357\273\277' e.idx
    // </0 & LoadSource\1/4 '\357'/5 '\273'/6 '\277'/7 e.Content#2/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( '\357', context[8], context[9] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( '\273', context[8], context[9] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_left( '\277', context[8], context[9] );
    if( ! context[7] )
      continue;
    // closed e.Content#2 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & LoadSource\1/4 '\357'/5 '\273'/6 '\277'/7 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Content#2/8(2) } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & LoadSource\1/4 e.Content#2/2 >/1
  // closed e.Content#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & LoadSource\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Content#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_LoadSource_L1(func_gen_LoadSource_L1, refalrts::RefalFuncName("LoadSource\\1", 2935148884U, 199067485U));

static refalrts::FnResult func_LoadSource(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & LoadSource/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Fetch/6 </7 & Map/8 & LinearizeLine/9 Tile{ AsIs: </0 Reuse: & LoadFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } >/10 & LoadSource\1/11 >/12 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_LinearizeLine.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_gen_LoadSource_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_LoadFile.ref.function );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_LoadSource(func_LoadSource, refalrts::RefalFuncName("LoadSource", 0U, 0U));

static refalrts::FnResult func_LinearizeLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & LinearizeLine/4 (/7 e.Line#1/5 )/8 >/1
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
  // closed e.Line#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & LinearizeLine/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#1/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char( context[1], '\n' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_LinearizeLine(func_LinearizeLine, refalrts::RefalFuncName("LinearizeLine", 2935148884U, 199067485U));


//End of file
