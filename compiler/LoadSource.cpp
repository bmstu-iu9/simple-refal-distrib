// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadSource(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LinearizeLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_LoadSource_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult gen_LoadSource_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & LoadSource\1/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // '\357\273\277' e.idx
    // </0 & LoadSource\1/4 '\357'/5 '\273'/6 '\277'/7 e.Content#2/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\357'), 8},
    {refalrts::icCharLeftSave, 6, static_cast<unsigned char>('\273'), 8},
    {refalrts::icCharLeftSave, 7, static_cast<unsigned char>('\277'), 8},
    // closed e.Content#2 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & LoadSource\1/4 '\357'/5 '\273'/6 '\277'/7 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Content#2/8(2) } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // e.idx
    // </0 & LoadSource\1/4 e.Content#2/2 >/1
    // closed e.Content#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & LoadSource\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Content#2/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
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
    refalrts::start_sentence();
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
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

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
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult LoadSource(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoadFile, "LoadFile" },
    { gen_LoadSource_L1, "LoadSource\\1" },
    { LinearizeLine, "LinearizeLine" },
    { Map, "Map" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & LoadSource/4 e.FileName#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.FileName#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </5 & Fetch/6 </7 & Map/8 & LinearizeLine/9 Tile{ AsIs: </0 Reuse: & LoadFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } >/10 & LoadSource\1/11 >/12 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 4, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocFunc, 0, 3, 8},
    {refalrts::icAllocFunc, 0, 2, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icAllocFunc, 0, 1, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 5, 9, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
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
  if( ! refalrts::alloc_name( context[6], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], LinearizeLine, "LinearizeLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], gen_LoadSource_L1, "LoadSource\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], LoadFile, "LoadFile" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult LinearizeLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & LinearizeLine/4 (/7 e.Line#1/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Line#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & LinearizeLine/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#1/5 } Tile{ HalfReuse: '\n'/1 ]] }
    {refalrts::icReinitChar, 0, '\n', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
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
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
