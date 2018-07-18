// This file automatically generated from 'Flex-Checker.sref'
// Don't edit! Edit 'Flex-Checker.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3997484342_2282157194
static const refalrts::RefalIdentifier ident_Subexpr = refalrts::ident_from_static("Subexpr");
static refalrts::ExternalReference ref_CheckUniqueNames("CheckUniqueNames", 3997484342U, 2282157194U);
static refalrts::ExternalReference ref_ErrorAt("ErrorAt", 0U, 0U);
static refalrts::ExternalReference ref_Flexm_Check("Flex-Check", 0U, 0U);
static refalrts::ExternalReference ref_gen_Flexm_Check_L1("Flex-Check\\1", 3997484342U, 2282157194U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);

static refalrts::FnResult func_gen_Flexm_Check_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Flex-Check\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Flex-Check\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Flex-Check\1/4 (/5 # Subexpr/9 t.Pos#2/10 e.Name#2/7 t.Regexp#2/12 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_Subexpr, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_right( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    // closed e.Name#2 as range 7
    //DEBUG: t.Pos#2: 10
    //DEBUG: t.Regexp#2: 12
    //DEBUG: e.Name#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Flex-Check\1/4 (/5 {REMOVED TILE} {REMOVED TILE} t.Regexp#2/12 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: t.Pos#2/10 } Tile{ AsIs: e.Name#2/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & Flex-Check\1/4 t.OtherItem#2/5 >/1
  //DEBUG: t.OtherItem#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Flex-Check\1/4 t.OtherItem#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Flexm_Check_L1("Flex-Check\\1", 3997484342U, 2282157194U, func_gen_Flexm_Check_L1);


static refalrts::FnResult func_Flexm_Check(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Flex-Check/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckUniqueNames/6 </7 Tile{ HalfReuse: & Map/0 Reuse: & Flex-Check\1/4 AsIs: e.AST#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_CheckUniqueNames.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_Flexm_Check_L1.ref.function );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flexm_Check("Flex-Check", 0U, 0U, func_Flexm_Check);


static refalrts::FnResult func_CheckUniqueNames(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & CheckUniqueNames/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CheckUniqueNames/4 e.Names-B#1/7 (/13 t.Pos1#1/15 e.Name#1/11 )/14 e.Names-M#1/17 (/23 t.Pos2#1/27 e.Name#1/25 )/24 e.Names-E#1/19 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      // closed e.Name#1 as range 11
      context[17] = 0;
      context[18] = 0;
      refalrts::start_e_loop();
      do {
        context[19] = context[9];
        context[20] = context[10];
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        if( ! refalrts::repeated_evar_right( context[25], context[26], context[11], context[12], context[21], context[22] ) )
          continue;
        // closed e.Names-E#1 as range 19
        context[28] = refalrts::tvar_left( context[27], context[21], context[22] );
        if( ! context[28] )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        //DEBUG: e.Names-B#1: 7
        //DEBUG: t.Pos1#1: 15
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Names-M#1: 17
        //DEBUG: e.Names-E#1: 19
        //DEBUG: t.Pos2#1: 27

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} e.Names-B#1/7 {REMOVED TILE} t.Pos1#1/15 e.Name#1/11 {REMOVED TILE} e.Names-M#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Names-E#1/19 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos2#1/27 } Tile{ HalfReuse: 'R'/23 } Tile{ HalfReuse: 'e'/14 } Tile{ HalfReuse: 'd'/24 } Tile{ HalfReuse: 'e'/13 }"fined subexpr name "/29 Tile{ AsIs: e.Name#1/25 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[29], context[30], "fined subexpr name ", 19 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ErrorAt.ref.function );
        refalrts::reinit_char( context[23], 'R' );
        refalrts::reinit_char( context[14], 'e' );
        refalrts::reinit_char( context[24], 'd' );
        refalrts::reinit_char( context[13], 'e' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[14], context[14] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[17], context[18], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & CheckUniqueNames/4 e.Names#1/2 >/1
  // closed e.Names#1 as range 2
  //DEBUG: e.Names#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CheckUniqueNames/4 e.Names#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckUniqueNames("CheckUniqueNames", 3997484342U, 2282157194U, func_CheckUniqueNames);


//End of file
