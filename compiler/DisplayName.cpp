// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #CreateClosure
template <typename SREFAL_PARAM_INT>
struct ident_CreateClosure {
  static const char *name() {
    return "CreateClosure";
  }
};

// identifier #SUF
template <typename SREFAL_PARAM_INT>
struct ident_SUF {
  static const char *name() {
    return "SUF";
  }
};

// identifier #VAR
template <typename SREFAL_PARAM_INT>
struct ident_VAR {
  static const char *name() {
    return "VAR";
  }
};

extern refalrts::RefalFunction& StrFromInt;
extern refalrts::RefalFunction& EscapeString;
extern refalrts::RefalFunction& DisplayName;
namespace /* unnamed */ {
extern refalrts::RefalFunction& DisplayNameSuf;
} // unnamed namespace

extern refalrts::RefalFunction& DisplayCName;
extern refalrts::RefalFunction& CName;
namespace /* unnamed */ {
extern refalrts::RefalFunction& CNameSuf;
} // unnamed namespace


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DisplayName {
    static refalrts::RefalFunction *functions[] = {
      & DisplayNameSuf,
      & StrFromInt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_SUF<int>::name,
      & ident_VAR<int>::name,
      & ident_CreateClosure<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"ate_closure@", 12}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 15, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & DisplayName/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // # CreateClosure
      // </0 & DisplayName/4 # CreateClosure/5 >/1
      {refalrts::icSave, 0, 11, 2},
      {refalrts::icIdentLeftSave, 5, 2, 11},
      {refalrts::icEmpty, 0, 0, 11},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '@'/0 HalfReuse: 'c'/4 HalfReuse: 'r'/5 HalfReuse: 'e'/1 }"ate_closure@"/6 Tile{ ]] }
      {refalrts::icAllocString, 0, 0, 6},
      {refalrts::icReinitChar, 0, '@', 0},
      {refalrts::icReinitChar, 0, 'c', 4},
      {refalrts::icReinitChar, 0, 'r', 5},
      {refalrts::icReinitChar, 0, 'e', 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // # VAR s.idx e.idx s.idx
      // </0 & DisplayName/4 # VAR/5 s.Mode#1/6 e.Index#1/2 s.Depth#1/7 >/1
      {refalrts::icSave, 0, 11, 2},
      {refalrts::icIdentLeftSave, 5, 1, 11},
      {refalrts::icsVarLeft, 0, 6, 11},
      {refalrts::icsVarRight, 0, 7, 11},
      // closed e.Index#1 as range 11(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: s.Mode1 #6/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/11(2) } '#'/8 Tile{ HalfReuse: </5 } & StrFromInt/9 Tile{ AsIs: s.Depth#1/7 AsIs: >/1 } ':'/10 Tile{ ]] }
      {refalrts::icAllocChar, 0, '#', 8},
      {refalrts::icAllocFunc, 0, 1, 9},
      {refalrts::icAllocChar, 0, ':', 10},
      {refalrts::icReinitSVar, 0, 6, 0},
      {refalrts::icReinitChar, 0, '.', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 7, 1, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // e.idx
      // </0 & DisplayName/4 e.Name#1/5 # SUF/7 e.Suffix#1/2 >/1
      {refalrts::icSave, 0, 11, 2},
      {refalrts::icEPrepare, 0, 5, 11},
      {refalrts::icEStart, 0, 5, 11},
      {refalrts::icSave, 0, 13, 11},
      {refalrts::icIdentLeftSave, 7, 0, 13},
      // closed e.Suffix#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} & DisplayName/4 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: </0 } Tile{ HalfReuse: & DisplayNameSuf/7 AsIs: e.Suffix#1/13(2) AsIs: >/1 ]] }
      {refalrts::icReinitFunc, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 7},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & DisplayName/4 e.Name#1/2 >/1
      // closed e.Name#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DisplayName/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DisplayName

} // unnamed namespace

refalrts::RASLFunction descr_DisplayName(
  "DisplayName",
  scope_DisplayName::raa,
  scope_DisplayName::functions,
  scope_DisplayName::idents,
  scope_DisplayName::numbers,
  scope_DisplayName::strings
);
refalrts::RefalFunction& DisplayName = descr_DisplayName;

#else
static refalrts::FnResult func_DisplayName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & DisplayName/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // # CreateClosure
    // </0 & DisplayName/4 # CreateClosure/5 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[5] = refalrts::ident_left(  & ident_CreateClosure<int>::name, context[11], context[12] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '@'/0 HalfReuse: 'c'/4 HalfReuse: 'r'/5 HalfReuse: 'e'/1 }"ate_closure@"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "ate_closure@", 12 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '@' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'r' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # VAR s.idx e.idx s.idx
    // </0 & DisplayName/4 # VAR/5 s.Mode#1/6 e.Index#1/2 s.Depth#1/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[5] = refalrts::ident_left(  & ident_VAR<int>::name, context[11], context[12] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_right( context[7], context[11], context[12] ) )
      continue;
    // closed e.Index#1 as range 11(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Mode1 #6/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/11(2) } '#'/8 Tile{ HalfReuse: </5 } & StrFromInt/9 Tile{ AsIs: s.Depth#1/7 AsIs: >/1 } ':'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[8], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], & StrFromInt ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[0], context[6] );
    refalrts::reinit_char( context[4], '.' );
    refalrts::reinit_open_call( context[5] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & DisplayName/4 e.Name#1/5 # SUF/7 e.Suffix#1/2 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[13] = context[11];
      context[14] = context[12];
      context[7] = refalrts::ident_left(  & ident_SUF<int>::name, context[13], context[14] );
      if( ! context[7] )
        continue;
      // closed e.Suffix#1 as range 13(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} & DisplayName/4 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: </0 } Tile{ HalfReuse: & DisplayNameSuf/7 AsIs: e.Suffix#1/13(2) AsIs: >/1 ]] }
      refalrts::reinit_name( context[7], & DisplayNameSuf );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[11], context[12] ) );
  } while ( 0 );

  // e.idx
  // </0 & DisplayName/4 e.Name#1/2 >/1
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DisplayName/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_DisplayName(func_DisplayName, "DisplayName");
refalrts::RefalFunction& DisplayName = descr_DisplayName;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DisplayNameSuf {
    static refalrts::RefalFunction *functions[] = {
      & StrFromInt,
      & DisplayNameSuf
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & DisplayNameSuf/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // '\\' s.idx e.idx
      // </0 & DisplayNameSuf/4 '\\'/5 s.Num#1/6 e.Suffix#1/2 >/1
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\\'), 10},
      {refalrts::icsVarLeft, 0, 6, 10},
      // closed e.Suffix#1 as range 10(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\\'/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Num#1/6 } >/7 </8 & DisplayNameSuf/9 Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icAllocFunc, 0, 1, 9},
      {refalrts::icReinitChar, 0, '\\', 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 10},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // s.idx s.idx e.idx
      // </0 & DisplayNameSuf/4 s.Tag#1/5 s.Num#1/6 e.Suffix#1/2 >/1
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icsVarLeft, 0, 5, 10},
      {refalrts::icsVarLeft, 0, 6, 10},
      // closed e.Suffix#1 as range 10(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Tag#1/5 } </7 & StrFromInt/8 Tile{ AsIs: s.Num#1/6 } >/9 Tile{ AsIs: </0 AsIs: & DisplayNameSuf/4 } Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icAllocFunc, 0, 0, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 10},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      //
      // </0 & DisplayNameSuf/4 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DisplayNameSuf/4 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DisplayNameSuf

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_DisplayNameSuf(
  "DisplayNameSuf",
  scope_DisplayNameSuf::raa,
  scope_DisplayNameSuf::functions,
  scope_DisplayNameSuf::idents,
  scope_DisplayNameSuf::numbers,
  scope_DisplayNameSuf::strings
);
refalrts::RefalFunction& DisplayNameSuf = descr_DisplayNameSuf;

} // unnamed namespace

#else
static refalrts::FnResult func_DisplayNameSuf(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & DisplayNameSuf/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // '\\' s.idx e.idx
    // </0 & DisplayNameSuf/4 '\\'/5 s.Num#1/6 e.Suffix#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[5] = refalrts::char_left( '\\', context[10], context[11] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[10], context[11] ) )
      continue;
    // closed e.Suffix#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\\'/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Num#1/6 } >/7 </8 & DisplayNameSuf/9 Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], & DisplayNameSuf ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\\' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & StrFromInt );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx s.idx e.idx
    // </0 & DisplayNameSuf/4 s.Tag#1/5 s.Num#1/6 e.Suffix#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::svar_left( context[5], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[10], context[11] ) )
      continue;
    // closed e.Suffix#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Tag#1/5 } </7 & StrFromInt/8 Tile{ AsIs: s.Num#1/6 } >/9 Tile{ AsIs: </0 AsIs: & DisplayNameSuf/4 } Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], & StrFromInt ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  //
  // </0 & DisplayNameSuf/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DisplayNameSuf/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_DisplayNameSuf(func_DisplayNameSuf, "DisplayNameSuf");
refalrts::RefalFunction& DisplayNameSuf = descr_DisplayNameSuf;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DisplayCName {
    static refalrts::RefalFunction *functions[] = {
      & DisplayName,
      & EscapeString
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 8, 0, 0},
      // </0 & DisplayCName/4 e.Name#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Name#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & EscapeString/6 Tile{ AsIs: </0 Reuse: & DisplayName/4 AsIs: e.Name#1/2 AsIs: >/1 } >/7 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 1, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DisplayCName

} // unnamed namespace

refalrts::RASLFunction descr_DisplayCName(
  "DisplayCName",
  scope_DisplayCName::raa,
  scope_DisplayCName::functions,
  scope_DisplayCName::idents,
  scope_DisplayCName::numbers,
  scope_DisplayCName::strings
);
refalrts::RefalFunction& DisplayCName = descr_DisplayCName;

#else
static refalrts::FnResult func_DisplayCName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & DisplayCName/4 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & EscapeString/6 Tile{ AsIs: </0 Reuse: & DisplayName/4 AsIs: e.Name#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & EscapeString ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & DisplayName );
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

refalrts::RefalFunction descr_DisplayCName(func_DisplayCName, "DisplayCName");
refalrts::RefalFunction& DisplayCName = descr_DisplayCName;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CName {
    static refalrts::RefalFunction *functions[] = {
      & CName,
      & CNameSuf,
      & StrFromInt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_SUF<int>::name,
      & ident_VAR<int>::name,
      & ident_CreateClosure<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"gen_", 4},
      {"lrts::create_closure", 20}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 6, 0, 0},
      {refalrts::icIssueMemory, 17, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & CName/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // # CreateClosure
      // </0 & CName/4 # CreateClosure/5 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icIdentLeftSave, 5, 2, 13},
      {refalrts::icEmpty, 0, 0, 13},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 'a'/1 }"lrts::create_closure"/6 Tile{ ]] }
      {refalrts::icAllocString, 0, 1, 6},
      {refalrts::icReinitChar, 0, 'r', 0},
      {refalrts::icReinitChar, 0, 'e', 4},
      {refalrts::icReinitChar, 0, 'f', 5},
      {refalrts::icReinitChar, 0, 'a', 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // # VAR s.idx e.idx s.idx
      // </0 & CName/4 # VAR/5 s.Mode#1/6 e.Index#1/2 s.Depth#1/7 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icIdentLeftSave, 5, 1, 13},
      {refalrts::icsVarLeft, 0, 6, 13},
      {refalrts::icsVarRight, 0, 7, 13},
      // closed e.Index#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } 'v'/8 Tile{ HalfReuse: 'a'/0 HalfReuse: 'r'/4 HalfReuse: '_'/5 AsIs: s.Mode#1/6 } Tile{ AsIs: e.Index#1/13(2) } '_'/9 </10 & StrFromInt/11 Tile{ AsIs: s.Depth#1/7 AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, 'v', 8},
      {refalrts::icAllocChar, 0, '_', 9},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 2, 11},
      {refalrts::icReinitChar, 0, 'a', 0},
      {refalrts::icReinitChar, 0, 'r', 4},
      {refalrts::icReinitChar, 0, '_', 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icSetRes, 0, 0, 7},
      {refalrts::icSpliceTile, 9, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 0, 6, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // e.idx
      // </0 & CName/4 e.Name#1/5 # SUF/7 e.Suffix#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icEPrepare, 0, 5, 13},
      {refalrts::icEStart, 0, 5, 13},
      {refalrts::icSave, 0, 15, 13},
      {refalrts::icIdentLeftSave, 7, 0, 15},
      // closed e.Suffix#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }"gen_"/8 Tile{ AsIs: </0 AsIs: & CName/4 AsIs: e.Name#1/5 HalfReuse: >/7 } '_'/10 </11 & CNameSuf/12 Tile{ AsIs: e.Suffix#1/15(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 8},
      {refalrts::icAllocChar, 0, '_', 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 1, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceTile, 10, 12, 0},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // e.idx
      // </0 & CName/4 e.Name-B#1/5 '-'/7 e.Name-E#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icEPrepare, 0, 5, 13},
      {refalrts::icEStart, 0, 5, 13},
      {refalrts::icSave, 0, 15, 13},
      {refalrts::icCharLeftSave, 7, static_cast<unsigned char>('-'), 15},
      // closed e.Name-E#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name-B#1/5 } Tile{ HalfReuse: '_'/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & CName/7 AsIs: e.Name-E#1/15(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '_', 4},
      {refalrts::icReinitFunc, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 7},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 4, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & CName/4 e.Name#1/2 >/1
      // closed e.Name#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CName/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CName

} // unnamed namespace

refalrts::RASLFunction descr_CName(
  "CName",
  scope_CName::raa,
  scope_CName::functions,
  scope_CName::idents,
  scope_CName::numbers,
  scope_CName::strings
);
refalrts::RefalFunction& CName = descr_CName;

#else
static refalrts::FnResult func_CName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & CName/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // # CreateClosure
    // </0 & CName/4 # CreateClosure/5 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[5] = refalrts::ident_left(  & ident_CreateClosure<int>::name, context[13], context[14] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 'a'/1 }"lrts::create_closure"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "lrts::create_closure", 20 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # VAR s.idx e.idx s.idx
    // </0 & CName/4 # VAR/5 s.Mode#1/6 e.Index#1/2 s.Depth#1/7 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[5] = refalrts::ident_left(  & ident_VAR<int>::name, context[13], context[14] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_right( context[7], context[13], context[14] ) )
      continue;
    // closed e.Index#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } 'v'/8 Tile{ HalfReuse: 'a'/0 HalfReuse: 'r'/4 HalfReuse: '_'/5 AsIs: s.Mode#1/6 } Tile{ AsIs: e.Index#1/13(2) } '_'/9 </10 & StrFromInt/11 Tile{ AsIs: s.Depth#1/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[8], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], & StrFromInt ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'a' );
    refalrts::reinit_char( context[4], 'r' );
    refalrts::reinit_char( context[5], '_' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & CName/4 e.Name#1/5 # SUF/7 e.Suffix#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[13];
      context[16] = context[14];
      context[7] = refalrts::ident_left(  & ident_SUF<int>::name, context[15], context[16] );
      if( ! context[7] )
        continue;
      // closed e.Suffix#1 as range 15(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }"gen_"/8 Tile{ AsIs: </0 AsIs: & CName/4 AsIs: e.Name#1/5 HalfReuse: >/7 } '_'/10 </11 & CNameSuf/12 Tile{ AsIs: e.Suffix#1/15(2) } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( context[8], context[9], "gen_", 4 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[10], '_' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[12], & CNameSuf ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[7] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[11] );
      refalrts::push_stack( context[7] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[10], context[12] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[13], context[14] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & CName/4 e.Name-B#1/5 '-'/7 e.Name-E#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[13];
      context[16] = context[14];
      context[7] = refalrts::char_left( '-', context[15], context[16] );
      if( ! context[7] )
        continue;
      // closed e.Name-E#1 as range 15(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name-B#1/5 } Tile{ HalfReuse: '_'/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & CName/7 AsIs: e.Name-E#1/15(2) AsIs: >/1 ]] }
      refalrts::reinit_char( context[4], '_' );
      refalrts::reinit_name( context[7], & CName );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[13], context[14] ) );
  } while ( 0 );

  // e.idx
  // </0 & CName/4 e.Name#1/2 >/1
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CName/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_CName(func_CName, "CName");
refalrts::RefalFunction& CName = descr_CName;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CNameSuf {
    static refalrts::RefalFunction *functions[] = {
      & StrFromInt,
      & CNameSuf
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & CNameSuf/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // '$' s.idx e.idx
      // </0 & CNameSuf/4 '$'/5 s.Num#1/6 e.Suffix#1/2 >/1
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('$'), 10},
      {refalrts::icsVarLeft, 0, 6, 10},
      // closed e.Suffix#1 as range 10(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'S'/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Num#1/6 } >/7 </8 & CNameSuf/9 Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icAllocFunc, 0, 1, 9},
      {refalrts::icReinitChar, 0, 'S', 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 10},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // '\\' s.idx e.idx
      // </0 & CNameSuf/4 '\\'/5 s.Num#1/6 e.Suffix#1/2 >/1
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\\'), 10},
      {refalrts::icsVarLeft, 0, 6, 10},
      // closed e.Suffix#1 as range 10(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'L'/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Num#1/6 } >/7 </8 & CNameSuf/9 Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icAllocFunc, 0, 1, 9},
      {refalrts::icReinitChar, 0, 'L', 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 10},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      //
      // </0 & CNameSuf/4 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CNameSuf/4 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CNameSuf

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_CNameSuf(
  "CNameSuf",
  scope_CNameSuf::raa,
  scope_CNameSuf::functions,
  scope_CNameSuf::idents,
  scope_CNameSuf::numbers,
  scope_CNameSuf::strings
);
refalrts::RefalFunction& CNameSuf = descr_CNameSuf;

} // unnamed namespace

#else
static refalrts::FnResult func_CNameSuf(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & CNameSuf/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // '$' s.idx e.idx
    // </0 & CNameSuf/4 '$'/5 s.Num#1/6 e.Suffix#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[5] = refalrts::char_left( '$', context[10], context[11] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[10], context[11] ) )
      continue;
    // closed e.Suffix#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'S'/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Num#1/6 } >/7 </8 & CNameSuf/9 Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], & CNameSuf ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'S' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & StrFromInt );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\\' s.idx e.idx
    // </0 & CNameSuf/4 '\\'/5 s.Num#1/6 e.Suffix#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[5] = refalrts::char_left( '\\', context[10], context[11] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[10], context[11] ) )
      continue;
    // closed e.Suffix#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'L'/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Num#1/6 } >/7 </8 & CNameSuf/9 Tile{ AsIs: e.Suffix#1/10(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], & CNameSuf ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'L' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & StrFromInt );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  //
  // </0 & CNameSuf/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CNameSuf/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_CNameSuf(func_CNameSuf, "CNameSuf");
refalrts::RefalFunction& CNameSuf = descr_CNameSuf;

} // unnamed namespace

#endif

//End of file
