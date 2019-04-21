// This file automatically generated from 'SR-LoadSource.sref'
// Don't edit! Edit 'SR-LoadSource.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1299759681_1153380958

enum efunc {
  efunc_Fetch = 0,
  efunc_Map = 1,
  efunc_LinearizeLine = 2,
  efunc_gen_SRm_LoadSource_L1 = 3,
  efunc_LoadFile = 4,
};


static refalrts::FnResult func_gen_SRm_LoadSource_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & SR-LoadSource\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & SR-LoadSource\1/4 '\357'/7 '\273'/8 '\277'/9 e.Content#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '\357', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( '\273', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_left( '\277', context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Content#2 as range 5
    //DEBUG: e.Content#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SR-LoadSource\1/4 '\357'/7 '\273'/8 '\277'/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Content#2/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SR-LoadSource\1/4 e.Content#2/2 >/1
  // closed e.Content#2 as range 2
  //DEBUG: e.Content#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SR-LoadSource\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Content#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SRm_LoadSource_L1("SR-LoadSource\\1", 1299759681U, 1153380958U, func_gen_SRm_LoadSource_L1);


static refalrts::FnResult func_SRm_LoadSource(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & SR-LoadSource/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Fetch/6 </7 & Map/8 & LinearizeLine/9 Tile{ AsIs: </0 Reuse: & LoadFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } >/10 & SR-LoadSource\1/11 >/12 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[9], functions[efunc_LinearizeLine]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_SRm_LoadSource_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_LoadFile]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SRm_LoadSource("SR-LoadSource", 0U, 0U, func_SRm_LoadSource);


static refalrts::FnResult func_LinearizeLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  //DEBUG: e.Line#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & LinearizeLine/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#1/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char(context[1], '\n');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LinearizeLine("LinearizeLine", 1299759681U, 1153380958U, func_LinearizeLine);


//End of file
