// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::RefalFunction& Div_0_0;
#define Div_alias Div_0_0
#define Div_str "Div#0:0"

extern refalrts::RefalFunction& Mod_0_0;
#define Mod_alias Mod_0_0
#define Mod_str "Mod#0:0"

extern refalrts::RefalFunction& Ord_0_0;
#define Ord_alias Ord_0_0
#define Ord_str "Ord#0:0"

extern refalrts::RefalFunction& Compare_0_0;
#define Compare_alias Compare_0_0
#define Compare_str "Compare#0:0"

extern refalrts::RefalFunction& Fetch_0_0;
#define Fetch_alias Fetch_0_0
#define Fetch_str "Fetch#0:0"

extern refalrts::RefalFunction& Map_0_0;
#define Map_alias Map_0_0
#define Map_str "Map#0:0"

extern refalrts::RefalFunction& OctDigit_1335600754_1331116615;
#define OctDigit_alias OctDigit_1335600754_1331116615

extern refalrts::RefalFunction& gen_EscapeChar_S7L1_1335600754_1331116615;
#define gen_EscapeChar_S7L1_alias gen_EscapeChar_S7L1_1335600754_1331116615

extern refalrts::RefalFunction& EscapeChar_0_0;
#define EscapeChar_alias EscapeChar_0_0

extern refalrts::RefalFunction& EscapeString_0_0;
#define EscapeString_alias EscapeString_0_0


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_OctDigit {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 7, 0, 0},
      {refalrts::icIssueMemory, 6, 0, 0},
      //FAST GEN: s.$
      //GLOBAL GEN: s.$
      // </0 & OctDigit/4 s.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // 0
      // </0 & OctDigit/4 0/5 >/1
      {refalrts::icNumTerm, 0, 0, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & OctDigit/4 0/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '0'/1 ]] }
      {refalrts::icReinitChar, 0, '0', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // 1
      // </0 & OctDigit/4 1/5 >/1
      {refalrts::icNumTerm, 0, 1, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & OctDigit/4 1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '1'/1 ]] }
      {refalrts::icReinitChar, 0, '1', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // 2
      // </0 & OctDigit/4 2/5 >/1
      {refalrts::icNumTerm, 0, 2, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & OctDigit/4 2/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '2'/1 ]] }
      {refalrts::icReinitChar, 0, '2', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // 3
      // </0 & OctDigit/4 3/5 >/1
      {refalrts::icNumTerm, 0, 3, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & OctDigit/4 3/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '3'/1 ]] }
      {refalrts::icReinitChar, 0, '3', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // 4
      // </0 & OctDigit/4 4/5 >/1
      {refalrts::icNumTerm, 0, 4, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & OctDigit/4 4/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '4'/1 ]] }
      {refalrts::icReinitChar, 0, '4', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // 5
      // </0 & OctDigit/4 5/5 >/1
      {refalrts::icNumTerm, 0, 5, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & OctDigit/4 5/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '5'/1 ]] }
      {refalrts::icReinitChar, 0, '5', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // 6
      // </0 & OctDigit/4 6/5 >/1
      {refalrts::icNumTerm, 0, 6, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & OctDigit/4 6/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '6'/1 ]] }
      {refalrts::icReinitChar, 0, '6', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // 7
      // </0 & OctDigit/4 7/5 >/1
      {refalrts::icNumTerm, 0, 7, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & OctDigit/4 7/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '7'/1 ]] }
      {refalrts::icReinitChar, 0, '7', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_OctDigit_1335600754_1331116615

} // unnamed namespace

static refalrts::RASLFunction descr_OctDigit(
  "OctDigit#1335600754:1331116615",
  scope_OctDigit::raa,
  scope_OctDigit::functions,
  scope_OctDigit::idents,
  scope_OctDigit::numbers,
  scope_OctDigit::strings
);
refalrts::RefalFunction& OctDigit_1335600754_1331116615 = descr_OctDigit;

#else
static refalrts::FnResult func_OctDigit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & OctDigit/4 s.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // 0
    // </0 & OctDigit/4 0/5 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 0/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '0'/1 ]] }
    refalrts::reinit_char( context[1], '0' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 1
    // </0 & OctDigit/4 1/5 >/1
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '1'/1 ]] }
    refalrts::reinit_char( context[1], '1' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 2
    // </0 & OctDigit/4 2/5 >/1
    if( ! refalrts::number_term( 2UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '2'/1 ]] }
    refalrts::reinit_char( context[1], '2' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 3
    // </0 & OctDigit/4 3/5 >/1
    if( ! refalrts::number_term( 3UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 3/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '3'/1 ]] }
    refalrts::reinit_char( context[1], '3' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 4
    // </0 & OctDigit/4 4/5 >/1
    if( ! refalrts::number_term( 4UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 4/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '4'/1 ]] }
    refalrts::reinit_char( context[1], '4' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 5
    // </0 & OctDigit/4 5/5 >/1
    if( ! refalrts::number_term( 5UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 5/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '5'/1 ]] }
    refalrts::reinit_char( context[1], '5' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 6
    // </0 & OctDigit/4 6/5 >/1
    if( ! refalrts::number_term( 6UL, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 6/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '6'/1 ]] }
    refalrts::reinit_char( context[1], '6' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // 7
  // </0 & OctDigit/4 7/5 >/1
  if( ! refalrts::number_term( 7UL, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & OctDigit/4 7/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '7'/1 ]] }
  refalrts::reinit_char( context[1], '7' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_OctDigit(func_OctDigit, "OctDigit#1335600754:1331116615");
refalrts::RefalFunction& OctDigit_1335600754_1331116615 = descr_OctDigit;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_EscapeChar_S7L1 {
    static refalrts::RefalFunction *functions[] = {
      & Div_alias,
      & OctDigit_alias,
      & Mod_alias
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 32, 0, 0},
      //FAST GEN: s.$ s.$ s.$
      //GLOBAL GEN: s.$ s.$ s.$
      // </0 & EscapeChar$7\1/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::icsVarLeft, 0, 7, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +50, 0, 0},
      // s.idx '<' s.idx
      // </0 & EscapeChar$7\1/4 s.Other#1/5 '<'/6 s.Code#2/7 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Other#1/5 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } '\\'/8 Tile{ AsIs: </0 Reuse: & OctDigit/4 } </9 Tile{ HalfReuse: & Div/6 AsIs: s.Code#2/7 } 64/10 >/11 >/12 </13 & OctDigit/14 </15 & Mod/16 </17 & Div/18 s.Code#2/7/19 8/20 >/21 8/22 >/23 >/24 </25 & OctDigit/26 </27 & Mod/28 s.Code#2/7/29 8/30 >/31 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, '\\', 8},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocInt, 0, 64, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 1, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 2, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icAllocFunc, 0, 0, 18},
      {refalrts::icCopySTVar, 19, 7, 0},
      {refalrts::icAllocInt, 0, 8, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
      {refalrts::icAllocInt, 0, 8, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
      {refalrts::icAllocFunc, 0, 1, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
      {refalrts::icAllocFunc, 0, 2, 28},
      {refalrts::icCopySTVar, 29, 7, 0},
      {refalrts::icAllocInt, 0, 8, 30},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icPushStack, 0, 0, 31},
      {refalrts::icPushStack, 0, 0, 27},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 10, 31, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // s.idx s.idx s.idx
      // </0 & EscapeChar$7\1/4 s.Other#1/5 s.Compare#2/6 s.Code#2/7 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EscapeChar$7\1/4 s.Other#1/5 s.Compare#2/6 s.Code#2/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Other1 #5/1 ]] }
      {refalrts::icReinitSVar, 0, 5, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_EscapeChar_S7L1_1335600754_1331116615

} // unnamed namespace

static refalrts::RASLFunction descr_gen_EscapeChar_S7L1(
  "EscapeChar$7\\1#1335600754:1331116615",
  scope_gen_EscapeChar_S7L1::raa,
  scope_gen_EscapeChar_S7L1::functions,
  scope_gen_EscapeChar_S7L1::idents,
  scope_gen_EscapeChar_S7L1::numbers,
  scope_gen_EscapeChar_S7L1::strings
);
refalrts::RefalFunction& gen_EscapeChar_S7L1_1335600754_1331116615 = descr_gen_EscapeChar_S7L1;

#else
static refalrts::FnResult func_gen_EscapeChar_S7L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: s.$ s.$ s.$
  //GLOBAL GEN: s.$ s.$ s.$
  // </0 & EscapeChar$7\1/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx '<' s.idx
    // </0 & EscapeChar$7\1/4 s.Other#1/5 '<'/6 s.Code#2/7 >/1
    if( ! refalrts::char_term( '<', context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Other#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } '\\'/8 Tile{ AsIs: </0 Reuse: & OctDigit/4 } </9 Tile{ HalfReuse: & Div/6 AsIs: s.Code#2/7 } 64/10 >/11 >/12 </13 & OctDigit/14 </15 & Mod/16 </17 & Div/18 s.Code#2/7/19 8/20 >/21 8/22 >/23 >/24 </25 & OctDigit/26 </27 & Mod/28 s.Code#2/7/29 8/30 >/31 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[8], '\\' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[10], 64UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & OctDigit_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], & Mod_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], & Div_alias ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[19], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[20], 8UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[22], 8UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], & OctDigit_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], & Mod_alias ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[30], 8UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & OctDigit_alias );
    refalrts::reinit_name( context[6], & Div_alias );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[31] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx s.idx
  // </0 & EscapeChar$7\1/4 s.Other#1/5 s.Compare#2/6 s.Code#2/7 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & EscapeChar$7\1/4 s.Other#1/5 s.Compare#2/6 s.Code#2/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Other1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_EscapeChar_S7L1(func_gen_EscapeChar_S7L1, "EscapeChar$7\\1#1335600754:1331116615");
refalrts::RefalFunction& gen_EscapeChar_S7L1_1335600754_1331116615 = descr_gen_EscapeChar_S7L1;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_EscapeChar {
    static refalrts::RefalFunction *functions[] = {
      & Ord_alias,
      & gen_EscapeChar_S7L1_alias,
      & refalrts::create_closure,
      & Compare_alias,
      & Fetch_alias
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 6, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: s.$
      //GLOBAL GEN: s.$
      // </0 & EscapeChar/4 s.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // '\n'
      // </0 & EscapeChar/4 '\n'/5 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('\n'), 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'n'/1 ]] }
      {refalrts::icUpdateChar, 0, '\\', 5},
      {refalrts::icReinitChar, 0, 'n', 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // '\t'
      // </0 & EscapeChar/4 '\t'/5 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('\t'), 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 't'/1 ]] }
      {refalrts::icUpdateChar, 0, '\\', 5},
      {refalrts::icReinitChar, 0, 't', 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // '\r'
      // </0 & EscapeChar/4 '\r'/5 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('\r'), 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'r'/1 ]] }
      {refalrts::icUpdateChar, 0, '\\', 5},
      {refalrts::icReinitChar, 0, 'r', 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // '\''
      // </0 & EscapeChar/4 '\''/5 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('\''), 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\''/1 ]] }
      {refalrts::icUpdateChar, 0, '\\', 5},
      {refalrts::icReinitChar, 0, '\'', 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // '\"'
      // </0 & EscapeChar/4 '\"'/5 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('\"'), 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\"'/1 ]] }
      {refalrts::icUpdateChar, 0, '\\', 5},
      {refalrts::icReinitChar, 0, '\"', 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // '\\'
      // </0 & EscapeChar/4 '\\'/5 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('\\'), 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: '\\'/5 HalfReuse: '\\'/1 ]] }
      {refalrts::icReinitChar, 0, '\\', 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // s.idx
      // </0 & EscapeChar/4 s.Other#1/5 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </6 & Fetch/7 </8 & Compare/9 s.Other#1/5/10 ' '/11 >/12 Tile{ AsIs: </0 Reuse: & Ord/4 AsIs: s.Other#1/5 AsIs: >/1 } </13 & @create_closure@/14 & EscapeChar$7\1/15 s.Other#1/5/16 >/17 >/18 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icAllocFunc, 0, 4, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icAllocFunc, 0, 3, 9},
      {refalrts::icCopySTVar, 10, 5, 0},
      {refalrts::icAllocChar, 0, ' ', 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 2, 14},
      {refalrts::icAllocFunc, 0, 1, 15},
      {refalrts::icCopySTVar, 16, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 13, 18, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 6, 12, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_EscapeChar_0_0

} // unnamed namespace

static refalrts::RASLFunction descr_EscapeChar(
  "EscapeChar#0:0",
  scope_EscapeChar::raa,
  scope_EscapeChar::functions,
  scope_EscapeChar::idents,
  scope_EscapeChar::numbers,
  scope_EscapeChar::strings
);
refalrts::RefalFunction& EscapeChar_0_0 = descr_EscapeChar;

#else
static refalrts::FnResult func_EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & EscapeChar/4 s.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // '\n'
    // </0 & EscapeChar/4 '\n'/5 >/1
    if( ! refalrts::char_term( '\n', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'n'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\t'
    // </0 & EscapeChar/4 '\t'/5 >/1
    if( ! refalrts::char_term( '\t', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 't'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], 't' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\r'
    // </0 & EscapeChar/4 '\r'/5 >/1
    if( ! refalrts::char_term( '\r', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'r'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\''
    // </0 & EscapeChar/4 '\''/5 >/1
    if( ! refalrts::char_term( '\'', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\''/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\"'
    // </0 & EscapeChar/4 '\"'/5 >/1
    if( ! refalrts::char_term( '\"', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\"'/1 ]] }
    refalrts::update_char( context[5], '\\' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\\'
    // </0 & EscapeChar/4 '\\'/5 >/1
    if( ! refalrts::char_term( '\\', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: '\\'/5 HalfReuse: '\\'/1 ]] }
    refalrts::reinit_char( context[1], '\\' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx
  // </0 & EscapeChar/4 s.Other#1/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Fetch/7 </8 & Compare/9 s.Other#1/5/10 ' '/11 >/12 Tile{ AsIs: </0 Reuse: & Ord/4 AsIs: s.Other#1/5 AsIs: >/1 } </13 & @create_closure@/14 & EscapeChar$7\1/15 s.Other#1/5/16 >/17 >/18 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & Fetch_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], & Compare_alias ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & gen_EscapeChar_S7L1_alias ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[16], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Ord_alias );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[18] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_EscapeChar(func_EscapeChar, "EscapeChar#0:0");
refalrts::RefalFunction& EscapeChar_0_0 = descr_EscapeChar;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_EscapeString {
    static refalrts::RefalFunction *functions[] = {
      & EscapeChar_alias,
      & Map_alias
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & EscapeString/4 e.String#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.String#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & EscapeChar/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_EscapeString_0_0

} // unnamed namespace

static refalrts::RASLFunction descr_EscapeString(
  "EscapeString#0:0",
  scope_EscapeString::raa,
  scope_EscapeString::functions,
  scope_EscapeString::idents,
  scope_EscapeString::numbers,
  scope_EscapeString::strings
);
refalrts::RefalFunction& EscapeString_0_0 = descr_EscapeString;

#else
static refalrts::FnResult func_EscapeString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & EscapeString/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & EscapeChar/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map_alias );
  refalrts::update_name( context[4], & EscapeChar_alias );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_EscapeString(func_EscapeString, "EscapeString#0:0");
refalrts::RefalFunction& EscapeString_0_0 = descr_EscapeString;

#endif

//End of file
