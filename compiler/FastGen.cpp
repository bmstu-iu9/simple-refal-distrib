// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CreateFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FastGen_Terms(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FastGen_K(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FastGen_MeN(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LengthComp(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PreparePatternsFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PreparePatternsFastGen_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SplitReps(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SplitReps_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SplitReps_Brackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult UnBracketAndNum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult UnBracketInBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #ADT_Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

// identifier #Atom
template <typename SREFAL_PARAM_INT>
struct ident_Atom {
  static const char *name() {
    return "Atom";
  }
};

// identifier #Brackets
template <typename SREFAL_PARAM_INT>
struct ident_Brackets {
  static const char *name() {
    return "Brackets";
  }
};

// identifier #E
template <typename SREFAL_PARAM_INT>
struct ident_E {
  static const char *name() {
    return "E";
  }
};

// identifier #S
template <typename SREFAL_PARAM_INT>
struct ident_S {
  static const char *name() {
    return "S";
  }
};

// identifier #T
template <typename SREFAL_PARAM_INT>
struct ident_T {
  static const char *name() {
    return "T";
  }
};

static refalrts::FnResult UnBracketAndNum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & UnBracketAndNum/4 s.Num#1/9 (/7 e.Any#1/5 )/8 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & UnBracketAndNum/4 s.Num#1/9 (/7 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Num1 #9/0 } Tile{ AsIs: e.Any#1/5 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult UnBracketInBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & UnBracketInBrackets/4 1/5 (/8 (/12 e.Smth#1/10 )/13 )/9 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::number_left( 1UL, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
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
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Smth#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & UnBracketInBrackets/4 1/5 (/8 (/12 {REMOVED TILE}  )/13 )/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Smth#1/10 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & UnBracketInBrackets/4 s.Other#1/5 e.Any#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Any#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & UnBracketInBrackets/4 s.Other#1/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Any#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_PreparePatternsFastGen_Aux_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 s.type#2/21 (/19 e.idx#2/17 )/20 (/11 (/15 e.Replacement#2/13 )/16 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.idx#2 as range 17
    // closed e.Replacement#2 as range 13
    if( ! refalrts::svar_left( context[21], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_PreparePatternsFastGen_Aux_0/4 {REMOVED TILE}  (/19 e.idx#2/17 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.type#2/21 } Tile{ HalfReuse: '$'/20 AsIs: (/11 AsIs: (/15 AsIs: e.Replacement#2/13 AsIs: )/16 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_char( context[20], '$' );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[8] );
    res = refalrts::splice_evar( res, context[7], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 # Brackets/9 e.inBrackets#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.inBrackets#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Brackets/0 HalfReuse: 1/4 HalfReuse: </7 HalfReuse: & PreparePatternsFastGen_Aux/9 AsIs: e.inBrackets#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], & ident_Brackets<int>::name );
    refalrts::reinit_number( context[4], 1UL );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], PreparePatternsFastGen_Aux, "PreparePatternsFastGen_Aux" );
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
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 # ADT_Brackets/9 (/12 e.Name#2/10 )/13 e.inBrackets#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 10
    // closed e.inBrackets#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } 1/14 Tile{ AsIs: </0 Reuse: & PreparePatternsFastGen_Aux/4 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_number( context[14], 1UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PreparePatternsFastGen_Aux, "PreparePatternsFastGen_Aux" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 e.any#2/5 )/8 >/1
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
  // closed e.any#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_PreparePatternsFastGen_Aux_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.any#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PreparePatternsFastGen_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PreparePatternsFastGen_Aux/4 e.Pattern#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_PreparePatternsFastGen_Aux_0/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_PreparePatternsFastGen_Aux_0, "lambda_PreparePatternsFastGen_Aux_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_PreparePatternsFastGen_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_PreparePatternsFastGen_0/4 (/7 e.sent#2/5 )/8 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & PreparePatternsFastGen_Aux/7 AsIs: e.sent#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], PreparePatternsFastGen_Aux, "PreparePatternsFastGen_Aux" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PreparePatternsFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PreparePatternsFastGen/4 e.all#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.all#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_PreparePatternsFastGen_0/4 AsIs: e.all#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_PreparePatternsFastGen_0, "lambda_PreparePatternsFastGen_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SplitReps_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitReps_Aux/4 0/5 e.Any#1/2 (/12 e.Scanned#1/10 )/13 (/8 e.Else#1/6 )/9 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::number_left( 0UL, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_right( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Any#1 as range 2
    // closed e.Scanned#1 as range 10
    // closed e.Else#1 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SplitReps_Aux/4 0/5 e.Any#1/2 (/12 e.Scanned#1/10 )/13 (/8 e.Else#1/6 )/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # Brackets/18 s.ONum#1/19 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_Brackets<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: # Brackets/18 AsIs: s.ONum#1/19 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: # Brackets/1 } s.ONum#1/19/20 )/21 )/22 >/23 Tile{ ]] }
    if (! refalrts::copy_stvar(context[20], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[1], & ident_Brackets<int>::name );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::link_brackets( context[8], context[21] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # Brackets/18 s.ONum#1/19 (/22 (/26 e.Rep#1/24 )/27 )/23 e.Replacements#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_Brackets<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 2
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 HalfReuse: (/12 } Tile{ HalfReuse: # Brackets/22 HalfReuse: s.ONum1 #19/26 AsIs: e.Rep#1/24 AsIs: )/27 AsIs: )/23 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Else#1/5 } Tile{ AsIs: (/16 AsIs: # Brackets/18 AsIs: s.ONum#1/19 } Tile{ AsIs: e.Replacements#1/14 } Tile{ AsIs: )/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[22], & ident_Brackets<int>::name );
    refalrts::reinit_svar( context[26], context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[11], context[23] );
    refalrts::link_brackets( context[12], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # ADT_Brackets/18 s.ONum#1/19 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: # ADT_Brackets/18 AsIs: s.ONum#1/19 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: # ADT_Brackets/1 } s.ONum#1/19/20 )/21 )/22 >/23 Tile{ ]] }
    if (! refalrts::copy_stvar(context[20], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[1], & ident_ADT_Brackets<int>::name );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::link_brackets( context[8], context[21] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # ADT_Brackets/18 s.ONum#1/19 (/22 (/26 e.Rep#1/24 )/27 )/23 e.Replacements#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 2
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 HalfReuse: (/12 } Tile{ HalfReuse: # ADT_Brackets/22 HalfReuse: s.ONum1 #19/26 AsIs: e.Rep#1/24 AsIs: )/27 AsIs: )/23 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Else#1/5 } Tile{ AsIs: (/16 AsIs: # ADT_Brackets/18 AsIs: s.ONum#1/19 } Tile{ AsIs: e.Replacements#1/14 } Tile{ AsIs: )/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[22], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_svar( context[26], context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[11], context[23] );
    refalrts::link_brackets( context[12], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 s.Mode#1/18 '$'/19 (/22 (/26 e.Rep#1/24 )/27 )/23 e.otherRep#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Tail#1 as range 2
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: s.Mode#1/18 AsIs: '$'/19 AsIs: (/22 AsIs: (/26 AsIs: e.Rep#1/24 AsIs: )/27 AsIs: )/23 } Tile{ AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: s.Mode1 #18/1 } '$'/28 Tile{ AsIs: e.otherRep#1/14 } )/29 )/30 >/31 Tile{ ]] }
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
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 s.Mode#1/18 s.Type#1/19 e.Value#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    // closed e.Value#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: s.Mode#1/18 AsIs: s.Type#1/19 AsIs: e.Value#1/14 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: s.Mode1 #18/1 } s.Type#1/19/20 e.Value#1/14/21 )/23 )/24 >/25 Tile{ ]] }
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
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SplitReps_Aux/4 s.Num#1/13 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
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
  // closed e.Scanned#1 as range 9
  // closed e.Else#1 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/14 Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 HalfReuse: )/7 } </15 & SplitReps_Aux/16 Tile{ AsIs: </0 Reuse: & Dec/4 AsIs: s.Num#1/13 } >/17 Tile{ AsIs: e.Else#1/5 } (/18 )/19 (/20 Tile{ AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], SplitReps_Aux, "SplitReps_Aux" ) )
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
  refalrts::update_name( context[4], Dec, "Dec" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_SplitReps_Brackets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_SplitReps_Brackets_0/4 (/7 # Brackets/9 s.Num#2/10 e.inBrackets#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 # Brackets/12 1/13 </14 Tile{ HalfReuse: & UnBracketInBrackets/0 HalfReuse: s.Num2 #10/4 HalfReuse: </7 HalfReuse: & SplitReps/9 AsIs: s.Num#2/10 AsIs: e.inBrackets#2/5 HalfReuse: >/8 AsIs: >/1 } )/15 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[13], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], UnBracketInBrackets, "UnBracketInBrackets" );
    refalrts::reinit_svar( context[4], context[10] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], SplitReps, "SplitReps" );
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
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_SplitReps_Brackets_0/4 (/7 e.Else#2/5 )/8 >/1
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
  // closed e.Else#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_SplitReps_Brackets_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Else#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SplitReps_Brackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SplitReps_Brackets/4 e.Reps#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Reps#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_SplitReps_Brackets_0/4 AsIs: e.Reps#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_SplitReps_Brackets_0, "lambda_SplitReps_Brackets_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_SplitReps_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_SplitReps_0/4 1/5 e.Any#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::number_left( 1UL, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Any#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
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
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_SplitReps_0/4 s.Other#2/5 e.Any#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Any#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SplitReps_Aux/4 AsIs: s.Other#2/5 AsIs: e.Any#2/2 HalfReuse: (/1 } )/6 (/7 )/8 >/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], SplitReps_Aux, "SplitReps_Aux" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SplitReps(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SplitReps/4 s.Num#1/5 e.Reps#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reps#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: s.Num#1/5 } </6 & SplitReps_Brackets/7 Tile{ AsIs: e.Reps#1/2 } >/8 & lambda_SplitReps_0/9 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], SplitReps_Brackets, "SplitReps_Brackets" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_SplitReps_0, "lambda_SplitReps_0" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult FastGen_Terms(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/25 (/17 (/21 # E/23 '$'/24 e.Pattern1#1/19 )/22 )/18 (/7 (/11 # E/13 '$'/14 e.Pattern2#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_E<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_E<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[19], context[20] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern1#1 as range 19
    // closed e.Pattern2#1 as range 9
    if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/25 (/17 {REMOVED TILE}  {REMOVED TILE}  )/22 )/18 (/7 (/11 # E/13 '$'/14 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/21 AsIs: # E/23 AsIs: '$'/24 } Tile{ AsIs: e.Pattern1#1/19 } Tile{ AsIs: e.Pattern2#1/9 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/23 (/15 (/19 # E/21 '$'/22 e.Pattern#1/17 )/20 )/16 (/7 (/11 e.any#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_E<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_left( '$', context[17], context[18] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 17
    // closed e.any#1 as range 9
    if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/23 (/15 {REMOVED TILE}  (/11 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # E/21 AsIs: '$'/22 AsIs: e.Pattern#1/17 HalfReuse: (/20 HalfReuse: (/16 AsIs: (/7 } Tile{ AsIs: e.any#1/9 } Tile{ HalfReuse: )/0 } Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[20] );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::link_brackets( context[20], context[8] );
    refalrts::link_brackets( context[16], context[12] );
    refalrts::link_brackets( context[7], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[19], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/23 (/17 (/21 e.any#1/19 )/22 )/18 (/7 (/11 # E/13 '$'/14 e.Pattern#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_E<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.any#1 as range 19
    // closed e.Pattern#1 as range 9
    if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/21 {REMOVED TILE}  {REMOVED TILE}  )/18 (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # E/13 AsIs: '$'/14 } Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/23 AsIs: (/17 } Tile{ AsIs: e.any#1/19 } Tile{ AsIs: )/8 AsIs: >/1 } Tile{ AsIs: e.Pattern#1/9 } Tile{ AsIs: )/22 } Tile{ ]] }
    refalrts::update_name( context[4], SplitReps, "SplitReps" );
    refalrts::link_brackets( context[11], context[22] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/27 (/16 (/20 # ADT_Brackets/22 (/25 e.Name#1/23 )/26 s.NumB#1/28 e.1#1/18 )/21 )/17 (/7 (/11 # Atom/13 e.val#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Atom<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[18], context[19] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 23
    // closed e.val#1 as range 9
    if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[18], context[19] ) )
      continue;
    // closed e.1#1 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/27 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/29 (/30 Tile{ AsIs: (/16 AsIs: (/20 AsIs: # ADT_Brackets/22 AsIs: (/25 AsIs: e.Name#1/23 AsIs: )/26 AsIs: s.NumB#1/28 AsIs: e.1#1/18 AsIs: )/21 AsIs: )/17 HalfReuse: )/7 AsIs: (/11 HalfReuse: (/13 } (/31 # Atom/32 Tile{ AsIs: e.val#1/9 } )/33 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[29], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_Atom<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[13], context[12] );
    refalrts::link_brackets( context[31], context[33] );
    refalrts::link_brackets( context[30], context[7] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[16], context[13] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/27 (/20 (/24 # Atom/26 e.val#1/22 )/25 )/21 (/7 (/11 # ADT_Brackets/13 (/16 e.Name#1/14 )/17 s.NumB#1/28 e.1#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[18], context[19] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = refalrts::ident_left(  & ident_Atom<int>::name, context[22], context[23] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.val#1 as range 22
    // closed e.Name#1 as range 14
    if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[9], context[10] ) )
      continue;
    // closed e.1#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/27 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/29 (/30 Tile{ AsIs: (/20 AsIs: (/24 AsIs: # Atom/26 } Tile{ AsIs: e.val#1/22 } )/31 )/32 Tile{ AsIs: )/25 HalfReuse: (/21 AsIs: (/7 AsIs: (/11 AsIs: # ADT_Brackets/13 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 AsIs: s.NumB#1/28 AsIs: e.1#1/9 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/33 Tile{ ]] }
    if( ! refalrts::alloc_char( context[29], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_open_bracket( context[21] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[33] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[30], context[25] );
    refalrts::link_brackets( context[20], context[32] );
    refalrts::link_brackets( context[24], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[25], context[1] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[20], context[26] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/23 (/16 (/20 # Brackets/22 s.NumB#1/24 e.1#1/18 )/21 )/17 (/7 (/11 # Atom/13 e.val#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Atom<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_Brackets<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.val#1 as range 9
    if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[24], context[18], context[19] ) )
      continue;
    // closed e.1#1 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/23 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/25 (/26 Tile{ AsIs: (/16 AsIs: (/20 AsIs: # Brackets/22 AsIs: s.NumB#1/24 AsIs: e.1#1/18 AsIs: )/21 AsIs: )/17 HalfReuse: )/7 AsIs: (/11 HalfReuse: (/13 } (/27 # Atom/28 Tile{ AsIs: e.val#1/9 } )/29 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[25], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_Atom<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[13], context[12] );
    refalrts::link_brackets( context[27], context[29] );
    refalrts::link_brackets( context[26], context[7] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[16], context[13] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/23 (/16 (/20 # Atom/22 e.val#1/18 )/21 )/17 (/7 (/11 # Brackets/13 s.NumB#1/24 e.1#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_Atom<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.val#1 as range 18
    if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[24], context[9], context[10] ) )
      continue;
    // closed e.1#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/23 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/25 (/26 Tile{ AsIs: (/16 AsIs: (/20 AsIs: # Atom/22 } Tile{ AsIs: e.val#1/18 } )/27 )/28 Tile{ AsIs: )/21 HalfReuse: (/17 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/13 AsIs: s.NumB#1/24 AsIs: e.1#1/9 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/29 Tile{ ]] }
    if( ! refalrts::alloc_char( context[25], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[29] );
    refalrts::link_brackets( context[17], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[26], context[21] );
    refalrts::link_brackets( context[16], context[28] );
    refalrts::link_brackets( context[20], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[21], context[1] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[16], context[22] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/28 (/20 (/24 # S/26 '$'/27 e.Pattern#1/22 )/25 )/21 (/7 (/11 # ADT_Brackets/13 (/16 e.Name#1/14 )/17 s.NumB#1/29 e.inBr#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[18], context[19] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = refalrts::ident_left(  & ident_S<int>::name, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 22
    // closed e.Name#1 as range 14
    if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[9], context[10] ) )
      continue;
    // closed e.inBr#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/28 (/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/24 Reuse: # T/26 AsIs: '$'/27 } Tile{ AsIs: e.Pattern#1/22 } Tile{ HalfReuse: (/21 AsIs: (/7 AsIs: (/11 AsIs: # ADT_Brackets/13 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 AsIs: s.NumB#1/29 AsIs: e.inBr#1/9 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/25 } Tile{ ]] }
    refalrts::update_ident( context[26], & ident_T<int>::name );
    refalrts::reinit_open_bracket( context[21] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[21], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/28 (/17 (/21 # ADT_Brackets/23 (/26 e.Name#1/24 )/27 s.NumB#1/29 e.inBr#1/19 )/22 )/18 (/7 (/11 # S/13 '$'/14 e.Pattern#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_S<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[19], context[20] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 24
    // closed e.Pattern#1 as range 9
    if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[19], context[20] ) )
      continue;
    // closed e.inBr#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/28 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/30 </31 & SplitReps/32 Tile{ HalfReuse: s.Num1 #28/17 AsIs: (/21 AsIs: # ADT_Brackets/23 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 AsIs: s.NumB#1/29 AsIs: e.inBr#1/19 AsIs: )/22 HalfReuse: >/18 AsIs: (/7 AsIs: (/11 HalfReuse: (/13 HalfReuse: # S/14 } '$'/33 Tile{ AsIs: e.Pattern#1/9 } )/34 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[30], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_svar( context[17], context[28] );
    refalrts::reinit_close_call( context[18] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[14], & ident_S<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[13], context[34] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[31] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[17], context[14] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/24 (/16 (/20 # S/22 '$'/23 e.Pattern#1/18 )/21 )/17 (/7 (/11 # Brackets/13 s.NumB#1/25 e.inBr#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_S<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[18], context[19] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 18
    if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[9], context[10] ) )
      continue;
    // closed e.inBr#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/24 (/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/20 Reuse: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/18 } Tile{ HalfReuse: (/17 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/13 AsIs: s.NumB#1/25 AsIs: e.inBr#1/9 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/21 } Tile{ ]] }
    refalrts::update_ident( context[22], & ident_T<int>::name );
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[17], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/24 (/17 (/21 # Brackets/23 s.NumB#1/25 e.inBr#1/19 )/22 )/18 (/7 (/11 # S/13 '$'/14 e.Pattern#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_S<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Brackets<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 9
    if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    // closed e.inBr#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/26 </27 & SplitReps/28 Tile{ HalfReuse: s.Num1 #24/17 AsIs: (/21 AsIs: # Brackets/23 AsIs: s.NumB#1/25 AsIs: e.inBr#1/19 AsIs: )/22 HalfReuse: >/18 AsIs: (/7 AsIs: (/11 HalfReuse: (/13 HalfReuse: # S/14 } '$'/29 Tile{ AsIs: e.Pattern#1/9 } )/30 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[26], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_svar( context[17], context[24] );
    refalrts::reinit_close_call( context[18] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[14], & ident_S<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[13], context[30] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[17], context[14] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/23 (/16 (/20 # Brackets/22 s.Num1#1/24 e.1#1/18 )/21 )/17 (/7 (/11 # Brackets/13 s.Num2#1/25 e.2#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_Brackets<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[24], context[18], context[19] ) )
      continue;
    // closed e.1#1 as range 18
    if( ! refalrts::svar_left( context[25], context[9], context[10] ) )
      continue;
    // closed e.2#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/23 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num2#1/25 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Brackets/13 } Tile{ AsIs: </0 } Tile{ HalfReuse: & UnBracketAndNum/16 HalfReuse: </20 HalfReuse: & FastGen/22 AsIs: s.Num1#1/24 } Tile{ HalfReuse: (/4 } Tile{ AsIs: e.1#1/18 } Tile{ AsIs: )/17 AsIs: (/7 } Tile{ AsIs: e.2#1/9 } Tile{ AsIs: )/12 HalfReuse: >/8 AsIs: >/1 } Tile{ AsIs: )/21 } Tile{ ]] }
    refalrts::reinit_name( context[16], UnBracketAndNum, "UnBracketAndNum" );
    refalrts::reinit_open_call( context[20] );
    refalrts::reinit_name( context[22], FastGen, "FastGen" );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[11], context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[4], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[16], context[24] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/33 (/20 (/24 # ADT_Brackets/26 (/29 e.Name#1/27 )/30 s.Num1#1/34 e.1#1/22 )/25 )/21 (/7 (/11 # ADT_Brackets/13 (/16 e.Name#1/31 )/17 s.Num2#1/35 e.2#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[18], context[19] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[22], context[23] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 27
    if( ! refalrts::repeated_evar_left( context[31], context[32], context[27], context[28], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[34], context[22], context[23] ) )
      continue;
    // closed e.1#1 as range 22
    if( ! refalrts::svar_left( context[35], context[9], context[10] ) )
      continue;
    // closed e.2#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/33 {REMOVED TILE}  {REMOVED TILE}  s.Num1#1/34 {REMOVED TILE}  {REMOVED TILE}  e.Name#1/31 {REMOVED TILE}  s.Num2#1/35 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/24 AsIs: # ADT_Brackets/26 AsIs: (/29 AsIs: e.Name#1/27 AsIs: )/30 } Tile{ HalfReuse: </25 HalfReuse: & UnBracketAndNum/21 HalfReuse: </7 HalfReuse: & FastGen/11 HalfReuse: s.Num11 #34/13 AsIs: (/16 } Tile{ AsIs: e.1#1/22 } Tile{ AsIs: )/17 } Tile{ AsIs: (/20 } Tile{ AsIs: e.2#1/9 } Tile{ AsIs: )/12 HalfReuse: >/8 AsIs: >/1 } Tile{ HalfReuse: )/0 } Tile{ ]] }
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_name( context[21], UnBracketAndNum, "UnBracketAndNum" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[11], FastGen, "FastGen" );
    refalrts::reinit_svar( context[13], context[34] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[24], context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[20], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[25], context[16] );
    res = refalrts::splice_evar( res, context[24], context[30] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/31 (/20 (/24 # ADT_Brackets/26 (/29 e.Name1#1/27 )/30 s.Num1#1/32 e.1#1/22 )/25 )/21 (/7 (/11 # ADT_Brackets/13 (/16 e.Name2#1/14 )/17 s.Num2#1/33 e.2#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[18], context[19] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[22], context[23] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Name1#1 as range 27
    // closed e.Name2#1 as range 14
    if( ! refalrts::svar_left( context[31], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[22], context[23] ) )
      continue;
    // closed e.1#1 as range 22
    if( ! refalrts::svar_left( context[33], context[9], context[10] ) )
      continue;
    // closed e.2#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/31 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/34 </35 & SplitReps/36 Tile{ HalfReuse: s.Num1 #31/20 AsIs: (/24 AsIs: # ADT_Brackets/26 AsIs: (/29 AsIs: e.Name1#1/27 AsIs: )/30 AsIs: s.Num1#1/32 AsIs: e.1#1/22 AsIs: )/25 HalfReuse: >/21 AsIs: (/7 AsIs: (/11 HalfReuse: (/13 HalfReuse: # ADT_Brackets/16 } (/37 Tile{ AsIs: e.Name2#1/14 } Tile{ AsIs: )/17 AsIs: s.Num2#1/33 AsIs: e.2#1/9 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/38 Tile{ ]] }
    if( ! refalrts::alloc_char( context[34], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[36], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_svar( context[20], context[31] );
    refalrts::reinit_close_call( context[21] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[16], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[38] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[13], context[12] );
    refalrts::link_brackets( context[37], context[17] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[35] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[20], context[16] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/24 (/16 (/20 # T/22 '$'/23 e.Pattern#1/18 )/21 )/17 (/7 (/11 # Brackets/13 s.NumB#1/25 e.inBr#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_T<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[18], context[19] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 18
    if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[9], context[10] ) )
      continue;
    // closed e.inBr#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/24 (/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/20 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/18 } Tile{ HalfReuse: (/17 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/13 AsIs: s.NumB#1/25 AsIs: e.inBr#1/9 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/21 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[17], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/24 (/17 (/21 # Brackets/23 s.NumB#1/25 e.inBr#1/19 )/22 )/18 (/7 (/11 # T/13 '$'/14 e.Pattern#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_T<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Brackets<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 9
    if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    // closed e.inBr#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/24 {REMOVED TILE}  (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/13 AsIs: '$'/14 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #24/17 AsIs: (/21 AsIs: # Brackets/23 AsIs: s.NumB#1/25 AsIs: e.inBr#1/19 AsIs: )/22 HalfReuse: >/18 } Tile{ AsIs: e.Pattern#1/9 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], SplitReps, "SplitReps" );
    refalrts::reinit_svar( context[17], context[24] );
    refalrts::reinit_close_call( context[18] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/28 (/20 (/24 # T/26 '$'/27 e.Pattern#1/22 )/25 )/21 (/7 (/11 # ADT_Brackets/13 (/16 e.Name#1/14 )/17 s.NumB#1/29 e.inBr#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[18], context[19] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = refalrts::ident_left(  & ident_T<int>::name, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( '$', context[22], context[23] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 22
    // closed e.Name#1 as range 14
    if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[9], context[10] ) )
      continue;
    // closed e.inBr#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/28 (/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/24 AsIs: # T/26 AsIs: '$'/27 } Tile{ AsIs: e.Pattern#1/22 } Tile{ HalfReuse: (/21 AsIs: (/7 AsIs: (/11 AsIs: # ADT_Brackets/13 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 AsIs: s.NumB#1/29 AsIs: e.inBr#1/9 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/25 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[21] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[21], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/28 (/17 (/21 # ADT_Brackets/23 (/26 e.Name#1/24 )/27 s.NumB#1/29 e.inBr#1/19 )/22 )/18 (/7 (/11 # T/13 '$'/14 e.Pattern#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_T<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[19], context[20] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 24
    // closed e.Pattern#1 as range 9
    if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[19], context[20] ) )
      continue;
    // closed e.inBr#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/28 {REMOVED TILE}  (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/13 AsIs: '$'/14 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #28/17 AsIs: (/21 AsIs: # ADT_Brackets/23 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 AsIs: s.NumB#1/29 AsIs: e.inBr#1/19 AsIs: )/22 HalfReuse: >/18 } Tile{ AsIs: e.Pattern#1/9 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], SplitReps, "SplitReps" );
    refalrts::reinit_svar( context[17], context[28] );
    refalrts::reinit_close_call( context[18] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/23 (/16 (/20 # Atom/22 e.val1#1/18 )/21 )/17 (/7 (/11 # Atom/13 e.val2#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Atom<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_Atom<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.val1#1 as range 18
    // closed e.val2#1 as range 9
    if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/23 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # S/4 } '$'/24 (/25 Tile{ AsIs: (/16 AsIs: (/20 AsIs: # Atom/22 AsIs: e.val1#1/18 AsIs: )/21 AsIs: )/17 HalfReuse: )/7 AsIs: (/11 HalfReuse: (/13 } (/26 # Atom/27 Tile{ AsIs: e.val2#1/9 } )/28 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[24], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], & ident_Atom<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_S<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[13], context[12] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[25], context[7] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[16], context[13] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/24 (/17 (/21 # Atom/23 e.val#1/19 )/22 )/18 (/7 (/11 # S/13 '$'/14 e.Pattern#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_S<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Atom<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.val#1 as range 19
    // closed e.Pattern#1 as range 9
    if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # S/13 AsIs: '$'/14 } Tile{ HalfReuse: (/0 } Tile{ AsIs: (/17 AsIs: (/21 AsIs: # Atom/23 AsIs: e.val#1/19 AsIs: )/22 AsIs: )/18 HalfReuse: )/7 } Tile{ AsIs: e.Pattern#1/9 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[7] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/24 (/16 (/20 # S/22 '$'/23 e.Pattern#1/18 )/21 )/17 (/7 (/11 # Atom/13 e.val#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Atom<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_S<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[18], context[19] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 18
    // closed e.val#1 as range 9
    if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/24 (/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/20 AsIs: # S/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/18 } Tile{ HalfReuse: (/17 AsIs: (/7 AsIs: (/11 AsIs: # Atom/13 AsIs: e.val#1/9 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/21 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[17], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/24 (/17 (/21 # Atom/23 e.val#1/19 )/22 )/18 (/7 (/11 # T/13 '$'/14 e.Pattern#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_T<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Atom<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.val#1 as range 19
    // closed e.Pattern#1 as range 9
    if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/13 AsIs: '$'/14 } Tile{ HalfReuse: (/0 } Tile{ AsIs: (/17 AsIs: (/21 AsIs: # Atom/23 AsIs: e.val#1/19 AsIs: )/22 AsIs: )/18 HalfReuse: )/7 } Tile{ AsIs: e.Pattern#1/9 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[7] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/24 (/16 (/20 # T/22 '$'/23 e.Pattern#1/18 )/21 )/17 (/7 (/11 # Atom/13 e.val#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Atom<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_T<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[18], context[19] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 18
    // closed e.val#1 as range 9
    if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/24 (/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/20 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/18 } Tile{ HalfReuse: (/17 AsIs: (/7 AsIs: (/11 AsIs: # Atom/13 AsIs: e.val#1/9 AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/21 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[17], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/25 (/17 (/21 # T/23 '$'/24 e.Pattern1#1/19 )/22 )/18 (/7 (/11 # T/13 '$'/14 e.Pattern2#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_T<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_T<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[19], context[20] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern1#1 as range 19
    // closed e.Pattern2#1 as range 9
    if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/25 (/17 {REMOVED TILE}  {REMOVED TILE}  )/22 )/18 (/7 (/11 # T/13 '$'/14 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/21 AsIs: # T/23 AsIs: '$'/24 } Tile{ AsIs: e.Pattern1#1/19 } Tile{ AsIs: e.Pattern2#1/9 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/25 (/17 (/21 # T/23 '$'/24 e.Pattern1#1/19 )/22 )/18 (/7 (/11 # S/13 '$'/14 e.Pattern2#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_S<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_T<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[19], context[20] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern1#1 as range 19
    // closed e.Pattern2#1 as range 9
    if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/25 (/17 {REMOVED TILE}  {REMOVED TILE}  )/22 )/18 (/7 (/11 # S/13 '$'/14 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/21 AsIs: # T/23 AsIs: '$'/24 } Tile{ AsIs: e.Pattern1#1/19 } Tile{ AsIs: e.Pattern2#1/9 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_Terms/4 s.Num#1/25 (/17 (/21 # S/23 '$'/24 e.Pattern1#1/19 )/22 )/18 (/7 (/11 # T/13 '$'/14 e.Pattern2#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_T<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_S<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[19], context[20] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern1#1 as range 19
    // closed e.Pattern2#1 as range 9
    if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/25 (/17 (/21 # S/23 '$'/24 {REMOVED TILE}  )/22 )/18 (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/13 AsIs: '$'/14 } Tile{ AsIs: e.Pattern1#1/19 } Tile{ AsIs: e.Pattern2#1/9 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FastGen_Terms/4 s.Num#1/25 (/17 (/21 # S/23 '$'/24 e.Pattern1#1/19 )/22 )/18 (/7 (/11 # S/13 '$'/14 e.Pattern2#1/9 )/12 )/8 >/1
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
  context[13] = refalrts::ident_left(  & ident_S<int>::name, context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::char_left( '$', context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = refalrts::ident_left(  & ident_S<int>::name, context[19], context[20] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[24] = refalrts::char_left( '$', context[19], context[20] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern1#1 as range 19
  // closed e.Pattern2#1 as range 9
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/25 (/17 {REMOVED TILE}  {REMOVED TILE}  )/22 )/18 (/7 (/11 # S/13 '$'/14 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/21 AsIs: # S/23 AsIs: '$'/24 } Tile{ AsIs: e.Pattern1#1/19 } Tile{ AsIs: e.Pattern2#1/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[21], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FastGen_MeN(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 t.left1#1/14 e.1#1/18 (/22 # E/24 e.inE1#1/20 )/23 e.2#1/34 )/12 (/7 t.left2#1/16 e.3#1/25 (/29 # E/31 e.inE2#1/27 )/30 e.4#1/36 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[5];
      context[33] = context[6];
      context[34] = context[9];
      context[35] = context[10];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[34], context[35] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  & ident_E<int>::name, context[20], context[21] );
      if( ! context[24] )
        continue;
      // closed e.inE1#1 as range 20
      // closed e.2#1 as range 9
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop();
      do {
        context[36] = context[32];
        context[37] = context[33];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[36], context[37] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = refalrts::ident_left(  & ident_E<int>::name, context[27], context[28] );
        if( ! context[31] )
          continue;
        // closed e.inE2#1 as range 27
        // closed e.4#1 as range 5

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FastGen_Terms/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: t.left1#1/14 } )/38 (/39 Tile{ AsIs: t.left2#1/16 } )/40 >/41 </42 & FastGen_MeN/43 s.Num#1/13/44 (/45 Tile{ AsIs: e.1#1/18 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: e.inE1#1/20 AsIs: )/23 AsIs: e.2#1/34 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.3#1/25 } Tile{ AsIs: (/29 AsIs: # E/31 AsIs: e.inE2#1/27 AsIs: )/30 AsIs: e.4#1/36 AsIs: )/8 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[39] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[41] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[42] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[43], FastGen_MeN, "FastGen_MeN" ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[44], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[45] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], FastGen_Terms, "FastGen_Terms" );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[42] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[45], context[12] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::push_stack( context[41] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[39], context[40] );
        refalrts::link_brackets( context[11], context[38] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[29];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[22], context[7] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[40], context[45] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[25], context[26], context[32], context[33] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[9], context[10] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 e.1#1/18 (/22 # E/24 e.inE1#1/20 )/23 e.2#1/34 t.right1#1/14 )/12 (/7 e.3#1/25 (/29 # E/31 e.inE2#1/27 )/30 e.4#1/36 t.right2#1/16 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[15] = refalrts::tvar_right( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    context[17] = refalrts::tvar_right( context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[5];
      context[33] = context[6];
      context[34] = context[9];
      context[35] = context[10];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[34], context[35] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  & ident_E<int>::name, context[20], context[21] );
      if( ! context[24] )
        continue;
      // closed e.inE1#1 as range 20
      // closed e.2#1 as range 9
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop();
      do {
        context[36] = context[32];
        context[37] = context[33];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[36], context[37] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = refalrts::ident_left(  & ident_E<int>::name, context[27], context[28] );
        if( ! context[31] )
          continue;
        // closed e.inE2#1 as range 27
        // closed e.4#1 as range 5

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen_MeN/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: e.1#1/18 AsIs: (/22 AsIs: # E/24 AsIs: e.inE1#1/20 AsIs: )/23 } Tile{ AsIs: e.2#1/34 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.3#1/25 AsIs: (/29 AsIs: # E/31 AsIs: e.inE2#1/27 AsIs: )/30 } Tile{ AsIs: e.4#1/36 } )/38 >/39 </40 & FastGen_Terms/41 s.Num#1/13/42 (/43 Tile{ AsIs: t.right1#1/14 } )/44 (/45 Tile{ AsIs: t.right2#1/16 AsIs: )/8 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[39] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[41], FastGen_Terms, "FastGen_Terms" ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[42], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[43] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[44] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[45] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[40] );
        refalrts::link_brackets( context[45], context[8] );
        refalrts::link_brackets( context[43], context[44] );
        refalrts::push_stack( context[39] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[38] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[38], context[43] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[12], context[30] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[25], context[26], context[32], context[33] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[9], context[10] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_MeN/4 s.Num#1/41 (/25 (/29 # E/31 '$'/32 (/35 (/39 e.inE1#1/37 )/40 )/36 )/30 )/26 (/7 (/11 # E/13 '$'/14 (/17 (/21 e.inE2#1/19 )/22 )/18 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_E<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[9], context[10] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_right( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[23], context[24] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = refalrts::ident_left(  & ident_E<int>::name, context[27], context[28] );
    if( ! context[31] )
      continue;
    context[32] = refalrts::char_left( '$', context[27], context[28] );
    if( ! context[32] )
      continue;
    context[33] = 0;
    context[34] = 0;
    context[35] = refalrts::brackets_left( context[33], context[34], context[27], context[28] );
    if( ! context[35] )
      continue;
    refalrts::bracket_pointers(context[35], context[36]);
    context[37] = 0;
    context[38] = 0;
    context[39] = refalrts::brackets_left( context[37], context[38], context[33], context[34] );
    if( ! context[39] )
      continue;
    refalrts::bracket_pointers(context[39], context[40]);
    if( ! refalrts::empty_seq( context[33], context[34] ) )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.inE1#1 as range 37
    // closed e.inE2#1 as range 19
    if( ! refalrts::svar_left( context[41], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_MeN/4 s.Num#1/41 (/25 {REMOVED TILE}  (/7 (/11 # E/13 '$'/14 (/17 (/21 {REMOVED TILE}  )/22 )/18 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/29 AsIs: # E/31 AsIs: '$'/32 AsIs: (/35 AsIs: (/39 AsIs: e.inE1#1/37 AsIs: )/40 AsIs: )/36 HalfReuse: (/30 HalfReuse: (/26 } Tile{ AsIs: e.inE2#1/19 } Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[30] );
    refalrts::reinit_open_bracket( context[26] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::link_brackets( context[30], context[8] );
    refalrts::link_brackets( context[26], context[12] );
    refalrts::link_brackets( context[35], context[36] );
    refalrts::link_brackets( context[39], context[40] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[29], context[26] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_MeN/4 s.Num#1/33 (/17 (/21 # E/23 '$'/24 (/27 (/31 e.inE1#1/29 )/32 )/28 )/22 )/18 (/7 (/11 # E/13 '$'/14 e.inE2#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_E<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_E<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[19], context[20] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[19], context[20] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[25], context[26] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.inE1#1 as range 29
    // closed e.inE2#1 as range 9
    if( ! refalrts::svar_left( context[33], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_MeN/4 s.Num#1/33 (/17 {REMOVED TILE}  (/7 (/11 # E/13 '$'/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/21 AsIs: # E/23 AsIs: '$'/24 AsIs: (/27 AsIs: (/31 AsIs: e.inE1#1/29 AsIs: )/32 AsIs: )/28 HalfReuse: (/22 HalfReuse: (/18 } Tile{ AsIs: e.inE2#1/9 } Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::link_brackets( context[18], context[12] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_MeN/4 s.Num#1/33 (/25 (/29 # E/31 '$'/32 e.inE1#1/27 )/30 )/26 (/7 (/11 # E/13 '$'/14 (/17 (/21 e.inE2#1/19 )/22 )/18 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_E<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[9], context[10] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_right( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[23], context[24] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = refalrts::ident_left(  & ident_E<int>::name, context[27], context[28] );
    if( ! context[31] )
      continue;
    context[32] = refalrts::char_left( '$', context[27], context[28] );
    if( ! context[32] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.inE1#1 as range 27
    // closed e.inE2#1 as range 19
    if( ! refalrts::svar_left( context[33], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_MeN/4 s.Num#1/33 (/25 {REMOVED TILE}  {REMOVED TILE}  )/30 )/26 {REMOVED TILE}  {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/29 AsIs: # E/31 AsIs: '$'/32 } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.inE1#1/27 } Tile{ HalfReuse: )/13 HalfReuse: )/14 AsIs: (/17 AsIs: (/21 AsIs: e.inE2#1/19 AsIs: )/22 AsIs: )/18 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[13] );
    refalrts::reinit_close_bracket( context[14] );
    refalrts::link_brackets( context[29], context[12] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::link_brackets( context[11], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[12] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    res = refalrts::splice_evar( res, context[29], context[32] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_MeN/4 s.Num#1/25 (/17 (/21 # E/23 '$'/24 e.inE1#1/19 )/22 )/18 (/7 (/11 # E/13 '$'/14 e.inE2#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_E<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_E<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[19], context[20] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.inE1#1 as range 19
    // closed e.inE2#1 as range 9
    if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & FastGen_MeN/4 s.Num#1/25 {REMOVED TILE}  # E/13 '$'/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # E/17 HalfReuse: '$'/21 HalfReuse: (/23 HalfReuse: (/24 AsIs: e.inE1#1/19 AsIs: )/22 AsIs: )/18 AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.inE2#1/9 } Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[17], & ident_E<int>::name );
    refalrts::reinit_char( context[21], '$' );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_open_bracket( context[24] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[18] );
    refalrts::link_brackets( context[24], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FastGen_MeN/4 s.Num#1/13 (/11 e.in1#1/9 )/12 (/7 e.in2#1/5 )/8 >/1
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
  // closed e.in1#1 as range 9
  // closed e.in2#1 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } # E/14 '$'/15 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.in1#1/9 } >/16 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.in2#1/5 AsIs: )/8 HalfReuse: )/1 } )/17 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[14], & ident_E<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '$' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], SplitReps, "SplitReps" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult LengthComp(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LengthComp/4 (/7 t.1#1/13 e.tail1#1/5 )/8 (/11 t.2#1/15 e.tail2#1/9 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    // closed e.tail1#1 as range 5
    context[16] = refalrts::tvar_left( context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    // closed e.tail2#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.1#1/13 {REMOVED TILE}  {REMOVED TILE}  t.2#1/15 {REMOVED TILE}  {REMOVED TILE} 
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
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LengthComp/4 (/7 )/8 (/11 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & LengthComp/4 (/7 )/8 (/11 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 1/0 } Tile{ ]] }
    refalrts::reinit_number( context[0], 1UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & LengthComp/4 e.1#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.1#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & LengthComp/4 e.1#1/2 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 0/0 } Tile{ ]] }
  refalrts::reinit_number( context[0], 0UL );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FastGen_K(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_K/4 s.Num#1/14 1/13 (/11 t.1#1/15 e.tail1#1/9 )/12 (/7 t.2#1/17 e.tail2#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::number_right( 1UL, context[2], context[3] );
    if( ! context[13] )
      continue;
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[16] = refalrts::tvar_left( context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    // closed e.tail1#1 as range 9
    context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    // closed e.tail2#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </19 & FastGen_Terms/20 s.Num#1/14/21 (/22 Tile{ AsIs: t.1#1/15 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: t.2#1/17 } )/23 >/24 Tile{ AsIs: </0 AsIs: & FastGen_K/4 AsIs: s.Num#1/14 AsIs: 1/13 AsIs: (/11 } Tile{ AsIs: e.tail1#1/9 } )/25 (/26 Tile{ AsIs: e.tail2#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], FastGen_Terms, "FastGen_Terms" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[21], context[14]))
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
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[12], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen_K/4 s.Num#1/14 1/13 (/11 )/12 (/7 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::number_right( 1UL, context[2], context[3] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_K/4 s.Num#1/14 1/13 (/11 )/12 (/7 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FastGen_K/4 s.Num#1/14 0/13 (/11 e.1#1/9 )/12 (/7 e.2#1/5 )/8 >/1
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
  context[13] = refalrts::number_right( 0UL, context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.1#1 as range 9
  // closed e.2#1 as range 5
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } Tile{ HalfReuse: # E/13 } '$'/15 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/14 } Tile{ AsIs: e.1#1/9 } >/16 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.2#1/5 AsIs: )/8 HalfReuse: )/1 } )/17 Tile{ ]] }
  if( ! refalrts::alloc_char( context[15], '$' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[13], & ident_E<int>::name );
  refalrts::update_name( context[4], SplitReps, "SplitReps" );
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
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen/4 s.Num#1/9 (/7 e.1#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.1#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#1/9 AsIs: (/7 AsIs: e.1#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen/4 s.Num#1/5 (/8 )/9 (/12 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 Tile{ HalfReuse: s.Num1 #5/8 HalfReuse: >/9 AsIs: (/12 AsIs: )/13 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
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
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen/4 s.Num#1/5 (/8 (/12 # E/14 '$'/15 e.Pattern#1/10 )/13 )/9 (/18 e.any#1/16 )/19 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[6], context[7] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_E<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( '$', context[10], context[11] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.Pattern#1 as range 10
    // closed e.any#1 as range 16
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } Tile{ HalfReuse: </18 } & Inc/20 Tile{ AsIs: s.Num#1/5 } >/21 Tile{ AsIs: (/8 AsIs: (/12 AsIs: # E/14 AsIs: '$'/15 AsIs: e.Pattern#1/10 HalfReuse: (/13 HalfReuse: (/9 } Tile{ AsIs: e.any#1/16 } )/22 )/23 )/24 Tile{ AsIs: )/19 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[20], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[18] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[19] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[13], context[23] );
    refalrts::link_brackets( context[9], context[22] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen/4 s.Num#1/5 (/8 e.any#1/6 )/9 (/12 (/16 # E/18 '$'/19 e.Pattern#1/14 )/17 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_E<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.any#1 as range 6
    // closed e.Pattern#1 as range 14
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } Tile{ HalfReuse: </8 } & Inc/20 Tile{ AsIs: s.Num#1/5 } Tile{ HalfReuse: >/9 AsIs: (/12 AsIs: (/16 AsIs: # E/18 } '$'/21 </22 & SplitReps/23 s.Num#1/5/24 Tile{ AsIs: e.any#1/6 } Tile{ HalfReuse: >/19 AsIs: e.Pattern#1/14 AsIs: )/17 AsIs: )/13 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[20], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], SplitReps, "SplitReps" ) )
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
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen/4 s.Num#1/5 (/8 e.Any#1/6 )/9 (/12 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Any#1 as range 6
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 Tile{ AsIs: s.Num#1/5 HalfReuse: >/8 } (/16 (/17 # E/18 '$'/19 </20 & SplitReps/21 s.Num#1/5/22 Tile{ AsIs: e.Any#1/6 } >/23 (/24 (/25 )/26 Tile{ AsIs: )/9 HalfReuse: )/12 AsIs: )/13 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_E<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], SplitReps, "SplitReps" ) )
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
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[13] );
    refalrts::link_brackets( context[17], context[12] );
    refalrts::link_brackets( context[24], context[9] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[16], context[22] );
    res = refalrts::splice_evar( res, context[5], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen/4 s.Num#1/5 (/8 )/9 (/12 e.Any#1/10 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.Any#1 as range 10
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 & FastGen/15 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 HalfReuse: >/8 HalfReuse: (/9 AsIs: (/12 } # E/16 '$'/17 (/18 (/19 )/20 )/21 (/22 (/23 Tile{ AsIs: e.Any#1/10 } )/24 )/25 )/26 Tile{ AsIs: )/13 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], FastGen, "FastGen" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_E<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[9], context[13] );
    refalrts::link_brackets( context[12], context[26] );
    refalrts::link_brackets( context[22], context[25] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[18], context[21] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[16], context[23] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen/4 s.Num#1/5 (/8 (/12 # E/14 '$'/15 e.Pattern1#1/10 )/13 )/9 (/18 (/22 # E/24 '$'/25 e.Pattern2#1/20 )/23 )/19 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[6], context[7] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_E<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( '$', context[10], context[11] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  & ident_E<int>::name, context[20], context[21] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[20], context[21] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Pattern1#1 as range 10
    // closed e.Pattern2#1 as range 20
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/18 (/22 # E/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & FastGen/9 } Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 HalfReuse: >/8 AsIs: (/12 HalfReuse: (/14 HalfReuse: # E/15 } Tile{ AsIs: '$'/25 } Tile{ AsIs: e.Pattern1#1/10 } Tile{ AsIs: e.Pattern2#1/20 } Tile{ AsIs: )/23 AsIs: )/19 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[13] );
    refalrts::reinit_name( context[9], FastGen, "FastGen" );
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_ident( context[15], & ident_E<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[12], context[19] );
    refalrts::link_brackets( context[14], context[23] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[23];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[13], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen/4 s.Num#1/5 (/8 t.1#1/14 )/9 (/12 t.2#1/16 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[6], context[7] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[10], context[11] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </18 & FastGen/19 </20 & Inc/21 s.Num#1/5/22 >/23 (/24 Tile{ AsIs: </0 Reuse: & FastGen_Terms/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: t.1#1/14 AsIs: )/9 AsIs: (/12 AsIs: t.2#1/16 AsIs: )/13 } >/25 )/26 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], FastGen, "FastGen" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Inc, "Inc" ) )
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
    refalrts::update_name( context[4], FastGen_Terms, "FastGen_Terms" );
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
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[18], context[24] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/14 (/18 # E/20 '$'/21 (/24 e.Pattern1#1/22 )/25 )/19 e.2#1/38 )/9 (/12 e.3#1/26 (/30 # E/32 '$'/33 (/36 e.Pattern2#1/34 )/37 )/31 e.4#1/42 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Tail#1 as range 2
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[38] = context[6];
      context[39] = context[7];
      context[40] = context[10];
      context[41] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[38], context[39] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::char_left( '$', context[16], context[17] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Pattern1#1 as range 22
      // closed e.2#1 as range 6
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop();
      do {
        context[42] = context[40];
        context[43] = context[41];
        context[28] = 0;
        context[29] = 0;
        context[30] = refalrts::brackets_left( context[28], context[29], context[42], context[43] );
        if( ! context[30] )
          continue;
        refalrts::bracket_pointers(context[30], context[31]);
        context[32] = refalrts::ident_left(  & ident_E<int>::name, context[28], context[29] );
        if( ! context[32] )
          continue;
        context[33] = refalrts::char_left( '$', context[28], context[29] );
        if( ! context[33] )
          continue;
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[28], context[29] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        // closed e.Pattern2#1 as range 34
        // closed e.4#1 as range 10

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ } </44 & FastGen/45 </46 & Inc/47 s.Num#1/5/48 >/49 (/50 Tile{ AsIs: </0 Reuse: & FastGen_MeN/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.1#1/14 AsIs: (/18 AsIs: # E/20 AsIs: '$'/21 AsIs: (/24 AsIs: e.Pattern1#1/22 AsIs: )/25 AsIs: )/19 AsIs: e.2#1/38 AsIs: )/9 AsIs: (/12 AsIs: e.3#1/26 AsIs: (/30 AsIs: # E/32 AsIs: '$'/33 AsIs: (/36 AsIs: e.Pattern2#1/34 AsIs: )/37 AsIs: )/31 AsIs: e.4#1/42 AsIs: )/13 } >/51 )/52 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_open_call( context[44] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[45], FastGen, "FastGen" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[46] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[47], Inc, "Inc" ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[48], context[5]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[49] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[50] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[51] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[52] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], FastGen_MeN, "FastGen_MeN" );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[44] );
        refalrts::link_brackets( context[50], context[52] );
        refalrts::push_stack( context[51] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::link_brackets( context[24], context[25] );
        refalrts::push_stack( context[49] );
        refalrts::push_stack( context[46] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[44], context[50] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[26], context[27], context[40], context[41] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[6], context[7] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/6 )/9 (/12 e.2#1/10 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.1#1 as range 6
    // closed e.2#1 as range 10
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 Tile{ AsIs: s.Num#1/5 } >/16 (/17 </18 & FastGen_K/19 s.Num#1/5/20 </21 & LengthComp/22 Tile{ AsIs: (/8 AsIs: e.1#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.2#1/10 AsIs: )/13 } >/23 (/24 e.1#1/6/25 )/27 (/28 e.2#1/10/29 )/31 >/32 )/33 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], FastGen_K, "FastGen_K" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[20], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], LengthComp, "LengthComp" ) )
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
    refalrts::link_brackets( context[17], context[33] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[28], context[31] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[23], context[33] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[16], context[22] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FastGen/4 s.Num#1/13 (/11 e.1#1/9 )/12 (/7 e.2#1/5 )/8 >/1
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
  // closed e.1#1 as range 9
  // closed e.2#1 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Num#1/13 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } # E/14 '$'/15 Tile{ AsIs: (/11 } (/16 Tile{ AsIs: e.1#1/9 } )/17 )/18 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.2#1/5 AsIs: )/8 HalfReuse: )/1 } )/19 )/20 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[14], & ident_E<int>::name ) )
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
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[20] );
  refalrts::link_brackets( context[4], context[19] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[18] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult CreateFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CreateFastGen/4 e.Patterns#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Patterns#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & FastGen/6 1/7 Tile{ AsIs: </0 Reuse: & PreparePatternsFastGen/4 AsIs: e.Patterns#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], FastGen, "FastGen" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[7], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PreparePatternsFastGen, "PreparePatternsFastGen" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
