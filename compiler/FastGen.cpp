// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_ADTm_Brackets = refalrts::ident_from_static("ADT-Brackets");
const refalrts::RefalIdentifier ident_Atom = refalrts::ident_from_static("Atom");
const refalrts::RefalIdentifier ident_Brackets = refalrts::ident_from_static("Brackets");
const refalrts::RefalIdentifier ident_E = refalrts::ident_from_static("E");
const refalrts::RefalIdentifier ident_Eq = refalrts::ident_from_static("Eq");
const refalrts::RefalIdentifier ident_NotEq = refalrts::ident_from_static("NotEq");
const refalrts::RefalIdentifier ident_S = refalrts::ident_from_static("S");
const refalrts::RefalIdentifier ident_T = refalrts::ident_from_static("T");
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_Dec("Dec", 0U, 0U);
static refalrts::ExternalReference ref_UnBracketAndNum("UnBracketAndNum", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_UnBracketInBrackets("UnBracketInBrackets", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_gen_PreparePatternsFastGenm_Aux_L1("PreparePatternsFastGen-Aux\\1", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_PreparePatternsFastGenm_Aux("PreparePatternsFastGen-Aux", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_gen_PreparePatternsFastGen_L1("PreparePatternsFastGen\\1", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_PreparePatternsFastGen("PreparePatternsFastGen", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_SplitRepsm_Aux("SplitReps-Aux", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_gen_SplitRepsm_Brackets_L1("SplitReps-Brackets\\1", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_SplitRepsm_Brackets("SplitReps-Brackets", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_gen_SplitReps_L1("SplitReps\\1", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_SplitReps("SplitReps", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_FastGenm_Terms("FastGen-Terms", 0U, 0U);
static refalrts::ExternalReference ref_FastGenm_MeN("FastGen-MeN", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_LengthComp("LengthComp", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_FastGenm_K("FastGen-K", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_FastGen("FastGen", 3381238288U, 2475174895U);
static refalrts::ExternalReference ref_CreateFastGen("CreateFastGen", 0U, 0U);

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

static refalrts::NativeReference nat_ref_UnBracketAndNum("UnBracketAndNum", 3381238288U, 2475174895U, func_UnBracketAndNum);

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
    // </0 & UnBracketInBrackets/4 1/5 (/8 (/12 e.Smth#1/10 )/13 )/9 >/1
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;
    context[14] = context[2];
    context[15] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[14], context[15] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[6], context[7] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.Smth#1 as range 10
    //DEBUG: e.Smth#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & UnBracketInBrackets/4 1/5 (/8 (/12 {REMOVED TILE} )/13 )/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Smth#1/10 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx e.idx
  // </0 & UnBracketInBrackets/4 s.Other#1/5 e.Any#1/2 >/1
  // closed e.Any#1 as range 2
  //DEBUG: s.Other#1: 5
  //DEBUG: e.Any#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & UnBracketInBrackets/4 s.Other#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Any#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnBracketInBrackets("UnBracketInBrackets", 3381238288U, 2475174895U, func_UnBracketInBrackets);

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
    // </0 & PreparePatternsFastGen-Aux\1/4 (/7 s.type#2/9 (/12 e.idx#2/10 )/13 (/16 (/20 e.Replacement#2/18 )/21 )/17 )/8 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[22], context[23] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[22], context[23] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.idx#2 as range 10
    // closed e.Replacement#2 as range 18
    //DEBUG: s.type#2: 9
    //DEBUG: e.idx#2: 10
    //DEBUG: e.Replacement#2: 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & PreparePatternsFastGen-Aux\1/4 {REMOVED TILE} (/12 e.idx#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.type#2/9 } Tile{ HalfReuse: '$'/13 AsIs: (/16 AsIs: (/20 AsIs: e.Replacement#2/18 AsIs: )/21 AsIs: )/17 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_char( context[13], '$' );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Brackets e.idx )
    // </0 & PreparePatternsFastGen-Aux\1/4 (/7 # Brackets/9 e.inBrackets#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Brackets, context[9] ) )
      continue;
    // closed e.inBrackets#2 as range 5
    //DEBUG: e.inBrackets#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Brackets/0 HalfReuse: 1/4 HalfReuse: </7 HalfReuse: & PreparePatternsFastGen-Aux/9 AsIs: e.inBrackets#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], ident_Brackets );
    refalrts::reinit_number( context[4], 1UL );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ref_PreparePatternsFastGenm_Aux.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & PreparePatternsFastGen-Aux\1/4 (/7 # ADT-Brackets/9 (/12 e.Name#2/10 )/13 e.inBrackets#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_ADTm_Brackets, context[9] ) )
      continue;
    context[22] = context[5];
    context[23] = context[6];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[22], context[23] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#2 as range 10
    // closed e.inBrackets#2 as range 22(5)
    //DEBUG: e.Name#2: 10
    //DEBUG: e.inBrackets#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } 1/14 Tile{ AsIs: </0 Reuse: & PreparePatternsFastGen-Aux/4 } Tile{ AsIs: e.inBrackets#2/22(5) } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_number( context[14], 1UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_PreparePatternsFastGenm_Aux.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Atom e.idx )
  // </0 & PreparePatternsFastGen-Aux\1/4 (/7 # Atom/9 e.any#2/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_Atom, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.any#2 as range 5
  //DEBUG: e.any#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & PreparePatternsFastGen-Aux\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Atom/9 AsIs: e.any#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreparePatternsFastGenm_Aux_L1("PreparePatternsFastGen-Aux\\1", 3381238288U, 2475174895U, func_gen_PreparePatternsFastGenm_Aux_L1);

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

static refalrts::NativeReference nat_ref_PreparePatternsFastGenm_Aux("PreparePatternsFastGen-Aux", 3381238288U, 2475174895U, func_PreparePatternsFastGenm_Aux);

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

static refalrts::NativeReference nat_ref_gen_PreparePatternsFastGen_L1("PreparePatternsFastGen\\1", 3381238288U, 2475174895U, func_gen_PreparePatternsFastGen_L1);

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

static refalrts::NativeReference nat_ref_PreparePatternsFastGen("PreparePatternsFastGen", 3381238288U, 2475174895U, func_PreparePatternsFastGen);

static refalrts::FnResult func_SplitRepsm_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
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
    // </0 & SplitReps-Aux/4 0/13 e.Any#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    if( ! refalrts::number_term( 0UL, context[13] ) )
      continue;
    // closed e.Any#1 as range 2
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    //DEBUG: e.Any#1: 2
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.Else#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SplitReps-Aux/4 0/13 e.Any#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1 {REMOVED TILE}
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
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/16 # Brackets/18 s.ONum#1/19 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_Brackets, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Tail#1: 2
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.Else#1: 5
    //DEBUG: s.ONum#1: 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Num#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 } Tile{ HalfReuse: s.Num1 #13/17 AsIs: e.Tail#1/36(2) AsIs: (/11 AsIs: e.Scanned#1/9 HalfReuse: (/12 HalfReuse: # Brackets/7 } s.ONum#1/19/20 )/21 )/22 (/23 Tile{ AsIs: e.Else#1/5 } Tile{ AsIs: (/16 AsIs: # Brackets/18 AsIs: s.ONum#1/19 } )/24 Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[20], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[17], context[13] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[7], ident_Brackets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[23], context[8] );
    refalrts::link_brackets( context[16], context[24] );
    refalrts::link_brackets( context[11], context[22] );
    refalrts::link_brackets( context[12], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[17], context[7] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # Brackets s.idx ( ( e.idx ) ) e.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/16 # Brackets/18 s.ONum#1/19 (/22 (/26 e.Rep#1/24 )/27 )/23 e.Replacements#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_Brackets, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.Rep#1 as range 24
    // closed e.Replacements#1 as range 14
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Tail#1: 2
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.Else#1: 5
    //DEBUG: s.ONum#1: 19
    //DEBUG: e.Rep#1: 24
    //DEBUG: e.Replacements#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Num#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 } Tile{ HalfReuse: s.Num1 #13/17 AsIs: e.Tail#1/36(2) AsIs: (/11 AsIs: e.Scanned#1/9 HalfReuse: (/12 HalfReuse: # Brackets/7 } Tile{ HalfReuse: s.ONum1 #19/26 AsIs: e.Rep#1/24 AsIs: )/27 AsIs: )/23 } Tile{ AsIs: (/22 } Tile{ AsIs: e.Else#1/5 } Tile{ AsIs: (/16 AsIs: # Brackets/18 AsIs: s.ONum#1/19 } Tile{ AsIs: e.Replacements#1/14 } )/28 Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[17], context[13] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[7], ident_Brackets );
    refalrts::reinit_svar( context[26], context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::link_brackets( context[16], context[28] );
    refalrts::link_brackets( context[11], context[23] );
    refalrts::link_brackets( context[12], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[26], context[23] );
    res = refalrts::splice_evar( res, context[17], context[7] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # ADT-Brackets ( e.idx ) s.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/16 # ADT-Brackets/18 (/21 e.Name#1/19 )/22 s.ONum#1/23 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_ADTm_Brackets, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[14], context[15] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Name#1 as range 19
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[23], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Name#1: 19
    //DEBUG: e.Tail#1: 2
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.Else#1: 5
    //DEBUG: s.ONum#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: # ADT-Brackets/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 AsIs: s.ONum#1/23 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: # ADT-Brackets/1 } (/24 e.Name#1/19/25 )/27 s.ONum#1/23/28 )/29 )/30 >/31 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[28], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[1], ident_ADTm_Brackets );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[30] );
    refalrts::link_brackets( context[8], context[29] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[31] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # ADT-Brackets ( e.idx ) s.idx ( ( e.idx ) ) e.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/16 # ADT-Brackets/18 (/21 e.Name#1/19 )/22 s.ONum#1/23 (/26 (/30 e.Rep#1/28 )/31 )/27 e.Replacements#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_ADTm_Brackets, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[14], context[15] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Name#1 as range 19
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[23], context[14], context[15] ) )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[14], context[15] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    // closed e.Rep#1 as range 28
    // closed e.Replacements#1 as range 14
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Name#1: 19
    //DEBUG: e.Tail#1: 2
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.Else#1: 5
    //DEBUG: s.ONum#1: 23
    //DEBUG: e.Rep#1: 28
    //DEBUG: e.Replacements#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/26 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: # ADT-Brackets/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 AsIs: s.ONum#1/23 } Tile{ AsIs: e.Rep#1/28 } Tile{ HalfReuse: )/30 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: # ADT-Brackets/1 } Tile{ AsIs: (/11 } e.Name#1/19/32 Tile{ AsIs: )/31 HalfReuse: s.ONum1 #23/27 AsIs: e.Replacements#1/14 AsIs: )/17 } )/34 >/35 Tile{ ]] }
    if (! refalrts::copy_evar(context[32], context[33], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[30] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[1], ident_ADTm_Brackets );
    refalrts::reinit_svar( context[27], context[23] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[34] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::link_brackets( context[11], context[31] );
    refalrts::link_brackets( context[26], context[12] );
    refalrts::link_brackets( context[16], context[30] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[31], context[17] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[16], context[23] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( s.idx '$' ( ( e.idx ) ) e.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/16 s.Mode#1/18 '$'/19 (/22 (/26 e.Rep#1/24 )/27 )/23 e.otherRep#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.Rep#1 as range 24
    // closed e.otherRep#1 as range 14
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Tail#1: 2
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.Else#1: 5
    //DEBUG: s.Mode#1: 18
    //DEBUG: e.Rep#1: 24
    //DEBUG: e.otherRep#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: s.Mode#1/18 AsIs: '$'/19 AsIs: (/22 AsIs: (/26 AsIs: e.Rep#1/24 AsIs: )/27 AsIs: )/23 } Tile{ AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: s.Mode1 #18/1 } '$'/28 Tile{ AsIs: e.otherRep#1/14 } )/29 )/30 >/31 Tile{ ]] }
    if( ! refalrts::alloc_char( context[28], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_svar( context[1], context[18] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[30] );
    refalrts::link_brackets( context[8], context[29] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[16], context[23] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( s.idx s.idx e.idx ) e.idx ( e.idx ) ( e.idx )
    // </0 & SplitReps-Aux/4 s.Num#1/13 (/16 s.Mode#1/18 s.Type#1/19 e.Value#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    // closed e.Value#1 as range 14
    //DEBUG: s.Num#1: 13
    //DEBUG: e.Tail#1: 2
    //DEBUG: e.Scanned#1: 9
    //DEBUG: e.Else#1: 5
    //DEBUG: s.Mode#1: 18
    //DEBUG: s.Type#1: 19
    //DEBUG: e.Value#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps-Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: s.Mode#1/18 AsIs: s.Type#1/19 AsIs: e.Value#1/14 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: s.Mode1 #18/1 } s.Type#1/19/20 e.Value#1/14/21 )/23 )/24 >/25 Tile{ ]] }
    if (! refalrts::copy_stvar(context[20], context[19]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[14], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_svar( context[1], context[18] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::link_brackets( context[8], context[23] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[25] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx )
  // </0 & SplitReps-Aux/4 s.Num#1/13 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9
  // closed e.Else#1 as range 5
  //DEBUG: s.Num#1: 13
  //DEBUG: e.Scanned#1: 9
  //DEBUG: e.Else#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/14 Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 HalfReuse: )/7 } </15 & SplitReps-Aux/16 Tile{ AsIs: </0 Reuse: & Dec/4 AsIs: s.Num#1/13 } >/17 Tile{ AsIs: e.Else#1/5 } (/18 )/19 (/20 Tile{ AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_SplitRepsm_Aux.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[7] );
  refalrts::update_name( context[4], ref_Dec.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[20], context[8] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[14], context[7] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[11], context[7] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SplitRepsm_Aux("SplitReps-Aux", 3381238288U, 2475174895U, func_SplitRepsm_Aux);

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
    // </0 & SplitReps-Brackets\1/4 (/7 # Brackets/9 s.Num#2/10 e.inBrackets#2/5 )/8 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[9] = refalrts::ident_left(  ident_Brackets, context[20], context[21] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[20], context[21] ) )
      continue;
    // closed e.inBrackets#2 as range 20(5)
    //DEBUG: s.Num#2: 10
    //DEBUG: e.inBrackets#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/11 # Brackets/12 1/13 </14 Tile{ HalfReuse: & UnBracketInBrackets/0 HalfReuse: s.Num2 #10/4 HalfReuse: </7 HalfReuse: & SplitReps/9 AsIs: s.Num#2/10 AsIs: e.inBrackets#2/20(5) HalfReuse: >/8 AsIs: >/1 } )/15 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], ident_Brackets ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[13], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], ref_UnBracketInBrackets.ref.function );
    refalrts::reinit_svar( context[4], context[10] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ref_SplitReps.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[11], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # ADT-Brackets ( e.idx ) s.idx e.idx )
    // </0 & SplitReps-Brackets\1/4 (/7 # ADT-Brackets/9 (/12 e.Name#2/10 )/13 s.Num#2/14 e.inBrackets#2/5 )/8 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[9] = refalrts::ident_left(  ident_ADTm_Brackets, context[20], context[21] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[20], context[21] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#2 as range 10
    if( ! refalrts::svar_left( context[14], context[20], context[21] ) )
      continue;
    // closed e.inBrackets#2 as range 20(5)
    //DEBUG: e.Name#2: 10
    //DEBUG: s.Num#2: 14
    //DEBUG: e.inBrackets#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } 1/15 Tile{ AsIs: </0 Reuse: & UnBracketInBrackets/4 } s.Num#2/14/16 </17 & SplitReps/18 Tile{ AsIs: s.Num#2/14 AsIs: e.inBrackets#2/20(5) HalfReuse: >/8 AsIs: >/1 } )/19 Tile{ ]] }
    if( ! refalrts::alloc_number( context[15], 1UL ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[16], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ref_SplitReps.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_UnBracketInBrackets.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[7], context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & SplitReps-Brackets\1/4 (/7 e.Else#2/5 )/8 >/1
  // closed e.Else#2 as range 5
  //DEBUG: e.Else#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SplitReps-Brackets\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Else#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SplitRepsm_Brackets_L1("SplitReps-Brackets\\1", 3381238288U, 2475174895U, func_gen_SplitRepsm_Brackets_L1);

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

static refalrts::NativeReference nat_ref_SplitRepsm_Brackets("SplitReps-Brackets", 3381238288U, 2475174895U, func_SplitRepsm_Brackets);

static refalrts::FnResult func_gen_SplitReps_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
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
    // </0 & SplitReps\1/4 1/5 e.Any#2/2 >/1
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;
    // closed e.Any#2 as range 2
    //DEBUG: e.Any#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: (/5 AsIs: e.Any#2/2 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ ]] }
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
  // </0 & SplitReps\1/4 s.Other#2/5 e.Any#2/2 >/1
  // closed e.Any#2 as range 2
  //DEBUG: s.Other#2: 5
  //DEBUG: e.Any#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SplitReps-Aux/4 AsIs: s.Other#2/5 AsIs: e.Any#2/2 HalfReuse: (/1 } )/6 (/7 )/8 >/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_SplitRepsm_Aux.ref.function );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[1], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SplitReps_L1("SplitReps\\1", 3381238288U, 2475174895U, func_gen_SplitReps_L1);

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

static refalrts::NativeReference nat_ref_SplitReps("SplitReps", 3381238288U, 2475174895U, func_SplitReps);

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
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # E/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # E/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_E, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  ident_E, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[25] )
      continue;
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern1#1: 17
    //DEBUG: e.Pattern2#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # E/22 '$'/23 {REMOVED TILE} )/20 )/16 (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # E/24 AsIs: '$'/25 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[11], context[25] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # E '$' e.idx ) ) ( ( e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # E/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 e.any#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_E, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    // closed e.Pattern#1 as range 39(17)
    // closed e.any#1 as range 9
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 17
    //DEBUG: e.any#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # E/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: e.any#1/9 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
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
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( e.idx ) ) ( ( # E '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 e.any#1/17 )/20 )/16 (/7 (/11 # E/22 '$'/23 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[9];
    context[40] = context[10];
    context[22] = refalrts::ident_left(  ident_E, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    // closed e.any#1 as range 17
    // closed e.Pattern#1 as range 39(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.any#1: 17
    //DEBUG: e.Pattern#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # E/22 AsIs: '$'/23 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: e.any#1/17 AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/39(9) } Tile{ HalfReuse: )/1 ]] }
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
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/22 (/26 e.Name#1/24 )/27 s.NumB#1/28 e.1#1/17 )/20 )/16 (/7 (/11 # Atom/23 e.val#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_ADTm_Brackets, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_Atom, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[39], context[40] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.Name#1 as range 24
    // closed e.val#1 as range 41(9)
    if( ! refalrts::svar_left( context[28], context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 39(17)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name#1: 24
    //DEBUG: e.val#1: 9
    //DEBUG: s.NumB#1: 28
    //DEBUG: e.1#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/29 # T/30 '$'/31 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT-Brackets/22 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 AsIs: s.NumB#1/28 AsIs: e.1#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 } # Atom/32 Tile{ AsIs: e.val#1/41(9) } )/33 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
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
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[33] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[15], context[23] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # ADT-Brackets/23 (/26 e.Name#1/24 )/27 s.NumB#1/28 e.1#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_Atom, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_ADTm_Brackets, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[41], context[42] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.val#1 as range 39(17)
    // closed e.Name#1 as range 24
    if( ! refalrts::svar_left( context[28], context[41], context[42] ) )
      continue;
    // closed e.1#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 17
    //DEBUG: e.Name#1: 24
    //DEBUG: s.NumB#1: 28
    //DEBUG: e.1#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/29 Tile{ Reuse: # T/22 } '$'/30 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/21 AsIs: (/15 HalfReuse: # Atom/19 } Tile{ AsIs: e.val#1/39(17) } )/31 Tile{ HalfReuse: >/20 HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT-Brackets/23 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 AsIs: s.NumB#1/28 AsIs: e.1#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/32 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::update_ident( context[22], ident_T );
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_ident( context[19], ident_Atom );
    refalrts::reinit_close_call( context[20] );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[32] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[0], context[19] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Brackets s.idx e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.NumB#1/24 e.1#1/17 )/20 )/16 (/7 (/11 # Atom/23 e.val#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_Brackets, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_Atom, context[41], context[42] );
    if( ! context[23] )
      continue;
    // closed e.val#1 as range 41(9)
    if( ! refalrts::svar_left( context[24], context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 39(17)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 9
    //DEBUG: s.NumB#1: 24
    //DEBUG: e.1#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/25 # T/26 '$'/27 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/22 AsIs: s.NumB#1/24 AsIs: e.1#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 } # Atom/28 Tile{ AsIs: e.val#1/41(9) } )/29 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], ident_Atom ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[25], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[29] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[15], context[23] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # Brackets s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # Brackets/23 s.NumB#1/24 e.1#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_Atom, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_Brackets, context[41], context[42] );
    if( ! context[23] )
      continue;
    // closed e.val#1 as range 39(17)
    if( ! refalrts::svar_left( context[24], context[41], context[42] ) )
      continue;
    // closed e.1#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 17
    //DEBUG: s.NumB#1: 24
    //DEBUG: e.1#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/25 Tile{ Reuse: # T/22 } '$'/26 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/21 AsIs: (/15 HalfReuse: # Atom/19 } Tile{ AsIs: e.val#1/39(17) } )/27 Tile{ HalfReuse: >/20 HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/23 AsIs: s.NumB#1/24 AsIs: e.1#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/28 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::update_ident( context[22], ident_T );
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_ident( context[19], ident_Atom );
    refalrts::reinit_close_call( context[20] );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[25], context[28] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[0], context[19] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # S '$' e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # ADT-Brackets/24 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_S, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  ident_ADTm_Brackets, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[41], context[42] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Pattern#1 as range 39(17)
    // closed e.Name#1 as range 25
    if( ! refalrts::svar_left( context[29], context[41], context[42] ) )
      continue;
    // closed e.inBr#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 17
    //DEBUG: e.Name#1: 25
    //DEBUG: s.NumB#1: 29
    //DEBUG: e.inBr#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT-Brackets/24 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::update_ident( context[22], ident_T );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # S '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/22 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/17 )/20 )/16 (/7 (/11 # S/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_ADTm_Brackets, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_S, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[39], context[40] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Name#1 as range 25
    // closed e.Pattern#1 as range 41(9)
    if( ! refalrts::svar_left( context[29], context[39], context[40] ) )
      continue;
    // closed e.inBr#1 as range 39(17)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name#1: 25
    //DEBUG: e.Pattern#1: 9
    //DEBUG: s.NumB#1: 29
    //DEBUG: e.inBr#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/30 # T/31 '$'/32 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT-Brackets/22 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 HalfReuse: # S/24 } '$'/33 Tile{ AsIs: e.Pattern#1/41(9) } )/34 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
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
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_ident( context[24], ident_S );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[30], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[34] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[15], context[24] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # S '$' e.idx ) ) ( ( # Brackets s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Brackets/24 s.NumB#1/25 e.inBr#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_S, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  ident_Brackets, context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 39(17)
    if( ! refalrts::svar_left( context[25], context[41], context[42] ) )
      continue;
    // closed e.inBr#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 17
    //DEBUG: s.NumB#1: 25
    //DEBUG: e.inBr#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/24 AsIs: s.NumB#1/25 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::update_ident( context[22], ident_T );
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
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Brackets s.idx e.idx ) ) ( ( # S '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.NumB#1/25 e.inBr#1/17 )/20 )/16 (/7 (/11 # S/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_Brackets, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_S, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 41(9)
    if( ! refalrts::svar_left( context[25], context[39], context[40] ) )
      continue;
    // closed e.inBr#1 as range 39(17)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 9
    //DEBUG: s.NumB#1: 25
    //DEBUG: e.inBr#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/26 # T/27 '$'/28 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/22 AsIs: s.NumB#1/25 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 HalfReuse: # S/24 } '$'/29 Tile{ AsIs: e.Pattern#1/41(9) } )/30 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_ident( context[24], ident_S );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[26], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[30] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[15], context[24] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Brackets s.idx e.idx ) ) ( ( # Brackets s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.Num1#1/24 e.1#1/17 )/20 )/16 (/7 (/11 # Brackets/23 s.Num2#1/25 e.2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_Brackets, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_Brackets, context[41], context[42] );
    if( ! context[23] )
      continue;
    if( ! refalrts::svar_left( context[24], context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 39(17)
    if( ! refalrts::svar_left( context[25], context[41], context[42] ) )
      continue;
    // closed e.2#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: s.Num1#1: 24
    //DEBUG: e.1#1: 17
    //DEBUG: s.Num2#1: 25
    //DEBUG: e.2#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} s.Num1#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num2#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # Brackets/22 } Tile{ AsIs: </0 Reuse: & UnBracketAndNum/4 } Tile{ HalfReuse: </20 HalfReuse: & FastGen/16 HalfReuse: s.Num11 #24/7 AsIs: (/11 } Tile{ AsIs: e.1#1/39(17) } )/26 Tile{ AsIs: (/15 } Tile{ AsIs: e.2#1/41(9) } Tile{ AsIs: )/12 HalfReuse: >/8 AsIs: >/1 } Tile{ HalfReuse: )/23 } Tile{ ]] }
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_UnBracketAndNum.ref.function );
    refalrts::reinit_open_call( context[20] );
    refalrts::reinit_name( context[16], ref_FastGen.ref.function );
    refalrts::reinit_svar( context[7], context[24] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[23] );
    refalrts::link_brackets( context[19], context[23] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[15], context[12] );
    refalrts::link_brackets( context[11], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[20], context[11] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/22 (/26 e.Name#1/24 )/27 s.Num1#1/34 e.1#1/17 )/20 )/16 (/7 (/11 # ADT-Brackets/23 (/30 e.Name#1/32 )/31 s.Num2#1/35 e.2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_ADTm_Brackets, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_ADTm_Brackets, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[39], context[40] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[41], context[42] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Name#1 as range 24
    if( ! refalrts::repeated_evar_left( context[32], context[33], context[24], context[25], context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    if( ! refalrts::svar_left( context[34], context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 39(17)
    if( ! refalrts::svar_left( context[35], context[41], context[42] ) )
      continue;
    // closed e.2#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name#1: 24
    //DEBUG: s.Num1#1: 34
    //DEBUG: e.1#1: 17
    //DEBUG: s.Num2#1: 35
    //DEBUG: e.2#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} e.Name#1/24 )/27 s.Num1#1/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num2#1/35 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # ADT-Brackets/23 AsIs: (/30 AsIs: e.Name#1/32 AsIs: )/31 } Tile{ AsIs: </0 Reuse: & UnBracketAndNum/4 } Tile{ HalfReuse: </15 HalfReuse: & FastGen/19 HalfReuse: s.Num11 #34/22 AsIs: (/26 } Tile{ AsIs: e.1#1/39(17) } Tile{ AsIs: )/16 AsIs: (/7 } Tile{ AsIs: e.2#1/41(9) } Tile{ AsIs: )/12 HalfReuse: >/8 AsIs: >/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::update_name( context[4], ref_UnBracketAndNum.ref.function );
    refalrts::reinit_open_call( context[15] );
    refalrts::reinit_name( context[19], ref_FastGen.ref.function );
    refalrts::reinit_svar( context[22], context[34] );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[11], context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[26], context[16] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[16], context[7] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[15], context[26] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[31] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/22 (/26 e.Name1#1/24 )/27 s.Num1#1/32 e.1#1/17 )/20 )/16 (/7 (/11 # ADT-Brackets/23 (/30 e.Name2#1/28 )/31 s.Num2#1/33 e.2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_ADTm_Brackets, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_ADTm_Brackets, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[39], context[40] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[41], context[42] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Name1#1 as range 24
    // closed e.Name2#1 as range 28
    if( ! refalrts::svar_left( context[32], context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 39(17)
    if( ! refalrts::svar_left( context[33], context[41], context[42] ) )
      continue;
    // closed e.2#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name1#1: 24
    //DEBUG: e.Name2#1: 28
    //DEBUG: s.Num1#1: 32
    //DEBUG: e.1#1: 17
    //DEBUG: s.Num2#1: 33
    //DEBUG: e.2#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/34 # T/35 '$'/36 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT-Brackets/22 AsIs: (/26 AsIs: e.Name1#1/24 AsIs: )/27 AsIs: s.Num1#1/32 AsIs: e.1#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 HalfReuse: # ADT-Brackets/30 } (/37 Tile{ AsIs: e.Name2#1/28 } Tile{ AsIs: )/31 AsIs: s.Num2#1/33 AsIs: e.2#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/38 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], ident_T ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_ident( context[30], ident_ADTm_Brackets );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[34], context[38] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[23], context[12] );
    refalrts::link_brackets( context[37], context[31] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[31], context[1] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[15], context[30] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # T '$' e.idx ) ) ( ( # Brackets s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Brackets/24 s.NumB#1/25 e.inBr#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_T, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  ident_Brackets, context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 39(17)
    if( ! refalrts::svar_left( context[25], context[41], context[42] ) )
      continue;
    // closed e.inBr#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 17
    //DEBUG: s.NumB#1: 25
    //DEBUG: e.inBr#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/24 AsIs: s.NumB#1/25 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
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
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Brackets s.idx e.idx ) ) ( ( # T '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.NumB#1/25 e.inBr#1/17 )/20 )/16 (/7 (/11 # T/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_Brackets, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_T, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 41(9)
    if( ! refalrts::svar_left( context[25], context[39], context[40] ) )
      continue;
    // closed e.inBr#1 as range 39(17)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 9
    //DEBUG: s.NumB#1: 25
    //DEBUG: e.inBr#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/23 AsIs: '$'/24 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/22 AsIs: s.NumB#1/25 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
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
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[24] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # T '$' e.idx ) ) ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # ADT-Brackets/24 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_T, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  ident_ADTm_Brackets, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[41], context[42] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Pattern#1 as range 39(17)
    // closed e.Name#1 as range 25
    if( ! refalrts::svar_left( context[29], context[41], context[42] ) )
      continue;
    // closed e.inBr#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 17
    //DEBUG: e.Name#1: 25
    //DEBUG: s.NumB#1: 29
    //DEBUG: e.inBr#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT-Brackets/24 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # ADT-Brackets ( e.idx ) s.idx e.idx ) ) ( ( # T '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # ADT-Brackets/22 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/17 )/20 )/16 (/7 (/11 # T/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_ADTm_Brackets, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_T, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[39], context[40] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Name#1 as range 25
    // closed e.Pattern#1 as range 41(9)
    if( ! refalrts::svar_left( context[29], context[39], context[40] ) )
      continue;
    // closed e.inBr#1 as range 39(17)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Name#1: 25
    //DEBUG: e.Pattern#1: 9
    //DEBUG: s.NumB#1: 29
    //DEBUG: e.inBr#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/23 AsIs: '$'/24 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT-Brackets/22 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[24] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # Atom/23 e.val#1/24 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_Atom, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_Atom, context[41], context[42] );
    if( ! context[23] )
      continue;
    // closed e.val#1 as range 39(17)
    if( ! refalrts::repeated_evar_left( context[24], context[25], context[39], context[40], context[41], context[42] ) )
      continue;
    if( ! refalrts::empty_seq( context[41], context[42] ) )
      continue;
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/39(17) )/20 )/16 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Atom/23 AsIs: e.val#1/24 AsIs: )/12 } Tile{ ]] }
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
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val1#1/17 )/20 )/16 (/7 (/11 # Atom/23 e.val2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_Atom, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_Atom, context[41], context[42] );
    if( ! context[23] )
      continue;
    // closed e.val1#1 as range 39(17)
    // closed e.val2#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val1#1: 17
    //DEBUG: e.val2#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/24 # S/25 '$'/26 Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Atom/22 AsIs: e.val1#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 } # Atom/27 Tile{ AsIs: e.val2#1/41(9) } )/28 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], ident_S ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], ident_Atom ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[24], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[28] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[15], context[23] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[24], context[26] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # S '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # S/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_Atom, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_S, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.val#1 as range 39(17)
    // closed e.Pattern#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 17
    //DEBUG: e.Pattern#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # S/23 AsIs: '$'/24 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Atom/22 AsIs: e.val#1/39(17) AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
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
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[24] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # S '$' e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Atom/24 e.val#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_S, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  ident_Atom, context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 39(17)
    // closed e.val#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 17
    //DEBUG: e.val#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # S/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Atom/24 AsIs: e.val#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
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
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # Atom e.idx ) ) ( ( # T '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # T/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_Atom, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  ident_T, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.val#1 as range 39(17)
    // closed e.Pattern#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.val#1: 17
    //DEBUG: e.Pattern#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/21 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/23 AsIs: '$'/24 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Atom/22 AsIs: e.val#1/39(17) AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
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
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[24] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # T '$' e.idx ) ) ( ( # Atom e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Atom/24 e.val#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_T, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  ident_Atom, context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 39(17)
    // closed e.val#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern#1: 17
    //DEBUG: e.val#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Atom/24 AsIs: e.val#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
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
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # T '$' e.idx ) ) ( ( # T '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # T/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_T, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  ident_T, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[25] )
      continue;
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern1#1: 17
    //DEBUG: e.Pattern2#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 {REMOVED TILE} )/20 )/16 (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/24 AsIs: '$'/25 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[11], context[25] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # T '$' e.idx ) ) ( ( # S '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # S/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_T, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  ident_S, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[25] )
      continue;
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern1#1: 17
    //DEBUG: e.Pattern2#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 {REMOVED TILE} {REMOVED TILE} )/20 )/16 (/7 (/11 # S/24 '$'/25 {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # S '$' e.idx ) ) ( ( # T '$' e.idx ) )
    // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # T/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  ident_S, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  ident_T, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[25] )
      continue;
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)
    //DEBUG: s.Num#1: 21
    //DEBUG: e.Pattern1#1: 17
    //DEBUG: e.Pattern2#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 {REMOVED TILE} )/20 )/16 (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/24 AsIs: '$'/25 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[11], context[25] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( ( # S '$' e.idx ) ) ( ( # S '$' e.idx ) )
  // </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # S/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
  context[22] = refalrts::ident_left(  ident_S, context[17], context[18] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::char_left( '$', context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[24] = refalrts::ident_left(  ident_S, context[9], context[10] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::char_left( '$', context[9], context[10] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern1#1 as range 17
  // closed e.Pattern2#1 as range 9
  //DEBUG: s.Num#1: 21
  //DEBUG: e.Pattern1#1: 17
  //DEBUG: e.Pattern2#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FastGen-Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 {REMOVED TILE} )/20 )/16 (/7 {REMOVED TILE} {REMOVED TILE} )/12 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # S/24 AsIs: '$'/25 } Tile{ AsIs: e.Pattern1#1/17 } Tile{ AsIs: e.Pattern2#1/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[11], context[25] );
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
    // </0 & FastGen-MeN/4 s.Num#1/13 (/11 t.left1#1/14 e.1#1/18 (/22 # E/24 e.inE1#1/20 )/23 e.2#1/9 )/12 (/7 t.left2#1/16 e.3#1/25 (/29 # E/31 e.inE2#1/27 )/30 e.4#1/5 )/8 >/1
    context[40] = context[9];
    context[41] = context[10];
    context[15] = refalrts::tvar_left( context[14], context[40], context[41] );
    if( ! context[15] )
      continue;
    context[42] = context[5];
    context[43] = context[6];
    context[17] = refalrts::tvar_left( context[16], context[42], context[43] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[44] = context[40];
      context[45] = context[41];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[44], context[45] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
      if( ! context[24] )
        continue;
      // closed e.inE1#1 as range 20
      // closed e.2#1 as range 44(9)
      context[46] = context[42];
      context[47] = context[43];
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[46];
        context[49] = context[47];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[48], context[49] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = refalrts::ident_left(  ident_E, context[27], context[28] );
        if( ! context[31] )
          continue;
        // closed e.inE2#1 as range 27
        // closed e.4#1 as range 48(5)
        //DEBUG: s.Num#1: 13
        //DEBUG: t.left1#1: 14
        //DEBUG: t.left2#1: 16
        //DEBUG: e.1#1: 18
        //DEBUG: e.inE1#1: 20
        //DEBUG: e.2#1: 9
        //DEBUG: e.3#1: 25
        //DEBUG: e.inE2#1: 27
        //DEBUG: e.4#1: 5

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FastGen-Terms/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: t.left1#1/14 } )/32 (/33 Tile{ AsIs: t.left2#1/16 } )/34 >/35 </36 & FastGen-MeN/37 s.Num#1/13/38 (/39 Tile{ AsIs: e.1#1/18 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: e.inE1#1/20 AsIs: )/23 AsIs: e.2#1/44(9) AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.3#1/25 } Tile{ AsIs: (/29 AsIs: # E/31 AsIs: e.inE2#1/27 AsIs: )/30 AsIs: e.4#1/48(5) AsIs: )/8 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[37], ref_FastGenm_MeN.ref.function ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[38], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[39] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_FastGenm_Terms.ref.function );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[36] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[39], context[12] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::push_stack( context[35] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::link_brackets( context[11], context[32] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[29];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[22], context[7] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[34], context[39] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[25], context[26], context[46], context[47] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[40], context[41] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx t.idx ) ( e.idx t.idx )
    // </0 & FastGen-MeN/4 s.Num#1/13 (/11 e.1#1/18 (/22 # E/24 e.inE1#1/20 )/23 e.2#1/9 t.right1#1/14 )/12 (/7 e.3#1/25 (/29 # E/31 e.inE2#1/27 )/30 e.4#1/5 t.right2#1/16 )/8 >/1
    context[40] = context[9];
    context[41] = context[10];
    context[15] = refalrts::tvar_right( context[14], context[40], context[41] );
    if( ! context[15] )
      continue;
    context[42] = context[5];
    context[43] = context[6];
    context[17] = refalrts::tvar_right( context[16], context[42], context[43] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[44] = context[40];
      context[45] = context[41];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[44], context[45] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
      if( ! context[24] )
        continue;
      // closed e.inE1#1 as range 20
      // closed e.2#1 as range 44(9)
      context[46] = context[42];
      context[47] = context[43];
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[46];
        context[49] = context[47];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[48], context[49] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = refalrts::ident_left(  ident_E, context[27], context[28] );
        if( ! context[31] )
          continue;
        // closed e.inE2#1 as range 27
        // closed e.4#1 as range 48(5)
        //DEBUG: s.Num#1: 13
        //DEBUG: t.right1#1: 14
        //DEBUG: t.right2#1: 16
        //DEBUG: e.1#1: 18
        //DEBUG: e.inE1#1: 20
        //DEBUG: e.2#1: 9
        //DEBUG: e.3#1: 25
        //DEBUG: e.inE2#1: 27
        //DEBUG: e.4#1: 5

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen-MeN/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: e.1#1/18 AsIs: (/22 AsIs: # E/24 AsIs: e.inE1#1/20 AsIs: )/23 } Tile{ AsIs: e.2#1/44(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.3#1/25 AsIs: (/29 AsIs: # E/31 AsIs: e.inE2#1/27 AsIs: )/30 } Tile{ AsIs: e.4#1/48(5) } )/32 >/33 </34 & FastGen-Terms/35 s.Num#1/13/36 (/37 Tile{ AsIs: t.right1#1/14 } )/38 (/39 Tile{ AsIs: t.right2#1/16 AsIs: )/8 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[35], ref_FastGenm_Terms.ref.function ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[36], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[39] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[34] );
        refalrts::link_brackets( context[39], context[8] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::push_stack( context[33] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[32] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[32], context[37] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[12], context[30] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[25], context[26], context[46], context[47] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[40], context[41] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # E '$' e.idx ) ) ( ( # E '$' ( ( e.idx ) ) ) )
    // </0 & FastGen-MeN/4 s.Num#1/13 (/11 (/16 # E/18 '$'/19 e.inE1#1/14 )/17 )/12 (/7 (/22 # E/24 '$'/25 (/28 (/32 e.inE2#1/30 )/33 )/29 )/23 )/8 >/1
    context[40] = context[9];
    context[41] = context[10];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[40], context[41] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_E, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    context[42] = context[5];
    context[43] = context[6];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[42], context[43] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
    if( ! context[24] )
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
    if( ! refalrts::empty_seq( context[40], context[41] ) )
      continue;
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[42], context[43] ) )
      continue;
    // closed e.inE1#1 as range 14
    // closed e.inE2#1 as range 30
    //DEBUG: s.Num#1: 13
    //DEBUG: e.inE1#1: 14
    //DEBUG: e.inE2#1: 30

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen-MeN/4 s.Num#1/13 (/11 (/16 # E/18 '$'/19 {REMOVED TILE} )/17 )/12 (/7 {REMOVED TILE} {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: '$'/25 } Tile{ AsIs: e.inE1#1/14 } Tile{ AsIs: (/28 AsIs: (/32 AsIs: e.inE2#1/30 AsIs: )/33 AsIs: )/29 AsIs: )/23 } Tile{ ]] }
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[28], context[29] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[28], context[23] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx )
  // </0 & FastGen-MeN/4 s.Num#1/13 (/11 e.in1#1/9 )/12 (/7 e.in2#1/5 )/8 >/1
  // closed e.in1#1 as range 9
  // closed e.in2#1 as range 5
  //DEBUG: s.Num#1: 13
  //DEBUG: e.in1#1: 9
  //DEBUG: e.in2#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } # E/14 '$'/15 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.in1#1/9 } >/16 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.in2#1/5 AsIs: )/8 HalfReuse: )/1 } )/17 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[14], ident_E ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '$' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_SplitReps.ref.function );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[17] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FastGenm_MeN("FastGen-MeN", 3381238288U, 2475174895U, func_FastGenm_MeN);

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
    // </0 & LengthComp/4 (/7 t.1#1/13 e.tail1#1/5 )/8 (/11 t.2#1/15 e.tail2#1/9 )/12 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[17], context[18] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    // closed e.tail1#1 as range 5
    context[16] = refalrts::tvar_left( context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    // closed e.tail2#1 as range 9
    //DEBUG: t.1#1: 13
    //DEBUG: e.tail1#1: 5
    //DEBUG: t.2#1: 15
    //DEBUG: e.tail2#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.1#1/13 {REMOVED TILE} {REMOVED TILE} t.2#1/15 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & LengthComp/4 AsIs: (/7 } Tile{ AsIs: e.tail1#1/5 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.tail2#1/9 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) ( )
    // </0 & LengthComp/4 (/7 )/8 (/11 )/12 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[17], context[18] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & LengthComp/4 (/7 )/8 (/11 )/12 {REMOVED TILE}
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
  // </0 & LengthComp/4 e.1#1/2 >/1
  // closed e.1#1 as range 2
  //DEBUG: e.1#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & LengthComp/4 e.1#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NotEq/1 ]] }
  refalrts::reinit_ident( context[1], ident_NotEq );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LengthComp("LengthComp", 3381238288U, 2475174895U, func_LengthComp);

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
    // </0 & FastGen-K/4 s.Num#1/13 # Eq/14 (/11 t.1#1/15 e.tail1#1/9 )/12 (/7 t.2#1/17 e.tail2#1/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Eq, context[14] ) )
      continue;
    context[27] = context[9];
    context[28] = context[10];
    context[16] = refalrts::tvar_left( context[15], context[27], context[28] );
    if( ! context[16] )
      continue;
    // closed e.tail1#1 as range 27(9)
    context[29] = context[5];
    context[30] = context[6];
    context[18] = refalrts::tvar_left( context[17], context[29], context[30] );
    if( ! context[18] )
      continue;
    // closed e.tail2#1 as range 29(5)
    //DEBUG: s.Num#1: 13
    //DEBUG: t.1#1: 15
    //DEBUG: e.tail1#1: 9
    //DEBUG: t.2#1: 17
    //DEBUG: e.tail2#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & FastGen-Terms/20 s.Num#1/13/21 (/22 Tile{ AsIs: t.1#1/15 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: t.2#1/17 } )/23 >/24 Tile{ AsIs: </0 AsIs: & FastGen-K/4 AsIs: s.Num#1/13 AsIs: # Eq/14 AsIs: (/11 } Tile{ AsIs: e.tail1#1/27(9) } )/25 (/26 Tile{ AsIs: e.tail2#1/29(5) } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], ref_FastGenm_Terms.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[21], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[26], context[8] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::link_brackets( context[22], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[12], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx # Eq ( ) ( )
    // </0 & FastGen-K/4 s.Num#1/13 # Eq/14 (/11 )/12 (/7 )/8 >/1
    if( ! refalrts::ident_term(  ident_Eq, context[14] ) )
      continue;
    context[27] = context[9];
    context[28] = context[10];
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    context[29] = context[5];
    context[30] = context[6];
    if( ! refalrts::empty_seq( context[29], context[30] ) )
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
  // </0 & FastGen-K/4 s.Num#1/13 # NotEq/14 (/11 e.1#1/9 )/12 (/7 e.2#1/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_NotEq, context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.1#1 as range 9
  // closed e.2#1 as range 5
  //DEBUG: s.Num#1: 13
  //DEBUG: e.1#1: 9
  //DEBUG: e.2#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/15 Tile{ Reuse: # E/14 HalfReuse: '$'/11 } Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.1#1/9 } >/16 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.2#1/5 AsIs: )/8 HalfReuse: )/1 } )/17 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_ident( context[14], ident_E );
  refalrts::reinit_char( context[11], '$' );
  refalrts::update_name( context[4], ref_SplitReps.ref.function );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[15], context[17] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[14], context[11] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FastGenm_K("FastGen-K", 3381238288U, 2475174895U, func_FastGenm_K);

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
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/6 )/9 >/1
    context[39] = context[2];
    context[40] = context[3];
    if( ! refalrts::empty_seq( context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 6
    //DEBUG: s.Num#1: 5
    //DEBUG: e.1#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FastGen/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.1#1/6 AsIs: )/9 } Tile{ ]] }
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
    // </0 & FastGen/4 s.Num#1/5 (/8 )/9 (/12 )/13 e.Tail#1/2 >/1
    context[39] = context[2];
    context[40] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[39], context[40] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[41] = context[6];
    context[42] = context[7];
    if( ! refalrts::empty_seq( context[41], context[42] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Tail#1 as range 39(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 Tile{ HalfReuse: s.Num1 #5/8 HalfReuse: >/9 AsIs: (/12 AsIs: )/13 AsIs: e.Tail#1/39(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[8], context[5] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # E '$' e.idx ) ) ( e.idx ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 (/12 # E/14 '$'/15 e.Pattern#1/10 )/13 )/9 (/18 e.any#1/16 )/19 e.Tail#1/2 >/1
    context[39] = context[6];
    context[40] = context[7];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[39], context[40] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  ident_E, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( '$', context[10], context[11] );
    if( ! context[15] )
      continue;
    context[41] = context[2];
    context[42] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[41], context[42] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    if( ! refalrts::empty_seq( context[39], context[40] ) )
      continue;
    // closed e.Pattern#1 as range 10
    // closed e.any#1 as range 16
    // closed e.Tail#1 as range 41(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Pattern#1: 10
    //DEBUG: e.any#1: 16
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </20 & Inc/21 Tile{ AsIs: s.Num#1/5 } Tile{ HalfReuse: >/18 } Tile{ AsIs: (/8 AsIs: (/12 AsIs: # E/14 AsIs: '$'/15 AsIs: e.Pattern#1/10 HalfReuse: (/13 HalfReuse: (/9 } Tile{ AsIs: e.any#1/16 } )/22 )/23 )/24 Tile{ AsIs: )/19 AsIs: e.Tail#1/41(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[18] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[19] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[13], context[23] );
    refalrts::link_brackets( context[9], context[22] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( ( # E '$' e.idx ) ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 e.any#1/6 )/9 (/12 (/16 # E/18 '$'/19 e.Pattern#1/14 )/17 )/13 e.Tail#1/2 >/1
    context[39] = context[2];
    context[40] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[39], context[40] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
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
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.any#1 as range 6
    // closed e.Pattern#1 as range 14
    // closed e.Tail#1 as range 39(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.any#1: 6
    //DEBUG: e.Pattern#1: 14
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } Tile{ HalfReuse: </8 } & Inc/20 Tile{ AsIs: s.Num#1/5 } Tile{ HalfReuse: >/9 AsIs: (/12 AsIs: (/16 AsIs: # E/18 } '$'/21 </22 & SplitReps/23 s.Num#1/5/24 Tile{ AsIs: e.any#1/6 } Tile{ HalfReuse: >/19 AsIs: e.Pattern#1/14 AsIs: )/17 AsIs: )/13 AsIs: e.Tail#1/39(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[20], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], ref_SplitReps.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[5]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_close_call( context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[9], context[18] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 e.Any#1/6 )/9 (/12 )/13 e.Tail#1/2 >/1
    context[39] = context[2];
    context[40] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[39], context[40] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Any#1 as range 6
    // closed e.Tail#1 as range 39(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Any#1: 6
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 & FastGen/15 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 HalfReuse: >/8 } (/16 (/17 # E/18 '$'/19 </20 & SplitReps/21 s.Num#1/5/22 Tile{ AsIs: e.Any#1/6 } >/23 (/24 (/25 )/26 Tile{ AsIs: )/9 HalfReuse: )/12 AsIs: )/13 AsIs: e.Tail#1/39(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ref_FastGen.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], ident_E ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ref_SplitReps.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Inc.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[16], context[13] );
    refalrts::link_brackets( context[17], context[12] );
    refalrts::link_brackets( context[24], context[9] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[16], context[22] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ) ( e.idx ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 )/9 (/12 e.Any#1/10 )/13 e.Tail#1/2 >/1
    context[39] = context[2];
    context[40] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[39], context[40] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[41] = context[6];
    context[42] = context[7];
    if( ! refalrts::empty_seq( context[41], context[42] ) )
      continue;
    // closed e.Any#1 as range 10
    // closed e.Tail#1 as range 39(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Any#1: 10
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 & FastGen/15 </16 & Inc/17 s.Num#1/5/18 >/19 (/20 (/21 # E/22 '$'/23 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/5 HalfReuse: >/8 HalfReuse: (/9 AsIs: (/12 AsIs: e.Any#1/10 AsIs: )/13 } )/24 )/25 )/26 Tile{ AsIs: e.Tail#1/39(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ref_FastGen.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[18], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], ident_E ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SplitReps.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[20], context[26] );
    refalrts::link_brackets( context[21], context[25] );
    refalrts::link_brackets( context[9], context[24] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[14], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( ( # E '$' e.idx ) ) ( ( # E '$' e.idx ) ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 (/12 # E/14 '$'/15 e.Pattern1#1/10 )/13 )/9 (/18 (/22 # E/24 '$'/25 e.Pattern2#1/20 )/23 )/19 e.Tail#1/2 >/1
    context[39] = context[6];
    context[40] = context[7];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[39], context[40] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  ident_E, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( '$', context[10], context[11] );
    if( ! context[15] )
      continue;
    context[41] = context[2];
    context[42] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[41], context[42] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[20], context[21] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[39], context[40] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Pattern1#1 as range 10
    // closed e.Pattern2#1 as range 20
    // closed e.Tail#1 as range 41(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Pattern1#1: 10
    //DEBUG: e.Pattern2#1: 20
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE} # E/14 '$'/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } Tile{ HalfReuse: </8 HalfReuse: & Inc/12 } Tile{ HalfReuse: s.Num1 #5/13 HalfReuse: >/9 AsIs: (/18 AsIs: (/22 AsIs: # E/24 AsIs: '$'/25 } Tile{ AsIs: e.Pattern1#1/10 } Tile{ AsIs: e.Pattern2#1/20 } Tile{ AsIs: )/23 AsIs: )/19 AsIs: e.Tail#1/41(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[12], ref_Inc.ref.function );
    refalrts::reinit_svar( context[13], context[5] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[23];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[13], context[25] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( t.idx ) ( t.idx ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 t.1#1/14 )/9 (/12 t.2#1/16 )/13 e.Tail#1/2 >/1
    context[39] = context[2];
    context[40] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[39], context[40] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Tail#1 as range 39(2)
    context[41] = context[6];
    context[42] = context[7];
    context[15] = refalrts::tvar_left( context[14], context[41], context[42] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[41], context[42] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[10], context[11] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.1#1: 14
    //DEBUG: t.2#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 & FastGen/19 </20 & Inc/21 s.Num#1/5/22 >/23 (/24 Tile{ AsIs: </0 Reuse: & FastGen-Terms/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: t.1#1/14 AsIs: )/9 AsIs: (/12 AsIs: t.2#1/16 AsIs: )/13 } >/25 )/26 Tile{ AsIs: e.Tail#1/39(2) } Tile{ AsIs: >/1 ]] }
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
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_FastGenm_Terms.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[24], context[26] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[18], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/14 (/18 # E/20 '$'/21 e.Pattern1#1/16 )/19 e.2#1/6 )/9 (/12 e.3#1/22 (/26 # E/28 '$'/29 e.Pattern2#1/24 )/27 e.4#1/10 )/13 e.Tail#1/2 >/1
    context[39] = context[2];
    context[40] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[39], context[40] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Tail#1 as range 39(2)
    context[41] = context[6];
    context[42] = context[7];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[43] = context[41];
      context[44] = context[42];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[43], context[44] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_E, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::char_left( '$', context[16], context[17] );
      if( ! context[21] )
        continue;
      // closed e.Pattern1#1 as range 16
      // closed e.2#1 as range 43(6)
      context[45] = context[10];
      context[46] = context[11];
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop();
      do {
        context[47] = context[45];
        context[48] = context[46];
        context[24] = 0;
        context[25] = 0;
        context[26] = refalrts::brackets_left( context[24], context[25], context[47], context[48] );
        if( ! context[26] )
          continue;
        refalrts::bracket_pointers(context[26], context[27]);
        context[28] = refalrts::ident_left(  ident_E, context[24], context[25] );
        if( ! context[28] )
          continue;
        context[29] = refalrts::char_left( '$', context[24], context[25] );
        if( ! context[29] )
          continue;
        // closed e.Pattern2#1 as range 24
        // closed e.4#1 as range 47(10)
        //DEBUG: s.Num#1: 5
        //DEBUG: e.Tail#1: 2
        //DEBUG: e.1#1: 14
        //DEBUG: e.Pattern1#1: 16
        //DEBUG: e.2#1: 6
        //DEBUG: e.3#1: 22
        //DEBUG: e.Pattern2#1: 24
        //DEBUG: e.4#1: 10

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </30 & FastGen/31 </32 & Inc/33 s.Num#1/5/34 >/35 (/36 Tile{ AsIs: </0 Reuse: & FastGen-MeN/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.1#1/14 AsIs: (/18 AsIs: # E/20 AsIs: '$'/21 AsIs: e.Pattern1#1/16 AsIs: )/19 AsIs: e.2#1/43(6) AsIs: )/9 AsIs: (/12 AsIs: e.3#1/22 AsIs: (/26 AsIs: # E/28 AsIs: '$'/29 AsIs: e.Pattern2#1/24 AsIs: )/27 AsIs: e.4#1/47(10) AsIs: )/13 } >/37 )/38 Tile{ AsIs: e.Tail#1/39(2) } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_open_call( context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[31], ref_FastGen.ref.function ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[33], ref_Inc.ref.function ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[34], context[5]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[38] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_FastGenm_MeN.ref.function );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[30] );
        refalrts::link_brackets( context[36], context[38] );
        refalrts::push_stack( context[37] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::push_stack( context[35] );
        refalrts::push_stack( context[32] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[30], context[36] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[45], context[46] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[41], context[42] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) e.idx
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/6 )/9 (/12 e.2#1/10 )/13 e.Tail#1/2 >/1
    context[39] = context[2];
    context[40] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[39], context[40] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.1#1 as range 6
    // closed e.2#1 as range 10
    // closed e.Tail#1 as range 39(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.1#1: 6
    //DEBUG: e.2#1: 10
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 s.Num#1/5/16 >/17 (/18 </19 & FastGen-K/20 Tile{ AsIs: s.Num#1/5 } </21 & LengthComp/22 Tile{ AsIs: (/8 AsIs: e.1#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.2#1/10 AsIs: )/13 } >/23 (/24 e.1#1/6/25 )/27 (/28 e.2#1/10/29 )/31 >/32 )/33 Tile{ AsIs: e.Tail#1/39(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[16], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], ref_FastGenm_K.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ref_LengthComp.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[29], context[30], context[10], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[33] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[28], context[31] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[23], context[33] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[14], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx )
  // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/6 )/9 (/12 e.2#1/10 )/13 >/1
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.1#1 as range 6
  // closed e.2#1 as range 10
  //DEBUG: s.Num#1: 5
  //DEBUG: e.1#1: 6
  //DEBUG: e.2#1: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } # E/14 '$'/15 Tile{ AsIs: (/8 } (/16 Tile{ AsIs: e.1#1/6 } )/17 )/18 Tile{ HalfReuse: (/9 AsIs: (/12 AsIs: e.2#1/10 AsIs: )/13 HalfReuse: )/1 } )/19 )/20 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[14], ident_E ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '$' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[20] );
  refalrts::link_brackets( context[4], context[19] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[18] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FastGen("FastGen", 3381238288U, 2475174895U, func_FastGen);

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
