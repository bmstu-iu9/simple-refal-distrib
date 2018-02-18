// This file automatically generated from 'Flex-Desugar.sref'
// Don't edit! Edit 'Flex-Desugar.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_200899581_2741309241
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Flexm_Desugar("Flex-Desugar", 0U, 0U);
static refalrts::ExternalReference ref_Passm_RemoveOneMany("Pass-RemoveOneMany", 200899581U, 2741309241U);
static refalrts::ExternalReference ref_Passm_RemoveOpt("Pass-RemoveOpt", 200899581U, 2741309241U);
static refalrts::ExternalReference ref_Passm_RemoveRange("Pass-RemoveRange", 200899581U, 2741309241U);
static refalrts::ExternalReference ref_Pipe("Pipe", 0U, 0U);

static refalrts::FnResult func_Flexm_Desugar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Flex-Desugar/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.AST#1/2 HalfReuse: </1 } & Pipe/5 & Pass-RemoveRange/6 & Pass-RemoveOpt/7 & Pass-RemoveOneMany/8 >/9 >/10 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ref_Pipe.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_Passm_RemoveRange.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_Passm_RemoveOpt.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Passm_RemoveOneMany.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flexm_Desugar("Flex-Desugar", 0U, 0U, func_Flexm_Desugar);


static refalrts::FnResult func_Passm_RemoveRange(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-RemoveRange/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveRange/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemoveRange("Pass-RemoveRange", 200899581U, 2741309241U, func_Passm_RemoveRange);


static refalrts::FnResult func_Passm_RemoveOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-RemoveOpt/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveOpt/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemoveOpt("Pass-RemoveOpt", 200899581U, 2741309241U, func_Passm_RemoveOpt);


static refalrts::FnResult func_Passm_RemoveOneMany(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-RemoveOneMany/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveOneMany/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemoveOneMany("Pass-RemoveOneMany", 200899581U, 2741309241U, func_Passm_RemoveOneMany);


//End of file
