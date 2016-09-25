// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

// identifier #TypeBracket
template <typename SREFAL_PARAM_INT>
struct ident_TypeBracket {
  static const char *name() {
    return "TypeBracket";
  }
};

extern refalrts::RefalFunction& FOpen;
extern refalrts::RefalFunction& FClose;
extern refalrts::RefalFunction& FReadLine;
extern refalrts::RefalFunction& FWriteLine;
extern refalrts::RefalFunction& Add;
extern refalrts::RefalFunction& Sub;
extern refalrts::RefalFunction& IntFromStr;
extern refalrts::RefalFunction& Arg;
extern refalrts::RefalFunction& SymbCompare;
extern refalrts::RefalFunction& SymbType;
extern refalrts::RefalFunction& Apply;
extern refalrts::RefalFunction& Map;
extern refalrts::RefalFunction& Reduce;
extern refalrts::RefalFunction& Fetch;
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Y_L1;
} // unnamed namespace

extern refalrts::RefalFunction& Y;
extern refalrts::RefalFunction& MapReduce;
namespace /* unnamed */ {
extern refalrts::RefalFunction& DoMapReduce;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& MapReduce_AddScanned;
} // unnamed namespace

extern refalrts::RefalFunction& UnBracket;
extern refalrts::RefalFunction& DelAccumulator;
extern refalrts::RefalFunction& LoadFile;
namespace /* unnamed */ {
extern refalrts::RefalFunction& DoLoadFile;
} // unnamed namespace

extern refalrts::RefalFunction& SaveFile;
namespace /* unnamed */ {
extern refalrts::RefalFunction& WriteBracketLine;
} // unnamed namespace

extern refalrts::RefalFunction& Inc;
extern refalrts::RefalFunction& Dec;
namespace /* unnamed */ {
extern refalrts::RefalFunction& FastIntFromStr_Guard;
} // unnamed namespace

extern refalrts::RefalFunction& FastIntFromStr;
extern refalrts::RefalFunction& ArgList;
namespace /* unnamed */ {
extern refalrts::RefalFunction& DoArgList;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& SwDoArgList;
} // unnamed namespace

extern refalrts::RefalFunction& Compare;
namespace /* unnamed */ {
extern refalrts::RefalFunction& Lexicon;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Lexicon_Aux;
} // unnamed namespace

extern refalrts::RefalFunction& Compare_T;
namespace /* unnamed */ {
extern refalrts::RefalFunction& Lexicon_T;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Lexicon_T_Aux;
} // unnamed namespace

extern refalrts::RefalFunction& Type;
extern refalrts::RefalFunction& Type_T;
extern refalrts::RefalFunction& Trim;
extern refalrts::RefalFunction& Trim_L;
extern refalrts::RefalFunction& Trim_R;
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Seq_S2L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Seq_S3L1;
} // unnamed namespace

extern refalrts::RefalFunction& Seq;
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Sort_S2L1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Sort_S2L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Sort_S2L2;
} // unnamed namespace

extern refalrts::RefalFunction& Sort;
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Min_S1L1;
} // unnamed namespace

extern refalrts::RefalFunction& Min;
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Max_S1L1;
} // unnamed namespace

extern refalrts::RefalFunction& Max;

#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Apply {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      //FAST GEN: t.$ e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & Apply/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +8, 0, 0},
      // s.idx e.idx
      // </0 & Apply/4 s.Fn#1/5 e.Argument#1/2 >/1
      {refalrts::icsVarTerm, 0, 7, 5},
      // closed e.Argument#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/2 AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( t.idx e.idx ) e.idx
      // </0 & Apply/4 (/5 t.Closure#1/9 e.Bounded#1/7 )/6 e.Argument#1/2 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      // closed e.Argument#1 as range 2
      {refalrts::ictVarLeftSave, 0, 9, 7},
      // closed e.Bounded#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure#1/9 } Tile{ AsIs: e.Bounded#1/7 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Apply

} // unnamed namespace

refalrts::RASLFunction descr_Apply(
  "Apply",
  scope_Apply::raa,
  scope_Apply::functions,
  scope_Apply::idents,
  scope_Apply::numbers,
  scope_Apply::strings
);
refalrts::RefalFunction& Apply = descr_Apply;

#else
static refalrts::FnResult func_Apply(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Apply/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // s.idx e.idx
    // </0 & Apply/4 s.Fn#1/5 e.Argument#1/2 >/1
    if( ! refalrts::svar_term( context[7], context[5] ) )
      continue;
    // closed e.Argument#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( t.idx e.idx ) e.idx
  // </0 & Apply/4 (/5 t.Closure#1/9 e.Bounded#1/7 )/6 e.Argument#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Bounded#1 as range 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure#1/9 } Tile{ AsIs: e.Bounded#1/7 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Apply(func_Apply, "Apply");
refalrts::RefalFunction& Apply = descr_Apply;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Map {
    static refalrts::RefalFunction *functions[] = {
      & Apply,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 16, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & Map/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +16, 0, 0},
      // t.idx t.idx e.idx
      // </0 & Map/4 t.Fn#1/5 t.Next#1/7 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::ictVarLeftSave, 0, 7, 14},
      // closed e.Tail#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/7 } >/9 </10 & Map/11 t.Fn#1/5/12 Tile{ AsIs: e.Tail#1/14(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 1, 11},
      {refalrts::icCopyEVar, 12, 5, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 14},
      {refalrts::icSpliceTile, 9, 13, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx
      // </0 & Map/4 t.Fn#1/5 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Map/4 t.Fn#1/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Map

} // unnamed namespace

refalrts::RASLFunction descr_Map(
  "Map",
  scope_Map::raa,
  scope_Map::functions,
  scope_Map::idents,
  scope_Map::numbers,
  scope_Map::strings
);
refalrts::RefalFunction& Map = descr_Map;

#else
static refalrts::FnResult func_Map(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Map/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // t.idx t.idx e.idx
    // </0 & Map/4 t.Fn#1/5 t.Next#1/7 e.Tail#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[14], context[15] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/7 } >/9 </10 & Map/11 t.Fn#1/5/12 Tile{ AsIs: e.Tail#1/14(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], & Map ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[12], context[13], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Apply );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & Map/4 t.Fn#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Map/4 t.Fn#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Map(func_Map, "Map");
refalrts::RefalFunction& Map = descr_Map;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Reduce {
    static refalrts::RefalFunction *functions[] = {
      & Apply,
      & Reduce
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: t.$ t.$ e.$
      // </0 & Reduce/4 t.idx#0/5 t.idxV#0/7 e.idxVV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      // closed e.idxVV#0 as range 2
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // t.idx t.idx t.idx e.idx
      // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 t.Next#1/9 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 16, 2},
      {refalrts::ictVarLeftSave, 0, 9, 16},
      // closed e.Tail#1 as range 16(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </11 & Reduce/12 t.Fn#1/5/13 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/16(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 1, 12},
      {refalrts::icCopyEVar, 13, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 16},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 0, 10, 0},
      {refalrts::icSpliceTile, 11, 14, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx t.idx
      // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Reduce/4 t.Fn#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Reduce

} // unnamed namespace

refalrts::RASLFunction descr_Reduce(
  "Reduce",
  scope_Reduce::raa,
  scope_Reduce::functions,
  scope_Reduce::idents,
  scope_Reduce::numbers,
  scope_Reduce::strings
);
refalrts::RefalFunction& Reduce = descr_Reduce;

#else
static refalrts::FnResult func_Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ t.$ e.$
  // </0 & Reduce/4 t.idx#0/5 t.idxV#0/7 e.idxVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVV#0 as range 2
  do {
    // t.idx t.idx t.idx e.idx
    // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 t.Next#1/9 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[16], context[17] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 16(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </11 & Reduce/12 t.Fn#1/5/13 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/16(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & Reduce ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[13], context[14], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Apply );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx
  // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Reduce/4 t.Fn#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Reduce(func_Reduce, "Reduce");
refalrts::RefalFunction& Reduce = descr_Reduce;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Fetch {
    static refalrts::RefalFunction *functions[] = {
      & Apply
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & Fetch/4 e.Argument#1/2 t.Function#1/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarRightSave, 0, 5, 2},
      // closed e.Argument#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function#1/5 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Fetch

} // unnamed namespace

refalrts::RASLFunction descr_Fetch(
  "Fetch",
  scope_Fetch::raa,
  scope_Fetch::functions,
  scope_Fetch::idents,
  scope_Fetch::numbers,
  scope_Fetch::strings
);
refalrts::RefalFunction& Fetch = descr_Fetch;

#else
static refalrts::FnResult func_Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch/4 e.Argument#1/2 t.Function#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function#1/5 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], & Apply );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Fetch(func_Fetch, "Fetch");
refalrts::RefalFunction& Fetch = descr_Fetch;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Y_L1 {
    static refalrts::RefalFunction *functions[] = {
      & Y
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & Y\1/4 s.Y-Func#1/5 e.Arg#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.Arg#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: </4 AsIs: s.Y-Func#1/5 } </6 & Y/7 s.Y-Func#1/5/8 >/9 >/10 Tile{ AsIs: e.Arg#2/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icAllocFunc, 0, 0, 7},
      {refalrts::icCopySTVar, 8, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 6, 10, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Y_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Y_L1(
  "Y\\1",
  scope_gen_Y_L1::raa,
  scope_gen_Y_L1::functions,
  scope_gen_Y_L1::idents,
  scope_gen_Y_L1::numbers,
  scope_gen_Y_L1::strings
);
refalrts::RefalFunction& gen_Y_L1 = descr_gen_Y_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Y_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Y\1/4 s.Y-Func#1/5 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Arg#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: </4 AsIs: s.Y-Func#1/5 } </6 & Y/7 s.Y-Func#1/5/8 >/9 >/10 Tile{ AsIs: e.Arg#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & Y ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[8], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Y_L1(func_gen_Y_L1, "Y\\1");
refalrts::RefalFunction& gen_Y_L1 = descr_gen_Y_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Y {
    static refalrts::RefalFunction *functions[] = {
      & gen_Y_L1,
      & refalrts::create_closure
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & Y/4 s.Y-Func#1/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Y\1/4 AsIs: s.Y-Func#1/5 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Y

} // unnamed namespace

refalrts::RASLFunction descr_Y(
  "Y",
  scope_Y::raa,
  scope_Y::functions,
  scope_Y::idents,
  scope_Y::numbers,
  scope_Y::strings
);
refalrts::RefalFunction& Y = descr_Y;

#else
static refalrts::FnResult func_Y(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Y/4 s.Y-Func#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Y\1/4 AsIs: s.Y-Func#1/5 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & refalrts::create_closure );
  refalrts::update_name( context[4], & gen_Y_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Y(func_Y, "Y");
refalrts::RefalFunction& Y = descr_Y;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_MapReduce {
    static refalrts::RefalFunction *functions[] = {
      & DoMapReduce
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & MapReduce/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      // closed e.Tail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapReduce/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 } (/9 )/10 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_MapReduce

} // unnamed namespace

refalrts::RASLFunction descr_MapReduce(
  "MapReduce",
  scope_MapReduce::raa,
  scope_MapReduce::functions,
  scope_MapReduce::idents,
  scope_MapReduce::numbers,
  scope_MapReduce::strings
);
refalrts::RefalFunction& MapReduce = descr_MapReduce;

#else
static refalrts::FnResult func_MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapReduce/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapReduce/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 } (/9 )/10 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & DoMapReduce );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_MapReduce(func_MapReduce, "MapReduce");
refalrts::RefalFunction& MapReduce = descr_MapReduce;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DoMapReduce {
    static refalrts::RefalFunction *functions[] = {
      & Apply,
      & MapReduce_AddScanned
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 25, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: t.$ t.$ ( e.$ ) e.$
      // </0 & DoMapReduce/4 t.idx#0/5 t.idxV#0/7 (/11 e.idxVVB#0/9 )/12 e.idxVVT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.idxVVB#0 as range 9
      // closed e.idxVVT#0 as range 2
      {refalrts::icOnFailGoTo, +26, 0, 0},
      // t.idx t.idx ( e.idx ) t.idx e.idx
      // </0 & DoMapReduce/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 t.Next#1/13 e.Tail#1/2 >/1
      // closed e.Scanned#1 as range 9
      {refalrts::icSave, 0, 23, 2},
      {refalrts::ictVarLeftSave, 0, 13, 23},
      // closed e.Tail#1 as range 23(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapReduce/4 AsIs: t.Fn#1/5 } </15 & MapReduce-AddScanned/16 </17 & Apply/18 t.Fn#1/5/19 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/13 } >/21 Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 } >/22 Tile{ AsIs: e.Tail#1/23(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 1, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icAllocFunc, 0, 0, 18},
      {refalrts::icCopyEVar, 19, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 23},
      {refalrts::icSpliceTile, 22, 22, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 21, 21, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icSpliceTile, 15, 20, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx t.idx ( e.idx )
      // </0 & DoMapReduce/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 >/1
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Scanned#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DoMapReduce/4 t.Fn#1/5 {REMOVED TILE} (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DoMapReduce

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_DoMapReduce(
  "DoMapReduce",
  scope_DoMapReduce::raa,
  scope_DoMapReduce::functions,
  scope_DoMapReduce::idents,
  scope_DoMapReduce::numbers,
  scope_DoMapReduce::strings
);
refalrts::RefalFunction& DoMapReduce = descr_DoMapReduce;

} // unnamed namespace

#else
static refalrts::FnResult func_DoMapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ t.$ ( e.$ ) e.$
  // </0 & DoMapReduce/4 t.idx#0/5 t.idxV#0/7 (/11 e.idxVVB#0/9 )/12 e.idxVVT#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVVB#0 as range 9
  // closed e.idxVVT#0 as range 2
  do {
    // t.idx t.idx ( e.idx ) t.idx e.idx
    // </0 & DoMapReduce/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 t.Next#1/13 e.Tail#1/2 >/1
    // closed e.Scanned#1 as range 9
    context[23] = context[2];
    context[24] = context[3];
    context[14] = refalrts::tvar_left( context[13], context[23], context[24] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 23(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapReduce/4 AsIs: t.Fn#1/5 } </15 & MapReduce-AddScanned/16 </17 & Apply/18 t.Fn#1/5/19 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/13 } >/21 Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 } >/22 Tile{ AsIs: e.Tail#1/23(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], & MapReduce_AddScanned ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], & Apply ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx ( e.idx )
  // </0 & DoMapReduce/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoMapReduce/4 t.Fn#1/5 {REMOVED TILE} (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_DoMapReduce(func_DoMapReduce, "DoMapReduce");
refalrts::RefalFunction& DoMapReduce = descr_DoMapReduce;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_MapReduce_AddScanned {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & MapReduce-AddScanned/4 t.Acc#1/9 e.StepScanned#1/2 (/7 e.Scanned#1/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      // closed e.Scanned#1 as range 5
      {refalrts::ictVarLeftSave, 0, 9, 2},
      // closed e.StepScanned#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & MapReduce-AddScanned/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/5 } Tile{ AsIs: e.StepScanned#1/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_MapReduce_AddScanned

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_MapReduce_AddScanned(
  "MapReduce-AddScanned",
  scope_MapReduce_AddScanned::raa,
  scope_MapReduce_AddScanned::functions,
  scope_MapReduce_AddScanned::idents,
  scope_MapReduce_AddScanned::numbers,
  scope_MapReduce_AddScanned::strings
);
refalrts::RefalFunction& MapReduce_AddScanned = descr_MapReduce_AddScanned;

} // unnamed namespace

#else
static refalrts::FnResult func_MapReduce_AddScanned(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapReduce-AddScanned/4 t.Acc#1/9 e.StepScanned#1/2 (/7 e.Scanned#1/5 )/8 >/1
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
  // closed e.Scanned#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & MapReduce-AddScanned/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/5 } Tile{ AsIs: e.StepScanned#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_MapReduce_AddScanned(func_MapReduce_AddScanned, "MapReduce-AddScanned");
refalrts::RefalFunction& MapReduce_AddScanned = descr_MapReduce_AddScanned;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_UnBracket {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & UnBracket/4 (/7 e.Expr#1/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Expr#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & UnBracket/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/5 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_UnBracket

} // unnamed namespace

refalrts::RASLFunction descr_UnBracket(
  "UnBracket",
  scope_UnBracket::raa,
  scope_UnBracket::functions,
  scope_UnBracket::idents,
  scope_UnBracket::numbers,
  scope_UnBracket::strings
);
refalrts::RefalFunction& UnBracket = descr_UnBracket;

#else
static refalrts::FnResult func_UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & UnBracket/4 (/7 e.Expr#1/5 )/8 >/1
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
  // closed e.Expr#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & UnBracket/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_UnBracket(func_UnBracket, "UnBracket");
refalrts::RefalFunction& UnBracket = descr_UnBracket;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DelAccumulator {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & DelAccumulator/4 t.Acc#1/5 e.Tail#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.Tail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DelAccumulator/4 t.Acc#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DelAccumulator

} // unnamed namespace

refalrts::RASLFunction descr_DelAccumulator(
  "DelAccumulator",
  scope_DelAccumulator::raa,
  scope_DelAccumulator::functions,
  scope_DelAccumulator::idents,
  scope_DelAccumulator::numbers,
  scope_DelAccumulator::strings
);
refalrts::RefalFunction& DelAccumulator = descr_DelAccumulator;

#else
static refalrts::FnResult func_DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & DelAccumulator/4 t.Acc#1/5 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DelAccumulator/4 t.Acc#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_DelAccumulator(func_DelAccumulator, "DelAccumulator");
refalrts::RefalFunction& DelAccumulator = descr_DelAccumulator;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_LoadFile {
    static refalrts::RefalFunction *functions[] = {
      & DoLoadFile,
      & FOpen,
      & FReadLine
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      // </0 & LoadFile/4 e.FileName#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.FileName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoLoadFile/4 } </5 & FReadLine/6 </7 & FOpen/8 'r'/9 Tile{ AsIs: e.FileName#1/2 } >/10 >/11 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 2, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icAllocFunc, 0, 1, 8},
      {refalrts::icAllocChar, 0, 'r', 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 5, 9, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_LoadFile

} // unnamed namespace

refalrts::RASLFunction descr_LoadFile(
  "LoadFile",
  scope_LoadFile::raa,
  scope_LoadFile::functions,
  scope_LoadFile::idents,
  scope_LoadFile::numbers,
  scope_LoadFile::strings
);
refalrts::RefalFunction& LoadFile = descr_LoadFile;

#else
static refalrts::FnResult func_LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & LoadFile/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoLoadFile/4 } </5 & FReadLine/6 </7 & FOpen/8 'r'/9 Tile{ AsIs: e.FileName#1/2 } >/10 >/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & FReadLine ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], & FOpen ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & DoLoadFile );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_LoadFile(func_LoadFile, "LoadFile");
refalrts::RefalFunction& LoadFile = descr_LoadFile;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DoLoadFile {
    static refalrts::RefalFunction *functions[] = {
      & FReadLine,
      & DoLoadFile,
      & FClose
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 14, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & DoLoadFile/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // t.idx 0
      // </0 & DoLoadFile/4 t.File#1/5 0/7 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icNumLeftSave, 7, 0, 12},
      {refalrts::icEmpty, 0, 0, 12},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FClose/4 AsIs: t.File#1/5 HalfReuse: >/7 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // t.idx e.idx 0
      // </0 & DoLoadFile/4 t.File#1/5 e.Line#1/2 0/7 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icNumRightSave, 7, 0, 12},
      // closed e.Line#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/8 Tile{ AsIs: e.Line#1/12(2) } Tile{ HalfReuse: )/7 } Tile{ AsIs: </0 Reuse: & FClose/4 AsIs: t.File#1/5 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 7, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 0, 6, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 12},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx e.idx
      // </0 & DoLoadFile/4 t.File#1/5 e.Line#1/2 >/1
      // closed e.Line#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/7 Tile{ AsIs: e.Line#1/2 } )/8 </9 & DoLoadFile/10 Tile{ AsIs: </0 Reuse: & FReadLine/4 AsIs: t.File#1/5 } >/11 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 1, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceTile, 0, 6, 0},
      {refalrts::icSpliceTile, 8, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DoLoadFile

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_DoLoadFile(
  "DoLoadFile",
  scope_DoLoadFile::raa,
  scope_DoLoadFile::functions,
  scope_DoLoadFile::idents,
  scope_DoLoadFile::numbers,
  scope_DoLoadFile::strings
);
refalrts::RefalFunction& DoLoadFile = descr_DoLoadFile;

} // unnamed namespace

#else
static refalrts::FnResult func_DoLoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & DoLoadFile/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // t.idx 0
    // </0 & DoLoadFile/4 t.File#1/5 0/7 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[7] = refalrts::number_left( 0UL, context[12], context[13] );
    if( ! context[7] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FClose/4 AsIs: t.File#1/5 HalfReuse: >/7 } Tile{ ]] }
    refalrts::update_name( context[4], & FClose );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx e.idx 0
    // </0 & DoLoadFile/4 t.File#1/5 e.Line#1/2 0/7 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[7] = refalrts::number_right( 0UL, context[12], context[13] );
    if( ! context[7] )
      continue;
    // closed e.Line#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/8 Tile{ AsIs: e.Line#1/12(2) } Tile{ HalfReuse: )/7 } Tile{ AsIs: </0 Reuse: & FClose/4 AsIs: t.File#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[7] );
    refalrts::update_name( context[4], & FClose );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & DoLoadFile/4 t.File#1/5 e.Line#1/2 >/1
  // closed e.Line#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/7 Tile{ AsIs: e.Line#1/2 } )/8 </9 & DoLoadFile/10 Tile{ AsIs: </0 Reuse: & FReadLine/4 AsIs: t.File#1/5 } >/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & DoLoadFile ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & FReadLine );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_DoLoadFile(func_DoLoadFile, "DoLoadFile");
refalrts::RefalFunction& DoLoadFile = descr_DoLoadFile;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_SaveFile {
    static refalrts::RefalFunction *functions[] = {
      & FOpen,
      & WriteBracketLine,
      & Reduce,
      & FClose
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 15, 0, 0},
      // </0 & SaveFile/4 (/7 e.FileName#1/5 )/8 e.Lines#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.FileName#1 as range 5
      // closed e.Lines#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </9 & FClose/10 </11 & Reduce/12 & WriteBracketLine/13 Tile{ AsIs: </0 Reuse: & FOpen/4 HalfReuse: 'w'/7 AsIs: e.FileName#1/5 HalfReuse: >/8 AsIs: e.Lines#1/2 AsIs: >/1 } >/14 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 3, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 2, 12},
      {refalrts::icAllocFunc, 0, 1, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'w', 7},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 9, 13, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_SaveFile

} // unnamed namespace

refalrts::RASLFunction descr_SaveFile(
  "SaveFile",
  scope_SaveFile::raa,
  scope_SaveFile::functions,
  scope_SaveFile::idents,
  scope_SaveFile::numbers,
  scope_SaveFile::strings
);
refalrts::RefalFunction& SaveFile = descr_SaveFile;

#else
static refalrts::FnResult func_SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & SaveFile/4 (/7 e.FileName#1/5 )/8 e.Lines#1/2 >/1
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
  // closed e.FileName#1 as range 5
  // closed e.Lines#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FClose/10 </11 & Reduce/12 & WriteBracketLine/13 Tile{ AsIs: </0 Reuse: & FOpen/4 HalfReuse: 'w'/7 AsIs: e.FileName#1/5 HalfReuse: >/8 AsIs: e.Lines#1/2 AsIs: >/1 } >/14 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & FClose ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & Reduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], & WriteBracketLine ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & FOpen );
  refalrts::reinit_char( context[7], 'w' );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_SaveFile(func_SaveFile, "SaveFile");
refalrts::RefalFunction& SaveFile = descr_SaveFile;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_WriteBracketLine {
    static refalrts::RefalFunction *functions[] = {
      & FWriteLine
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & WriteBracketLine/4 t.File#1/9 (/7 e.Line#1/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      // closed e.Line#1 as range 5
      {refalrts::ictVarLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FWriteLine/4 AsIs: t.File#1/9 } Tile{ AsIs: e.Line#1/5 } Tile{ AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 10},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_WriteBracketLine

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_WriteBracketLine(
  "WriteBracketLine",
  scope_WriteBracketLine::raa,
  scope_WriteBracketLine::functions,
  scope_WriteBracketLine::idents,
  scope_WriteBracketLine::numbers,
  scope_WriteBracketLine::strings
);
refalrts::RefalFunction& WriteBracketLine = descr_WriteBracketLine;

} // unnamed namespace

#else
static refalrts::FnResult func_WriteBracketLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & WriteBracketLine/4 t.File#1/9 (/7 e.Line#1/5 )/8 >/1
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
  // closed e.Line#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FWriteLine/4 AsIs: t.File#1/9 } Tile{ AsIs: e.Line#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], & FWriteLine );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[10], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_WriteBracketLine(func_WriteBracketLine, "WriteBracketLine");
refalrts::RefalFunction& WriteBracketLine = descr_WriteBracketLine;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Inc {
    static refalrts::RefalFunction *functions[] = {
      & Add
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & Inc/4 s.Num#1/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitInt, 0, 1, 1},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Inc

} // unnamed namespace

refalrts::RASLFunction descr_Inc(
  "Inc",
  scope_Inc::raa,
  scope_Inc::functions,
  scope_Inc::idents,
  scope_Inc::numbers,
  scope_Inc::strings
);
refalrts::RefalFunction& Inc = descr_Inc;

#else
static refalrts::FnResult func_Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Inc/4 s.Num#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Add );
  refalrts::reinit_number( context[1], 1UL );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Inc(func_Inc, "Inc");
refalrts::RefalFunction& Inc = descr_Inc;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Dec {
    static refalrts::RefalFunction *functions[] = {
      & Sub
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & Dec/4 s.Num#1/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitInt, 0, 1, 1},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Dec

} // unnamed namespace

refalrts::RASLFunction descr_Dec(
  "Dec",
  scope_Dec::raa,
  scope_Dec::functions,
  scope_Dec::idents,
  scope_Dec::numbers,
  scope_Dec::strings
);
refalrts::RefalFunction& Dec = descr_Dec;

#else
static refalrts::FnResult func_Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Dec/4 s.Num#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Sub );
  refalrts::reinit_number( context[1], 1UL );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Dec(func_Dec, "Dec");
refalrts::RefalFunction& Dec = descr_Dec;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FastIntFromStr_Guard {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Success<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & FastIntFromStr-Guard/4 # Success/5 s.Number#1/6 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icIdentLeftSave, 5, 0, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FastIntFromStr-Guard/4 # Success/5 s.Number#1/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Number1 #6/1 ]] }
      {refalrts::icReinitSVar, 0, 6, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FastIntFromStr_Guard

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_FastIntFromStr_Guard(
  "FastIntFromStr-Guard",
  scope_FastIntFromStr_Guard::raa,
  scope_FastIntFromStr_Guard::functions,
  scope_FastIntFromStr_Guard::idents,
  scope_FastIntFromStr_Guard::numbers,
  scope_FastIntFromStr_Guard::strings
);
refalrts::RefalFunction& FastIntFromStr_Guard = descr_FastIntFromStr_Guard;

} // unnamed namespace

#else
static refalrts::FnResult func_FastIntFromStr_Guard(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & FastIntFromStr-Guard/4 # Success/5 s.Number#1/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Success<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FastIntFromStr-Guard/4 # Success/5 s.Number#1/6 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Number1 #6/1 ]] }
  refalrts::reinit_svar( context[1], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_FastIntFromStr_Guard(func_FastIntFromStr_Guard, "FastIntFromStr-Guard");
refalrts::RefalFunction& FastIntFromStr_Guard = descr_FastIntFromStr_Guard;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FastIntFromStr {
    static refalrts::RefalFunction *functions[] = {
      & IntFromStr,
      & FastIntFromStr_Guard
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 8, 0, 0},
      // </0 & FastIntFromStr/4 e.Digits#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Digits#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & FastIntFromStr-Guard/6 Tile{ AsIs: </0 Reuse: & IntFromStr/4 AsIs: e.Digits#1/2 AsIs: >/1 } >/7 Tile{ ]] }
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
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FastIntFromStr

} // unnamed namespace

refalrts::RASLFunction descr_FastIntFromStr(
  "FastIntFromStr",
  scope_FastIntFromStr::raa,
  scope_FastIntFromStr::functions,
  scope_FastIntFromStr::idents,
  scope_FastIntFromStr::numbers,
  scope_FastIntFromStr::strings
);
refalrts::RefalFunction& FastIntFromStr = descr_FastIntFromStr;

#else
static refalrts::FnResult func_FastIntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & FastIntFromStr/4 e.Digits#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Digits#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & FastIntFromStr-Guard/6 Tile{ AsIs: </0 Reuse: & IntFromStr/4 AsIs: e.Digits#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & FastIntFromStr_Guard ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & IntFromStr );
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

refalrts::RefalNativeFunction descr_FastIntFromStr(func_FastIntFromStr, "FastIntFromStr");
refalrts::RefalFunction& FastIntFromStr = descr_FastIntFromStr;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ArgList {
    static refalrts::RefalFunction *functions[] = {
      & DoArgList
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & ArgList/4 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoArgList/4 HalfReuse: 0/1 } >/5 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 5},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitInt, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ArgList

} // unnamed namespace

refalrts::RASLFunction descr_ArgList(
  "ArgList",
  scope_ArgList::raa,
  scope_ArgList::functions,
  scope_ArgList::idents,
  scope_ArgList::numbers,
  scope_ArgList::strings
);
refalrts::RefalFunction& ArgList = descr_ArgList;

#else
static refalrts::FnResult func_ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & ArgList/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoArgList/4 HalfReuse: 0/1 } >/5 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & DoArgList );
  refalrts::reinit_number( context[1], 0UL );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_ArgList(func_ArgList, "ArgList");
refalrts::RefalFunction& ArgList = descr_ArgList;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DoArgList {
    static refalrts::RefalFunction *functions[] = {
      & Inc,
      & Arg,
      & SwDoArgList
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & DoArgList/4 s.Next#1/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </6 & SwDoArgList/7 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#1/5 AsIs: >/1 } </8 & Arg/9 s.Next#1/5/10 >/11 >/12 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icAllocFunc, 0, 2, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icAllocFunc, 0, 1, 9},
      {refalrts::icCopySTVar, 10, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 12, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DoArgList

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_DoArgList(
  "DoArgList",
  scope_DoArgList::raa,
  scope_DoArgList::functions,
  scope_DoArgList::idents,
  scope_DoArgList::numbers,
  scope_DoArgList::strings
);
refalrts::RefalFunction& DoArgList = descr_DoArgList;

} // unnamed namespace

#else
static refalrts::FnResult func_DoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & DoArgList/4 s.Next#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & SwDoArgList/7 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#1/5 AsIs: >/1 } </8 & Arg/9 s.Next#1/5/10 >/11 >/12 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & SwDoArgList ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], & Arg ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Inc );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_DoArgList(func_DoArgList, "DoArgList");
refalrts::RefalFunction& DoArgList = descr_DoArgList;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_SwDoArgList {
    static refalrts::RefalFunction *functions[] = {
      & DoArgList
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 10, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & SwDoArgList/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // s.idx
      // </0 & SwDoArgList/4 s.Next#1/5 >/1
      {refalrts::icSave, 0, 8, 2},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SwDoArgList/4 s.Next#1/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // s.idx e.idx
      // </0 & SwDoArgList/4 s.Next#1/5 e.Arg#1/2 >/1
      // closed e.Arg#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/6 Tile{ AsIs: e.Arg#1/2 } )/7 Tile{ AsIs: </0 Reuse: & DoArgList/4 AsIs: s.Next#1/5 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 7},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 6, 7, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 0, 5, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_SwDoArgList

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_SwDoArgList(
  "SwDoArgList",
  scope_SwDoArgList::raa,
  scope_SwDoArgList::functions,
  scope_SwDoArgList::idents,
  scope_SwDoArgList::numbers,
  scope_SwDoArgList::strings
);
refalrts::RefalFunction& SwDoArgList = descr_SwDoArgList;

} // unnamed namespace

#else
static refalrts::FnResult func_SwDoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & SwDoArgList/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // s.idx
    // </0 & SwDoArgList/4 s.Next#1/5 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SwDoArgList/4 s.Next#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx e.idx
  // </0 & SwDoArgList/4 s.Next#1/5 e.Arg#1/2 >/1
  // closed e.Arg#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/6 Tile{ AsIs: e.Arg#1/2 } )/7 Tile{ AsIs: </0 Reuse: & DoArgList/4 AsIs: s.Next#1/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & DoArgList );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_SwDoArgList(func_SwDoArgList, "SwDoArgList");
refalrts::RefalFunction& SwDoArgList = descr_SwDoArgList;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Compare {
    static refalrts::RefalFunction *functions[] = {
      & SymbCompare,
      & Lexicon
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 13, 0, 0},
      //FAST GEN: t.$ t.$
      //GLOBAL GEN: t.$ t.$
      // </0 & Compare/4 t.idx#0/5 t.idxV#0/7 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) ( e.idx )
      // </0 & Compare/4 (/5 e.Left#1/9 )/6 (/7 e.Right#1/11 )/8 >/1
      {refalrts::icBracketTerm, 0, 9, 5},
      {refalrts::icBracketTerm, 0, 11, 7},
      // closed e.Left#1 as range 9
      // closed e.Right#1 as range 11
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon/4 AsIs: (/5 AsIs: e.Left#1/9 AsIs: )/6 AsIs: (/7 AsIs: e.Right#1/11 AsIs: )/8 AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( e.idx ) s.idx
      // </0 & Compare/4 (/5 e.Left#1/9 )/6 s.Right#1/7 >/1
      {refalrts::icBracketTerm, 0, 9, 5},
      {refalrts::icsVarTerm, 0, 11, 7},
      // closed e.Left#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Compare/4 (/5 e.Left#1/9 )/6 s.Right#1/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
      {refalrts::icReinitChar, 0, '>', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // s.idx ( e.idx )
      // </0 & Compare/4 s.Left#1/5 (/7 e.Right#1/9 )/8 >/1
      {refalrts::icBracketTerm, 0, 9, 7},
      {refalrts::icsVarTerm, 0, 11, 5},
      // closed e.Right#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Compare/4 s.Left#1/5 (/7 e.Right#1/9 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
      {refalrts::icReinitChar, 0, '<', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // s.idx s.idx
      // </0 & Compare/4 s.Left#1/5 s.Right#1/7 >/1
      {refalrts::icsVarTerm, 0, 9, 5},
      {refalrts::icsVarTerm, 0, 9, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbCompare/4 AsIs: s.Left#1/5 AsIs: s.Right#1/7 AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Compare

} // unnamed namespace

refalrts::RASLFunction descr_Compare(
  "Compare",
  scope_Compare::raa,
  scope_Compare::functions,
  scope_Compare::idents,
  scope_Compare::numbers,
  scope_Compare::strings
);
refalrts::RefalFunction& Compare = descr_Compare;

#else
static refalrts::FnResult func_Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: t.$ t.$
  //GLOBAL GEN: t.$ t.$
  // </0 & Compare/4 t.idx#0/5 t.idxV#0/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( e.idx )
    // </0 & Compare/4 (/5 e.Left#1/9 )/6 (/7 e.Right#1/11 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon/4 AsIs: (/5 AsIs: e.Left#1/9 AsIs: )/6 AsIs: (/7 AsIs: e.Right#1/11 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Lexicon );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[5], context[6] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx
    // </0 & Compare/4 (/5 e.Left#1/9 )/6 s.Right#1/7 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    if( ! refalrts::svar_term( context[11], context[7] ) )
      continue;
    // closed e.Left#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Compare/4 (/5 e.Left#1/9 )/6 s.Right#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
    refalrts::reinit_char( context[1], '>' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx )
    // </0 & Compare/4 s.Left#1/5 (/7 e.Right#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_term( context[11], context[5] ) )
      continue;
    // closed e.Right#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Compare/4 s.Left#1/5 (/7 e.Right#1/9 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    refalrts::reinit_char( context[1], '<' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx
  // </0 & Compare/4 s.Left#1/5 s.Right#1/7 >/1
  if( ! refalrts::svar_term( context[9], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_term( context[9], context[7] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbCompare/4 AsIs: s.Left#1/5 AsIs: s.Right#1/7 AsIs: >/1 ]] }
  refalrts::update_name( context[4], & SymbCompare );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Compare(func_Compare, "Compare");
refalrts::RefalFunction& Compare = descr_Compare;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Lexicon {
    static refalrts::RefalFunction *functions[] = {
      & Lexicon_Aux,
      & Compare
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 24, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ )
      //GLOBAL GEN: ( e.$ ) ( e.$ )
      // </0 & Lexicon/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // ( t.idx e.idx ) ( t.idx e.idx )
      // </0 & Lexicon/4 (/7 t.FirstLeft#1/13 e.Left#1/5 )/8 (/11 t.FirstRight#1/15 e.Right#1/9 )/12 >/1
      {refalrts::icSave, 0, 20, 5},
      {refalrts::ictVarLeftSave, 0, 13, 20},
      // closed e.Left#1 as range 20(5)
      {refalrts::icSave, 0, 22, 9},
      {refalrts::ictVarLeftSave, 0, 15, 22},
      // closed e.Right#1 as range 22(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-Aux/4 HalfReuse: </7 } & Compare/17 Tile{ AsIs: t.FirstLeft#1/13 } Tile{ AsIs: t.FirstRight#1/15 } >/18 (/19 Tile{ AsIs: e.Left#1/20(5) } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Right#1/22(9) } Tile{ AsIs: )/12 AsIs: >/1 ]] }
      {refalrts::icAllocFunc, 0, 1, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 19, 8, 0},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceEVar, 0, 0, 22},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 20},
      {refalrts::icSpliceTile, 18, 19, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( ) ( )
      // </0 & Lexicon/4 (/7 )/8 (/11 )/12 >/1
      {refalrts::icSave, 0, 20, 5},
      {refalrts::icEmpty, 0, 0, 20},
      {refalrts::icSave, 0, 22, 9},
      {refalrts::icEmpty, 0, 0, 22},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Lexicon/4 (/7 )/8 (/11 )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/1 ]] }
      {refalrts::icReinitChar, 0, '=', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( ) ( e.idx )
      // </0 & Lexicon/4 (/7 )/8 (/11 e.Right#1/9 )/12 >/1
      {refalrts::icSave, 0, 20, 5},
      {refalrts::icEmpty, 0, 0, 20},
      // closed e.Right#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Lexicon/4 (/7 )/8 (/11 e.Right#1/9 )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
      {refalrts::icReinitChar, 0, '<', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx ) ( )
      // </0 & Lexicon/4 (/7 e.Left#1/5 )/8 (/11 )/12 >/1
      {refalrts::icEmpty, 0, 0, 9},
      // closed e.Left#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Lexicon/4 (/7 e.Left#1/5 )/8 (/11 )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
      {refalrts::icReinitChar, 0, '>', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Lexicon

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Lexicon(
  "Lexicon",
  scope_Lexicon::raa,
  scope_Lexicon::functions,
  scope_Lexicon::idents,
  scope_Lexicon::numbers,
  scope_Lexicon::strings
);
refalrts::RefalFunction& Lexicon = descr_Lexicon;

} // unnamed namespace

#else
static refalrts::FnResult func_Lexicon(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ )
  // </0 & Lexicon/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  do {
    // ( t.idx e.idx ) ( t.idx e.idx )
    // </0 & Lexicon/4 (/7 t.FirstLeft#1/13 e.Left#1/5 )/8 (/11 t.FirstRight#1/15 e.Right#1/9 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[14] = refalrts::tvar_left( context[13], context[20], context[21] );
    if( ! context[14] )
      continue;
    // closed e.Left#1 as range 20(5)
    context[22] = context[9];
    context[23] = context[10];
    context[16] = refalrts::tvar_left( context[15], context[22], context[23] );
    if( ! context[16] )
      continue;
    // closed e.Right#1 as range 22(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-Aux/4 HalfReuse: </7 } & Compare/17 Tile{ AsIs: t.FirstLeft#1/13 } Tile{ AsIs: t.FirstRight#1/15 } >/18 (/19 Tile{ AsIs: e.Left#1/20(5) } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Right#1/22(9) } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[17], & Compare ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Lexicon_Aux );
    refalrts::reinit_open_call( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[19], context[8] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) ( )
    // </0 & Lexicon/4 (/7 )/8 (/11 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    context[22] = context[9];
    context[23] = context[10];
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Lexicon/4 (/7 )/8 (/11 )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/1 ]] }
    refalrts::reinit_char( context[1], '=' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) ( e.idx )
    // </0 & Lexicon/4 (/7 )/8 (/11 e.Right#1/9 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.Right#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Lexicon/4 (/7 )/8 (/11 e.Right#1/9 )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    refalrts::reinit_char( context[1], '<' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( )
  // </0 & Lexicon/4 (/7 e.Left#1/5 )/8 (/11 )/12 >/1
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Lexicon/4 (/7 e.Left#1/5 )/8 (/11 )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
  refalrts::reinit_char( context[1], '>' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Lexicon(func_Lexicon, "Lexicon");
refalrts::RefalFunction& Lexicon = descr_Lexicon;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Lexicon_Aux {
    static refalrts::RefalFunction *functions[] = {
      & Lexicon
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 14, 0, 0},
      //FAST GEN: s.$ ( e.$ ) ( e.$ )
      //GLOBAL GEN: s.$ ( e.$ ) ( e.$ )
      // </0 & Lexicon-Aux/4 s.idx#0/13 (/11 e.idxVB#0/9 )/12 (/7 e.idxVTB#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      {refalrts::icBracketRightSave, 0, 9, 2},
      // closed e.idxVB#0 as range 9
      // closed e.idxVTB#0 as range 5
      {refalrts::icsVarLeft, 0, 13, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // '<' ( e.idx ) ( e.idx )
      // </0 & Lexicon-Aux/4 '<'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 13},
      // closed e.Left#1 as range 9
      // closed e.Right#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Lexicon-Aux/4 '<'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
      {refalrts::icReinitChar, 0, '<', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // '=' ( e.idx ) ( e.idx )
      // </0 & Lexicon-Aux/4 '='/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('='), 13},
      // closed e.Left#1 as range 9
      // closed e.Right#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Lexicon/13 AsIs: (/11 AsIs: e.Left#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Right#1/5 AsIs: )/8 AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // '>' ( e.idx ) ( e.idx )
      // </0 & Lexicon-Aux/4 '>'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('>'), 13},
      // closed e.Left#1 as range 9
      // closed e.Right#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Lexicon-Aux/4 '>'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
      {refalrts::icReinitChar, 0, '>', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Lexicon_Aux

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Lexicon_Aux(
  "Lexicon-Aux",
  scope_Lexicon_Aux::raa,
  scope_Lexicon_Aux::functions,
  scope_Lexicon_Aux::idents,
  scope_Lexicon_Aux::numbers,
  scope_Lexicon_Aux::strings
);
refalrts::RefalFunction& Lexicon_Aux = descr_Lexicon_Aux;

} // unnamed namespace

#else
static refalrts::FnResult func_Lexicon_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: s.$ ( e.$ ) ( e.$ )
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ )
  // </0 & Lexicon-Aux/4 s.idx#0/13 (/11 e.idxVB#0/9 )/12 (/7 e.idxVTB#0/5 )/8 >/1
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
    // '<' ( e.idx ) ( e.idx )
    // </0 & Lexicon-Aux/4 '<'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
    if( ! refalrts::char_term( '<', context[13] ) )
      continue;
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Lexicon-Aux/4 '<'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    refalrts::reinit_char( context[1], '<' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '=' ( e.idx ) ( e.idx )
    // </0 & Lexicon-Aux/4 '='/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
    if( ! refalrts::char_term( '=', context[13] ) )
      continue;
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Lexicon/13 AsIs: (/11 AsIs: e.Left#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Right#1/5 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[13], & Lexicon );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // '>' ( e.idx ) ( e.idx )
  // </0 & Lexicon-Aux/4 '>'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
  if( ! refalrts::char_term( '>', context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#1 as range 9
  // closed e.Right#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Lexicon-Aux/4 '>'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
  refalrts::reinit_char( context[1], '>' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Lexicon_Aux(func_Lexicon_Aux, "Lexicon-Aux");
refalrts::RefalFunction& Lexicon_Aux = descr_Lexicon_Aux;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Compare_T {
    static refalrts::RefalFunction *functions[] = {
      & SymbCompare,
      & Lexicon_T
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 17, 0, 0},
      //FAST GEN: t.$ t.$
      //GLOBAL GEN: t.$ t.$
      // </0 & Compare-T/4 t.idx#0/5 t.idxV#0/7 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( e.idx ) ( e.idx )
      // </0 & Compare-T/4 (/5 e.Left#1/9 )/6 (/7 e.Right#1/11 )/8 >/1
      {refalrts::icBracketTerm, 0, 9, 5},
      {refalrts::icBracketTerm, 0, 11, 7},
      // closed e.Left#1 as range 9
      // closed e.Right#1 as range 11
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T/4 AsIs: (/5 } )/13 (/14 Tile{ AsIs: e.Left#1/9 } )/15 (/16 Tile{ AsIs: )/6 AsIs: (/7 AsIs: e.Right#1/11 AsIs: )/8 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 16, 6, 0},
      {refalrts::icLinkBrackets, 14, 15, 0},
      {refalrts::icLinkBrackets, 5, 13, 0},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) s.idx
      // </0 & Compare-T/4 (/5 e.Left#1/9 )/6 s.Right#1/7 >/1
      {refalrts::icBracketTerm, 0, 9, 5},
      {refalrts::icsVarTerm, 0, 11, 7},
      // closed e.Left#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/4 AsIs: (/5 AsIs: e.Left#1/9 AsIs: )/6 AsIs: s.Right#1/7 } Tile{ ]] }
      {refalrts::icReinitChar, 0, '>', 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 7, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // s.idx ( e.idx )
      // </0 & Compare-T/4 s.Left#1/5 (/7 e.Right#1/9 )/8 >/1
      {refalrts::icBracketTerm, 0, 9, 7},
      {refalrts::icsVarTerm, 0, 11, 5},
      // closed e.Right#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/4 AsIs: s.Left#1/5 AsIs: (/7 AsIs: e.Right#1/9 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitChar, 0, '<', 4},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // s.idx s.idx
      // </0 & Compare-T/4 s.Left#1/5 s.Right#1/7 >/1
      {refalrts::icsVarTerm, 0, 9, 5},
      {refalrts::icsVarTerm, 0, 9, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbCompare/4 AsIs: s.Left#1/5 AsIs: s.Right#1/7 AsIs: >/1 } s.Left#1/5/9 s.Right#1/7/10 Tile{ ]] }
      {refalrts::icCopySTVar, 9, 5, 0},
      {refalrts::icCopySTVar, 10, 7, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Compare_T

} // unnamed namespace

refalrts::RASLFunction descr_Compare_T(
  "Compare-T",
  scope_Compare_T::raa,
  scope_Compare_T::functions,
  scope_Compare_T::idents,
  scope_Compare_T::numbers,
  scope_Compare_T::strings
);
refalrts::RefalFunction& Compare_T = descr_Compare_T;

#else
static refalrts::FnResult func_Compare_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: t.$ t.$
  //GLOBAL GEN: t.$ t.$
  // </0 & Compare-T/4 t.idx#0/5 t.idxV#0/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( e.idx )
    // </0 & Compare-T/4 (/5 e.Left#1/9 )/6 (/7 e.Right#1/11 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T/4 AsIs: (/5 } )/13 (/14 Tile{ AsIs: e.Left#1/9 } )/15 (/16 Tile{ AsIs: )/6 AsIs: (/7 AsIs: e.Right#1/11 AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Lexicon_T );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[6] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[5], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx
    // </0 & Compare-T/4 (/5 e.Left#1/9 )/6 s.Right#1/7 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    if( ! refalrts::svar_term( context[11], context[7] ) )
      continue;
    // closed e.Left#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/4 AsIs: (/5 AsIs: e.Left#1/9 AsIs: )/6 AsIs: s.Right#1/7 } Tile{ ]] }
    refalrts::reinit_char( context[4], '>' );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx )
    // </0 & Compare-T/4 s.Left#1/5 (/7 e.Right#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_term( context[11], context[5] ) )
      continue;
    // closed e.Right#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/4 AsIs: s.Left#1/5 AsIs: (/7 AsIs: e.Right#1/9 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_char( context[4], '<' );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx
  // </0 & Compare-T/4 s.Left#1/5 s.Right#1/7 >/1
  if( ! refalrts::svar_term( context[9], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_term( context[9], context[7] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbCompare/4 AsIs: s.Left#1/5 AsIs: s.Right#1/7 AsIs: >/1 } s.Left#1/5/9 s.Right#1/7/10 Tile{ ]] }
  if (! refalrts::copy_stvar(context[9], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[7]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & SymbCompare );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Compare_T(func_Compare_T, "Compare-T");
refalrts::RefalFunction& Compare_T = descr_Compare_T;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Lexicon_T {
    static refalrts::RefalFunction *functions[] = {
      & Lexicon_T_Aux,
      & Compare_T
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 32, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
      //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
      // </0 & Lexicon-T/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      {refalrts::icBracketLeftSave, 0, 17, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      // closed e.idxTTB#0 as range 13
      // closed e.idxTTTB#0 as range 17
      {refalrts::icOnFailGoTo, +28, 0, 0},
      // ( e.idx ) ( t.idx e.idx ) ( e.idx ) ( t.idx e.idx )
      // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 t.FirstLeft#1/21 e.Left#1/9 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 t.FirstRight#1/23 e.Right#1/17 )/20 >/1
      // closed e.ScannedLeft#1 as range 5
      // closed e.ScannedRight#1 as range 13
      {refalrts::icSave, 0, 28, 9},
      {refalrts::ictVarLeftSave, 0, 21, 28},
      // closed e.Left#1 as range 28(9)
      {refalrts::icSave, 0, 30, 17},
      {refalrts::ictVarLeftSave, 0, 23, 30},
      // closed e.Right#1 as range 30(17)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T-Aux/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } )/25 </26 & Compare-T/27 Tile{ AsIs: t.FirstLeft#1/21 } Tile{ AsIs: t.FirstRight#1/23 } Tile{ HalfReuse: >/12 AsIs: (/15 } Tile{ AsIs: e.Left#1/28(9) } Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.Right#1/30(17) } Tile{ AsIs: )/20 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
      {refalrts::icAllocFunc, 0, 1, 27},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icLinkBrackets, 11, 25, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 20},
      {refalrts::icSpliceEVar, 0, 0, 30},
      {refalrts::icSpliceTile, 16, 19, 0},
      {refalrts::icSpliceEVar, 0, 0, 28},
      {refalrts::icSpliceTile, 12, 15, 0},
      {refalrts::icSpliceTile, 23, 24, 0},
      {refalrts::icSpliceTile, 21, 22, 0},
      {refalrts::icSpliceTile, 25, 27, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // ( e.idx ) ( ) ( e.idx ) ( )
      // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 )/20 >/1
      {refalrts::icSave, 0, 28, 9},
      {refalrts::icEmpty, 0, 0, 28},
      {refalrts::icSave, 0, 30, 17},
      {refalrts::icEmpty, 0, 0, 30},
      // closed e.ScannedLeft#1 as range 5
      // closed e.ScannedRight#1 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 (/19 )/20 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitChar, 0, '=', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 11, 1, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 4, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +13, 0, 0},
      // ( e.idx ) ( ) ( e.idx ) ( e.idx )
      // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 e.Right#1/17 )/20 >/1
      {refalrts::icSave, 0, 28, 9},
      {refalrts::icEmpty, 0, 0, 28},
      // closed e.ScannedLeft#1 as range 5
      // closed e.ScannedRight#1 as range 13
      // closed e.Right#1 as range 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 (/19 {REMOVED TILE} )/20 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } Tile{ AsIs: e.Right#1/17 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitChar, 0, '<', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 11, 1, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 4, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx ) ( e.idx ) ( e.idx ) ( )
      // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.Left#1/9 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 )/20 >/1
      {refalrts::icEmpty, 0, 0, 17},
      // closed e.ScannedLeft#1 as range 5
      // closed e.Left#1 as range 9
      // closed e.ScannedRight#1 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} (/19 )/20 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '>'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: e.Left#1/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.ScannedRight#1/13 AsIs: )/16 } Tile{ ]] }
      {refalrts::icReinitChar, 0, '>', 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 4, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Lexicon_T

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Lexicon_T(
  "Lexicon-T",
  scope_Lexicon_T::raa,
  scope_Lexicon_T::functions,
  scope_Lexicon_T::idents,
  scope_Lexicon_T::numbers,
  scope_Lexicon_T::strings
);
refalrts::RefalFunction& Lexicon_T = descr_Lexicon_T;

} // unnamed namespace

#else
static refalrts::FnResult func_Lexicon_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
  // </0 & Lexicon-T/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTTB#0 as range 17
  do {
    // ( e.idx ) ( t.idx e.idx ) ( e.idx ) ( t.idx e.idx )
    // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 t.FirstLeft#1/21 e.Left#1/9 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 t.FirstRight#1/23 e.Right#1/17 )/20 >/1
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 13
    context[28] = context[9];
    context[29] = context[10];
    context[22] = refalrts::tvar_left( context[21], context[28], context[29] );
    if( ! context[22] )
      continue;
    // closed e.Left#1 as range 28(9)
    context[30] = context[17];
    context[31] = context[18];
    context[24] = refalrts::tvar_left( context[23], context[30], context[31] );
    if( ! context[24] )
      continue;
    // closed e.Right#1 as range 30(17)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T-Aux/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } )/25 </26 & Compare-T/27 Tile{ AsIs: t.FirstLeft#1/21 } Tile{ AsIs: t.FirstRight#1/23 } Tile{ HalfReuse: >/12 AsIs: (/15 } Tile{ AsIs: e.Left#1/28(9) } Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.Right#1/30(17) } Tile{ AsIs: )/20 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], & Compare_T ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Lexicon_T_Aux );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( ) ( e.idx ) ( )
    // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 )/20 >/1
    context[28] = context[9];
    context[29] = context[10];
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    context[30] = context[17];
    context[31] = context[18];
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 (/19 )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[4], '=' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[4], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( ) ( e.idx ) ( e.idx )
    // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 e.Right#1/17 )/20 >/1
    context[28] = context[9];
    context[29] = context[10];
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 13
    // closed e.Right#1 as range 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 (/19 {REMOVED TILE} )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } Tile{ AsIs: e.Right#1/17 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[4], '<' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[4], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx ) ( )
  // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.Left#1/9 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 )/20 >/1
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedLeft#1 as range 5
  // closed e.Left#1 as range 9
  // closed e.ScannedRight#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} (/19 )/20 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '>'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: e.Left#1/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.ScannedRight#1/13 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_char( context[0], '>' );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Lexicon_T(func_Lexicon_T, "Lexicon-T");
refalrts::RefalFunction& Lexicon_T = descr_Lexicon_T;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Lexicon_T_Aux {
    static refalrts::RefalFunction *functions[] = {
      & Lexicon_T
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 26, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ ) s.$ t.$ t.$ ( e.$ ) ( e.$ )
      //GLOBAL GEN: ( e.$ ) ( e.$ ) s.$ t.$ t.$ ( e.$ ) ( e.$ )
      // </0 & Lexicon-T-Aux/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 s.idxTT#0/21 t.idxTTV#0/22 t.idxTTVV#0/24 (/19 e.idxTTVVVB#0/17 )/20 (/15 e.idxTTVVVTB#0/13 )/16 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketRightSave, 0, 13, 2},
      {refalrts::icBracketRightSave, 0, 17, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      // closed e.idxTTVVVB#0 as range 17
      // closed e.idxTTVVVTB#0 as range 13
      {refalrts::icsVarLeft, 0, 21, 2},
      {refalrts::ictVarLeftSave, 0, 22, 2},
      {refalrts::ictVarLeftSave, 0, 24, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( e.idx ) ( e.idx ) '<' t.idx t.idx ( e.idx ) ( e.idx )
      // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '<'/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 21},
      // closed e.ScannedLeft#1 as range 5
      // closed e.ScannedRight#1 as range 9
      // closed e.Left#1 as range 17
      // closed e.Right#1 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 '<'/21 {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '<'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: e.Right#1/13 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitChar, 0, '<', 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 15, 1, 0},
      {refalrts::icLinkBrackets, 4, 20, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 24, 25, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 20, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 22, 23, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // ( e.idx ) ( e.idx ) '=' t.idx t.idx ( e.idx ) ( e.idx )
      // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '='/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('='), 21},
      // closed e.ScannedLeft#1 as range 5
      // closed e.ScannedRight#1 as range 9
      // closed e.Left#1 as range 17
      // closed e.Right#1 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T/4 AsIs: (/7 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/12 HalfReuse: (/21 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: )/20 AsIs: (/15 AsIs: e.Right#1/13 AsIs: )/16 AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 21},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 21, 20, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 20},
      {refalrts::icSpliceTile, 24, 25, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 12, 21, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceTile, 22, 23, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx ) ( e.idx ) '>' t.idx t.idx ( e.idx ) ( e.idx )
      // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '>'/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('>'), 21},
      // closed e.ScannedLeft#1 as range 5
      // closed e.ScannedRight#1 as range 9
      // closed e.Left#1 as range 17
      // closed e.Right#1 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 '>'/21 {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '>'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: e.Right#1/13 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitChar, 0, '>', 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 15, 1, 0},
      {refalrts::icLinkBrackets, 4, 20, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 24, 25, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 20, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 22, 23, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Lexicon_T_Aux

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Lexicon_T_Aux(
  "Lexicon-T-Aux",
  scope_Lexicon_T_Aux::raa,
  scope_Lexicon_T_Aux::functions,
  scope_Lexicon_T_Aux::idents,
  scope_Lexicon_T_Aux::numbers,
  scope_Lexicon_T_Aux::strings
);
refalrts::RefalFunction& Lexicon_T_Aux = descr_Lexicon_T_Aux;

} // unnamed namespace

#else
static refalrts::FnResult func_Lexicon_T_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  //FAST GEN: ( e.$ ) ( e.$ ) s.$ t.$ t.$ ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ ) s.$ t.$ t.$ ( e.$ ) ( e.$ )
  // </0 & Lexicon-T-Aux/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 s.idxTT#0/21 t.idxTTV#0/22 t.idxTTVV#0/24 (/19 e.idxTTVVVB#0/17 )/20 (/15 e.idxTTVVVTB#0/13 )/16 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTVVVB#0 as range 17
  // closed e.idxTTVVVTB#0 as range 13
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::tvar_left( context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::tvar_left( context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( e.idx ) '<' t.idx t.idx ( e.idx ) ( e.idx )
    // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '<'/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
    if( ! refalrts::char_term( '<', context[21] ) )
      continue;
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 9
    // closed e.Left#1 as range 17
    // closed e.Right#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 '<'/21 {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '<'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: e.Right#1/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[0], '<' );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[15], context[1] );
    refalrts::link_brackets( context[4], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[15] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) '=' t.idx t.idx ( e.idx ) ( e.idx )
    // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '='/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
    if( ! refalrts::char_term( '=', context[21] ) )
      continue;
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 9
    // closed e.Left#1 as range 17
    // closed e.Right#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T/4 AsIs: (/7 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/12 HalfReuse: (/21 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: )/20 AsIs: (/15 AsIs: e.Right#1/13 AsIs: )/16 AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Lexicon_T );
    refalrts::reinit_open_bracket( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[21], context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[21] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) '>' t.idx t.idx ( e.idx ) ( e.idx )
  // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '>'/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
  if( ! refalrts::char_term( '>', context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedLeft#1 as range 5
  // closed e.ScannedRight#1 as range 9
  // closed e.Left#1 as range 17
  // closed e.Right#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 '>'/21 {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '>'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: e.Right#1/13 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_char( context[0], '>' );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[4], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[20], context[15] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Lexicon_T_Aux(func_Lexicon_T_Aux, "Lexicon-T-Aux");
refalrts::RefalFunction& Lexicon_T_Aux = descr_Lexicon_T_Aux;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Type {
    static refalrts::RefalFunction *functions[] = {
      & SymbType
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TypeBracket<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 9, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & Type/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // ( e.idx )
      // </0 & Type/4 (/5 e.InBracket#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      // closed e.InBracket#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Type/4 (/5 e.InBracket#1/7 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # TypeBracket/1 ]] }
      {refalrts::icReinitIdent, 0, 0, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // s.idx
      // </0 & Type/4 s.Symbol#1/5 >/1
      {refalrts::icsVarTerm, 0, 7, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbType/4 AsIs: s.Symbol#1/5 AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Type

} // unnamed namespace

refalrts::RASLFunction descr_Type(
  "Type",
  scope_Type::raa,
  scope_Type::functions,
  scope_Type::idents,
  scope_Type::numbers,
  scope_Type::strings
);
refalrts::RefalFunction& Type = descr_Type;

#else
static refalrts::FnResult func_Type(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Type/4 t.idx#0/5 >/1
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
    // ( e.idx )
    // </0 & Type/4 (/5 e.InBracket#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    // closed e.InBracket#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Type/4 (/5 e.InBracket#1/7 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TypeBracket/1 ]] }
    refalrts::reinit_ident( context[1], & ident_TypeBracket<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx
  // </0 & Type/4 s.Symbol#1/5 >/1
  if( ! refalrts::svar_term( context[7], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbType/4 AsIs: s.Symbol#1/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], & SymbType );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Type(func_Type, "Type");
refalrts::RefalFunction& Type = descr_Type;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Type_T {
    static refalrts::RefalFunction *functions[] = {
      & SymbType
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TypeBracket<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & Type-T/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) e.idx
      // </0 & Type-T/4 (/7 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 5, 9},
      // closed e.InBrackets#1 as range 5
      // closed e.Tail#1 as range 9(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # TypeBracket/4 AsIs: (/7 AsIs: e.InBrackets#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/9(2) } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // s.idx e.idx
      // </0 & Type-T/4 s.Symbol#1/5 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icsVarLeft, 0, 5, 9},
      // closed e.Tail#1 as range 9(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbType/4 AsIs: s.Symbol#1/5 } Tile{ AsIs: >/1 } s.Symbol#1/5/6 Tile{ AsIs: e.Tail#1/9(2) } Tile{ ]] }
      {refalrts::icCopySTVar, 6, 5, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      //
      // </0 & Type-T/4 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Type-T/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '*'/1 ]] }
      {refalrts::icReinitChar, 0, '*', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Type_T

} // unnamed namespace

refalrts::RASLFunction descr_Type_T(
  "Type-T",
  scope_Type_T::raa,
  scope_Type_T::functions,
  scope_Type_T::idents,
  scope_Type_T::numbers,
  scope_Type_T::strings
);
refalrts::RefalFunction& Type_T = descr_Type_T;

#else
static refalrts::FnResult func_Type_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Type-T/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( e.idx ) e.idx
    // </0 & Type-T/4 (/7 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[9], context[10] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TypeBracket/4 AsIs: (/7 AsIs: e.InBrackets#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/9(2) } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_TypeBracket<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx
    // </0 & Type-T/4 s.Symbol#1/5 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_left( context[5], context[9], context[10] ) )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbType/4 AsIs: s.Symbol#1/5 } Tile{ AsIs: >/1 } s.Symbol#1/5/6 Tile{ AsIs: e.Tail#1/9(2) } Tile{ ]] }
    if (! refalrts::copy_stvar(context[6], context[5]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & SymbType );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & Type-T/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Type-T/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '*'/1 ]] }
  refalrts::reinit_char( context[1], '*' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Type_T(func_Type_T, "Type-T");
refalrts::RefalFunction& Type_T = descr_Type_T;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Trim {
    static refalrts::RefalFunction *functions[] = {
      & Trim_R,
      & Trim_L
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 8, 0, 0},
      // </0 & Trim/4 e.Line#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Line#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & Trim-L/6 Tile{ AsIs: </0 Reuse: & Trim-R/4 AsIs: e.Line#1/2 AsIs: >/1 } >/7 Tile{ ]] }
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
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Trim

} // unnamed namespace

refalrts::RASLFunction descr_Trim(
  "Trim",
  scope_Trim::raa,
  scope_Trim::functions,
  scope_Trim::idents,
  scope_Trim::numbers,
  scope_Trim::strings
);
refalrts::RefalFunction& Trim = descr_Trim;

#else
static refalrts::FnResult func_Trim(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Trim/4 e.Line#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Line#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Trim-L/6 Tile{ AsIs: </0 Reuse: & Trim-R/4 AsIs: e.Line#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & Trim_L ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Trim_R );
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

refalrts::RefalNativeFunction descr_Trim(func_Trim, "Trim");
refalrts::RefalFunction& Trim = descr_Trim;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Trim_L {
    static refalrts::RefalFunction *functions[] = {
      & Trim_L
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 8, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & Trim-L/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ' ' e.idx
      // </0 & Trim-L/4 ' '/5 e.Line#1/2 >/1
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>(' '), 6},
      // closed e.Line#1 as range 6(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim-L/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // '\t' e.idx
      // </0 & Trim-L/4 '\t'/5 e.Line#1/2 >/1
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\t'), 6},
      // closed e.Line#1 as range 6(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim-L/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // '\r' e.idx
      // </0 & Trim-L/4 '\r'/5 e.Line#1/2 >/1
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\r'), 6},
      // closed e.Line#1 as range 6(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim-L/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // '\n' e.idx
      // </0 & Trim-L/4 '\n'/5 e.Line#1/2 >/1
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\n'), 6},
      // closed e.Line#1 as range 6(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim-L/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // e.idx
      // </0 & Trim-L/4 e.Line#1/2 >/1
      // closed e.Line#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Trim-L/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Trim_L

} // unnamed namespace

refalrts::RASLFunction descr_Trim_L(
  "Trim-L",
  scope_Trim_L::raa,
  scope_Trim_L::functions,
  scope_Trim_L::idents,
  scope_Trim_L::numbers,
  scope_Trim_L::strings
);
refalrts::RefalFunction& Trim_L = descr_Trim_L;

#else
static refalrts::FnResult func_Trim_L(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Trim-L/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ' ' e.idx
    // </0 & Trim-L/4 ' '/5 e.Line#1/2 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_left( ' ', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim-L/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & Trim_L );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\t' e.idx
    // </0 & Trim-L/4 '\t'/5 e.Line#1/2 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_left( '\t', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim-L/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & Trim_L );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\r' e.idx
    // </0 & Trim-L/4 '\r'/5 e.Line#1/2 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_left( '\r', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim-L/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & Trim_L );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '\n' e.idx
    // </0 & Trim-L/4 '\n'/5 e.Line#1/2 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_left( '\n', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim-L/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & Trim_L );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Trim-L/4 e.Line#1/2 >/1
  // closed e.Line#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Trim-L/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Trim_L(func_Trim_L, "Trim-L");
refalrts::RefalFunction& Trim_L = descr_Trim_L;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Trim_R {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 8, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & Trim-R/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // e.idx ' '
      // </0 & Trim-R/4 e.Line#1/2 ' '/5 >/1
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icCharRightSave, 5, static_cast<unsigned char>(' '), 6},
      // closed e.Line#1 as range 6(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 5},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 5},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // e.idx '\t'
      // </0 & Trim-R/4 e.Line#1/2 '\t'/5 >/1
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icCharRightSave, 5, static_cast<unsigned char>('\t'), 6},
      // closed e.Line#1 as range 6(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 5},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 5},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // e.idx '\r'
      // </0 & Trim-R/4 e.Line#1/2 '\r'/5 >/1
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icCharRightSave, 5, static_cast<unsigned char>('\r'), 6},
      // closed e.Line#1 as range 6(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 5},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 5},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // e.idx '\n'
      // </0 & Trim-R/4 e.Line#1/2 '\n'/5 >/1
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icCharRightSave, 5, static_cast<unsigned char>('\n'), 6},
      // closed e.Line#1 as range 6(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 5},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 5},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // e.idx
      // </0 & Trim-R/4 e.Line#1/2 >/1
      // closed e.Line#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Trim-R/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Trim_R

} // unnamed namespace

refalrts::RASLFunction descr_Trim_R(
  "Trim-R",
  scope_Trim_R::raa,
  scope_Trim_R::functions,
  scope_Trim_R::idents,
  scope_Trim_R::numbers,
  scope_Trim_R::strings
);
refalrts::RefalFunction& Trim_R = descr_Trim_R;

#else
static refalrts::FnResult func_Trim_R(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Trim-R/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx ' '
    // </0 & Trim-R/4 e.Line#1/2 ' '/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_right( ' ', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '\t'
    // </0 & Trim-R/4 e.Line#1/2 '\t'/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_right( '\t', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '\r'
    // </0 & Trim-R/4 e.Line#1/2 '\r'/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_right( '\r', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '\n'
    // </0 & Trim-R/4 e.Line#1/2 '\n'/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_right( '\n', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Trim-R/4 e.Line#1/2 >/1
  // closed e.Line#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Trim-R/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Trim_R(func_Trim_R, "Trim-R");
refalrts::RefalFunction& Trim_R = descr_Trim_R;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Seq_S2L1 {
    static refalrts::RefalFunction *functions[] = {
      & Seq,
      & Fetch,
      & Apply
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 15, 0, 0},
      // </0 & Seq$2\1/4 t.Func#1/5 (/9 e.Funcs#1/7 )/10 e.Arg#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 7, 2},
      // closed e.Funcs#1 as range 7
      // closed e.Arg#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func#1/5 } Tile{ AsIs: e.Arg#2/2 } >/13 </14 Tile{ HalfReuse: & Seq/9 AsIs: e.Funcs#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 2, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Seq_S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Seq_S2L1(
  "Seq$2\\1",
  scope_gen_Seq_S2L1::raa,
  scope_gen_Seq_S2L1::functions,
  scope_gen_Seq_S2L1::idents,
  scope_gen_Seq_S2L1::numbers,
  scope_gen_Seq_S2L1::strings
);
refalrts::RefalFunction& gen_Seq_S2L1 = descr_gen_Seq_S2L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Seq_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Seq$2\1/4 t.Func#1/5 (/9 e.Funcs#1/7 )/10 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.Funcs#1 as range 7
  // closed e.Arg#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func#1/5 } Tile{ AsIs: e.Arg#2/2 } >/13 </14 Tile{ HalfReuse: & Seq/9 AsIs: e.Funcs#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & Apply ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_name( context[9], & Seq );
  refalrts::reinit_close_call( context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Seq_S2L1(func_gen_Seq_S2L1, "Seq$2\\1");
refalrts::RefalFunction& gen_Seq_S2L1 = descr_gen_Seq_S2L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Seq_S3L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 5, 0, 0},
      // </0 & Seq$3\1/4 e.Arg#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Arg#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Seq$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg#2/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Seq_S3L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Seq_S3L1(
  "Seq$3\\1",
  scope_gen_Seq_S3L1::raa,
  scope_gen_Seq_S3L1::functions,
  scope_gen_Seq_S3L1::idents,
  scope_gen_Seq_S3L1::numbers,
  scope_gen_Seq_S3L1::strings
);
refalrts::RefalFunction& gen_Seq_S3L1 = descr_gen_Seq_S3L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Seq_S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Seq$3\1/4 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Seq$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Seq_S3L1(func_gen_Seq_S3L1, "Seq$3\\1");
refalrts::RefalFunction& gen_Seq_S3L1 = descr_gen_Seq_S3L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Seq {
    static refalrts::RefalFunction *functions[] = {
      & gen_Seq_S3L1,
      & refalrts::create_closure,
      & gen_Seq_S2L1
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & Seq/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +8, 0, 0},
      // t.idx
      // </0 & Seq/4 t.Func#1/5 >/1
      {refalrts::icSave, 0, 10, 2},
      {refalrts::ictVarLeftSave, 0, 5, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Seq/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Func#1/5 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // t.idx e.idx
      // </0 & Seq/4 t.Func#1/5 e.Funcs#1/2 >/1
      {refalrts::icSave, 0, 10, 2},
      {refalrts::ictVarLeftSave, 0, 5, 10},
      // closed e.Funcs#1 as range 10(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & @create_closure@/4 } & Seq$2\1/7 Tile{ AsIs: t.Func#1/5 } (/8 Tile{ AsIs: e.Funcs#1/10(2) } )/9 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocFunc, 0, 2, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceEVar, 0, 0, 10},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      //
      // </0 & Seq/4 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Seq/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Seq$3\1/1 ]] }
      {refalrts::icReinitFunc, 0, 0, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Seq

} // unnamed namespace

refalrts::RASLFunction descr_Seq(
  "Seq",
  scope_Seq::raa,
  scope_Seq::functions,
  scope_Seq::idents,
  scope_Seq::numbers,
  scope_Seq::strings
);
refalrts::RefalFunction& Seq = descr_Seq;

#else
static refalrts::FnResult func_Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Seq/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // t.idx
    // </0 & Seq/4 t.Func#1/5 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[6] = refalrts::tvar_left( context[5], context[10], context[11] );
    if( ! context[6] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Seq/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Func#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx e.idx
    // </0 & Seq/4 t.Func#1/5 e.Funcs#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[6] = refalrts::tvar_left( context[5], context[10], context[11] );
    if( ! context[6] )
      continue;
    // closed e.Funcs#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & @create_closure@/4 } & Seq$2\1/7 Tile{ AsIs: t.Func#1/5 } (/8 Tile{ AsIs: e.Funcs#1/10(2) } )/9 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[7], & gen_Seq_S2L1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & refalrts::create_closure );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & Seq/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Seq/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & Seq$3\1/1 ]] }
  refalrts::reinit_name( context[1], & gen_Seq_S3L1 );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Seq(func_Seq, "Seq");
refalrts::RefalFunction& Seq = descr_Seq;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Sort_S2L1L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 20, 0, 0},
      //FAST GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
      //GLOBAL GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
      // </0 & Sort$2\1\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 (/17 e.idxTVTB#0/15 )/18 s.idxTVTT#0/19 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::ictVarLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 15, 2},
      // closed e.idxTVB#0 as range 11
      // closed e.idxTVTB#0 as range 15
      {refalrts::icsVarLeft, 0, 19, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +16, 0, 0},
      // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '<'
      // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '<'/19 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 19},
      // closed e.Less#2 as range 5
      // closed e.Equal#2 as range 11
      // closed e.Greater#2 as range 15
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.Less#2/5 } Tile{ AsIs: t.Next#2/9 } Tile{ AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Equal#2/11 AsIs: )/14 AsIs: (/17 AsIs: e.Greater#2/15 AsIs: )/18 HalfReuse: )/19 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icLinkBrackets, 0, 19, 0},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 13, 19, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +16, 0, 0},
      // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '='
      // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '='/19 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('='), 19},
      // closed e.Less#2 as range 5
      // closed e.Equal#2 as range 11
      // closed e.Greater#2 as range 15
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Less#2/5 AsIs: )/8 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Equal#2/11 } Tile{ AsIs: t.Next#2/9 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Greater#2/15 AsIs: )/18 HalfReuse: )/19 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icLinkBrackets, 4, 19, 0},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 14, 19, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '>'
      // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '>'/19 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('>'), 19},
      // closed e.Less#2 as range 5
      // closed e.Equal#2 as range 11
      // closed e.Greater#2 as range 15
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/18 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Less#2/5 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Equal#2/11 AsIs: )/14 AsIs: (/17 } Tile{ AsIs: e.Greater#2/15 } Tile{ AsIs: t.Next#2/9 } Tile{ HalfReuse: )/19 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icLinkBrackets, 17, 19, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 19},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceTile, 13, 17, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Sort_S2L1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Sort_S2L1L1(
  "Sort$2\\1\\1",
  scope_gen_Sort_S2L1L1::raa,
  scope_gen_Sort_S2L1L1::functions,
  scope_gen_Sort_S2L1L1::idents,
  scope_gen_Sort_S2L1L1::numbers,
  scope_gen_Sort_S2L1L1::strings
);
refalrts::RefalFunction& gen_Sort_S2L1L1 = descr_gen_Sort_S2L1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Sort_S2L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
  //GLOBAL GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
  // </0 & Sort$2\1\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 (/17 e.idxTVTB#0/15 )/18 s.idxTVTT#0/19 >/1
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
  // closed e.idxB#0 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxTVB#0 as range 11
  // closed e.idxTVTB#0 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '<'
    // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '<'/19 >/1
    if( ! refalrts::char_term( '<', context[19] ) )
      continue;
    // closed e.Less#2 as range 5
    // closed e.Equal#2 as range 11
    // closed e.Greater#2 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.Less#2/5 } Tile{ AsIs: t.Next#2/9 } Tile{ AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Equal#2/11 AsIs: )/14 AsIs: (/17 AsIs: e.Greater#2/15 AsIs: )/18 HalfReuse: )/19 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::link_brackets( context[0], context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[19] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '='
    // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '='/19 >/1
    if( ! refalrts::char_term( '=', context[19] ) )
      continue;
    // closed e.Less#2 as range 5
    // closed e.Equal#2 as range 11
    // closed e.Greater#2 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Less#2/5 AsIs: )/8 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Equal#2/11 } Tile{ AsIs: t.Next#2/9 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Greater#2/15 AsIs: )/18 HalfReuse: )/19 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::link_brackets( context[4], context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[19] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '>'
  // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '>'/19 >/1
  if( ! refalrts::char_term( '>', context[19] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Less#2 as range 5
  // closed e.Equal#2 as range 11
  // closed e.Greater#2 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/18 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Less#2/5 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Equal#2/11 AsIs: )/14 AsIs: (/17 } Tile{ AsIs: e.Greater#2/15 } Tile{ AsIs: t.Next#2/9 } Tile{ HalfReuse: )/19 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[19] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[17], context[19] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[19];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Sort_S2L1L1(func_gen_Sort_S2L1L1, "Sort$2\\1\\1");
refalrts::RefalFunction& gen_Sort_S2L1L1 = descr_gen_Sort_S2L1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Sort_S2L1 {
    static refalrts::RefalFunction *functions[] = {
      & gen_Sort_S2L1L1,
      & Fetch,
      & refalrts::create_closure,
      & Compare
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 32, 0, 0},
      // </0 & Sort$2\1/4 t.Pivot#1/5 (/9 (/13 e.Less#2/11 )/14 (/17 e.Equal#2/15 )/18 (/21 e.Greater#2/19 )/22 )/10 t.Next#2/23 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 7, 2},
      {refalrts::icBracketLeftSave, 0, 11, 7},
      {refalrts::icBracketLeftSave, 0, 15, 7},
      {refalrts::icBracketLeftSave, 0, 19, 7},
      {refalrts::icEmpty, 0, 0, 7},
      // closed e.Less#2 as range 11
      // closed e.Equal#2 as range 15
      // closed e.Greater#2 as range 19
      {refalrts::ictVarLeftSave, 0, 23, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </25 & Compare/26 Tile{ AsIs: t.Next#2/23 } Tile{ AsIs: t.Pivot#1/5 } >/27 </28 & @create_closure@/29 Tile{ HalfReuse: & Sort$2\1\1/9 AsIs: (/13 AsIs: e.Less#2/11 AsIs: )/14 } t.Next#2/23/30 Tile{ AsIs: (/17 AsIs: e.Equal#2/15 AsIs: )/18 AsIs: (/21 AsIs: e.Greater#2/19 AsIs: )/22 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
      {refalrts::icAllocFunc, 0, 3, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
      {refalrts::icAllocFunc, 0, 2, 29},
      {refalrts::icCopyEVar, 30, 23, 0},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 28},
      {refalrts::icLinkBrackets, 21, 22, 0},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icPushStack, 0, 0, 27},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 17, 10, 0},
      {refalrts::icSpliceTile, 30, 31, 0},
      {refalrts::icSpliceTile, 9, 14, 0},
      {refalrts::icSpliceTile, 27, 29, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icSpliceTile, 23, 24, 0},
      {refalrts::icSpliceTile, 25, 26, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Sort_S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Sort_S2L1(
  "Sort$2\\1",
  scope_gen_Sort_S2L1::raa,
  scope_gen_Sort_S2L1::functions,
  scope_gen_Sort_S2L1::idents,
  scope_gen_Sort_S2L1::numbers,
  scope_gen_Sort_S2L1::strings
);
refalrts::RefalFunction& gen_Sort_S2L1 = descr_gen_Sort_S2L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Sort_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Sort$2\1/4 t.Pivot#1/5 (/9 (/13 e.Less#2/11 )/14 (/17 e.Equal#2/15 )/18 (/21 e.Greater#2/19 )/22 )/10 t.Next#2/23 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[7], context[8] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[7], context[8] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Less#2 as range 11
  // closed e.Equal#2 as range 15
  // closed e.Greater#2 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </25 & Compare/26 Tile{ AsIs: t.Next#2/23 } Tile{ AsIs: t.Pivot#1/5 } >/27 </28 & @create_closure@/29 Tile{ HalfReuse: & Sort$2\1\1/9 AsIs: (/13 AsIs: e.Less#2/11 AsIs: )/14 } t.Next#2/23/30 Tile{ AsIs: (/17 AsIs: e.Equal#2/15 AsIs: )/18 AsIs: (/21 AsIs: e.Greater#2/19 AsIs: )/22 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], & Compare ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[30], context[31], context[23], context[24]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_name( context[9], & gen_Sort_S2L1L1 );
  refalrts::reinit_close_call( context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[28] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[10] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Sort_S2L1(func_gen_Sort_S2L1, "Sort$2\\1");
refalrts::RefalFunction& gen_Sort_S2L1 = descr_gen_Sort_S2L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Sort_S2L2 {
    static refalrts::RefalFunction *functions[] = {
      & Sort
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 21, 0, 0},
      // </0 & Sort$2\2/4 (/7 (/11 e.Less#2/9 )/12 (/15 e.Equal#2/13 )/16 (/19 e.Greater#2/17 )/20 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 13, 5},
      {refalrts::icBracketLeftSave, 0, 17, 5},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Less#2 as range 9
      // closed e.Equal#2 as range 13
      // closed e.Greater#2 as range 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 (/11 {REMOVED TILE} )/12 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sort/4 } Tile{ AsIs: e.Less#2/9 } Tile{ HalfReuse: >/15 AsIs: e.Equal#2/13 HalfReuse: </16 HalfReuse: & Sort/19 AsIs: e.Greater#2/17 HalfReuse: >/20 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 16},
      {refalrts::icReinitFunc, 0, 0, 19},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 15, 20, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Sort_S2L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Sort_S2L2(
  "Sort$2\\2",
  scope_gen_Sort_S2L2::raa,
  scope_gen_Sort_S2L2::functions,
  scope_gen_Sort_S2L2::idents,
  scope_gen_Sort_S2L2::numbers,
  scope_gen_Sort_S2L2::strings
);
refalrts::RefalFunction& gen_Sort_S2L2 = descr_gen_Sort_S2L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Sort_S2L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Sort$2\2/4 (/7 (/11 e.Less#2/9 )/12 (/15 e.Equal#2/13 )/16 (/19 e.Greater#2/17 )/20 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Less#2 as range 9
  // closed e.Equal#2 as range 13
  // closed e.Greater#2 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 (/11 {REMOVED TILE} )/12 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sort/4 } Tile{ AsIs: e.Less#2/9 } Tile{ HalfReuse: >/15 AsIs: e.Equal#2/13 HalfReuse: </16 HalfReuse: & Sort/19 AsIs: e.Greater#2/17 HalfReuse: >/20 } Tile{ ]] }
  refalrts::update_name( context[4], & Sort );
  refalrts::reinit_close_call( context[15] );
  refalrts::reinit_open_call( context[16] );
  refalrts::reinit_name( context[19], & Sort );
  refalrts::reinit_close_call( context[20] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Sort_S2L2(func_gen_Sort_S2L2, "Sort$2\\2");
refalrts::RefalFunction& gen_Sort_S2L2 = descr_gen_Sort_S2L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Sort {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_Sort_S2L2,
      & gen_Sort_S2L1,
      & refalrts::create_closure,
      & Reduce,
      & Seq
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 30, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & Sort/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +6, 0, 0},
      //
      // </0 & Sort/4 >/1
      {refalrts::icSave, 0, 28, 2},
      {refalrts::icEmpty, 0, 0, 28},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Sort/4 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx e.idx
      // </0 & Sort/4 t.Pivot#1/5 e.Items#1/2 >/1
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.Items#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Items#1/2 } </7 & Seq/8 (/9 & Reduce/10 </11 & @create_closure@/12 & Sort$2\1/13 Tile{ AsIs: t.Pivot#1/5 } >/14 (/15 (/16 )/17 (/18 t.Pivot#1/5/19 )/21 (/22 )/23 )/24 )/25 & Sort$2\2/26 >/27 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icAllocFunc, 0, 5, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocFunc, 0, 4, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 3, 12},
      {refalrts::icAllocFunc, 0, 2, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
      {refalrts::icCopyEVar, 19, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
      {refalrts::icAllocFunc, 0, 1, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 27},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icLinkBrackets, 9, 25, 0},
      {refalrts::icLinkBrackets, 15, 24, 0},
      {refalrts::icLinkBrackets, 22, 23, 0},
      {refalrts::icLinkBrackets, 18, 21, 0},
      {refalrts::icLinkBrackets, 16, 17, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 14, 27, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icSpliceTile, 7, 13, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Sort

} // unnamed namespace

refalrts::RASLFunction descr_Sort(
  "Sort",
  scope_Sort::raa,
  scope_Sort::functions,
  scope_Sort::idents,
  scope_Sort::numbers,
  scope_Sort::strings
);
refalrts::RefalFunction& Sort = descr_Sort;

#else
static refalrts::FnResult func_Sort(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Sort/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    //
    // </0 & Sort/4 >/1
    context[28] = context[2];
    context[29] = context[3];
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Sort/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & Sort/4 t.Pivot#1/5 e.Items#1/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Items#1/2 } </7 & Seq/8 (/9 & Reduce/10 </11 & @create_closure@/12 & Sort$2\1/13 Tile{ AsIs: t.Pivot#1/5 } >/14 (/15 (/16 )/17 (/18 t.Pivot#1/5/19 )/21 (/22 )/23 )/24 )/25 & Sort$2\2/26 >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & Reduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], & gen_Sort_S2L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], & gen_Sort_S2L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[9], context[25] );
  refalrts::link_brackets( context[15], context[24] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[27] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Sort(func_Sort, "Sort");
refalrts::RefalFunction& Sort = descr_Sort;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Min_S1L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 10, 0, 0},
      //FAST GEN: t.$ t.$ s.$
      //GLOBAL GEN: t.$ t.$ s.$
      // </0 & Min$1\1/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // t.idx t.idx '<'
      // </0 & Min$1\1/4 t.X#1/5 t.Y#1/7 '<'/9 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 9},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Min$1\1/4 {REMOVED TILE} t.Y#1/7 '<'/9 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.X#1/5 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx t.idx s.idx
      // </0 & Min$1\1/4 t.X#1/5 t.Y#1/7 s.Other#2/9 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Min$1\1/4 t.X#1/5 {REMOVED TILE} s.Other#2/9 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Y#1/7 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Min_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Min_S1L1(
  "Min$1\\1",
  scope_gen_Min_S1L1::raa,
  scope_gen_Min_S1L1::functions,
  scope_gen_Min_S1L1::idents,
  scope_gen_Min_S1L1::numbers,
  scope_gen_Min_S1L1::strings
);
refalrts::RefalFunction& gen_Min_S1L1 = descr_gen_Min_S1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Min_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: t.$ t.$ s.$
  //GLOBAL GEN: t.$ t.$ s.$
  // </0 & Min$1\1/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // t.idx t.idx '<'
    // </0 & Min$1\1/4 t.X#1/5 t.Y#1/7 '<'/9 >/1
    if( ! refalrts::char_term( '<', context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Min$1\1/4 {REMOVED TILE} t.Y#1/7 '<'/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.X#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx s.idx
  // </0 & Min$1\1/4 t.X#1/5 t.Y#1/7 s.Other#2/9 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Min$1\1/4 t.X#1/5 {REMOVED TILE} s.Other#2/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Y#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Min_S1L1(func_gen_Min_S1L1, "Min$1\\1");
refalrts::RefalFunction& gen_Min_S1L1 = descr_gen_Min_S1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Min {
    static refalrts::RefalFunction *functions[] = {
      & Reduce,
      & Compare,
      & gen_Min_S1L1,
      & refalrts::create_closure,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 22, 0, 0},
      //FAST GEN: t.$ e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & Min/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // t.idx t.idx
      // </0 & Min/4 t.X#1/5 t.Y#1/7 >/1
      {refalrts::icSave, 0, 20, 2},
      {refalrts::ictVarLeftSave, 0, 7, 20},
      {refalrts::icEmpty, 0, 0, 20},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: t.X#1/5 AsIs: t.Y#1/7 AsIs: >/1 } </11 & @create_closure@/12 & Min$1\1/13 t.X#1/5/14 t.Y#1/7/16 >/18 >/19 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 4, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 3, 12},
      {refalrts::icAllocFunc, 0, 2, 13},
      {refalrts::icCopyEVar, 14, 5, 0},
      {refalrts::icCopyEVar, 16, 7, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 19, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx e.idx
      // </0 & Min/4 t.First#1/5 e.Tail#1/2 >/1
      // closed e.Tail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce/0 AsIs: & Min/4 AsIs: t.First#1/5 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icReinitFunc, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Min

} // unnamed namespace

refalrts::RASLFunction descr_Min(
  "Min",
  scope_Min::raa,
  scope_Min::functions,
  scope_Min::idents,
  scope_Min::numbers,
  scope_Min::strings
);
refalrts::RefalFunction& Min = descr_Min;

#else
static refalrts::FnResult func_Min(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Min/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // t.idx t.idx
    // </0 & Min/4 t.X#1/5 t.Y#1/7 >/1
    context[20] = context[2];
    context[21] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[20], context[21] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: t.X#1/5 AsIs: t.Y#1/7 AsIs: >/1 } </11 & @create_closure@/12 & Min$1\1/13 t.X#1/5/14 t.Y#1/7/16 >/18 >/19 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], & Fetch ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & gen_Min_S1L1 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Compare );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & Min/4 t.First#1/5 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce/0 AsIs: & Min/4 AsIs: t.First#1/5 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Reduce );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Min(func_Min, "Min");
refalrts::RefalFunction& Min = descr_Min;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Max_S1L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 10, 0, 0},
      //FAST GEN: t.$ t.$ s.$
      //GLOBAL GEN: t.$ t.$ s.$
      // </0 & Max$1\1/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // t.idx t.idx '>'
      // </0 & Max$1\1/4 t.X#1/5 t.Y#1/7 '>'/9 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('>'), 9},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Max$1\1/4 {REMOVED TILE} t.Y#1/7 '>'/9 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.X#1/5 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx t.idx s.idx
      // </0 & Max$1\1/4 t.X#1/5 t.Y#1/7 s.Other#2/9 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Max$1\1/4 t.X#1/5 {REMOVED TILE} s.Other#2/9 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Y#1/7 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Max_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Max_S1L1(
  "Max$1\\1",
  scope_gen_Max_S1L1::raa,
  scope_gen_Max_S1L1::functions,
  scope_gen_Max_S1L1::idents,
  scope_gen_Max_S1L1::numbers,
  scope_gen_Max_S1L1::strings
);
refalrts::RefalFunction& gen_Max_S1L1 = descr_gen_Max_S1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Max_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: t.$ t.$ s.$
  //GLOBAL GEN: t.$ t.$ s.$
  // </0 & Max$1\1/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // t.idx t.idx '>'
    // </0 & Max$1\1/4 t.X#1/5 t.Y#1/7 '>'/9 >/1
    if( ! refalrts::char_term( '>', context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Max$1\1/4 {REMOVED TILE} t.Y#1/7 '>'/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.X#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx s.idx
  // </0 & Max$1\1/4 t.X#1/5 t.Y#1/7 s.Other#2/9 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Max$1\1/4 t.X#1/5 {REMOVED TILE} s.Other#2/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Y#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Max_S1L1(func_gen_Max_S1L1, "Max$1\\1");
refalrts::RefalFunction& gen_Max_S1L1 = descr_gen_Max_S1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Max {
    static refalrts::RefalFunction *functions[] = {
      & Reduce,
      & Compare,
      & gen_Max_S1L1,
      & refalrts::create_closure,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 22, 0, 0},
      //FAST GEN: t.$ e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & Max/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // t.idx t.idx
      // </0 & Max/4 t.X#1/5 t.Y#1/7 >/1
      {refalrts::icSave, 0, 20, 2},
      {refalrts::ictVarLeftSave, 0, 7, 20},
      {refalrts::icEmpty, 0, 0, 20},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: t.X#1/5 AsIs: t.Y#1/7 AsIs: >/1 } </11 & @create_closure@/12 & Max$1\1/13 t.X#1/5/14 t.Y#1/7/16 >/18 >/19 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 4, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 3, 12},
      {refalrts::icAllocFunc, 0, 2, 13},
      {refalrts::icCopyEVar, 14, 5, 0},
      {refalrts::icCopyEVar, 16, 7, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 19, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx e.idx
      // </0 & Max/4 t.First#1/5 e.Tail#1/2 >/1
      // closed e.Tail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce/0 AsIs: & Max/4 AsIs: t.First#1/5 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icReinitFunc, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Max

} // unnamed namespace

refalrts::RASLFunction descr_Max(
  "Max",
  scope_Max::raa,
  scope_Max::functions,
  scope_Max::idents,
  scope_Max::numbers,
  scope_Max::strings
);
refalrts::RefalFunction& Max = descr_Max;

#else
static refalrts::FnResult func_Max(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Max/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // t.idx t.idx
    // </0 & Max/4 t.X#1/5 t.Y#1/7 >/1
    context[20] = context[2];
    context[21] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[20], context[21] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: t.X#1/5 AsIs: t.Y#1/7 AsIs: >/1 } </11 & @create_closure@/12 & Max$1\1/13 t.X#1/5/14 t.Y#1/7/16 >/18 >/19 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], & Fetch ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & gen_Max_S1L1 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Compare );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & Max/4 t.First#1/5 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce/0 AsIs: & Max/4 AsIs: t.First#1/5 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Reduce );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Max(func_Max, "Max");
refalrts::RefalFunction& Max = descr_Max;

#endif

//End of file
//FROM Library
