// This file automatically generated from 'FastGen.sref'
// Don't edit! Edit 'FastGen.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2024961752_1863937909
static const refalrts::RefalIdentifier ident_ADTm_Brackets = refalrts::ident_from_static("ADT-Brackets");
static const refalrts::RefalIdentifier ident_Atom = refalrts::ident_from_static("Atom");
static const refalrts::RefalIdentifier ident_Brackets = refalrts::ident_from_static("Brackets");
static const refalrts::RefalIdentifier ident_E = refalrts::ident_from_static("E");
static const refalrts::RefalIdentifier ident_Eq = refalrts::ident_from_static("Eq");
static const refalrts::RefalIdentifier ident_NotEq = refalrts::ident_from_static("NotEq");
static const refalrts::RefalIdentifier ident_S = refalrts::ident_from_static("S");
static const refalrts::RefalIdentifier ident_T = refalrts::ident_from_static("T");
static refalrts::ExternalReference ref_CreateFastGen("CreateFastGen", 0U, 0U);
static refalrts::ExternalReference ref_Dec("Dec", 0U, 0U);
static refalrts::ExternalReference ref_FastGen("FastGen", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_FastGenm_K("FastGen-K", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_FastGenm_MeN("FastGen-MeN", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_FastGenm_Terms("FastGen-Terms", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_LengthComp("LengthComp", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_PreparePatternsFastGen("PreparePatternsFastGen", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_gen_PreparePatternsFastGen_L1("PreparePatternsFastGen\\1", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_PreparePatternsFastGenm_Aux("PreparePatternsFastGen-Aux", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_gen_PreparePatternsFastGenm_Aux_L1("PreparePatternsFastGen-Aux\\1", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_SplitReps("SplitReps", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_gen_SplitReps_L1("SplitReps\\1", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_SplitRepsm_Aux("SplitReps-Aux", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_SplitRepsm_Brackets("SplitReps-Brackets", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_gen_SplitRepsm_Brackets_L1("SplitReps-Brackets\\1", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_UnBracketAndNum("UnBracketAndNum", 2024961752U, 1863937909U);
static refalrts::ExternalReference ref_UnBracketInBrackets("UnBracketInBrackets", 2024961752U, 1863937909U);

static refalrts::FnResult func_UnBracketAndNum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & UnBracketAndNum/4 s.Num#1/9 (/7 e.Any#1/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Any#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Any#1: 5
  //DEBUG: s.Num#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & UnBracketAndNum/4 s.Num#1/9 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Num1 #9/0 } Tile{ AsIs: e.Any#1/5 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnBracketAndNum("UnBracketAndNum", 2024961752U, 1863937909U, func_UnBracketAndNum);


static refalrts::FnResult func_UnBracketInBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & UnBracketInBrackets/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // 1 ( ( e.idx ) )
    // </0 & UnBracketInBrackets/4 1/5 (/10 (/14 e.Smth#1/12 )/15 )/11 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[8], context[9] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.Smth#1 as range 12
    //DEBUG: e.Smth#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & UnBracketInBrackets/4 1/5 (/10 (/14 {REMOVED TILE} )/15 )/11 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Smth#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx e.idx
  // </0 & UnBracketInBrackets/4 s.Other#1/5 e.Any#1/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  // closed e.Any#1 as range 6
  //DEBUG: s.Other#1: 5
  //DEBUG: e.Any#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & UnBracketInBrackets/4 s.Other#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Any#1/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnBracketInBrackets("UnBracketInBrackets", 2024961752U, 1863937909U, func_UnBracketInBrackets);


static refalrts::FnResult func_gen_PreparePatternsFastGenm_Aux_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & PreparePatternsFastGen-Aux\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    // ( s.idx ( e.idx ) ( ( e.idx ) ) )
    // </0 & PreparePatternsFastGen-Aux\1/4 (/7 s.type#2/9 (/14 e.idx#2/12 )/15 (/18 (/22 e.Replacement#2/20 )/23 )/19 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[10], context[11] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.idx#2 as range 12
    // closed e.Replacement#2 as range 20
    //DEBUG: s.type#2: 9
    //DEBUG: e.idx#2: 12
    //DEBUG: e.Replacement#2: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & PreparePatternsFastGen-Aux\1/4 {REMOVED TILE} (/14 e.idx#2/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.type#2/9 } Tile{ HalfReuse: '$'/15 AsIs: (/18 AsIs: (/22 AsIs: e.Replacement#2/20 AsIs: )/23 AsIs: )/19 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_char( context[15], '$' );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[8] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Brackets e.idx )
    // </0 & PreparePatternsFastGen-Aux\1/4 (/7 # Brackets/9 e.inBrackets#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_Brackets, context[9] ) )
      continue;
    // closed e.inBrackets#2 as range 10
    //DEBUG: e.inBrackets#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: # Brackets/0 HalfReuse: 1/4 HalfReuse: </7 HalfReuse: & PreparePatternsFastGen-Aux/9 AsIs: e.inBrackets#2/10 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], ident_Brackets );
    refalrts::reinit_number( context[4], 1UL );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ref_PreparePatternsFastGenm_Aux.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & PreparePatternsFastGen-Aux\1/4 (/7 # ADT-Brackets/9 (/14 e.Name#2/12 )/15 e.inBrackets#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_ADTm_Brackets, context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    // closed e.inBrackets#2 as range 10
    //DEBUG: e.Name#2: 12
    //DEBUG: e.inBrackets#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } 1/16 Tile{ AsIs: </0 Reuse: & PreparePatternsFastGen-Aux/4 } Tile{ AsIs: e.inBrackets#2/10 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_number( context[16], 1UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_PreparePatternsFastGenm_Aux.ref.function );
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
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Atom e.idx )
  // </0 & PreparePatternsFastGen-Aux\1/4 (/7 # Atom/9 e.any#2/10 )/8 >/1
  context[10] = context[5];
  context[11] = context[6];
  if( ! refalrts::ident_term(  ident_Atom, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.any#2 as range 10
  //DEBUG: e.any#2: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & PreparePatternsFastGen-Aux\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Atom/9 AsIs: e.any#2/10 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreparePatternsFastGenm_Aux_L1("PreparePatternsFastGen-Aux\\1", 2024961752U, 1863937909U, func_gen_PreparePatternsFastGenm_Aux_L1);


static refalrts::FnResult func_PreparePatternsFastGenm_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PreparePatternsFastGen-Aux/4 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & PreparePatternsFastGen-Aux\1/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_PreparePatternsFastGenm_Aux_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PreparePatternsFastGenm_Aux("PreparePatternsFastGen-Aux", 2024961752U, 1863937909U, func_PreparePatternsFastGenm_Aux);


static refalrts::FnResult func_gen_PreparePatternsFastGen_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & PreparePatternsFastGen\1/4 (/7 e.sent#2/5 )/8 >/1
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
  // closed e.sent#2 as range 5
  //DEBUG: e.sent#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & PreparePatternsFastGen-Aux/7 AsIs: e.sent#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ref_PreparePatternsFastGenm_Aux.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreparePatternsFastGen_L1("PreparePatternsFastGen\\1", 2024961752U, 1863937909U, func_gen_PreparePatternsFastGen_L1);


static refalrts::FnResult func_PreparePatternsFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PreparePatternsFastGen/4 e.all#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.all#1 as range 2
  //DEBUG: e.all#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & PreparePatternsFastGen\1/4 AsIs: e.all#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_PreparePatternsFastGen_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PreparePatternsFastGen("PreparePatternsFastGen", 2024961752U, 1863937909U, func_PreparePatternsFastGen);


static refalrts::FnResult func_SplitRepsm_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$ ( e.$ ) ( e.$ )
  // </0 & SplitReps-Aux/4 s.idx#0/13 e.idxV#0/2 (/11 e.idxVVB#0/9 )/12 (/7 e.idxVVTB#0/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVVB#0 as range 9
  // closed e.idxVVTB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // 0 e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 0/13 e.Any#1/14 (/11 e.Scanned#1/16 )/12 (/7 e.Else#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    if( ! refalrts::number_term( 0UL, context[13] ) )
      continue;
    // closed e.Any#1 as range 14
    // closed e.Scanned#1 as range 16
    // closed e.Else#1 as range 18
    //DEBUG: e.Any#1: 14
    //DEBUG: e.Scanned#1: 16
    //DEBUG: e.Else#1: 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SplitReps-Aux/4 0/13 e.Any#1/14 (/11 e.Scanned#1/16 )/12 (/7 e.Else#1/18 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # Brackets s.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/22 # Brackets/24 s.ONum#1/25 )/23 e.Tail#1/14 (/11 e.Scanned#1/16 )/12 (/7 e.Else#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  ident_Brackets, context[20], context[21] );
    if( ! context[24] )
      continue;
    // closed e.Tail#1 as range 14
    // closed e.Scanned#1 as range 16
    // closed e.Else#1 as range 18
    if( ! refalrts::svar_left( context[25], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Tail#1: 14
    //DEBUG: e.Scanned#1: 16
    //DEBUG: e.Else#1: 18
    //DEBUG: s.ONum#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Num#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 } Tile{ HalfReuse: s.Num1 #13/23 AsIs: e.Tail#1/14 AsIs: (/11 AsIs: e.Scanned#1/16 HalfReuse: (/12 HalfReuse: # Brackets/7 } s.ONum#1/25/26 )/27 )/28 (/29 Tile{ AsIs: e.Else#1/18 } Tile{ AsIs: (/22 AsIs: # Brackets/24 AsIs: s.ONum#1/25 } )/30 Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[26], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[23], context[13] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[7], ident_Brackets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[29], context[8] );
    refalrts::link_brackets( context[22], context[30] );
    refalrts::link_brackets( context[11], context[28] );
    refalrts::link_brackets( context[12], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[26], context[29] );
    res = refalrts::splice_evar( res, context[23], context[7] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # Brackets s.idx ( ( e.idx ) ) e.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/22 # Brackets/24 s.ONum#1/25 (/28 (/32 e.Rep#1/30 )/33 )/29 e.Replacements#1/20 )/23 e.Tail#1/14 (/11 e.Scanned#1/16 )/12 (/7 e.Else#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  ident_Brackets, context[20], context[21] );
    if( ! context[24] )
      continue;
    // closed e.Tail#1 as range 14
    // closed e.Scanned#1 as range 16
    // closed e.Else#1 as range 18
    if( ! refalrts::svar_left( context[25], context[20], context[21] ) )
      continue;
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[20], context[21] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    // closed e.Rep#1 as range 30
    // closed e.Replacements#1 as range 20
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Tail#1: 14
    //DEBUG: e.Scanned#1: 16
    //DEBUG: e.Else#1: 18
    //DEBUG: s.ONum#1: 25
    //DEBUG: e.Rep#1: 30
    //DEBUG: e.Replacements#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Num#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 } Tile{ HalfReuse: s.Num1 #13/23 AsIs: e.Tail#1/14 AsIs: (/11 AsIs: e.Scanned#1/16 HalfReuse: (/12 HalfReuse: # Brackets/7 } Tile{ HalfReuse: s.ONum1 #25/32 AsIs: e.Rep#1/30 AsIs: )/33 AsIs: )/29 } Tile{ AsIs: (/28 } Tile{ AsIs: e.Else#1/18 } Tile{ AsIs: (/22 AsIs: # Brackets/24 AsIs: s.ONum#1/25 } Tile{ AsIs: e.Replacements#1/20 } )/34 Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[23], context[13] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[7], ident_Brackets );
    refalrts::reinit_svar( context[32], context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[28], context[8] );
    refalrts::link_brackets( context[22], context[34] );
    refalrts::link_brackets( context[11], context[29] );
    refalrts::link_brackets( context[12], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[32], context[29] );
    res = refalrts::splice_evar( res, context[23], context[7] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # ADT-Brackets ( e.idx ) s.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/22 # ADT-Brackets/24 (/27 e.Name#1/25 )/28 s.ONum#1/29 )/23 e.Tail#1/14 (/11 e.Scanned#1/16 )/12 (/7 e.Else#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  ident_ADTm_Brackets, context[20], context[21] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[20], context[21] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Name#1 as range 25
    // closed e.Tail#1 as range 14
    // closed e.Scanned#1 as range 16
    // closed e.Else#1 as range 18
    if( ! refalrts::svar_left( context[29], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Name#1: 25
    //DEBUG: e.Tail#1: 14
    //DEBUG: e.Scanned#1: 16
    //DEBUG: e.Else#1: 18
    //DEBUG: s.ONum#1: 29

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/14 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/16 } Tile{ AsIs: (/22 AsIs: # ADT-Brackets/24 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.ONum#1/29 AsIs: )/23 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/18 HalfReuse: (/8 HalfReuse: # ADT-Brackets/1 } (/30 e.Name#1/25/31 )/33 s.ONum#1/29/34 )/35 )/36 >/37 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[31], context[32], context[25], context[26]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[29]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[1], ident_ADTm_Brackets );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[36] );
    refalrts::link_brackets( context[8], context[35] );
    refalrts::link_brackets( context[30], context[33] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[30], context[37] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # ADT-Brackets ( e.idx ) s.idx ( ( e.idx ) ) e.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/22 # ADT-Brackets/24 (/27 e.Name#1/25 )/28 s.ONum#1/29 (/32 (/36 e.Rep#1/34 )/37 )/33 e.Replacements#1/20 )/23 e.Tail#1/14 (/11 e.Scanned#1/16 )/12 (/7 e.Else#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  ident_ADTm_Brackets, context[20], context[21] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[20], context[21] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Name#1 as range 25
    // closed e.Tail#1 as range 14
    // closed e.Scanned#1 as range 16
    // closed e.Else#1 as range 18
    if( ! refalrts::svar_left( context[29], context[20], context[21] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[20], context[21] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    context[34] = 0;
    context[35] = 0;
    context[36] = refalrts::brackets_left( context[34], context[35], context[30], context[31] );
    if( ! context[36] )
      continue;
    refalrts::bracket_pointers(context[36], context[37]);
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    // closed e.Rep#1 as range 34
    // closed e.Replacements#1 as range 20
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Name#1: 25
    //DEBUG: e.Tail#1: 14
    //DEBUG: e.Scanned#1: 16
    //DEBUG: e.Else#1: 18
    //DEBUG: s.ONum#1: 29
    //DEBUG: e.Rep#1: 34
    //DEBUG: e.Replacements#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/14 } Tile{ AsIs: (/32 } Tile{ AsIs: e.Scanned#1/16 } Tile{ AsIs: (/22 AsIs: # ADT-Brackets/24 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.ONum#1/29 } Tile{ AsIs: e.Rep#1/34 } Tile{ HalfReuse: )/36 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/18 HalfReuse: (/8 HalfReuse: # ADT-Brackets/1 } Tile{ AsIs: (/11 } e.Name#1/25/38 Tile{ AsIs: )/37 HalfReuse: s.ONum1 #29/33 AsIs: e.Replacements#1/20 AsIs: )/23 } )/40 >/41 Tile{ ]] }
    if (! refalrts::copy_evar(context[38], context[39], context[25], context[26]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[41] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[36] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[1], ident_ADTm_Brackets );
    refalrts::reinit_svar( context[33], context[29] );
    refalrts::push_stack( context[41] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[40] );
    refalrts::link_brackets( context[8], context[23] );
    refalrts::link_brackets( context[11], context[37] );
    refalrts::link_brackets( context[32], context[12] );
    refalrts::link_brackets( context[22], context[36] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[37], context[23] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[22], context[29] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( s.idx '$' ( ( e.idx ) ) e.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/22 s.Mode#1/24 '$'/25 (/28 (/32 e.Rep#1/30 )/33 )/29 e.otherRep#1/20 )/23 e.Tail#1/14 (/11 e.Scanned#1/16 )/12 (/7 e.Else#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Tail#1 as range 14
    // closed e.Scanned#1 as range 16
    // closed e.Else#1 as range 18
    if( ! refalrts::svar_left( context[24], context[20], context[21] ) )
      continue;
    context[25] = refalrts::char_left( '$', context[20], context[21] );
    if( ! context[25] )
      continue;
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[20], context[21] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    // closed e.Rep#1 as range 30
    // closed e.otherRep#1 as range 20
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Tail#1: 14
    //DEBUG: e.Scanned#1: 16
    //DEBUG: e.Else#1: 18
    //DEBUG: s.Mode#1: 24
    //DEBUG: e.Rep#1: 30
    //DEBUG: e.otherRep#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/14 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/16 } Tile{ AsIs: (/22 AsIs: s.Mode#1/24 AsIs: '$'/25 AsIs: (/28 AsIs: (/32 AsIs: e.Rep#1/30 AsIs: )/33 AsIs: )/29 } Tile{ AsIs: )/23 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/18 HalfReuse: (/8 HalfReuse: s.Mode1 #24/1 } '$'/34 Tile{ AsIs: e.otherRep#1/20 } )/35 )/36 >/37 Tile{ ]] }
    if( ! refalrts::alloc_char( context[34], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_svar( context[1], context[24] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[36] );
    refalrts::link_brackets( context[8], context[35] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[28], context[29] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[22], context[29] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( s.idx s.idx e.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/22 s.Mode#1/24 s.Type#1/25 e.Value#1/20 )/23 e.Tail#1/14 (/11 e.Scanned#1/16 )/12 (/7 e.Else#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Tail#1 as range 14
    // closed e.Scanned#1 as range 16
    // closed e.Else#1 as range 18
    if( ! refalrts::svar_left( context[24], context[20], context[21] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[20], context[21] ) )
      continue;
    // closed e.Value#1 as range 20
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Tail#1: 14
    //DEBUG: e.Scanned#1: 16
    //DEBUG: e.Else#1: 18
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Type#1: 25
    //DEBUG: e.Value#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/14 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/16 } Tile{ AsIs: (/22 AsIs: s.Mode#1/24 AsIs: s.Type#1/25 AsIs: e.Value#1/20 AsIs: )/23 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/18 HalfReuse: (/8 HalfReuse: s.Mode1 #24/1 } s.Type#1/25/26 e.Value#1/20/27 )/29 )/30 >/31 Tile{ ]] }
    if (! refalrts::copy_stvar(context[26], context[25]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[27], context[28], context[20], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_svar( context[1], context[24] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[30] );
    refalrts::link_brackets( context[8], context[29] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[26], context[31] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx )
  // </0 & SplitReps-Aux/4 s.Num#1/13 (/11 e.Scanned#1/16 )/12 (/7 e.Else#1/18 )/8 >/1
  context[14] = context[2];
  context[15] = context[3];
  context[16] = context[9];
  context[17] = context[10];
  context[18] = context[5];
  context[19] = context[6];
  if( ! refalrts::empty_seq( context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 16
  // closed e.Else#1 as range 18
  //DEBUG: s.Num#1: 13
  //DEBUG: e.Scanned#1: 16
  //DEBUG: e.Else#1: 18

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/20 Tile{ AsIs: (/11 AsIs: e.Scanned#1/16 AsIs: )/12 HalfReuse: )/7 } </21 & SplitReps-Aux/22 Tile{ AsIs: </0 Reuse: & Dec/4 AsIs: s.Num#1/13 } >/23 Tile{ AsIs: e.Else#1/18 } (/24 )/25 (/26 Tile{ AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], ref_SplitRepsm_Aux.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[7] );
  refalrts::update_name( context[4], ref_Dec.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[21] );
  refalrts::link_brackets( context[26], context[8] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[20], context[7] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[11], context[7] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SplitRepsm_Aux("SplitReps-Aux", 2024961752U, 1863937909U, func_SplitRepsm_Aux);


static refalrts::FnResult func_gen_SplitRepsm_Brackets_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( e.$ )
  // </0 & SplitReps-Brackets\1/4 (/7 e.idxB#0/5 )/8 >/1
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
  // closed e.idxB#0 as range 5
  do {
    // ( # Brackets s.idx e.idx )
    // </0 & SplitReps-Brackets\1/4 (/7 # Brackets/11 s.Num#2/12 e.inBrackets#2/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = refalrts::ident_left(  ident_Brackets, context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    // closed e.inBrackets#2 as range 9
    //DEBUG: s.Num#2: 12
    //DEBUG: e.inBrackets#2: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/13 # Brackets/14 1/15 </16 Tile{ HalfReuse: & UnBracketInBrackets/0 HalfReuse: s.Num2 #12/4 HalfReuse: </7 HalfReuse: & SplitReps/11 AsIs: s.Num#2/12 AsIs: e.inBrackets#2/9 HalfReuse: >/8 AsIs: >/1 } )/17 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], ident_Brackets ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[15], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], ref_UnBracketInBrackets.ref.function );
    refalrts::reinit_svar( context[4], context[12] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[11], ref_SplitReps.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[13], context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[13], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # ADT-Brackets ( e.idx ) s.idx e.idx )
    // </0 & SplitReps-Brackets\1/4 (/7 # ADT-Brackets/11 (/14 e.Name#2/12 )/15 s.Num#2/16 e.inBrackets#2/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = refalrts::ident_left(  ident_ADTm_Brackets, context[9], context[10] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[9], context[10] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    // closed e.inBrackets#2 as range 9
    //DEBUG: e.Name#2: 12
    //DEBUG: s.Num#2: 16
    //DEBUG: e.inBrackets#2: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/11 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } 1/17 Tile{ AsIs: </0 Reuse: & UnBracketInBrackets/4 } s.Num#2/16/18 </19 & SplitReps/20 Tile{ AsIs: s.Num#2/16 AsIs: e.inBrackets#2/9 HalfReuse: >/8 AsIs: >/1 } )/21 Tile{ ]] }
    if( ! refalrts::alloc_number( context[17], 1UL ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[18], context[16]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], ref_SplitReps.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_UnBracketInBrackets.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & SplitReps-Brackets\1/4 (/7 e.Else#2/9 )/8 >/1
  context[9] = context[5];
  context[10] = context[6];
  // closed e.Else#2 as range 9
  //DEBUG: e.Else#2: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SplitReps-Brackets\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Else#2/9 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SplitRepsm_Brackets_L1("SplitReps-Brackets\\1", 2024961752U, 1863937909U, func_gen_SplitRepsm_Brackets_L1);


static refalrts::FnResult func_SplitRepsm_Brackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & SplitReps-Brackets/4 e.Reps#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Reps#1 as range 2
  //DEBUG: e.Reps#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & SplitReps-Brackets\1/4 AsIs: e.Reps#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_SplitRepsm_Brackets_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SplitRepsm_Brackets("SplitReps-Brackets", 2024961752U, 1863937909U, func_SplitRepsm_Brackets);


static refalrts::FnResult func_gen_SplitReps_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & SplitReps\1/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // 1 e.idx
    // </0 & SplitReps\1/4 1/5 e.Any#2/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;
    // closed e.Any#2 as range 6
    //DEBUG: e.Any#2: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: (/5 AsIs: e.Any#2/6 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[4], context[0] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx e.idx
  // </0 & SplitReps\1/4 s.Other#2/5 e.Any#2/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  // closed e.Any#2 as range 6
  //DEBUG: s.Other#2: 5
  //DEBUG: e.Any#2: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SplitReps-Aux/4 AsIs: s.Other#2/5 AsIs: e.Any#2/6 HalfReuse: (/1 } )/8 (/9 )/10 >/11 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_SplitRepsm_Aux.ref.function );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[1], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SplitReps_L1("SplitReps\\1", 2024961752U, 1863937909U, func_gen_SplitReps_L1);


static refalrts::FnResult func_SplitReps(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & SplitReps/4 s.Num#1/5 e.Reps#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reps#1 as range 2
  //DEBUG: s.Num#1: 5
  //DEBUG: e.Reps#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: s.Num#1/5 } </6 & SplitReps-Brackets/7 Tile{ AsIs: e.Reps#1/2 } >/8 & SplitReps\1/9 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_SplitRepsm_Brackets.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_SplitReps_L1.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SplitReps("SplitReps", 2024961752U, 1863937909U, func_SplitReps);


static refalrts::FnResult func_FastGenm_Terms(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  //FAST GEN: s.$ ( ( e.$ ) ) ( ( e.$ ) )
  //GLOBAL GEN: s.$ ( ( e.$ ) ) ( ( e.$ ) )
  // </0 & FastGen-Terms/4 s.idx#0/21 (/15 (/19 e.idxVBB#0/17 )/20 )/16 (/7 (/11 e.idxVTBB#0/9 )/12 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBB#0 as range 17
  // closed e.idxVTBB#0 as range 9
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx ( ( # E '$' e.idx ) ) ( ( # E '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # E/26 '$'/27 e.Pattern1#1/22 )/20 )/16 (/7 (/11 # E/28 '$'/29 e.Pattern2#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_E, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_left(  ident_E, context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[29] )
      continue;
    // closed e.Pattern1#1 as range 22
    // closed e.Pattern2#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern1#1: 22
    //DEBUG: e.Pattern2#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # E/26 '$'/27 {REMOVED TILE} )/20 )/16 (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # E/28 AsIs: '$'/29 } Tile{ AsIs: e.Pattern1#1/22 } Tile{ AsIs: e.Pattern2#1/24 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[11], context[29] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # E '$' e.idx ) ) ( ( e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # E/26 '$'/27 e.Pattern#1/22 )/20 )/16 (/7 (/11 e.any#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_E, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    // closed e.Pattern#1 as range 22
    // closed e.any#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 22
    //DEBUG: e.any#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # E/26 AsIs: '$'/27 } Tile{ AsIs: e.Pattern#1/22 } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: e.any#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( e.idx ) ) ( ( # E '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 e.any#1/22 )/20 )/16 (/7 (/11 # E/26 '$'/27 e.Pattern#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_E, context[24], context[25] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[27] )
      continue;
    // closed e.any#1 as range 22
    // closed e.Pattern#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.any#1: 22
    //DEBUG: e.Pattern#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # E/26 AsIs: '$'/27 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: e.any#1/22 AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/24 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[27] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/26 (/30 e.Name#1/28 )/31 s.NumB#1/32 e.1#1/22 )/20 )/16 (/7 (/11 # Atom/27 e.val#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_ADTm_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_Atom, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[22], context[23] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Name#1 as range 28
    // closed e.val#1 as range 24
    if( ! refalrts::svar_left( context[32], context[22], context[23] ) )
      continue;
    // closed e.1#1 as range 22
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name#1: 28
    //DEBUG: e.val#1: 24
    //DEBUG: s.NumB#1: 32
    //DEBUG: e.1#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/33 # T/34 '$'/35 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT-Brackets/26 AsIs: (/30 AsIs: e.Name#1/28 AsIs: )/31 AsIs: s.NumB#1/32 AsIs: e.1#1/22 AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/27 } # Atom/36 Tile{ AsIs: e.val#1/24 } )/37 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[36], ident_Atom ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[27] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[33], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[27], context[37] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[15], context[27] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[33], context[35] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/26 e.val#1/22 )/20 )/16 (/7 (/11 # ADT-Brackets/27 (/30 e.Name#1/28 )/31 s.NumB#1/32 e.1#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Atom, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_ADTm_Brackets, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.val#1 as range 22
    // closed e.Name#1 as range 28
    if( ! refalrts::svar_left( context[32], context[24], context[25] ) )
      continue;
    // closed e.1#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 22
    //DEBUG: e.Name#1: 28
    //DEBUG: s.NumB#1: 32
    //DEBUG: e.1#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/33 Tile{ Reuse: # T/26 } '$'/34 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/21 AsIs: (/15 HalfReuse: # Atom/19 } Tile{ AsIs: e.val#1/22 } )/35 Tile{ HalfReuse: >/20 HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT-Brackets/27 AsIs: (/30 AsIs: e.Name#1/28 AsIs: )/31 AsIs: s.NumB#1/32 AsIs: e.1#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/36 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::update_ident( context[26], ident_T );
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_ident( context[19], ident_Atom );
    refalrts::reinit_close_call( context[20] );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[35] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[19] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Brackets s.idx e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Brackets/26 s.NumB#1/28 e.1#1/22 )/20 )/16 (/7 (/11 # Atom/27 e.val#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_Atom, context[24], context[25] );
    if( ! context[27] )
      continue;
    // closed e.val#1 as range 24
    if( ! refalrts::svar_left( context[28], context[22], context[23] ) )
      continue;
    // closed e.1#1 as range 22
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 24
    //DEBUG: s.NumB#1: 28
    //DEBUG: e.1#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/29 # T/30 '$'/31 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/26 AsIs: s.NumB#1/28 AsIs: e.1#1/22 AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/27 } # Atom/32 Tile{ AsIs: e.val#1/24 } )/33 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], ident_Atom ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[27] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[27], context[33] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[15], context[27] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # Brackets s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/26 e.val#1/22 )/20 )/16 (/7 (/11 # Brackets/27 s.NumB#1/28 e.1#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Atom, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_Brackets, context[24], context[25] );
    if( ! context[27] )
      continue;
    // closed e.val#1 as range 22
    if( ! refalrts::svar_left( context[28], context[24], context[25] ) )
      continue;
    // closed e.1#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 22
    //DEBUG: s.NumB#1: 28
    //DEBUG: e.1#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/29 Tile{ Reuse: # T/26 } '$'/30 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/21 AsIs: (/15 HalfReuse: # Atom/19 } Tile{ AsIs: e.val#1/22 } )/31 Tile{ HalfReuse: >/20 HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/27 AsIs: s.NumB#1/28 AsIs: e.1#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/32 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::update_ident( context[26], ident_T );
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_ident( context[19], ident_Atom );
    refalrts::reinit_close_call( context[20] );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[32] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[19] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # S '$' e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/26 '$'/27 e.Pattern#1/22 )/20 )/16 (/7 (/11 # ADT-Brackets/28 (/31 e.Name#1/29 )/32 s.NumB#1/33 e.inBr#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_S, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_left(  ident_ADTm_Brackets, context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[24], context[25] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    // closed e.Pattern#1 as range 22
    // closed e.Name#1 as range 29
    if( ! refalrts::svar_left( context[33], context[24], context[25] ) )
      continue;
    // closed e.inBr#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 22
    //DEBUG: e.Name#1: 29
    //DEBUG: s.NumB#1: 33
    //DEBUG: e.inBr#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # T/26 AsIs: '$'/27 } Tile{ AsIs: e.Pattern#1/22 } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT-Brackets/28 AsIs: (/31 AsIs: e.Name#1/29 AsIs: )/32 AsIs: s.NumB#1/33 AsIs: e.inBr#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::update_ident( context[26], ident_T );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # S '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/26 (/31 e.Name#1/29 )/32 s.NumB#1/33 e.inBr#1/22 )/20 )/16 (/7 (/11 # S/27 '$'/28 e.Pattern#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_ADTm_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_S, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    // closed e.Name#1 as range 29
    // closed e.Pattern#1 as range 24
    if( ! refalrts::svar_left( context[33], context[22], context[23] ) )
      continue;
    // closed e.inBr#1 as range 22
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name#1: 29
    //DEBUG: e.Pattern#1: 24
    //DEBUG: s.NumB#1: 33
    //DEBUG: e.inBr#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/34 # T/35 '$'/36 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT-Brackets/26 AsIs: (/31 AsIs: e.Name#1/29 AsIs: )/32 AsIs: s.NumB#1/33 AsIs: e.inBr#1/22 AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/27 HalfReuse: # S/28 } '$'/37 Tile{ AsIs: e.Pattern#1/24 } )/38 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[27] );
    refalrts::reinit_ident( context[28], ident_S );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[34], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[27], context[38] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[15], context[28] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # S '$' e.idx ) ) ( ( # Brackets s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/26 '$'/27 e.Pattern#1/22 )/20 )/16 (/7 (/11 # Brackets/28 s.NumB#1/29 e.inBr#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_S, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_left(  ident_Brackets, context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.Pattern#1 as range 22
    if( ! refalrts::svar_left( context[29], context[24], context[25] ) )
      continue;
    // closed e.inBr#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 22
    //DEBUG: s.NumB#1: 29
    //DEBUG: e.inBr#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # T/26 AsIs: '$'/27 } Tile{ AsIs: e.Pattern#1/22 } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::update_ident( context[26], ident_T );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Brackets s.idx e.idx ) ) ( ( # S '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Brackets/26 s.NumB#1/29 e.inBr#1/22 )/20 )/16 (/7 (/11 # S/27 '$'/28 e.Pattern#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_S, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.Pattern#1 as range 24
    if( ! refalrts::svar_left( context[29], context[22], context[23] ) )
      continue;
    // closed e.inBr#1 as range 22
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 24
    //DEBUG: s.NumB#1: 29
    //DEBUG: e.inBr#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/30 # T/31 '$'/32 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/26 AsIs: s.NumB#1/29 AsIs: e.inBr#1/22 AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/27 HalfReuse: # S/28 } '$'/33 Tile{ AsIs: e.Pattern#1/24 } )/34 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[31], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[27] );
    refalrts::reinit_ident( context[28], ident_S );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[30], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[27], context[34] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[15], context[28] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Brackets s.idx e.idx ) ) ( ( # Brackets s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Brackets/26 s.Num1#1/28 e.1#1/22 )/20 )/16 (/7 (/11 # Brackets/27 s.Num2#1/29 e.2#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_Brackets, context[24], context[25] );
    if( ! context[27] )
      continue;
    if( ! refalrts::svar_left( context[28], context[22], context[23] ) )
      continue;
    // closed e.1#1 as range 22
    if( ! refalrts::svar_left( context[29], context[24], context[25] ) )
      continue;
    // closed e.2#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: s.Num1#1: 28
    //DEBUG: e.1#1: 22
    //DEBUG: s.Num2#1: 29
    //DEBUG: e.2#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} s.Num1#1/28 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num2#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # Brackets/26 } Tile{ AsIs: </0 Reuse: & UnBracketAndNum/4 } Tile{ HalfReuse: </20 HalfReuse: & FastGen/16 HalfReuse: s.Num11 #28/7 AsIs: (/11 } Tile{ AsIs: e.1#1/22 } )/30 Tile{ AsIs: (/15 } Tile{ AsIs: e.2#1/24 } Tile{ AsIs: )/12 HalfReuse: >/8 AsIs: >/1 } Tile{ HalfReuse: )/27 } Tile{ ]] }
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_UnBracketAndNum.ref.function );
    refalrts::reinit_open_call( context[20] );
    refalrts::reinit_name( context[16], ref_FastGen.ref.function );
    refalrts::reinit_svar( context[7], context[28] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[27] );
    refalrts::link_brackets( context[19], context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[15], context[12] );
    refalrts::link_brackets( context[11], context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[20], context[11] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[26] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/26 (/30 e.Name#1/28 )/31 s.Num1#1/38 e.1#1/22 )/20 )/16 (/7 (/11 # ADT-Brackets/27 (/34 e.Name#1/36 )/35 s.Num2#1/39 e.2#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_ADTm_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_ADTm_Brackets, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[22], context[23] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = 0;
    context[33] = 0;
    context[34] = refalrts::brackets_left( context[32], context[33], context[24], context[25] );
    if( ! context[34] )
      continue;
    refalrts::bracket_pointers(context[34], context[35]);
    // closed e.Name#1 as range 28
    if( ! refalrts::repeated_evar_left( context[36], context[37], context[28], context[29], context[32], context[33] ) )
      continue;
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    if( ! refalrts::svar_left( context[38], context[22], context[23] ) )
      continue;
    // closed e.1#1 as range 22
    if( ! refalrts::svar_left( context[39], context[24], context[25] ) )
      continue;
    // closed e.2#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name#1: 28
    //DEBUG: s.Num1#1: 38
    //DEBUG: e.1#1: 22
    //DEBUG: s.Num2#1: 39
    //DEBUG: e.2#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} e.Name#1/28 )/31 s.Num1#1/38 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num2#1/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # ADT-Brackets/27 AsIs: (/34 AsIs: e.Name#1/36 AsIs: )/35 } Tile{ AsIs: </0 Reuse: & UnBracketAndNum/4 } Tile{ HalfReuse: </15 HalfReuse: & FastGen/19 HalfReuse: s.Num11 #38/26 AsIs: (/30 } Tile{ AsIs: e.1#1/22 } Tile{ AsIs: )/16 AsIs: (/7 } Tile{ AsIs: e.2#1/24 } Tile{ AsIs: )/12 HalfReuse: >/8 AsIs: >/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::update_name( context[4], ref_UnBracketAndNum.ref.function );
    refalrts::reinit_open_call( context[15] );
    refalrts::reinit_name( context[19], ref_FastGen.ref.function );
    refalrts::reinit_svar( context[26], context[38] );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[11], context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[30], context[16] );
    refalrts::link_brackets( context[34], context[35] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[16], context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[15], context[30] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[35] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/26 (/30 e.Name1#1/28 )/31 s.Num1#1/36 e.1#1/22 )/20 )/16 (/7 (/11 # ADT-Brackets/27 (/34 e.Name2#1/32 )/35 s.Num2#1/37 e.2#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_ADTm_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_ADTm_Brackets, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[22], context[23] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = 0;
    context[33] = 0;
    context[34] = refalrts::brackets_left( context[32], context[33], context[24], context[25] );
    if( ! context[34] )
      continue;
    refalrts::bracket_pointers(context[34], context[35]);
    // closed e.Name1#1 as range 28
    // closed e.Name2#1 as range 32
    if( ! refalrts::svar_left( context[36], context[22], context[23] ) )
      continue;
    // closed e.1#1 as range 22
    if( ! refalrts::svar_left( context[37], context[24], context[25] ) )
      continue;
    // closed e.2#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name1#1: 28
    //DEBUG: e.Name2#1: 32
    //DEBUG: s.Num1#1: 36
    //DEBUG: e.1#1: 22
    //DEBUG: s.Num2#1: 37
    //DEBUG: e.2#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/38 # T/39 '$'/40 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT-Brackets/26 AsIs: (/30 AsIs: e.Name1#1/28 AsIs: )/31 AsIs: s.Num1#1/36 AsIs: e.1#1/22 AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/27 HalfReuse: # ADT-Brackets/34 } (/41 Tile{ AsIs: e.Name2#1/32 } Tile{ AsIs: )/35 AsIs: s.Num2#1/37 AsIs: e.2#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/42 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[39], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[42] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[27] );
    refalrts::reinit_ident( context[34], ident_ADTm_Brackets );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[38], context[42] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[27], context[12] );
    refalrts::link_brackets( context[41], context[35] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[42], context[42] );
    res = refalrts::splice_evar( res, context[35], context[1] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[41], context[41] );
    res = refalrts::splice_evar( res, context[15], context[34] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Brackets s.idx e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Brackets/26 s.Num1#1/32 e.1#1/22 )/20 )/16 (/7 (/11 # ADT-Brackets/27 (/30 e.Name#1/28 )/31 s.Num2#1/33 e.2#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_ADTm_Brackets, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Name#1 as range 28
    if( ! refalrts::svar_left( context[32], context[22], context[23] ) )
      continue;
    // closed e.1#1 as range 22
    if( ! refalrts::svar_left( context[33], context[24], context[25] ) )
      continue;
    // closed e.2#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name#1: 28
    //DEBUG: s.Num1#1: 32
    //DEBUG: e.1#1: 22
    //DEBUG: s.Num2#1: 33
    //DEBUG: e.2#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num1#1/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/34 # T/35 '$'/36 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/21 AsIs: (/15 HalfReuse: # Brackets/19 HalfReuse: s.Num11 #32/26 } Tile{ AsIs: e.1#1/22 } )/37 Tile{ HalfReuse: >/20 HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT-Brackets/27 AsIs: (/30 AsIs: e.Name#1/28 AsIs: )/31 AsIs: s.Num2#1/33 AsIs: e.2#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/38 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_ident( context[19], ident_Brackets );
    refalrts::reinit_svar( context[26], context[32] );
    refalrts::reinit_close_call( context[20] );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[34], context[38] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[37] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[26] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # Brackets s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/26 (/30 e.Name#1/28 )/31 s.Num1#1/32 e.1#1/22 )/20 )/16 (/7 (/11 # Brackets/27 s.Num2#1/33 e.2#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_ADTm_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_Brackets, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[22], context[23] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Name#1 as range 28
    if( ! refalrts::svar_left( context[32], context[22], context[23] ) )
      continue;
    // closed e.1#1 as range 22
    if( ! refalrts::svar_left( context[33], context[24], context[25] ) )
      continue;
    // closed e.2#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name#1: 28
    //DEBUG: s.Num1#1: 32
    //DEBUG: e.1#1: 22
    //DEBUG: s.Num2#1: 33
    //DEBUG: e.2#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/34 # T/35 '$'/36 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT-Brackets/26 AsIs: (/30 AsIs: e.Name#1/28 AsIs: )/31 AsIs: s.Num1#1/32 AsIs: e.1#1/22 AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/27 } # Brackets/37 Tile{ AsIs: s.Num2#1/33 AsIs: e.2#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/38 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[37], ident_Brackets ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[27] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[34], context[38] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[27], context[12] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[33], context[1] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[15], context[27] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # T '$' e.idx ) ) ( ( # Brackets s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/26 '$'/27 e.Pattern#1/22 )/20 )/16 (/7 (/11 # Brackets/28 s.NumB#1/29 e.inBr#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_T, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_left(  ident_Brackets, context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.Pattern#1 as range 22
    if( ! refalrts::svar_left( context[29], context[24], context[25] ) )
      continue;
    // closed e.inBr#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 22
    //DEBUG: s.NumB#1: 29
    //DEBUG: e.inBr#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/26 AsIs: '$'/27 } Tile{ AsIs: e.Pattern#1/22 } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Brackets s.idx e.idx ) ) ( ( # T '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Brackets/26 s.NumB#1/29 e.inBr#1/22 )/20 )/16 (/7 (/11 # T/27 '$'/28 e.Pattern#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_T, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.Pattern#1 as range 24
    if( ! refalrts::svar_left( context[29], context[22], context[23] ) )
      continue;
    // closed e.inBr#1 as range 22
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 24
    //DEBUG: s.NumB#1: 29
    //DEBUG: e.inBr#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/27 AsIs: '$'/28 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/26 AsIs: s.NumB#1/29 AsIs: e.inBr#1/22 AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/24 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[28] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # T '$' e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/26 '$'/27 e.Pattern#1/22 )/20 )/16 (/7 (/11 # ADT-Brackets/28 (/31 e.Name#1/29 )/32 s.NumB#1/33 e.inBr#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_T, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_left(  ident_ADTm_Brackets, context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[24], context[25] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    // closed e.Pattern#1 as range 22
    // closed e.Name#1 as range 29
    if( ! refalrts::svar_left( context[33], context[24], context[25] ) )
      continue;
    // closed e.inBr#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 22
    //DEBUG: e.Name#1: 29
    //DEBUG: s.NumB#1: 33
    //DEBUG: e.inBr#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/26 AsIs: '$'/27 } Tile{ AsIs: e.Pattern#1/22 } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT-Brackets/28 AsIs: (/31 AsIs: e.Name#1/29 AsIs: )/32 AsIs: s.NumB#1/33 AsIs: e.inBr#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # T '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/26 (/31 e.Name#1/29 )/32 s.NumB#1/33 e.inBr#1/22 )/20 )/16 (/7 (/11 # T/27 '$'/28 e.Pattern#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_ADTm_Brackets, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_T, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    // closed e.Name#1 as range 29
    // closed e.Pattern#1 as range 24
    if( ! refalrts::svar_left( context[33], context[22], context[23] ) )
      continue;
    // closed e.inBr#1 as range 22
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name#1: 29
    //DEBUG: e.Pattern#1: 24
    //DEBUG: s.NumB#1: 33
    //DEBUG: e.inBr#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/27 AsIs: '$'/28 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT-Brackets/26 AsIs: (/31 AsIs: e.Name#1/29 AsIs: )/32 AsIs: s.NumB#1/33 AsIs: e.inBr#1/22 AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/24 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[28] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/26 e.val#1/22 )/20 )/16 (/7 (/11 # Atom/27 e.val#1/28 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Atom, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_Atom, context[24], context[25] );
    if( ! context[27] )
      continue;
    // closed e.val#1 as range 22
    if( ! refalrts::repeated_evar_left( context[28], context[29], context[22], context[23], context[24], context[25] ) )
      continue;
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/26 e.val#1/22 )/20 )/16 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Atom/27 AsIs: e.val#1/28 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/26 e.val1#1/22 )/20 )/16 (/7 (/11 # Atom/27 e.val2#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Atom, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_Atom, context[24], context[25] );
    if( ! context[27] )
      continue;
    // closed e.val1#1 as range 22
    // closed e.val2#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val1#1: 22
    //DEBUG: e.val2#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/28 # S/29 '$'/30 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Atom/26 AsIs: e.val1#1/22 AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/27 } # Atom/31 Tile{ AsIs: e.val2#1/24 } )/32 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], ident_S ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[31], ident_Atom ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[27] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[28], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[27], context[32] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[15], context[27] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # S '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/26 e.val#1/22 )/20 )/16 (/7 (/11 # S/27 '$'/28 e.Pattern#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Atom, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_S, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.val#1 as range 22
    // closed e.Pattern#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 22
    //DEBUG: e.Pattern#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # S/27 AsIs: '$'/28 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Atom/26 AsIs: e.val#1/22 AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/24 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[28] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # S '$' e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/26 '$'/27 e.Pattern#1/22 )/20 )/16 (/7 (/11 # Atom/28 e.val#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_S, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_left(  ident_Atom, context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.Pattern#1 as range 22
    // closed e.val#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 22
    //DEBUG: e.val#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # S/26 AsIs: '$'/27 } Tile{ AsIs: e.Pattern#1/22 } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Atom/28 AsIs: e.val#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # T '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/26 e.val#1/22 )/20 )/16 (/7 (/11 # T/27 '$'/28 e.Pattern#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_Atom, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::ident_left(  ident_T, context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.val#1 as range 22
    // closed e.Pattern#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 22
    //DEBUG: e.Pattern#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/27 AsIs: '$'/28 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Atom/26 AsIs: e.val#1/22 AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/24 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[28] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # T '$' e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/26 '$'/27 e.Pattern#1/22 )/20 )/16 (/7 (/11 # Atom/28 e.val#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_T, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_left(  ident_Atom, context[24], context[25] );
    if( ! context[28] )
      continue;
    // closed e.Pattern#1 as range 22
    // closed e.val#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 22
    //DEBUG: e.val#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/26 AsIs: '$'/27 } Tile{ AsIs: e.Pattern#1/22 } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Atom/28 AsIs: e.val#1/24 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # T '$' e.idx ) ) ( ( # T '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/26 '$'/27 e.Pattern1#1/22 )/20 )/16 (/7 (/11 # T/28 '$'/29 e.Pattern2#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_T, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_left(  ident_T, context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[29] )
      continue;
    // closed e.Pattern1#1 as range 22
    // closed e.Pattern2#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern1#1: 22
    //DEBUG: e.Pattern2#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/26 '$'/27 {REMOVED TILE} )/20 )/16 (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/28 AsIs: '$'/29 } Tile{ AsIs: e.Pattern1#1/22 } Tile{ AsIs: e.Pattern2#1/24 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[11], context[29] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # T '$' e.idx ) ) ( ( # S '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/26 '$'/27 e.Pattern1#1/22 )/20 )/16 (/7 (/11 # S/28 '$'/29 e.Pattern2#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_T, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_left(  ident_S, context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[29] )
      continue;
    // closed e.Pattern1#1 as range 22
    // closed e.Pattern2#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern1#1: 22
    //DEBUG: e.Pattern2#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} )/20 )/16 (/7 (/11 # S/28 '$'/29 {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/26 AsIs: '$'/27 } Tile{ AsIs: e.Pattern1#1/22 } Tile{ AsIs: e.Pattern2#1/24 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # S '$' e.idx ) ) ( ( # T '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/26 '$'/27 e.Pattern1#1/22 )/20 )/16 (/7 (/11 # T/28 '$'/29 e.Pattern2#1/24 )/12 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = refalrts::ident_left(  ident_S, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::ident_left(  ident_T, context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[29] )
      continue;
    // closed e.Pattern1#1 as range 22
    // closed e.Pattern2#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern1#1: 22
    //DEBUG: e.Pattern2#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/26 '$'/27 {REMOVED TILE} )/20 )/16 (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/28 AsIs: '$'/29 } Tile{ AsIs: e.Pattern1#1/22 } Tile{ AsIs: e.Pattern2#1/24 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[11], context[29] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( ( # S '$' e.idx ) ) ( ( # S '$' e.idx ) )
  // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/26 '$'/27 e.Pattern1#1/22 )/20 )/16 (/7 (/11 # S/28 '$'/29 e.Pattern2#1/24 )/12 )/8 >/1
  context[22] = context[17];
  context[23] = context[18];
  context[24] = context[9];
  context[25] = context[10];
  context[26] = refalrts::ident_left(  ident_S, context[22], context[23] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  context[27] = refalrts::char_left( '$', context[22], context[23] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  context[28] = refalrts::ident_left(  ident_S, context[24], context[25] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  context[29] = refalrts::char_left( '$', context[24], context[25] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern1#1 as range 22
  // closed e.Pattern2#1 as range 24
  //DEBUG: s.Num#1: 21
  //DEBUG: e.Pattern1#1: 22
  //DEBUG: e.Pattern2#1: 24

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/26 '$'/27 {REMOVED TILE} )/20 )/16 (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # S/28 AsIs: '$'/29 } Tile{ AsIs: e.Pattern1#1/22 } Tile{ AsIs: e.Pattern2#1/24 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[11], context[29] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FastGenm_Terms("FastGen-Terms", 0U, 0U, func_FastGenm_Terms);


static refalrts::FnResult func_FastGenm_MeN(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  //FAST GEN: s.$ ( e.$ ) ( e.$ )
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ )
  // </0 & FastGen-MeN/4 s.idx#0/13 (/11 e.idxVB#0/9 )/12 (/7 e.idxVTB#0/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVB#0 as range 9
  // closed e.idxVTB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx ( t.idx e.idx ) ( t.idx e.idx )
    // </0 & FastGen-MeN/4 s.Num#1/13 (/11 t.left1#1/18 e.1#1/22 (/30 # E/32 e.inE1#1/28 )/31 e.2#1/24 )/12 (/7 t.left2#1/20 e.3#1/33 (/39 # E/41 e.inE2#1/37 )/40 e.4#1/35 )/8 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[5];
    context[17] = context[6];
    context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[16], context[17] );
    if( ! context[21] )
      continue;
    context[22] = 0;
    context[23] = 0;
    refalrts::start_e_loop();
    do {
      context[24] = context[14];
      context[25] = context[15];
      context[26] = context[16];
      context[27] = context[17];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      context[32] = refalrts::ident_left(  ident_E, context[28], context[29] );
      if( ! context[32] )
        continue;
      // closed e.inE1#1 as range 28
      // closed e.2#1 as range 24
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[35] = context[26];
        context[36] = context[27];
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::brackets_left( context[37], context[38], context[35], context[36] );
        if( ! context[39] )
          continue;
        refalrts::bracket_pointers(context[39], context[40]);
        context[41] = refalrts::ident_left(  ident_E, context[37], context[38] );
        if( ! context[41] )
          continue;
        // closed e.inE2#1 as range 37
        // closed e.4#1 as range 35
        //DEBUG: s.Num#1: 13
        //DEBUG: t.left1#1: 18
        //DEBUG: t.left2#1: 20
        //DEBUG: e.1#1: 22
        //DEBUG: e.inE1#1: 28
        //DEBUG: e.2#1: 24
        //DEBUG: e.3#1: 33
        //DEBUG: e.inE2#1: 37
        //DEBUG: e.4#1: 35

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FastGen-Terms/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: t.left1#1/18 } )/42 (/43 Tile{ AsIs: t.left2#1/20 } )/44 >/45 </46 & FastGen-MeN/47 s.Num#1/13/48 (/49 Tile{ AsIs: e.1#1/22 } Tile{ AsIs: (/30 AsIs: # E/32 AsIs: e.inE1#1/28 AsIs: )/31 AsIs: e.2#1/24 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.3#1/33 } Tile{ AsIs: (/39 AsIs: # E/41 AsIs: e.inE2#1/37 AsIs: )/40 AsIs: e.4#1/35 AsIs: )/8 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( context[42] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[43] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[44] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[45] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[46] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[47], ref_FastGenm_MeN.ref.function ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[48], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[49] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_FastGenm_Terms.ref.function );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[46] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[39], context[40] );
        refalrts::link_brackets( context[49], context[12] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::push_stack( context[45] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[43], context[44] );
        refalrts::link_brackets( context[11], context[42] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[39];
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[30], context[7] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[44], context[49] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[33], context[34], context[26], context[27] ) );
    } while ( refalrts::open_evar_advance( context[22], context[23], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx t.idx ) ( e.idx t.idx )
    // </0 & FastGen-MeN/4 s.Num#1/13 (/11 e.1#1/22 (/30 # E/32 e.inE1#1/28 )/31 e.2#1/24 t.right1#1/18 )/12 (/7 e.3#1/33 (/39 # E/41 e.inE2#1/37 )/40 e.4#1/35 t.right2#1/20 )/8 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[5];
    context[17] = context[6];
    context[19] = refalrts::tvar_right( context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    context[21] = refalrts::tvar_right( context[20], context[16], context[17] );
    if( ! context[21] )
      continue;
    context[22] = 0;
    context[23] = 0;
    refalrts::start_e_loop();
    do {
      context[24] = context[14];
      context[25] = context[15];
      context[26] = context[16];
      context[27] = context[17];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      context[32] = refalrts::ident_left(  ident_E, context[28], context[29] );
      if( ! context[32] )
        continue;
      // closed e.inE1#1 as range 28
      // closed e.2#1 as range 24
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[35] = context[26];
        context[36] = context[27];
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::brackets_left( context[37], context[38], context[35], context[36] );
        if( ! context[39] )
          continue;
        refalrts::bracket_pointers(context[39], context[40]);
        context[41] = refalrts::ident_left(  ident_E, context[37], context[38] );
        if( ! context[41] )
          continue;
        // closed e.inE2#1 as range 37
        // closed e.4#1 as range 35
        //DEBUG: s.Num#1: 13
        //DEBUG: t.right1#1: 18
        //DEBUG: t.right2#1: 20
        //DEBUG: e.1#1: 22
        //DEBUG: e.inE1#1: 28
        //DEBUG: e.2#1: 24
        //DEBUG: e.3#1: 33
        //DEBUG: e.inE2#1: 37
        //DEBUG: e.4#1: 35

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen-MeN/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: e.1#1/22 AsIs: (/30 AsIs: # E/32 AsIs: e.inE1#1/28 AsIs: )/31 } Tile{ AsIs: e.2#1/24 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.3#1/33 AsIs: (/39 AsIs: # E/41 AsIs: e.inE2#1/37 AsIs: )/40 } Tile{ AsIs: e.4#1/35 } )/42 >/43 </44 & FastGen-Terms/45 s.Num#1/13/46 (/47 Tile{ AsIs: t.right1#1/18 } )/48 (/49 Tile{ AsIs: t.right2#1/20 AsIs: )/8 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( context[42] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[43] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[44] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[45], ref_FastGenm_Terms.ref.function ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[46], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[49] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[44] );
        refalrts::link_brackets( context[49], context[8] );
        refalrts::link_brackets( context[47], context[48] );
        refalrts::push_stack( context[43] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[42] );
        refalrts::link_brackets( context[39], context[40] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[20];
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[42], context[47] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[12], context[40] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[33], context[34], context[26], context[27] ) );
    } while ( refalrts::open_evar_advance( context[22], context[23], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # E '$' e.idx ) ) ( ( # E '$' ( ( e.idx ) ) ) )
    // </0 & FastGen-MeN/4 s.Num#1/13 (/11 (/20 # E/22 '$'/23 e.inE1#1/18 )/21 )/12 (/7 (/26 # E/28 '$'/29 (/32 (/36 e.inE2#1/34 )/37 )/33 )/27 )/8 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[5];
    context[17] = context[6];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  ident_E, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[18], context[19] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[16], context[17] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = refalrts::ident_left(  ident_E, context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[29] )
      continue;
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[24], context[25] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    context[34] = 0;
    context[35] = 0;
    context[36] = refalrts::brackets_left( context[34], context[35], context[30], context[31] );
    if( ! context[36] )
      continue;
    refalrts::bracket_pointers(context[36], context[37]);
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.inE1#1 as range 18
    // closed e.inE2#1 as range 34
    //DEBUG: s.Num#1: 13
    //DEBUG: e.inE1#1: 18
    //DEBUG: e.inE2#1: 34

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-MeN/4 s.Num#1/13 (/11 (/20 # E/22 '$'/23 {REMOVED TILE} )/21 )/12 (/7 {REMOVED TILE} {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: '$'/29 } Tile{ AsIs: e.inE1#1/18 } Tile{ AsIs: (/32 AsIs: (/36 AsIs: e.inE2#1/34 AsIs: )/37 AsIs: )/33 AsIs: )/27 } Tile{ ]] }
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::link_brackets( context[36], context[37] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[32], context[27] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[26], context[29] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx )
  // </0 & FastGen-MeN/4 s.Num#1/13 (/11 e.in1#1/14 )/12 (/7 e.in2#1/16 )/8 >/1
  context[14] = context[9];
  context[15] = context[10];
  context[16] = context[5];
  context[17] = context[6];
  // closed e.in1#1 as range 14
  // closed e.in2#1 as range 16
  //DEBUG: s.Num#1: 13
  //DEBUG: e.in1#1: 14
  //DEBUG: e.in2#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } # E/18 '$'/19 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.in1#1/14 } >/20 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.in2#1/16 AsIs: )/8 HalfReuse: )/1 } )/21 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[18], ident_E ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], '$' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_SplitReps.ref.function );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[21] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FastGenm_MeN("FastGen-MeN", 2024961752U, 1863937909U, func_FastGenm_MeN);


static refalrts::FnResult func_LengthComp(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & LengthComp/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( t.idx e.idx ) ( t.idx e.idx )
    // </0 & LengthComp/4 (/9 t.1#1/15 e.tail1#1/7 )/10 (/13 t.2#1/17 e.tail2#1/11 )/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[16] = refalrts::tvar_left( context[15], context[7], context[8] );
    if( ! context[16] )
      continue;
    // closed e.tail1#1 as range 7
    context[18] = refalrts::tvar_left( context[17], context[11], context[12] );
    if( ! context[18] )
      continue;
    // closed e.tail2#1 as range 11
    //DEBUG: t.1#1: 15
    //DEBUG: e.tail1#1: 7
    //DEBUG: t.2#1: 17
    //DEBUG: e.tail2#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.1#1/15 {REMOVED TILE} {REMOVED TILE} t.2#1/17 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & LengthComp/4 AsIs: (/9 } Tile{ AsIs: e.tail1#1/7 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.tail2#1/11 } Tile{ AsIs: )/14 AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) ( )
    // </0 & LengthComp/4 (/9 )/10 (/13 )/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & LengthComp/4 (/9 )/10 (/13 )/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Eq/1 ]] }
    refalrts::reinit_ident( context[1], ident_Eq );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & LengthComp/4 e.1#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.1#1 as range 5
  //DEBUG: e.1#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & LengthComp/4 e.1#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NotEq/1 ]] }
  refalrts::reinit_ident( context[1], ident_NotEq );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LengthComp("LengthComp", 2024961752U, 1863937909U, func_LengthComp);


static refalrts::FnResult func_FastGenm_K(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: s.$ s.$ ( e.$ ) ( e.$ )
  //GLOBAL GEN: s.$ s.$ ( e.$ ) ( e.$ )
  // </0 & FastGen-K/4 s.idx#0/13 s.idxV#0/14 (/11 e.idxVVB#0/9 )/12 (/7 e.idxVVTB#0/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVVB#0 as range 9
  // closed e.idxVVTB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx # Eq ( t.idx e.idx ) ( t.idx e.idx )
    // </0 & FastGen-K/4 s.Num#1/13 # Eq/14 (/11 t.1#1/19 e.tail1#1/15 )/12 (/7 t.2#1/21 e.tail2#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    if( ! refalrts::ident_term(  ident_Eq, context[14] ) )
      continue;
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.tail1#1 as range 15
    context[22] = refalrts::tvar_left( context[21], context[17], context[18] );
    if( ! context[22] )
      continue;
    // closed e.tail2#1 as range 17
    //DEBUG: s.Num#1: 13
    //DEBUG: t.1#1: 19
    //DEBUG: e.tail1#1: 15
    //DEBUG: t.2#1: 21
    //DEBUG: e.tail2#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </23 & FastGen-Terms/24 s.Num#1/13/25 (/26 Tile{ AsIs: t.1#1/19 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: t.2#1/21 } )/27 >/28 Tile{ AsIs: </0 AsIs: & FastGen-K/4 AsIs: s.Num#1/13 AsIs: # Eq/14 AsIs: (/11 } Tile{ AsIs: e.tail1#1/15 } )/29 (/30 Tile{ AsIs: e.tail2#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_FastGenm_Terms.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[30], context[8] );
    refalrts::link_brackets( context[11], context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[7], context[27] );
    refalrts::link_brackets( context[26], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[12], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx # Eq ( ) ( )
    // </0 & FastGen-K/4 s.Num#1/13 # Eq/14 (/11 )/12 (/7 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    if( ! refalrts::ident_term(  ident_Eq, context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: s.Num#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-K/4 s.Num#1/13 # Eq/14 (/11 )/12 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx # NotEq ( e.idx ) ( e.idx )
  // </0 & FastGen-K/4 s.Num#1/13 # NotEq/14 (/11 e.1#1/15 )/12 (/7 e.2#1/17 )/8 >/1
  context[15] = context[9];
  context[16] = context[10];
  context[17] = context[5];
  context[18] = context[6];
  if( ! refalrts::ident_term(  ident_NotEq, context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.1#1 as range 15
  // closed e.2#1 as range 17
  //DEBUG: s.Num#1: 13
  //DEBUG: e.1#1: 15
  //DEBUG: e.2#1: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/19 Tile{ Reuse: # E/14 HalfReuse: '$'/11 } Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.1#1/15 } >/20 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.2#1/17 AsIs: )/8 HalfReuse: )/1 } )/21 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_ident( context[14], ident_E );
  refalrts::reinit_char( context[11], '$' );
  refalrts::update_name( context[4], ref_SplitReps.ref.function );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[19], context[21] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[14], context[11] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FastGenm_K("FastGen-K", 2024961752U, 1863937909U, func_FastGenm_K);


static refalrts::FnResult func_FastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ ( e.$ ) e.$
  // </0 & FastGen/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 e.idxVT#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.idxVB#0 as range 6
  // closed e.idxVT#0 as range 2
  do {
    // s.idx ( e.idx )
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/10 )/9 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.1#1 as range 10
    //DEBUG: s.Num#1: 5
    //DEBUG: e.1#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.1#1/10 AsIs: )/9 } Tile{ ]] }
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ) ( ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 )/9 (/16 )/17 e.Tail#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.Tail#1 as range 12
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </18 & Inc/19 Tile{ HalfReuse: s.Num1 #5/8 HalfReuse: >/9 AsIs: (/16 AsIs: )/17 AsIs: e.Tail#1/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[8], context[5] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # E '$' e.idx ) ) ( e.idx ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 (/16 # E/18 '$'/19 e.Pattern#1/14 )/17 )/9 (/22 e.any#1/20 )/23 e.Tail#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_E, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[12], context[13] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Pattern#1 as range 14
    // closed e.any#1 as range 20
    // closed e.Tail#1 as range 12
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Pattern#1: 14
    //DEBUG: e.any#1: 20
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </24 & Inc/25 Tile{ AsIs: s.Num#1/5 } Tile{ HalfReuse: >/22 } Tile{ AsIs: (/8 AsIs: (/16 AsIs: # E/18 AsIs: '$'/19 AsIs: e.Pattern#1/14 HalfReuse: (/17 HalfReuse: (/9 } Tile{ AsIs: e.any#1/20 } )/26 )/27 )/28 Tile{ AsIs: )/23 AsIs: e.Tail#1/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[22] );
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[23] );
    refalrts::link_brackets( context[16], context[28] );
    refalrts::link_brackets( context[17], context[27] );
    refalrts::link_brackets( context[9], context[26] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[23];
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( ( # E '$' e.idx ) ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 e.any#1/10 )/9 (/16 (/20 # E/22 '$'/23 e.Pattern#1/18 )/21 )/17 e.Tail#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  ident_E, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[18], context[19] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.any#1 as range 10
    // closed e.Pattern#1 as range 18
    // closed e.Tail#1 as range 12
    //DEBUG: s.Num#1: 5
    //DEBUG: e.any#1: 10
    //DEBUG: e.Pattern#1: 18
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } Tile{ HalfReuse: </8 } & Inc/24 Tile{ AsIs: s.Num#1/5 } Tile{ HalfReuse: >/9 AsIs: (/16 AsIs: (/20 AsIs: # E/22 } '$'/25 </26 & SplitReps/27 s.Num#1/5/28 Tile{ AsIs: e.any#1/10 } Tile{ HalfReuse: >/23 AsIs: e.Pattern#1/18 AsIs: )/21 AsIs: )/17 AsIs: e.Tail#1/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[24], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], ref_SplitReps.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[28], context[5]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_close_call( context[23] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[23];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[25], context[28] );
    res = refalrts::splice_evar( res, context[9], context[22] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 e.Any#1/10 )/9 (/16 )/17 e.Tail#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.Any#1 as range 10
    // closed e.Tail#1 as range 12
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Any#1: 10
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 & FastGen/19 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 HalfReuse: >/8 } (/20 (/21 # E/22 '$'/23 </24 & SplitReps/25 s.Num#1/5/26 Tile{ AsIs: e.Any#1/10 } >/27 (/28 (/29 )/30 Tile{ AsIs: )/9 HalfReuse: )/16 AsIs: )/17 AsIs: e.Tail#1/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ref_FastGen.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], ident_E ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ref_SplitReps.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[26], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Inc.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[20], context[17] );
    refalrts::link_brackets( context[21], context[16] );
    refalrts::link_brackets( context[28], context[9] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[27], context[30] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[20], context[26] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ) ( e.idx ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 )/9 (/16 e.Any#1/14 )/17 e.Tail#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Any#1 as range 14
    // closed e.Tail#1 as range 12
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Any#1: 14
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 & FastGen/19 </20 & Inc/21 s.Num#1/5/22 >/23 (/24 (/25 # E/26 '$'/27 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/5 HalfReuse: >/8 HalfReuse: (/9 AsIs: (/16 AsIs: e.Any#1/14 AsIs: )/17 } )/28 )/29 )/30 Tile{ AsIs: e.Tail#1/12 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ref_FastGen.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], ident_E ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[24], context[30] );
    refalrts::link_brackets( context[25], context[29] );
    refalrts::link_brackets( context[9], context[28] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[18], context[27] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # E '$' e.idx ) ) ( ( # E '$' e.idx ) ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 (/16 # E/18 '$'/19 e.Pattern1#1/14 )/17 )/9 (/22 (/26 # E/28 '$'/29 e.Pattern2#1/24 )/27 )/23 e.Tail#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_E, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[12], context[13] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = refalrts::ident_left(  ident_E, context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( '$', context[24], context[25] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.Pattern1#1 as range 14
    // closed e.Pattern2#1 as range 24
    // closed e.Tail#1 as range 12
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Pattern1#1: 14
    //DEBUG: e.Pattern2#1: 24
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE} # E/18 '$'/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } Tile{ HalfReuse: </8 HalfReuse: & Inc/16 } Tile{ HalfReuse: s.Num1 #5/17 HalfReuse: >/9 AsIs: (/22 AsIs: (/26 AsIs: # E/28 AsIs: '$'/29 } Tile{ AsIs: e.Pattern1#1/14 } Tile{ AsIs: e.Pattern2#1/24 } Tile{ AsIs: )/27 AsIs: )/23 AsIs: e.Tail#1/12 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[16], ref_Inc.ref.function );
    refalrts::reinit_svar( context[17], context[5] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[27];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[17], context[29] );
    res = refalrts::splice_evar( res, context[8], context[16] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( t.idx ) ( t.idx ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 t.1#1/18 )/9 (/16 t.2#1/20 )/17 e.Tail#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Tail#1 as range 12
    context[19] = refalrts::tvar_left( context[18], context[10], context[11] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[14], context[15] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Tail#1: 12
    //DEBUG: t.1#1: 18
    //DEBUG: t.2#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </22 & FastGen/23 </24 & Inc/25 s.Num#1/5/26 >/27 (/28 Tile{ AsIs: </0 Reuse: & FastGen-Terms/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: t.1#1/18 AsIs: )/9 AsIs: (/16 AsIs: t.2#1/20 AsIs: )/17 } >/29 )/30 Tile{ AsIs: e.Tail#1/12 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], ref_FastGen.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[26], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_FastGenm_Terms.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[28], context[30] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[22], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/18 (/26 # E/28 '$'/29 e.Pattern1#1/24 )/27 e.2#1/20 )/9 (/16 e.3#1/30 (/36 # E/38 '$'/39 e.Pattern2#1/34 )/37 e.4#1/32 )/17 e.Tail#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Tail#1 as range 12
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[10];
      context[21] = context[11];
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left(  ident_E, context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = refalrts::char_left( '$', context[24], context[25] );
      if( ! context[29] )
        continue;
      // closed e.Pattern1#1 as range 24
      // closed e.2#1 as range 20
      context[30] = 0;
      context[31] = 0;
      refalrts::start_e_loop();
      do {
        context[32] = context[22];
        context[33] = context[23];
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        context[38] = refalrts::ident_left(  ident_E, context[34], context[35] );
        if( ! context[38] )
          continue;
        context[39] = refalrts::char_left( '$', context[34], context[35] );
        if( ! context[39] )
          continue;
        // closed e.Pattern2#1 as range 34
        // closed e.4#1 as range 32
        //DEBUG: s.Num#1: 5
        //DEBUG: e.Tail#1: 12
        //DEBUG: e.1#1: 18
        //DEBUG: e.Pattern1#1: 24
        //DEBUG: e.2#1: 20
        //DEBUG: e.3#1: 30
        //DEBUG: e.Pattern2#1: 34
        //DEBUG: e.4#1: 32

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </40 & FastGen/41 </42 & Inc/43 s.Num#1/5/44 >/45 (/46 Tile{ AsIs: </0 Reuse: & FastGen-MeN/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.1#1/18 AsIs: (/26 AsIs: # E/28 AsIs: '$'/29 AsIs: e.Pattern1#1/24 AsIs: )/27 AsIs: e.2#1/20 AsIs: )/9 AsIs: (/16 AsIs: e.3#1/30 AsIs: (/36 AsIs: # E/38 AsIs: '$'/39 AsIs: e.Pattern2#1/34 AsIs: )/37 AsIs: e.4#1/32 AsIs: )/17 } >/47 )/48 Tile{ AsIs: e.Tail#1/12 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_open_call( context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[41], ref_FastGen.ref.function ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[42] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[43], ref_Inc.ref.function ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[44], context[5]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[45] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[46] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[48] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_FastGenm_MeN.ref.function );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[40] );
        refalrts::link_brackets( context[46], context[48] );
        refalrts::push_stack( context[47] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[16], context[17] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::push_stack( context[45] );
        refalrts::push_stack( context[42] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[0], context[17] );
        res = refalrts::splice_evar( res, context[40], context[46] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[30], context[31], context[22], context[23] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/10 )/9 (/16 e.2#1/14 )/17 e.Tail#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.1#1 as range 10
    // closed e.2#1 as range 14
    // closed e.Tail#1 as range 12
    //DEBUG: s.Num#1: 5
    //DEBUG: e.1#1: 10
    //DEBUG: e.2#1: 14
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </18 & Inc/19 s.Num#1/5/20 >/21 (/22 </23 & FastGen-K/24 Tile{ AsIs: s.Num#1/5 } </25 & LengthComp/26 Tile{ AsIs: (/8 AsIs: e.1#1/10 AsIs: )/9 AsIs: (/16 AsIs: e.2#1/14 AsIs: )/17 } >/27 (/28 e.1#1/10/29 )/31 (/32 e.2#1/14/33 )/35 >/36 )/37 Tile{ AsIs: e.Tail#1/12 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[20], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_FastGenm_K.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ref_LengthComp.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[29], context[30], context[10], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[33], context[34], context[14], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[22], context[37] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[32], context[35] );
    refalrts::link_brackets( context[28], context[31] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[27], context[37] );
    res = refalrts::splice_evar( res, context[8], context[17] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[18], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx )
  // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/10 )/9 (/16 e.2#1/14 )/17 >/1
  context[10] = context[6];
  context[11] = context[7];
  context[12] = context[2];
  context[13] = context[3];
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  if( ! refalrts::empty_seq( context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.1#1 as range 10
  // closed e.2#1 as range 14
  //DEBUG: s.Num#1: 5
  //DEBUG: e.1#1: 10
  //DEBUG: e.2#1: 14

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } # E/18 '$'/19 Tile{ AsIs: (/8 } (/20 Tile{ AsIs: e.1#1/10 } )/21 )/22 Tile{ HalfReuse: (/9 AsIs: (/16 AsIs: e.2#1/14 AsIs: )/17 HalfReuse: )/1 } )/23 )/24 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[18], ident_E ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], '$' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[24] );
  refalrts::link_brackets( context[4], context[23] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[8], context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FastGen("FastGen", 2024961752U, 1863937909U, func_FastGen);


static refalrts::FnResult func_CreateFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CreateFastGen/4 e.Patterns#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Patterns#1 as range 2
  //DEBUG: e.Patterns#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & FastGen/6 1/7 Tile{ AsIs: </0 Reuse: & PreparePatternsFastGen/4 AsIs: e.Patterns#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_FastGen.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[7], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_PreparePatternsFastGen.ref.function );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateFastGen("CreateFastGen", 0U, 0U, func_CreateFastGen);


//End of file
