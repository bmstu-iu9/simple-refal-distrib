// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromToken(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ErrorList(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #EL_HasErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_HasErrors {
  static const char *name() {
    return "EL_HasErrors";
  }
};

// identifier #EL_NoErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_NoErrors {
  static const char *name() {
    return "EL_NoErrors";
  }
};

// identifier #TkError
template <typename SREFAL_PARAM_INT>
struct ident_TkError {
  static const char *name() {
    return "TkError";
  }
};

// identifier #TkUnexpected
template <typename SREFAL_PARAM_INT>
struct ident_TkUnexpected {
  static const char *name() {
    return "TkUnexpected";
  }
};

static refalrts::FnResult ErrorList(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & EL_Create/4 e.FileName#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & ErrorList/4 } (/5 Tile{ AsIs: e.FileName#1/2 } )/6 Tile{ HalfReuse: ]/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], ErrorList, "ErrorList" );
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & EL_AddError/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 e.Message#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ErrorList, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 5
  // closed e.Message#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 } Tile{ HalfReuse: ' '/0 HalfReuse: ' '/4 } 'E'/14 'R'/15 'R'/16 'O'/17 'R'/18 ':'/19 ' '/20 Tile{ AsIs: e.Message#1/2 } )/21 Tile{ HalfReuse: ]/1 ]] }
  if( ! refalrts::alloc_char( context[14], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_char( context[4], ' ' );
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[9], context[21] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[20] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & EL_AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 s.LineNumber#1/14 e.Message#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ErrorList, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 5
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 } e.FileName#1/10/15 ':'/17 Tile{ AsIs: </0 Reuse: & StrFromInt/4 } Tile{ AsIs: s.LineNumber#1/14 } >/18 ':'/19 'E'/20 'R'/21 'R'/22 'O'/23 'R'/24 ':'/25 ' '/26 Tile{ AsIs: e.Message#1/2 } )/27 Tile{ HalfReuse: ]/1 ]] }
  if (! refalrts::copy_evar(context[15], context[16], context[10], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[9] );
  refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[9], context[27] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[26] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EL_AddUnexpected/4 t.ErrorList#1/5 (/9 # TkError/11 s.LineNumber#1/12 e.Message#1/7 )/10 e.Expected#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  & ident_TkError<int>::name, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Expected#1 as range 2
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Message#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TkError/11 s.LineNumber#1/12 {REMOVED TILE}  )/10 e.Expected#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 } Tile{ AsIs: e.Message#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EL_AddUnexpected/4 t.ErrorList#1/5 (/9 # TkUnexpected/11 s.LineNumber#1/12 e.Unexpected#1/7 )/10 e.Expected#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  & ident_TkUnexpected<int>::name, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Expected#1 as range 2
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Unexpected#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.LineNumber#1/12 {REMOVED TILE}  {REMOVED TILE}  e.Expected#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 HalfReuse: 'U'/11 } Tile{ HalfReuse: 'n'/10 } 'k'/13 'n'/14 'o'/15 'w'/16 'n'/17 ' '/18 'c'/19 'h'/20 'a'/21 'r'/22 'a'/23 'c'/24 't'/25 'e'/26 'r'/27 's'/28 ' '/29 '\"'/30 Tile{ AsIs: e.Unexpected#1/7 } '\"'/31 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[13], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'w' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], '\"' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::reinit_char( context[11], 'U' );
    refalrts::reinit_char( context[10], 'n' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[13], context[30] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & EL_AddUnexpected/4 t.ErrorList#1/5 (/9 s.Unexpected#1/11 s.LineNumber#1/12 e.Info#1/7 )/10 e.Expected#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Expected#1 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#1 as range 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.LineNumber#1/12 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 } 'U'/13 'n'/14 'e'/15 'x'/16 'p'/17 'e'/18 'c'/19 't'/20 'e'/21 'd'/22 ' '/23 </24 & StrFromToken/25 Tile{ AsIs: s.Unexpected#1/11 } Tile{ AsIs: e.Info#1/7 } >/26 ','/27 ' '/28 'e'/29 'x'/30 'p'/31 'e'/32 'c'/33 't'/34 'e'/35 'd'/36 Tile{ HalfReuse: ' '/10 AsIs: e.Expected#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[13], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], StrFromToken, "StrFromToken" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'd' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
  refalrts::reinit_svar( context[9], context[12] );
  refalrts::reinit_char( context[10], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[26], context[36] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[25] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[9], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_EL_Destroy_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_EL_Destroy_0/4 (/7 e.Line#2/5 )/8 >/1
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
  // closed e.Line#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.Line#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult EL_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EL_Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 ]/9 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::adt_left( context[5], context[6], ErrorList, context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::adt_pointers(context[7], context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.FileName#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & EL_Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 ]/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # EL_NoErrors/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_EL_NoErrors<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & EL_Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ErrorList, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & ErrorList/8 (/12 e.FileName#1/10 )/13 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_EL_Destroy_0/7 } Tile{ AsIs: e.Errors#1/5 } Tile{ HalfReuse: >/9 HalfReuse: # EL_HasErrors/1 ]] }
  refalrts::update_name( context[4], Map, "Map" );
  refalrts::reinit_name( context[7], lambda_EL_Destroy_0, "lambda_EL_Destroy_0" );
  refalrts::reinit_close_call( context[9] );
  refalrts::reinit_ident( context[1], & ident_EL_HasErrors<int>::name );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
