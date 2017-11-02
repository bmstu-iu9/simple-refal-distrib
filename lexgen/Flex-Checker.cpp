// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #Subexpr
template <typename SREFAL_PARAM_INT>
struct ident_Subexpr {
  static const char *name() {
    return "Subexpr";
  }
};

extern refalrts::RefalFunction& Map;
extern refalrts::RefalFunction& ErrorAt;
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Flex_Check_L1;
} // unnamed namespace

extern refalrts::RefalFunction& Flex_Check;
namespace /* unnamed */ {
extern refalrts::RefalFunction& CheckUniqueNames;
} // unnamed namespace


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Flex_Check_L1 {
    static const char *filename = "Flex-Checker.cpp";
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Subexpr<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 14, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & Flex-Check\1/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +13, 0, 0},
      // ( # Subexpr t.idx e.idx t.idx )
      // </0 & Flex-Check\1/4 (/5 # Subexpr/9 t.Pos#2/10 e.Name#2/7 t.Regexp#2/12 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 0, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::ictVarRightSave, 0, 12, 7},
      // closed e.Name#2 as range 7
      //DEBUG: t.Pos#2: 10
      //DEBUG: t.Regexp#2: 12
      //DEBUG: e.Name#2: 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Flex-Check\1/4 (/5 {REMOVED TILE} {REMOVED TILE} t.Regexp#2/12 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: t.Pos#2/10 } Tile{ AsIs: e.Name#2/7 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 9, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 9, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx
      // </0 & Flex-Check\1/4 t.OtherItem#2/5 >/1
      //DEBUG: t.OtherItem#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Flex-Check\1/4 t.OtherItem#2/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Flex_Check_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Flex_Check_L1(
  "Flex-Check\\1",
  scope_gen_Flex_Check_L1::raa,
  scope_gen_Flex_Check_L1::functions,
  scope_gen_Flex_Check_L1::idents,
  scope_gen_Flex_Check_L1::numbers,
  scope_gen_Flex_Check_L1::strings,
  scope_gen_Flex_Check_L1::filename
);
refalrts::RefalFunction& gen_Flex_Check_L1 = descr_gen_Flex_Check_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Flex_Check_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Flex-Check\1/4 t.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( # Subexpr t.idx e.idx t.idx )
    // </0 & Flex-Check\1/4 (/5 # Subexpr/9 t.Pos#2/10 e.Name#2/7 t.Regexp#2/12 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Subexpr<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_right( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    // closed e.Name#2 as range 7
    //DEBUG: t.Pos#2: 10
    //DEBUG: t.Regexp#2: 12
    //DEBUG: e.Name#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Flex-Check\1/4 (/5 {REMOVED TILE} {REMOVED TILE} t.Regexp#2/12 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: t.Pos#2/10 } Tile{ AsIs: e.Name#2/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & Flex-Check\1/4 t.OtherItem#2/5 >/1
  //DEBUG: t.OtherItem#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Flex-Check\1/4 t.OtherItem#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Flex_Check_L1(func_gen_Flex_Check_L1, "Flex-Check\\1");
refalrts::RefalFunction& gen_Flex_Check_L1 = descr_gen_Flex_Check_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Flex_Check {
    static const char *filename = "Flex-Checker.cpp";
    static refalrts::RefalFunction *functions[] = {
      & gen_Flex_Check_L1,
      & Map,
      & CheckUniqueNames
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & Flex-Check/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      //DEBUG: e.AST#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & CheckUniqueNames/6 </7 Tile{ HalfReuse: & Map/0 Reuse: & Flex-Check\1/4 AsIs: e.AST#1/2 AsIs: >/1 } >/8 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 2, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 5, 7, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Flex_Check

} // unnamed namespace

refalrts::RASLFunction descr_Flex_Check(
  "Flex-Check",
  scope_Flex_Check::raa,
  scope_Flex_Check::functions,
  scope_Flex_Check::idents,
  scope_Flex_Check::numbers,
  scope_Flex_Check::strings,
  scope_Flex_Check::filename
);
refalrts::RefalFunction& Flex_Check = descr_Flex_Check;

#else
static refalrts::FnResult func_Flex_Check(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Flex-Check/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckUniqueNames/6 </7 Tile{ HalfReuse: & Map/0 Reuse: & Flex-Check\1/4 AsIs: e.AST#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & CheckUniqueNames ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_Flex_Check_L1 );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Flex_Check(func_Flex_Check, "Flex-Check");
refalrts::RefalFunction& Flex_Check = descr_Flex_Check;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CheckUniqueNames {
    static const char *filename = "Flex-Checker.cpp";
    static refalrts::RefalFunction *functions[] = {
      & ErrorAt
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"fined subexpr name ", 19}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 31, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & CheckUniqueNames/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +32, 0, 0},
      // e.idx
      // </0 & CheckUniqueNames/4 e.Names-B#1/5 (/9 t.Pos1#1/11 e.Name#1/7 )/10 e.Names-M#1/13 (/17 t.Pos2#1/21 e.Name#1/19 )/18 e.Names-E#1/2 >/1
      {refalrts::icSave, 0, 25, 2},
      {refalrts::icEPrepare, 0, 5, 25},
      {refalrts::icEStart, 0, 5, 25},
      {refalrts::icSave, 0, 27, 25},
      {refalrts::icBracketLeftSave, 0, 7, 27},
      {refalrts::ictVarLeftSave, 0, 11, 7},
      // closed e.Name#1 as range 7
      {refalrts::icEPrepare, 0, 13, 27},
      {refalrts::icEStart, 0, 13, 27},
      {refalrts::icSave, 0, 29, 27},
      {refalrts::icBracketLeftSave, 0, 15, 29},
      {refalrts::iceRepeatRight, 19, 7, 15},
      // closed e.Names-E#1 as range 29(2)
      {refalrts::ictVarLeftSave, 0, 21, 15},
      {refalrts::icEmpty, 0, 0, 15},
      //DEBUG: e.Names-B#1: 5
      //DEBUG: t.Pos1#1: 11
      //DEBUG: e.Name#1: 7
      //DEBUG: e.Names-M#1: 13
      //DEBUG: e.Names-E#1: 2
      //DEBUG: t.Pos2#1: 21
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.Names-B#1/5 {REMOVED TILE} t.Pos1#1/11 e.Name#1/7 {REMOVED TILE} e.Names-M#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Names-E#1/29(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos2#1/21 } Tile{ HalfReuse: 'R'/17 } Tile{ HalfReuse: 'e'/10 } Tile{ HalfReuse: 'd'/18 } Tile{ HalfReuse: 'e'/9 }"fined subexpr name "/23 Tile{ AsIs: e.Name#1/19 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 23},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'R', 17},
      {refalrts::icReinitChar, 0, 'e', 10},
      {refalrts::icReinitChar, 0, 'd', 18},
      {refalrts::icReinitChar, 0, 'e', 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 19},
      {refalrts::icSpliceTile, 23, 24, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceTile, 21, 22, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // e.idx
      // </0 & CheckUniqueNames/4 e.Names#1/2 >/1
      // closed e.Names#1 as range 2
      //DEBUG: e.Names#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CheckUniqueNames/4 e.Names#1/2 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CheckUniqueNames

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_CheckUniqueNames(
  "CheckUniqueNames",
  scope_CheckUniqueNames::raa,
  scope_CheckUniqueNames::functions,
  scope_CheckUniqueNames::idents,
  scope_CheckUniqueNames::numbers,
  scope_CheckUniqueNames::strings,
  scope_CheckUniqueNames::filename
);
refalrts::RefalFunction& CheckUniqueNames = descr_CheckUniqueNames;

} // unnamed namespace

#else
static refalrts::FnResult func_CheckUniqueNames(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & CheckUniqueNames/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx
    // </0 & CheckUniqueNames/4 e.Names-B#1/5 (/9 t.Pos1#1/11 e.Name#1/7 )/10 e.Names-M#1/13 (/17 t.Pos2#1/21 e.Name#1/19 )/18 e.Names-E#1/2 >/1
    context[25] = context[2];
    context[26] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[27], context[28] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      // closed e.Name#1 as range 7
      context[13] = 0;
      context[14] = 0;
      refalrts::start_e_loop();
      do {
        context[29] = context[27];
        context[30] = context[28];
        context[15] = 0;
        context[16] = 0;
        context[17] = refalrts::brackets_left( context[15], context[16], context[29], context[30] );
        if( ! context[17] )
          continue;
        refalrts::bracket_pointers(context[17], context[18]);
        if( ! refalrts::repeated_evar_right( context[19], context[20], context[7], context[8], context[15], context[16] ) )
          continue;
        // closed e.Names-E#1 as range 29(2)
        context[22] = refalrts::tvar_left( context[21], context[15], context[16] );
        if( ! context[22] )
          continue;
        if( ! refalrts::empty_seq( context[15], context[16] ) )
          continue;
        //DEBUG: e.Names-B#1: 5
        //DEBUG: t.Pos1#1: 11
        //DEBUG: e.Name#1: 7
        //DEBUG: e.Names-M#1: 13
        //DEBUG: e.Names-E#1: 2
        //DEBUG: t.Pos2#1: 21

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} e.Names-B#1/5 {REMOVED TILE} t.Pos1#1/11 e.Name#1/7 {REMOVED TILE} e.Names-M#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Names-E#1/29(2) {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos2#1/21 } Tile{ HalfReuse: 'R'/17 } Tile{ HalfReuse: 'e'/10 } Tile{ HalfReuse: 'd'/18 } Tile{ HalfReuse: 'e'/9 }"fined subexpr name "/23 Tile{ AsIs: e.Name#1/19 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[23], context[24], "fined subexpr name ", 19 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], & ErrorAt );
        refalrts::reinit_char( context[17], 'R' );
        refalrts::reinit_char( context[10], 'e' );
        refalrts::reinit_char( context[18], 'd' );
        refalrts::reinit_char( context[9], 'e' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[10], context[10] );
        res = refalrts::splice_evar( res, context[17], context[17] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[13], context[14], context[27], context[28] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[25], context[26] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & CheckUniqueNames/4 e.Names#1/2 >/1
  // closed e.Names#1 as range 2
  //DEBUG: e.Names#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CheckUniqueNames/4 e.Names#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_CheckUniqueNames(func_CheckUniqueNames, "CheckUniqueNames");
refalrts::RefalFunction& CheckUniqueNames = descr_CheckUniqueNames;

} // unnamed namespace

#endif

//End of file
