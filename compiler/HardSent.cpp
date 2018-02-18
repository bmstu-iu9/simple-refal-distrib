// This file automatically generated from 'HardSent.sref'
// Don't edit! Edit 'HardSent.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2868726444_1644946798
static const refalrts::RefalIdentifier ident_ADTm_Brackets = refalrts::ident_from_static("ADT-Brackets");
static const refalrts::RefalIdentifier ident_Atom = refalrts::ident_from_static("Atom");
static const refalrts::RefalIdentifier ident_Brackets = refalrts::ident_from_static("Brackets");
static const refalrts::RefalIdentifier ident_E = refalrts::ident_from_static("E");
static const refalrts::RefalIdentifier ident_S = refalrts::ident_from_static("S");
static const refalrts::RefalIdentifier ident_T = refalrts::ident_from_static("T");
static const refalrts::RefalIdentifier ident_TkChar = refalrts::ident_from_static("TkChar");
static const refalrts::RefalIdentifier ident_TkIdentifier = refalrts::ident_from_static("TkIdentifier");
static const refalrts::RefalIdentifier ident_TkName = refalrts::ident_from_static("TkName");
static const refalrts::RefalIdentifier ident_TkNumber = refalrts::ident_from_static("TkNumber");
static const refalrts::RefalIdentifier ident_TkVariable = refalrts::ident_from_static("TkVariable");
static refalrts::ExternalReference ref_CreateHardPattern("CreateHardPattern", 0U, 0U);
static refalrts::ExternalReference ref_CreateHardPatternm_Aux("CreateHardPattern-Aux", 2868726444U, 1644946798U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_PreparePatternHardSent("PreparePatternHardSent", 2868726444U, 1644946798U);
static refalrts::ExternalReference ref_gen_PreparePatternHardSent_L1("PreparePatternHardSent\\1", 2868726444U, 1644946798U);
static refalrts::ExternalReference ref_gen_PreparePatternHardSent_L1S5L1("PreparePatternHardSent\\1$5\\1", 2868726444U, 1644946798U);

static refalrts::FnResult func_CreateHardPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CreateHardPattern/4 e.pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.pattern#1 as range 2
  //DEBUG: e.pattern#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CreateHardPattern-Aux/6 Tile{ AsIs: </0 Reuse: & PreparePatternHardSent/4 AsIs: e.pattern#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_CreateHardPatternm_Aux.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_PreparePatternHardSent.ref.function );
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

static refalrts::NativeReference nat_ref_CreateHardPattern("CreateHardPattern", 0U, 0U, func_CreateHardPattern);


static refalrts::FnResult func_gen_PreparePatternHardSent_L1S5L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & PreparePatternHardSent\1$5\1/4 s.idx#0/5 >/1
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
    // 'e'
    // </0 & PreparePatternHardSent\1$5\1/4 'e'/5 >/1
    if( ! refalrts::char_term( 'e', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 'e'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # E/1 ]] }
    refalrts::reinit_ident( context[1], ident_E );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't'
    // </0 & PreparePatternHardSent\1$5\1/4 't'/5 >/1
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 't'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # T/1 ]] }
    refalrts::reinit_ident( context[1], ident_T );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // 's'
  // </0 & PreparePatternHardSent\1$5\1/4 's'/5 >/1
  if( ! refalrts::char_term( 's', context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 's'/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # S/1 ]] }
  refalrts::reinit_ident( context[1], ident_S );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreparePatternHardSent_L1S5L1("PreparePatternHardSent\\1$5\\1", 2868726444U, 1644946798U, func_gen_PreparePatternHardSent_L1S5L1);


static refalrts::FnResult func_gen_PreparePatternHardSent_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & PreparePatternHardSent\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  do {
    // ( # TkChar s.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkChar/9 s.char#2/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TkChar, context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.char#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkChar/9 AsIs: s.char#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], ident_Atom );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TkNumber s.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkNumber/9 s.value#2/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TkNumber, context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.value#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkNumber/9 AsIs: s.value#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], ident_Atom );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TkName e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkName/9 e.name#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TkName, context[9] ) )
      continue;
    // closed e.name#2 as range 10
    //DEBUG: e.name#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkName/9 AsIs: e.name#2/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], ident_Atom );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TkIdentifier e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkIdentifier/9 e.ident#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TkIdentifier, context[9] ) )
      continue;
    // closed e.ident#2 as range 10
    //DEBUG: e.ident#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkIdentifier/9 AsIs: e.ident#2/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], ident_Atom );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TkVariable s.idx e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkVariable/9 s.Mode#2/12 e.Index#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_TkVariable, context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    // closed e.Index#2 as range 10
    //DEBUG: s.Mode#2: 12
    //DEBUG: e.Index#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#2/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Fetch/7 HalfReuse: s.Mode2 #12/9 } & PreparePatternHardSent\1$5\1/13 >/14 (/15 Tile{ AsIs: e.Index#2/10 } )/16 (/17 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_name( context[13], ref_gen_PreparePatternHardSent_L1S5L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_Fetch.ref.function );
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[17], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[13], context[15] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Brackets e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # Brackets/9 e.inBrackets#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_Brackets, context[9] ) )
      continue;
    // closed e.inBrackets#2 as range 10
    //DEBUG: e.inBrackets#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & PreparePatternHardSent/9 AsIs: e.inBrackets#2/10 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Brackets );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ref_PreparePatternHardSent.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # ADT-Brackets ( e.idx ) e.idx )
  // </0 & PreparePatternHardSent\1/4 (/7 # ADT-Brackets/9 (/14 e.Name#2/12 )/15 e.inBrackets#2/10 )/8 >/1
  context[10] = context[5];
  context[11] = context[6];
  if( ! refalrts::ident_term(  ident_ADTm_Brackets, context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Name#2 as range 12
  // closed e.inBrackets#2 as range 10
  //DEBUG: e.Name#2: 12
  //DEBUG: e.inBrackets#2: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & PreparePatternHardSent/4 } Tile{ AsIs: e.inBrackets#2/10 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], ref_PreparePatternHardSent.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreparePatternHardSent_L1("PreparePatternHardSent\\1", 2868726444U, 1644946798U, func_gen_PreparePatternHardSent_L1);


static refalrts::FnResult func_PreparePatternHardSent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PreparePatternHardSent/4 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & PreparePatternHardSent\1/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_PreparePatternHardSent_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PreparePatternHardSent("PreparePatternHardSent", 2868726444U, 1644946798U, func_PreparePatternHardSent);


static refalrts::FnResult func_CreateHardPatternm_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & CreateHardPattern-Aux/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & CreateHardPattern-Aux/4 (/9 # ADT-Brackets/11 (/14 e.Name#1/12 )/15 e.body#1/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_ADTm_Brackets, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 12
    // closed e.body#1 as range 7
    //DEBUG: e.Name#1: 12
    //DEBUG: e.body#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # ADT-Brackets/11 AsIs: (/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.body#1/7 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # ADT-Brackets ( e.idx ) e.idx ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/9 # ADT-Brackets/11 (/14 e.Name#1/12 )/15 e.body#1/7 )/10 e.smth#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_ADTm_Brackets, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#1 as range 12
    // closed e.body#1 as range 7
    // closed e.smth#1 as range 5
    //DEBUG: e.Name#1: 12
    //DEBUG: e.body#1: 7
    //DEBUG: e.smth#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # ADT-Brackets/11 AsIs: (/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.body#1/7 } >/16 )/17 </18 Tile{ HalfReuse: & CreateHardPattern-Aux/10 AsIs: e.smth#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[10], ref_CreateHardPatternm_Aux.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[9], context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/5 (/9 # ADT-Brackets/11 (/14 e.Name#1/12 )/15 e.body#1/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_ADTm_Brackets, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.smth#1 as range 5
    // closed e.Name#1 as range 12
    // closed e.body#1 as range 7
    //DEBUG: e.smth#1: 5
    //DEBUG: e.Name#1: 12
    //DEBUG: e.body#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/5 HalfReuse: >/9 HalfReuse: (/11 HalfReuse: # ADT-Brackets/14 } (/16 Tile{ AsIs: e.Name#1/12 } )/17 </18 Tile{ HalfReuse: & CreateHardPattern-Aux/15 AsIs: e.body#1/7 HalfReuse: >/10 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_ident( context[14], ident_ADTm_Brackets );
    refalrts::reinit_name( context[15], ref_CreateHardPatternm_Aux.ref.function );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Brackets e.idx )
    // </0 & CreateHardPattern-Aux/4 (/9 # Brackets/11 e.body#1/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_Brackets, context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.body#1 as range 7
    //DEBUG: e.body#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </9 HalfReuse: & CreateHardPattern-Aux/11 AsIs: e.body#1/7 HalfReuse: >/10 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Brackets );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[11], ref_CreateHardPatternm_Aux.ref.function );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Brackets e.idx ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/9 # Brackets/11 e.body#1/7 )/10 e.smth#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_Brackets, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.body#1 as range 7
    // closed e.smth#1 as range 5
    //DEBUG: e.body#1: 7
    //DEBUG: e.smth#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </9 HalfReuse: & CreateHardPattern-Aux/11 AsIs: e.body#1/7 HalfReuse: >/10 } )/12 </13 & CreateHardPattern-Aux/14 Tile{ AsIs: e.smth#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_CreateHardPatternm_Aux.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Brackets );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[11], ref_CreateHardPatternm_Aux.ref.function );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( # Brackets e.idx )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/5 (/9 # Brackets/11 e.body#1/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_Brackets, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.smth#1 as range 5
    // closed e.body#1 as range 7
    //DEBUG: e.smth#1: 5
    //DEBUG: e.body#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/5 HalfReuse: >/9 HalfReuse: (/11 } # Brackets/12 </13 & CreateHardPattern-Aux/14 Tile{ AsIs: e.body#1/7 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_ident( context[12], ident_Brackets ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_CreateHardPatternm_Aux.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # S ( e.idx ) ( e.idx ) ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/9 # S/11 (/14 e.name#1/12 )/15 (/18 e.pattern#1/16 )/19 )/10 e.smth#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_S, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[7], context[8] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.name#1 as range 12
    // closed e.pattern#1 as range 16
    // closed e.smth#1 as range 5
    //DEBUG: e.name#1: 12
    //DEBUG: e.pattern#1: 16
    //DEBUG: e.smth#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.pattern#1/16 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/20 # S/21 (/22"idx"/23 )/25 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/9 AsIs: # S/11 AsIs: (/14 AsIs: e.name#1/12 AsIs: )/15 HalfReuse: )/18 } )/26 )/27 )/28 Tile{ HalfReuse: </19 HalfReuse: & CreateHardPattern-Aux/10 AsIs: e.smth#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[21], ident_S ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[18] );
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[10], ref_CreateHardPatternm_Aux.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[20], context[28] );
    refalrts::link_brackets( context[0], context[27] );
    refalrts::link_brackets( context[4], context[26] );
    refalrts::link_brackets( context[9], context[18] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[22], context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[0], context[18] );
    res = refalrts::splice_evar( res, context[20], context[25] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( # S ( e.idx ) ( e.idx ) )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/5 (/9 # S/11 (/14 e.name#1/12 )/15 (/18 e.pattern#1/16 )/19 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_S, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[7], context[8] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.smth#1 as range 5
    // closed e.name#1 as range 12
    // closed e.pattern#1 as range 16
    //DEBUG: e.smth#1: 5
    //DEBUG: e.name#1: 12
    //DEBUG: e.pattern#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.pattern#1/16 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/5 } >/20 (/21 # S/22 (/23"idx"/24 )/26 (/27 (/28 Tile{ AsIs: (/9 AsIs: # S/11 AsIs: (/14 AsIs: e.name#1/12 AsIs: )/15 HalfReuse: )/18 } Tile{ AsIs: )/19 AsIs: )/10 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], ident_S ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[18] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::link_brackets( context[27], context[10] );
    refalrts::link_brackets( context[28], context[19] );
    refalrts::link_brackets( context[9], context[18] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[23], context[26] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[9], context[18] );
    res = refalrts::splice_evar( res, context[20], context[28] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # T ( e.idx ) ( e.idx ) ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/9 # T/11 (/14 e.name#1/12 )/15 (/18 e.pattern#1/16 )/19 )/10 e.smth#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_T, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[7], context[8] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.name#1 as range 12
    // closed e.pattern#1 as range 16
    // closed e.smth#1 as range 5
    //DEBUG: e.name#1: 12
    //DEBUG: e.pattern#1: 16
    //DEBUG: e.smth#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.pattern#1/16 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/20 # T/21 (/22"idx"/23 )/25 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/9 AsIs: # T/11 AsIs: (/14 AsIs: e.name#1/12 AsIs: )/15 HalfReuse: )/18 } )/26 )/27 )/28 Tile{ HalfReuse: </19 HalfReuse: & CreateHardPattern-Aux/10 AsIs: e.smth#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[21], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[18] );
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[10], ref_CreateHardPatternm_Aux.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[20], context[28] );
    refalrts::link_brackets( context[0], context[27] );
    refalrts::link_brackets( context[4], context[26] );
    refalrts::link_brackets( context[9], context[18] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[22], context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[0], context[18] );
    res = refalrts::splice_evar( res, context[20], context[25] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( # T ( e.idx ) ( e.idx ) )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/5 (/9 # T/11 (/14 e.name#1/12 )/15 (/18 e.pattern#1/16 )/19 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_T, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[7], context[8] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.smth#1 as range 5
    // closed e.name#1 as range 12
    // closed e.pattern#1 as range 16
    //DEBUG: e.smth#1: 5
    //DEBUG: e.name#1: 12
    //DEBUG: e.pattern#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.pattern#1/16 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/5 } >/20 (/21 # T/22 (/23"idx"/24 )/26 (/27 (/28 Tile{ AsIs: (/9 AsIs: # T/11 AsIs: (/14 AsIs: e.name#1/12 AsIs: )/15 HalfReuse: )/18 } Tile{ AsIs: )/19 AsIs: )/10 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[18] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::link_brackets( context[27], context[10] );
    refalrts::link_brackets( context[28], context[19] );
    refalrts::link_brackets( context[9], context[18] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[23], context[26] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[9], context[18] );
    res = refalrts::splice_evar( res, context[20], context[28] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Atom e.idx ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/9 # Atom/11 e.attr#1/7 )/10 e.smth#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_Atom, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.attr#1 as range 7
    // closed e.smth#1 as range 5
    //DEBUG: e.attr#1: 7
    //DEBUG: e.smth#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Atom/11 AsIs: e.attr#1/7 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( # Atom e.idx )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/5 (/9 # Atom/11 e.attr#1/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_Atom, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.smth#1 as range 5
    // closed e.attr#1 as range 7
    //DEBUG: e.smth#1: 5
    //DEBUG: e.attr#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/5 HalfReuse: >/9 HalfReuse: (/11 } Tile{ HalfReuse: # Atom/10 } Tile{ AsIs: e.attr#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_ident( context[10], ident_Atom );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    //
    // </0 & CreateHardPattern-Aux/4 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & CreateHardPattern-Aux/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & CreateHardPattern-Aux/4 e.smth#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.smth#1 as range 5
  //DEBUG: e.smth#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/7 # E/8 (/9"idx"/10 )/12 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: e.smth#1/5 HalfReuse: )/1 } )/13 )/14 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], ident_E ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "idx", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::link_brackets( context[0], context[13] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[9], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateHardPatternm_Aux("CreateHardPattern-Aux", 2868726444U, 1644946798U, func_CreateHardPatternm_Aux);


//End of file
