// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::RefalFunction& WriteLine_0_0;
#define WriteLine_alias WriteLine_0_0
#define WriteLine_str "WriteLine#0:0"

extern refalrts::RefalFunction& Exit_0_0;
#define Exit_alias Exit_0_0
#define Exit_str "Exit#0:0"

extern refalrts::RefalFunction& StrFromInt_0_0;
#define StrFromInt_alias StrFromInt_0_0
#define StrFromInt_str "StrFromInt#0:0"

extern refalrts::RefalFunction& ErrorAt_0_0;
#define ErrorAt_alias ErrorAt_0_0

extern refalrts::RefalFunction& WarningAt_0_0;
#define WarningAt_alias WarningAt_0_0


static refalrts::FnResult func_ErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ErrorAt/4 (/7 s.Number#1/9 e.File#1/5 )/8 e.Text#1/2 >/1
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
  // closed e.Text#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.File#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.File#1/5 } ':'/10 </11 Tile{ HalfReuse: & StrFromInt/7 AsIs: s.Number#1/9 } >/12":ERROR:"/13 Tile{ HalfReuse: ' '/8 AsIs: e.Text#1/2 AsIs: >/1 } </15 & Exit/16 1/17 >/18 Tile{ ]] }
  if( ! refalrts::alloc_char( context[10], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], ":ERROR:", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & Exit_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[17], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteLine_alias );
  refalrts::reinit_name( context[7], & StrFromInt_alias );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[18] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_ErrorAt(func_ErrorAt, "ErrorAt#0:0");
refalrts::RefalFunction& ErrorAt_0_0 = descr_ErrorAt;

static refalrts::FnResult func_WarningAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & WarningAt/4 (/7 s.Number#1/9 e.File#1/5 )/8 e.Message#1/2 >/1
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
  // closed e.Message#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.File#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.File#1/5 } ':'/10 </11 Tile{ HalfReuse: & StrFromInt/7 AsIs: s.Number#1/9 } >/12":WARNING:"/13 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[10], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], ":WARNING:", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteLine_alias );
  refalrts::reinit_name( context[7], & StrFromInt_alias );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_WarningAt(func_WarningAt, "WarningAt#0:0");
refalrts::RefalFunction& WarningAt_0_0 = descr_WarningAt;


//End of file
