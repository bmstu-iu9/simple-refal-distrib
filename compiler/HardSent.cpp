// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CreateHardPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HardPatternComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CreateHardPattern_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PreparePatternHardSent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

// identifier #TkChar
template <typename SREFAL_PARAM_INT>
struct ident_TkChar {
  static const char *name() {
    return "TkChar";
  }
};

// identifier #TkIdentifier
template <typename SREFAL_PARAM_INT>
struct ident_TkIdentifier {
  static const char *name() {
    return "TkIdentifier";
  }
};

// identifier #TkName
template <typename SREFAL_PARAM_INT>
struct ident_TkName {
  static const char *name() {
    return "TkName";
  }
};

// identifier #TkNumber
template <typename SREFAL_PARAM_INT>
struct ident_TkNumber {
  static const char *name() {
    return "TkNumber";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

static refalrts::FnResult lambda_PreparePatternHardSent_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternHardSent_0/4 'e'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 'e', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_PreparePatternHardSent_0/4 'e'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # E/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_E<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternHardSent_0/4 't'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 't', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_PreparePatternHardSent_0/4 't'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # T/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_T<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_PreparePatternHardSent_0/4 's'/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_left( 's', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_PreparePatternHardSent_0/4 's'/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: # S/0 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_S<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_PreparePatternHardSent_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternHardSent_1/4 (/7 # TkChar/9 s.char#2/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkChar<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkChar/9 AsIs: s.char#2/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternHardSent_1/4 (/7 # TkNumber/9 s.value#2/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkNumber/9 AsIs: s.value#2/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternHardSent_1/4 (/7 # TkName/9 e.name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkName<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkName/9 AsIs: e.name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternHardSent_1/4 (/7 # TkIdentifier/9 e.ident#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ident#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkIdentifier/9 AsIs: e.ident#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternHardSent_1/4 (/7 # TkVariable/9 s.Mode#2/10 e.Index#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Index#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Mode#2/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Fetch/7 HalfReuse: s.Mode2 #10/9 } & lambda_PreparePatternHardSent_0/11 >/12 (/13 Tile{ AsIs: e.Index#2/5 } )/14 (/15 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_name( context[11], lambda_PreparePatternHardSent_0, "lambda_PreparePatternHardSent_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], Fetch, "Fetch" );
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[15], context[8] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PreparePatternHardSent_1/4 (/7 # Brackets/9 e.inBrackets#2/5 )/8 >/1
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
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & PreparePatternHardSent/9 AsIs: e.inBrackets#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], PreparePatternHardSent, "PreparePatternHardSent" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_PreparePatternHardSent_1/4 (/7 # ADT_Brackets/9 (/12 e.Name#2/10 )/13 e.inBrackets#2/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 10
  // closed e.inBrackets#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & PreparePatternHardSent/4 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], PreparePatternHardSent, "PreparePatternHardSent" );
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
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PreparePatternHardSent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PreparePatternHardSent/4 e.Pattern#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_PreparePatternHardSent_1/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_PreparePatternHardSent_1, "lambda_PreparePatternHardSent_1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CreateHardPattern_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 (/7 # ADT_Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 (/16 e.tek_index#1/14 )/17 >/1
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
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 10
    // closed e.body#1 as range 5
    // closed e.tek_index#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.tek_index#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & CreateHardPattern_Aux/4 } Tile{ AsIs: e.body#1/5 } Tile{ AsIs: (/16 } Tile{ AsIs: )/17 AsIs: >/1 } Tile{ AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 (/7 # ADT_Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 e.smth#1/2 (/16 e.tek_index#1/14 )/17 >/1
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
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Name#1 as range 10
    // closed e.body#1 as range 5
    // closed e.smth#1 as range 2
    // closed e.tek_index#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.tek_index#1/14 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & CreateHardPattern_Aux/4 } Tile{ AsIs: e.body#1/5 } (/18 'l'/19 )/20 >/21 )/22 </23 Tile{ HalfReuse: & CreateHardPattern_Aux/8 AsIs: e.smth#1/2 AsIs: (/16 } 'r'/24 Tile{ AsIs: )/17 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], CreateHardPattern_Aux, "CreateHardPattern_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[20] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 e.smth#1/2 (/11 # ADT_Brackets/13 (/16 e.Name#1/14 )/17 e.body#1/9 )/12 (/7 e.tek_index#1/5 )/8 >/1
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
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.smth#1 as range 2
    // closed e.Name#1 as range 14
    // closed e.body#1 as range 9
    // closed e.tek_index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.tek_index#1/5 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern_Aux/4 AsIs: e.smth#1/2 AsIs: (/11 HalfReuse: 'l'/13 HalfReuse: )/16 } >/18 (/19 # ADT_Brackets/20 (/21 Tile{ AsIs: e.Name#1/14 } )/22 </23 Tile{ HalfReuse: & CreateHardPattern_Aux/17 AsIs: e.body#1/9 HalfReuse: (/12 HalfReuse: 'r'/7 } Tile{ AsIs: )/8 AsIs: >/1 } )/24 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[20], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], 'l' );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_name( context[17], CreateHardPattern_Aux, "CreateHardPattern_Aux" );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_char( context[7], 'r' );
    refalrts::link_brackets( context[19], context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[17], context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[18], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 (/7 # Brackets/9 e.body#1/5 )/8 (/12 e.tek_index#1/10 )/13 >/1
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
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.body#1 as range 5
    // closed e.tek_index#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.tek_index#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CreateHardPattern_Aux/9 AsIs: e.body#1/5 HalfReuse: (/8 HalfReuse: )/12 } Tile{ HalfReuse: >/13 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CreateHardPattern_Aux, "CreateHardPattern_Aux" );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[12] );
    refalrts::reinit_close_call( context[13] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[12], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 (/7 # Brackets/9 e.body#1/5 )/8 e.smth#1/2 (/12 e.tek_index#1/10 )/13 >/1
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
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.body#1 as range 5
    // closed e.smth#1 as range 2
    // closed e.tek_index#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.tek_index#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CreateHardPattern_Aux/9 AsIs: e.body#1/5 HalfReuse: (/8 } 'l'/14 )/15 >/16 )/17 </18 & CreateHardPattern_Aux/19 Tile{ AsIs: e.smth#1/2 } Tile{ AsIs: (/12 } 'r'/20 Tile{ AsIs: )/13 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[14], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], CreateHardPattern_Aux, "CreateHardPattern_Aux" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'r' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CreateHardPattern_Aux, "CreateHardPattern_Aux" );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[0], context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[8], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[14], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 e.smth#1/2 (/11 # Brackets/13 e.body#1/9 )/12 (/7 e.tek_index#1/5 )/8 >/1
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
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.smth#1 as range 2
    // closed e.body#1 as range 9
    // closed e.tek_index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.tek_index#1/5 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern_Aux/4 AsIs: e.smth#1/2 AsIs: (/11 HalfReuse: 'l'/13 } Tile{ AsIs: )/8 AsIs: >/1 } (/14 # Brackets/15 </16 & CreateHardPattern_Aux/17 Tile{ AsIs: e.body#1/9 } (/18 'r'/19 Tile{ AsIs: )/12 HalfReuse: >/7 } )/20 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[15], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], CreateHardPattern_Aux, "CreateHardPattern_Aux" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], 'l' );
    refalrts::reinit_close_call( context[7] );
    refalrts::link_brackets( context[14], context[20] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[18], context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[12], context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 (/7 # S/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 e.smth#1/2 (/20 e.tek_index#1/18 )/21 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_S<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.name#1 as range 10
    // closed e.pattern#1 as range 14
    // closed e.smth#1 as range 2
    // closed e.tek_index#1 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.pattern#1/14 {REMOVED TILE}  e.tek_index#1/18 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/22 # S/23 (/24 'i'/25 'd'/26 'x'/27 )/28 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 AsIs: # S/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } )/29 )/30 )/31 Tile{ HalfReuse: </17 HalfReuse: & CreateHardPattern_Aux/8 AsIs: e.smth#1/2 AsIs: (/20 } 'r'/32 Tile{ AsIs: )/21 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_S<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'r' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_name( context[8], CreateHardPattern_Aux, "CreateHardPattern_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[22], context[31] );
    refalrts::link_brackets( context[0], context[30] );
    refalrts::link_brackets( context[4], context[29] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[24], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[22], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 e.smth#1/2 (/11 # S/13 (/16 e.name#1/14 )/17 (/20 e.pattern#1/18 )/21 )/12 (/7 e.tek_index#1/5 )/8 >/1
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
    context[13] = refalrts::ident_left(  & ident_S<int>::name, context[9], context[10] );
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
    context[20] = refalrts::brackets_left( context[18], context[19], context[9], context[10] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.smth#1 as range 2
    // closed e.name#1 as range 14
    // closed e.pattern#1 as range 18
    // closed e.tek_index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.pattern#1/18 {REMOVED TILE}  e.tek_index#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern_Aux/4 AsIs: e.smth#1/2 AsIs: (/11 HalfReuse: 'l'/13 HalfReuse: )/16 } Tile{ HalfReuse: >/17 AsIs: (/20 } # S/22 (/23 'i'/24 'd'/25 Tile{ HalfReuse: 'x'/21 AsIs: )/12 AsIs: (/7 } (/26 (/27 # S/28 (/29 Tile{ AsIs: e.name#1/14 } )/30 )/31 )/32 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_ident( context[22], & ident_S<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_S<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], 'l' );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_close_call( context[17] );
    refalrts::reinit_char( context[21], 'x' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[20], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[26], context[32] );
    refalrts::link_brackets( context[27], context[31] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[23], context[12] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[26], context[29] );
    res = refalrts::splice_evar( res, context[21], context[7] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 (/7 # T/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 e.smth#1/2 (/20 e.tek_index#1/18 )/21 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_T<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.name#1 as range 10
    // closed e.pattern#1 as range 14
    // closed e.smth#1 as range 2
    // closed e.tek_index#1 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.pattern#1/14 {REMOVED TILE}  e.tek_index#1/18 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/22 # T/23 (/24 'i'/25 'd'/26 'x'/27 )/28 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 AsIs: # T/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } )/29 )/30 )/31 Tile{ HalfReuse: </17 HalfReuse: & CreateHardPattern_Aux/8 AsIs: e.smth#1/2 AsIs: (/20 } 'r'/32 Tile{ AsIs: )/21 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_T<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'r' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_name( context[8], CreateHardPattern_Aux, "CreateHardPattern_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[22], context[31] );
    refalrts::link_brackets( context[0], context[30] );
    refalrts::link_brackets( context[4], context[29] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[24], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[22], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 e.smth#1/2 (/11 # T/13 (/16 e.name#1/14 )/17 (/20 e.pattern#1/18 )/21 )/12 (/7 e.tek_index#1/5 )/8 >/1
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
    context[13] = refalrts::ident_left(  & ident_T<int>::name, context[9], context[10] );
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
    context[20] = refalrts::brackets_left( context[18], context[19], context[9], context[10] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.smth#1 as range 2
    // closed e.name#1 as range 14
    // closed e.pattern#1 as range 18
    // closed e.tek_index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.pattern#1/18 {REMOVED TILE}  e.tek_index#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern_Aux/4 AsIs: e.smth#1/2 AsIs: (/11 HalfReuse: 'l'/13 HalfReuse: )/16 } Tile{ HalfReuse: >/17 AsIs: (/20 } # T/22 (/23 'i'/24 'd'/25 Tile{ HalfReuse: 'x'/21 AsIs: )/12 AsIs: (/7 } (/26 (/27 # T/28 (/29 Tile{ AsIs: e.name#1/14 } )/30 )/31 )/32 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_ident( context[22], & ident_T<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_T<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], 'l' );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_close_call( context[17] );
    refalrts::reinit_char( context[21], 'x' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[20], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[26], context[32] );
    refalrts::link_brackets( context[27], context[31] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[23], context[12] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[26], context[29] );
    res = refalrts::splice_evar( res, context[21], context[7] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 (/7 # Atom/9 e.attr#1/5 )/8 e.smth#1/2 (/12 e.tek_index#1/10 )/13 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.attr#1 as range 5
    // closed e.smth#1 as range 2
    // closed e.tek_index#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.tek_index#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Atom/9 AsIs: e.attr#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & CreateHardPattern_Aux/4 } Tile{ AsIs: e.smth#1/2 } Tile{ AsIs: (/12 } 'r'/14 Tile{ AsIs: )/13 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[14], 'r' ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 e.smth#1/2 (/11 # Atom/13 e.attr#1/9 )/12 (/7 e.tek_index#1/5 )/8 >/1
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
    context[13] = refalrts::ident_left(  & ident_Atom<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.smth#1 as range 2
    // closed e.attr#1 as range 9
    // closed e.tek_index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.tek_index#1/5 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern_Aux/4 AsIs: e.smth#1/2 AsIs: (/11 HalfReuse: 'l'/13 } Tile{ AsIs: )/8 AsIs: >/1 } Tile{ AsIs: (/7 } # Atom/14 Tile{ AsIs: e.attr#1/9 } Tile{ AsIs: )/12 } Tile{ ]] }
    if( ! refalrts::alloc_ident( context[14], & ident_Atom<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], 'l' );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateHardPattern_Aux/4 (/7 e.tek_index#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.tek_index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CreateHardPattern_Aux/4 (/7 e.tek_index#1/5 )/8 >/1 {REMOVED TILE} 
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
  // </0 & CreateHardPattern_Aux/4 e.smth#1/2 (/7 e.tek_index#1/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.smth#1 as range 2
  // closed e.tek_index#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.tek_index#1/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/9 # E/10 (/11 'i'/12 'd'/13 'x'/14 )/15 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: e.smth#1/2 HalfReuse: )/7 } Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_E<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[4], context[7] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult CreateHardPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CreateHardPattern/4 e.pattern#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & CreateHardPattern_Aux/6 Tile{ AsIs: </0 Reuse: & PreparePatternHardSent/4 AsIs: e.pattern#1/2 AsIs: >/1 } (/7 '_'/8 )/9 >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], CreateHardPattern_Aux, "CreateHardPattern_Aux" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PreparePatternHardSent, "PreparePatternHardSent" );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HardPatternComment_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HardPatternComment_0/4 (/7 # Atom/9 # TkChar/10 s.Char#2/11 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_TkChar<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Tail#2 as range 2
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TkChar/10 s.Char#2/11 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\''/0 HalfReuse: s.Char2 #11/4 HalfReuse: '\''/7 HalfReuse: </9 } Tile{ HalfReuse: & HardPatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[0], '\'' );
    refalrts::reinit_svar( context[4], context[11] );
    refalrts::reinit_char( context[7], '\'' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], HardPatternComment, "HardPatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HardPatternComment_0/4 (/7 # Atom/9 # TkNumber/10 s.Value#2/11 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Tail#2 as range 2
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # Atom/9 # TkNumber/10 s.Value#2/11 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Value2 #11/0 HalfReuse: </4 } Tile{ HalfReuse: & HardPatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[0], context[11] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[8], HardPatternComment, "HardPatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HardPatternComment_0/4 (/7 # Atom/9 # TkName/10 e.Name#2/5 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_TkName<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Name#2 as range 5
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/7 # Atom/9 # TkName/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '&'/0 } Tile{ AsIs: e.Name#2/5 } Tile{ HalfReuse: </4 } Tile{ HalfReuse: & HardPatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[0], '&' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[8], HardPatternComment, "HardPatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HardPatternComment_0/4 (/7 # Atom/9 # TkIdentifier/10 e.Ident#2/5 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Ident#2 as range 5
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  # Atom/9 # TkIdentifier/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 } Tile{ AsIs: e.Ident#2/5 } Tile{ HalfReuse: '\"'/4 HalfReuse: </7 } Tile{ HalfReuse: & HardPatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], HardPatternComment, "HardPatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HardPatternComment_0/4 (/7 # Brackets/9 e.inBrackets#2/5 )/8 e.Tail#2/2 >/1
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
    // closed e.inBrackets#2 as range 5
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HardPatternComment/7 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/9 } )/10 </11 Tile{ HalfReuse: & HardPatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], HardPatternComment, "HardPatternComment" );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_name( context[8], HardPatternComment, "HardPatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HardPatternComment_0/4 (/7 # ADT_Brackets/9 (/12 e.Name#2/10 )/13 e.inBrackets#2/5 )/8 e.Tail#2/2 >/1
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
    // closed e.Name#2 as range 10
    // closed e.inBrackets#2 as range 5
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/12 AsIs: e.Name#2/10 HalfReuse: ' '/13 } Tile{ AsIs: </0 Reuse: & HardPatternComment/4 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/7 HalfReuse: ']'/9 } </14 Tile{ HalfReuse: & HardPatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[12], '[' );
    refalrts::reinit_char( context[13], ' ' );
    refalrts::update_name( context[4], HardPatternComment, "HardPatternComment" );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_char( context[9], ']' );
    refalrts::reinit_name( context[8], HardPatternComment, "HardPatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HardPatternComment_0/4 (/7 s.Tag#2/9 e.Any#2/5 )/8 e.Tail#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Tail#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Any#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 s.Tag#2/9 e.Any#2/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Tag2 #9/0 HalfReuse: </4 } Tile{ HalfReuse: & HardPatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[8], HardPatternComment, "HardPatternComment" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult HardPatternComment(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & HardPatternComment/4 (/7 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & HardPatternComment/4 (/7 )/8 >/1 {REMOVED TILE} 
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
    // </0 & HardPatternComment/4 e.Pattern#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    // closed e.Pattern#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_HardPatternComment_0/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], Map, "Map" );
    refalrts::update_name( context[4], lambda_HardPatternComment_0, "lambda_HardPatternComment_0" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[5], context[5] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & HardPatternComment/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & HardPatternComment/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
