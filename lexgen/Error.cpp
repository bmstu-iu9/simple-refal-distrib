// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::RefalFunction& WriteLine;
extern refalrts::RefalFunction& Exit;
extern refalrts::RefalFunction& StrFromInt;
extern refalrts::RefalFunction& ErrorAt;
extern refalrts::RefalFunction& WarningAt;

#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ErrorAt {
    static refalrts::RefalFunction *functions[] = {
      & StrFromInt,
      & WriteLine,
      & Exit
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {":ERROR:", 7}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 19, 0, 0},
      // </0 & ErrorAt/4 (/7 s.Number#1/9 e.File#1/5 )/8 e.Text#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Text#1 as range 2
      {refalrts::icsVarLeft, 0, 9, 5},
      // closed e.File#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.File#1/5 } ':'/10 </11 Tile{ HalfReuse: & StrFromInt/7 AsIs: s.Number#1/9 } >/12":ERROR:"/13 Tile{ HalfReuse: ' '/8 AsIs: e.Text#1/2 AsIs: >/1 } </15 & Exit/16 1/17 >/18 Tile{ ]] }
      {refalrts::icAllocChar, 0, ':', 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocString, 0, 0, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 2, 16},
      {refalrts::icAllocInt, 0, 1, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 7},
      {refalrts::icReinitChar, 0, ' ', 8},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 15, 18, 0},
      {refalrts::icSpliceTile, 8, 1, 0},
      {refalrts::icSpliceTile, 12, 14, 0},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ErrorAt

} // unnamed namespace

refalrts::RASLFunction descr_ErrorAt(
  "ErrorAt",
  scope_ErrorAt::raa,
  scope_ErrorAt::functions,
  scope_ErrorAt::idents,
  scope_ErrorAt::numbers,
  scope_ErrorAt::strings
);
refalrts::RefalFunction& ErrorAt = descr_ErrorAt;

#else
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
  if( ! refalrts::alloc_name( context[16], & Exit ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[17], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteLine );
  refalrts::reinit_name( context[7], & StrFromInt );
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

refalrts::RefalFunction descr_ErrorAt(func_ErrorAt, "ErrorAt");
refalrts::RefalFunction& ErrorAt = descr_ErrorAt;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_WarningAt {
    static refalrts::RefalFunction *functions[] = {
      & StrFromInt,
      & WriteLine
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {":WARNING:", 9}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 15, 0, 0},
      // </0 & WarningAt/4 (/7 s.Number#1/9 e.File#1/5 )/8 e.Message#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Message#1 as range 2
      {refalrts::icsVarLeft, 0, 9, 5},
      // closed e.File#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.File#1/5 } ':'/10 </11 Tile{ HalfReuse: & StrFromInt/7 AsIs: s.Number#1/9 } >/12":WARNING:"/13 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, ':', 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocString, 0, 0, 13},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 7},
      {refalrts::icReinitChar, 0, ' ', 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 12, 14, 0},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_WarningAt

} // unnamed namespace

refalrts::RASLFunction descr_WarningAt(
  "WarningAt",
  scope_WarningAt::raa,
  scope_WarningAt::functions,
  scope_WarningAt::idents,
  scope_WarningAt::numbers,
  scope_WarningAt::strings
);
refalrts::RefalFunction& WarningAt = descr_WarningAt;

#else
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
  refalrts::update_name( context[4], & WriteLine );
  refalrts::reinit_name( context[7], & StrFromInt );
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

refalrts::RefalFunction descr_WarningAt(func_WarningAt, "WarningAt");
refalrts::RefalFunction& WarningAt = descr_WarningAt;

#endif

//End of file
