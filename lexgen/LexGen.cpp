// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Generate_SelfUpdate(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Generate_ToDifferent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FormatError(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Help(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main_CheckArgs(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #FILE
template <typename SREFAL_PARAM_INT>
struct ident_FILE {
  static const char *name() {
    return "FILE";
  }
};

// identifier #From
template <typename SREFAL_PARAM_INT>
struct ident_From {
  static const char *name() {
    return "From";
  }
};

// identifier #NoRequiredParam
template <typename SREFAL_PARAM_INT>
struct ident_NoRequiredParam {
  static const char *name() {
    return "NoRequiredParam";
  }
};

// identifier #Required
template <typename SREFAL_PARAM_INT>
struct ident_Required {
  static const char *name() {
    return "Required";
  }
};

// identifier #To
template <typename SREFAL_PARAM_INT>
struct ident_To {
  static const char *name() {
    return "To";
  }
};

// identifier #UnknownLongOption
template <typename SREFAL_PARAM_INT>
struct ident_UnknownLongOption {
  static const char *name() {
    return "UnknownLongOption";
  }
};

// identifier #UnknownShortOption
template <typename SREFAL_PARAM_INT>
struct ident_UnknownShortOption {
  static const char *name() {
    return "UnknownShortOption";
  }
};

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Go/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ArgList, "ArgList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main, "Main" );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Main/4 (/7 e.ProgName#1/5 )/8 e.Options#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.ProgName#1 as range 5
  // closed e.Options#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.ProgName#1/5 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_CheckArgs/4 HalfReuse: </7 } & GetOpt/9 (/10 (/11 # From/12 # Required/13 'f'/14 (/15 'f'/16 'r'/17 'o'/18 'm'/19 )/20 )/21 (/22 # To/23 # Required/24 'o'/25 (/26 't'/27 'o'/28 )/29 )/30 Tile{ AsIs: )/8 AsIs: e.Options#1/2 AsIs: >/1 } >/31 Tile{ ]] }
  if( ! refalrts::alloc_name( context[9], GetOpt, "GetOpt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_From<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[23], & ident_To<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[24], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main_CheckArgs, "Main_CheckArgs" );
  refalrts::reinit_open_call( context[7] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[10], context[8] );
  refalrts::link_brackets( context[22], context[30] );
  refalrts::link_brackets( context[26], context[29] );
  refalrts::link_brackets( context[11], context[21] );
  refalrts::link_brackets( context[15], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[9], context[30] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Main_CheckArgs_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Main_CheckArgs_0/4 s.PosFrom#1/14 (/12 e.From#1/10 )/13 (/7 # To/9 s.PosTo#2/15 e.To#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_To<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.From#1 as range 10
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    // closed e.To#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.PosFrom#1/14 {REMOVED TILE}  (/7 # To/9 s.PosTo#2/15 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Generate_ToDifferent/4 } Tile{ AsIs: (/12 AsIs: e.From#1/10 AsIs: )/13 } Tile{ AsIs: e.To#2/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], Generate_ToDifferent, "Generate_ToDifferent" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Main_CheckArgs_0/4 s.PosFrom#1/5 (/8 e.From#1/6 )/9 e.Other#2/2 >/1
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
  // closed e.From#1 as range 6
  // closed e.Other#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.From#1/6 {REMOVED TILE}  e.Other#2/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 AsIs: s.PosFrom#1/5 HalfReuse: 'e'/8 } Tile{ HalfReuse: 'x'/9 } 'p'/10 'e'/11 'c'/12 't'/13 'e'/14 'd'/15 ' '/16 'a'/17 'r'/18 'g'/19 'u'/20 'm'/21 'e'/22 'n'/23 't'/24 ' '/25 '-'/26 '-'/27 't'/28 'o'/29 >/30 </31 & Help/32 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[10], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], Help, "Help" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FormatError, "FormatError" );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::reinit_char( context[9], 'x' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[32] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Main_CheckArgs_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Main_CheckArgs_1/4 (/7 s.Pos#2/9 # NoRequiredParam/10 e.Opt#2/5 )/8 >/1
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
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  & ident_NoRequiredParam<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Opt#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Pos#2/9 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #9/7 } Tile{ HalfReuse: 'o'/10 } 'p'/11 't'/12 'i'/13 'o'/14 'n'/15 ' '/16 Tile{ AsIs: e.Opt#2/5 } ' '/17 'e'/18 'x'/19 'p'/20 'e'/21 'c'/22 't'/23 's'/24 ' '/25 'p'/26 'a'/27 'r'/28 'a'/29 'm'/30 'e'/31 't'/32 'e'/33 Tile{ HalfReuse: 'r'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], FormatError, "FormatError" );
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_char( context[10], 'o' );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[33] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Main_CheckArgs_1/4 (/7 s.Pos#2/9 # UnknownShortOption/10 s.Option#2/11 )/8 >/1
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
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  & ident_UnknownShortOption<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Pos#2/9 {REMOVED TILE}  s.Option#2/11 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #9/7 } Tile{ HalfReuse: 'u'/10 } 'n'/12 'k'/13 'n'/14 'o'/15 'w'/16 'n'/17 ' '/18 'o'/19 'p'/20 't'/21 'i'/22 'o'/23 'n'/24 ' '/25 '-'/26 Tile{ HalfReuse: s.Option2 #11/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[12], 'n' ) )
      return refalrts::cNoMemory;
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
    if( ! refalrts::alloc_char( context[19], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '-' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], FormatError, "FormatError" );
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_svar( context[8], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[26] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Main_CheckArgs_1/4 (/7 s.Pos#2/9 # UnknownLongOption/10 e.Option#2/5 )/8 >/1
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
  context[10] = refalrts::ident_left(  & ident_UnknownLongOption<int>::name, context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Option#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Pos#2/9 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #9/7 } Tile{ HalfReuse: 'u'/10 } Tile{ HalfReuse: 'n'/8 } 'k'/11 'n'/12 'o'/13 'w'/14 'n'/15 ' '/16 'o'/17 'p'/18 't'/19 'i'/20 'o'/21 'n'/22 ' '/23 '-'/24 '-'/25 Tile{ AsIs: e.Option#2/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[11], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'w' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], '-' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FormatError, "FormatError" );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_char( context[10], 'u' );
  refalrts::reinit_char( context[8], 'n' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[25] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Main_CheckArgs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Main_CheckArgs/4 (/7 )/8 (/11 # FILE/13 s.Pos#1/14 e.FileName#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_FILE<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.FileName#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 )/8 (/11 # FILE/13 s.Pos#1/14 {REMOVED TILE}  )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Generate_SelfUpdate/4 } Tile{ AsIs: e.FileName#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], Generate_SelfUpdate, "Generate_SelfUpdate" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Main_CheckArgs/4 (/7 )/8 e.Begin#1/9 (/13 # From/15 s.PosFrom#1/16 e.From#1/11 )/14 e.End#1/17 >/1
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
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[2];
      context[18] = context[3];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[17], context[18] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  & ident_From<int>::name, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.End#1 as range 2
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.From#1 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Begin#1/9 } Tile{ AsIs: e.End#1/17 } Tile{ HalfReuse: </14 } Tile{ HalfReuse: & CreateClosure /13 HalfReuse: & lambda_Main_CheckArgs_0/15 AsIs: s.PosFrom#1/16 } Tile{ AsIs: (/7 } Tile{ AsIs: e.From#1/11 } Tile{ AsIs: )/8 } >/19 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_call( context[19] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], Fetch, "Fetch" );
      refalrts::reinit_open_call( context[14] );
      refalrts::reinit_name( context[13], refalrts::create_closure, "refalrts::create_closure" );
      refalrts::reinit_name( context[15], lambda_Main_CheckArgs_0, "lambda_Main_CheckArgs_0" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[19] );
      refalrts::push_stack( context[14] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[13], context[16] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Main_CheckArgs/4 (/7 )/8 e.Begin#1/9 (/13 # To/15 s.Pos#1/16 e.To#1/11 )/14 e.End#1/17 >/1
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
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[2];
      context[18] = context[3];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[17], context[18] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  & ident_To<int>::name, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.End#1 as range 2
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.To#1 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  e.Begin#1/9 {REMOVED TILE}  s.Pos#1/16 e.To#1/11 {REMOVED TILE}  e.End#1/17 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos1 #16/7 HalfReuse: 'e'/8 } Tile{ HalfReuse: 'x'/13 HalfReuse: 'p'/15 } Tile{ HalfReuse: 't'/14 } 'e'/19 'c'/20 't'/21 'e'/22 'd'/23 ' '/24 'a'/25 'r'/26 'g'/27 'u'/28 'm'/29 'e'/30 'n'/31 't'/32 ' '/33 '-'/34 '-'/35 'f'/36 'r'/37 'o'/38 'm'/39 >/40 </41 & Help/42 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[19], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[20], 'c' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[21], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[22], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[23], 'd' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[24], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[25], 'a' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[26], 'r' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[27], 'g' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[28], 'u' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[29], 'm' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[30], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[31], 'n' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[32], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[33], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[34], '-' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[35], '-' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[36], 'f' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[37], 'r' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[38], 'o' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[39], 'm' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[42], Help, "Help" ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], FormatError, "FormatError" );
      refalrts::reinit_svar( context[7], context[16] );
      refalrts::reinit_char( context[8], 'e' );
      refalrts::reinit_char( context[13], 'x' );
      refalrts::reinit_char( context[15], 'p' );
      refalrts::reinit_char( context[14], 't' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[41] );
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[42] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[8], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Main_CheckArgs/4 (/7 )/8 e.AnyOther#1/2 >/1
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
    // closed e.AnyOther#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.AnyOther#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 HalfReuse: 'o'/8 } 'm'/9 'm'/10 'a'/11 'n'/12 'd'/13 ' '/14 'l'/15 'i'/16 'n'/17 'e'/18 ' '/19 'e'/20 'r'/21 'r'/22 'o'/23 'r'/24 ':'/25 ' '/26 'u'/27 'n'/28 'r'/29 'e'/30 'c'/31 'o'/32 'g'/33 'n'/34 'i'/35 'z'/36 'e'/37 'd'/38 ' '/39 'c'/40 'o'/41 'm'/42 'm'/43 'a'/44 'n'/45 'd'/46 ' '/47 'l'/48 'i'/49 'n'/50 'e'/51 >/52 </53 & Help/54 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[9], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'z' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[52] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[53] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[54], Help, "Help" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], WriteLine, "WriteLine" );
    refalrts::reinit_char( context[7], 'C' );
    refalrts::reinit_char( context[8], 'o' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[53] );
    refalrts::push_stack( context[52] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[54] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Main_CheckArgs/4 (/7 e.Errors#1/5 )/8 e.AnyOther#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Errors#1 as range 5
  // closed e.AnyOther#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.AnyOther#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_Main_CheckArgs_1/7 AsIs: e.Errors#1/5 HalfReuse: >/8 } </9 & Help/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Help, "Help" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Map, "Map" );
  refalrts::reinit_name( context[7], lambda_Main_CheckArgs_1, "lambda_Main_CheckArgs_1" );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FormatError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FormatError/4 s.Pos#1/5 e.Message#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } 'C'/6 'o'/7 'm'/8 'm'/9 'a'/10 'n'/11 'd'/12 ' '/13 'l'/14 'i'/15 'n'/16 'e'/17 ' '/18 'a'/19 'r'/20 'g'/21 'u'/22 'm'/23 'e'/24 'n'/25 't'/26 ' '/27 </28 & StrFromInt/29 Tile{ AsIs: s.Pos#1/5 } >/30 ':'/31 ' '/32 Tile{ AsIs: e.Message#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[6], 'C' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], ' ' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[28] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[32] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[29] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Help(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 198 elems
  refalrts::Iter context[198];
  refalrts::zeros( context, 198 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Help/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'U'/1 } 's'/5 'e'/6 ':'/7 >/8 </9 & WriteLine/10 ' '/11 ' '/12 ' '/13 ' '/14 'l'/15 'e'/16 'x'/17 'g'/18 'e'/19 'n'/20 ' '/21 'f'/22 'i'/23 'l'/24 'e'/25 'n'/26 'a'/27 'm'/28 'e'/29 '.'/30 's'/31 'r'/32 'e'/33 'f'/34 ' '/35 '-'/36 ' '/37 'f'/38 'o'/39 'r'/40 ' '/41 'r'/42 'e'/43 'w'/44 'r'/45 'i'/46 't'/47 't'/48 'i'/49 'n'/50 'g'/51 ' '/52 'f'/53 'i'/54 'l'/55 'e'/56 '\n'/57 >/58 </59 & WriteLine/60 ' '/61 ' '/62 ' '/63 ' '/64 'l'/65 'e'/66 'x'/67 'g'/68 'e'/69 'n'/70 ' '/71 '-'/72 '-'/73 'f'/74 'r'/75 'o'/76 'm'/77 '='/78 'f'/79 'i'/80 'l'/81 'e'/82 '1'/83 '.'/84 's'/85 'r'/86 'e'/87 'f'/88 ' '/89 '-'/90 '-'/91 't'/92 'o'/93 '='/94 'f'/95 'i'/96 'l'/97 'e'/98 '2'/99 '.'/100 's'/101 'r'/102 'e'/103 'f'/104 ' '/105 '-'/106 ' '/107 'f'/108 'o'/109 'r'/110 ' '/111 'w'/112 'r'/113 'i'/114 't'/115 't'/116 'i'/117 'n'/118 'g'/119 ' '/120 't'/121 'o'/122 ' '/123 'o'/124 't'/125 'h'/126 'e'/127 'r'/128 ' '/129 't'/130 'a'/131 'r'/132 'g'/133 'e'/134 't'/135 '\n'/136 >/137 </138 & WriteLine/139 ' '/140 ' '/141 ' '/142 ' '/143 '-'/144 '-'/145 'f'/146 'r'/147 'o'/148 'm'/149 ','/150 ' '/151 '-'/152 'f'/153 ' '/154 '-'/155 ' '/156 's'/157 'o'/158 'u'/159 'r'/160 'c'/161 'e'/162 ' '/163 'f'/164 'i'/165 'l'/166 'e'/167 >/168 </169 & WriteLine/170 ' '/171 ' '/172 ' '/173 ' '/174 '-'/175 '-'/176 't'/177 'o'/178 ','/179 ' '/180 '-'/181 'o'/182 ' '/183 '-'/184 ' '/185 't'/186 'a'/187 'r'/188 'g'/189 'e'/190 't'/191 ' '/192 'f'/193 'i'/194 'l'/195 'e'/196 >/197 Tile{ ]] }
  if( ! refalrts::alloc_char( context[5], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'w' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], '\n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[58] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[59] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[60], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[71], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[72], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[73], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[74], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[75], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[76], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[77], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[78], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[79], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[80], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[81], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[82], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[83], '1' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[84], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[85], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[86], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[87], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[88], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[89], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[90], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[91], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[92], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[93], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[94], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[95], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[96], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[97], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[98], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[99], '2' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[100], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[101], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[102], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[103], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[104], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[105], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[106], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[107], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[108], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[109], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[110], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[111], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[112], 'w' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[113], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[114], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[115], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[116], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[117], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[118], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[119], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[120], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[121], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[122], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[123], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[124], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[125], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[126], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[127], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[128], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[129], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[130], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[131], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[132], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[133], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[134], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[135], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[136], '\n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[137] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[138] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[139], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[140], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[141], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[142], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[143], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[144], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[145], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[146], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[147], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[148], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[149], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[150], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[151], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[152], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[153], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[154], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[155], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[156], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[157], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[158], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[159], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[160], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[161], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[162], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[163], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[164], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[165], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[166], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[167], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[168] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[169] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[170], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[171], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[172], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[173], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[174], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[175], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[176], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[177], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[178], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[179], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[180], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[181], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[182], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[183], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[184], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[185], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[186], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[187], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[188], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[189], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[190], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[191], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[192], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[193], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[194], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[195], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[196], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[197] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::reinit_char( context[1], 'U' );
  refalrts::push_stack( context[197] );
  refalrts::push_stack( context[169] );
  refalrts::push_stack( context[168] );
  refalrts::push_stack( context[138] );
  refalrts::push_stack( context[137] );
  refalrts::push_stack( context[59] );
  refalrts::push_stack( context[58] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[197] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
