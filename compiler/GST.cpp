// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GST(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AlignEnumExprs(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DeEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_DeEnum_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoModify(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoOverlapOffsets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Enum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Enum_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FilterOverlapped(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_FilterOverlapped_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_FilterOverlapped_S1L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FilterPatternPos(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FilterResultPos(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FindHeavyTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_FindHeavyTile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_FindHeavyTile_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FoldTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FoldTile_EEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FoldTileW(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_FoldTileW_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_GST_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_GST_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_GST_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GlueNextTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GlueTiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Modify(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Modify_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult OverlapChain(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult OverlapItem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RejectTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_RejectTile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_RejectTile_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReplaceTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult TileCandidates(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_TileCandidates_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ZipItems(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #AsIs
template <typename SREFAL_PARAM_INT>
struct ident_AsIs {
  static const char *name() {
    return "AsIs";
  }
};

// identifier #AsIsE
template <typename SREFAL_PARAM_INT>
struct ident_AsIsE {
  static const char *name() {
    return "AsIsE";
  }
};

// identifier #HalfReuse
template <typename SREFAL_PARAM_INT>
struct ident_HalfReuse {
  static const char *name() {
    return "HalfReuse";
  }
};

// identifier #LEFT-EDGE
template <typename SREFAL_PARAM_INT>
struct ident_LEFT_EDGE {
  static const char *name() {
    return "LEFT-EDGE";
  }
};

// identifier #NoOverlap
template <typename SREFAL_PARAM_INT>
struct ident_NoOverlap {
  static const char *name() {
    return "NoOverlap";
  }
};

// identifier #Num
template <typename SREFAL_PARAM_INT>
struct ident_Num {
  static const char *name() {
    return "Num";
  }
};

// identifier #RIGHT-EDGE
template <typename SREFAL_PARAM_INT>
struct ident_RIGHT_EDGE {
  static const char *name() {
    return "RIGHT-EDGE";
  }
};

// identifier #RemovedTile
template <typename SREFAL_PARAM_INT>
struct ident_RemovedTile {
  static const char *name() {
    return "RemovedTile";
  }
};

// identifier #Reuse
template <typename SREFAL_PARAM_INT>
struct ident_Reuse {
  static const char *name() {
    return "Reuse";
  }
};

// identifier #Tile
template <typename SREFAL_PARAM_INT>
struct ident_Tile {
  static const char *name() {
    return "Tile";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

static refalrts::FnResult gen_GST_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Enum, "Enum" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GST\1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 e.Tiles#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    // closed e.Tiles#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/13 Tile{ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Enum/7 AsIs: e.Pattern#1/5 HalfReuse: >/8 HalfReuse: )/11 } (/14 </15 & Enum/16 Tile{ AsIs: e.Result#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 } )/17 Tile{ AsIs: e.Tiles#2/2 } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 0, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 13, 17, 0},
    {refalrts::icLinkBrackets, 14, 12, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icLinkBrackets, 0, 11, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 14, 16, 0},
    {refalrts::icSpliceTile, 0, 11, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & GST\1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 e.Tiles#2/2 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9
  // closed e.Tiles#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 Tile{ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Enum/7 AsIs: e.Pattern#1/5 HalfReuse: >/8 HalfReuse: )/11 } (/14 </15 & Enum/16 Tile{ AsIs: e.Result#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 } )/17 Tile{ AsIs: e.Tiles#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], Enum, "Enum" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], Enum, "Enum" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[11] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::link_brackets( context[14], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_GST_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ReplaceTile, "ReplaceTile" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GST\2/4 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 t.Tile#2/17 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 13, 5},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Pattern#2 as range 9
    // closed e.Result#2 as range 13
    {refalrts::ictVarLeftSave, 0, 17, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ReplaceTile/7 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 } Tile{ AsIs: t.Tile#2/17 AsIs: >/1 } Tile{ AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icLinkBrackets, 0, 8, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 17, 1, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & GST\2/4 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 t.Tile#2/17 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 9
  // closed e.Result#2 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ReplaceTile/7 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 } Tile{ AsIs: t.Tile#2/17 AsIs: >/1 } Tile{ AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ReplaceTile, "ReplaceTile" );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_GST_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DeEnum, "DeEnum" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GST\3/4 (/7 (/11 e.Trash#2/9 )/12 (/15 e.MarkedResult#2/13 )/16 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 13, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Trash#2 as range 9
    // closed e.MarkedResult#2 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & DeEnum/7 } Tile{ AsIs: e.Trash#2/9 } Tile{ AsIs: >/1 } )/17 Tile{ AsIs: (/11 } Tile{ HalfReuse: </12 HalfReuse: & DeEnum/15 AsIs: e.MarkedResult#2/13 HalfReuse: >/16 AsIs: )/8 } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icReinitFunc, 0, 0, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icLinkBrackets, 11, 8, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icLinkBrackets, 0, 17, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 12, 8, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & GST\3/4 (/7 (/11 e.Trash#2/9 )/12 (/15 e.MarkedResult#2/13 )/16 )/8 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Trash#2 as range 9
  // closed e.MarkedResult#2 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & DeEnum/7 } Tile{ AsIs: e.Trash#2/9 } Tile{ AsIs: >/1 } )/17 Tile{ AsIs: (/11 } Tile{ HalfReuse: </12 HalfReuse: & DeEnum/15 AsIs: e.MarkedResult#2/13 HalfReuse: >/16 AsIs: )/8 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], DeEnum, "DeEnum" );
  refalrts::reinit_open_call( context[12] );
  refalrts::reinit_name( context[15], DeEnum, "DeEnum" );
  refalrts::reinit_close_call( context[16] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[0], context[17] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult GST(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { gen_GST_L3, "GST\\3" },
    { gen_GST_L2, "GST\\2" },
    { Reduce, "Reduce" },
    { gen_GST_L1, "GST\\1" },
    { refalrts::create_closure, "@create_closure@" },
    { FilterOverlapped, "FilterOverlapped" },
    { TileCandidates, "TileCandidates" },
    { Seq, "Seq" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GST/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 HalfReuse: </1 } & Seq/13 & TileCandidates/14 & FilterOverlapped/15 </16 & @create_closure@/17 & GST\1/18 (/19 e.Pattern#1/5/20 )/22 (/23 e.Result#1/9/24 )/26 >/27 (/28 & Reduce/29 & GST\2/30 )/31 & GST\3/32 >/33 >/34 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 8, 13},
    {refalrts::icAllocFunc, 0, 7, 14},
    {refalrts::icAllocFunc, 0, 6, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 5, 17},
    {refalrts::icAllocFunc, 0, 4, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icCopyEVar, 20, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icCopyEVar, 24, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icAllocFunc, 0, 3, 29},
    {refalrts::icAllocFunc, 0, 2, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icAllocFunc, 0, 1, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icLinkBrackets, 28, 31, 0},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 34, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & GST/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 HalfReuse: </1 } & Seq/13 & TileCandidates/14 & FilterOverlapped/15 </16 & @create_closure@/17 & GST\1/18 (/19 e.Pattern#1/5/20 )/22 (/23 e.Result#1/9/24 )/26 >/27 (/28 & Reduce/29 & GST\2/30 )/31 & GST\3/32 >/33 >/34 Tile{ ]] }
  if( ! refalrts::alloc_name( context[13], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], TileCandidates, "TileCandidates" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], FilterOverlapped, "FilterOverlapped" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], refalrts::create_closure, "@create_closure@" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], gen_GST_L1, "GST\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[20], context[21], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[24], context[25], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], Reduce, "Reduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], gen_GST_L2, "GST\\2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], gen_GST_L3, "GST\\3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[28], context[31] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[23], context[26] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[34] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Enum_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Num<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Enum\1/4 s.Num#2/5 t.Item#2/6 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </8 & Inc/9 s.Num#2/5/10 >/11 Tile{ HalfReuse: (/0 HalfReuse: # Num/4 AsIs: s.Num#2/5 AsIs: t.Item#2/6 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icAllocFunc, 0, 0, 9},
    {refalrts::icCopySTVar, 10, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & Enum\1/4 s.Num#2/5 t.Item#2/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & Inc/9 s.Num#2/5/10 >/11 Tile{ HalfReuse: (/0 HalfReuse: # Num/4 AsIs: s.Num#2/5 AsIs: t.Item#2/6 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_Num<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Enum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DelAccumulator, "DelAccumulator" },
    { gen_Enum_L1, "Enum\\1" },
    { MapReduce, "MapReduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Enum/4 e.Items#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Items#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DelAccumulator/4 } </5 & MapReduce/6 & Enum\1/7 0/8 Tile{ AsIs: e.Items#1/2 } >/9 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 2, 6},
    {refalrts::icAllocFunc, 0, 1, 7},
    {refalrts::icAllocInt, 0, 0, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 5, 8, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & Enum/4 e.Items#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Items#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DelAccumulator/4 } </5 & MapReduce/6 & Enum\1/7 0/8 Tile{ AsIs: e.Items#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], gen_Enum_L1, "Enum\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[8], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DelAccumulator, "DelAccumulator" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_DeEnum_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Tile<int>::name,
    & ident_RemovedTile<int>::name,
    & ident_Num<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: t.$
    //GLOBAL GEN: t.$
    // </0 & DeEnum\1/4 t.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // ( # Num s.idx t.idx )
    // </0 & DeEnum\1/4 (/5 # Num/9 s.Num#2/10 t.Item#2/11 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 2, 7},
    {refalrts::icsVarLeft, 0, 10, 7},
    {refalrts::ictVarLeftSave, 0, 11, 7},
    {refalrts::icEmpty, 0, 0, 7},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & DeEnum\1/4 (/5 # Num/9 s.Num#2/10 {REMOVED TILE} )/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#2/11 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    // # RemovedTile
    // </0 & DeEnum\1/4 # RemovedTile/5 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & DeEnum\1/4 # RemovedTile/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # RemovedTile/1 ]] }
    {refalrts::icReinitIdent, 0, 1, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( # Tile e.idx )
    // </0 & DeEnum\1/4 (/5 # Tile/9 e.Tile#2/7 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 0, 7},
    // closed e.Tile#2 as range 7
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & DeEnum\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Tile/9 AsIs: e.Tile#2/7 AsIs: )/6 } Tile{ ]] }
    {refalrts::icLinkBrackets, 5, 6, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & DeEnum\1/4 t.idx#0/5 >/1
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
    refalrts::start_sentence();
    // ( # Num s.idx t.idx )
    // </0 & DeEnum\1/4 (/5 # Num/9 s.Num#2/10 t.Item#2/11 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Num<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DeEnum\1/4 (/5 # Num/9 s.Num#2/10 {REMOVED TILE} )/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#2/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # RemovedTile
    // </0 & DeEnum\1/4 # RemovedTile/5 >/1
    if( ! refalrts::ident_term(  & ident_RemovedTile<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DeEnum\1/4 # RemovedTile/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # RemovedTile/1 ]] }
    refalrts::reinit_ident( context[1], & ident_RemovedTile<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( # Tile e.idx )
  // </0 & DeEnum\1/4 (/5 # Tile/9 e.Tile#2/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[7], context[8] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tile#2 as range 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DeEnum\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Tile/9 AsIs: e.Tile#2/7 AsIs: )/6 } Tile{ ]] }
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DeEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_DeEnum_L1, "DeEnum\\1" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & DeEnum/4 e.Items#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Items#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & DeEnum\1/4 AsIs: e.Items#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & DeEnum/4 e.Items#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Items#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & DeEnum\1/4 AsIs: e.Items#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], gen_DeEnum_L1, "DeEnum\\1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_TileCandidates_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoOverlapOffsets, "DoOverlapOffsets" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & TileCandidates\1/4 (/7 e.AlignedPattern#2/5 t.Last#2/15 )/8 (/11 t.First#2/13 e.AlignedResult#2/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeftSave, 0, 13, 9},
    // closed e.AlignedResult#2 as range 9
    {refalrts::ictVarRightSave, 0, 15, 5},
    // closed e.AlignedPattern#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoOverlapOffsets/4 AsIs: (/7 } Tile{ AsIs: e.AlignedPattern#2/5 } )/17 (/18 Tile{ AsIs: t.Last#2/15 AsIs: )/8 AsIs: (/11 AsIs: t.First#2/13 } )/19 (/20 Tile{ AsIs: e.AlignedResult#2/9 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 20, 12, 0},
    {refalrts::icLinkBrackets, 11, 19, 0},
    {refalrts::icLinkBrackets, 18, 8, 0},
    {refalrts::icLinkBrackets, 7, 17, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 19, 20, 0},
    {refalrts::icSpliceTile, 15, 14, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & TileCandidates\1/4 (/7 e.AlignedPattern#2/5 t.Last#2/15 )/8 (/11 t.First#2/13 e.AlignedResult#2/9 )/12 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.AlignedResult#2 as range 9
  context[16] = refalrts::tvar_right( context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.AlignedPattern#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoOverlapOffsets/4 AsIs: (/7 } Tile{ AsIs: e.AlignedPattern#2/5 } )/17 (/18 Tile{ AsIs: t.Last#2/15 AsIs: )/8 AsIs: (/11 AsIs: t.First#2/13 } )/19 (/20 Tile{ AsIs: e.AlignedResult#2/9 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoOverlapOffsets, "DoOverlapOffsets" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[20], context[12] );
  refalrts::link_brackets( context[11], context[19] );
  refalrts::link_brackets( context[18], context[8] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[15], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult TileCandidates(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { gen_TileCandidates_L1, "TileCandidates\\1" },
    { AlignEnumExprs, "AlignEnumExprs" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & TileCandidates/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & AlignEnumExprs/13 0/14 (/15 )/16 (/17 Tile{ AsIs: e.Pattern#1/5 } )/18 (/19 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } & TileCandidates\1/20 >/21 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 2, 13},
    {refalrts::icAllocInt, 0, 0, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocFunc, 0, 1, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 19, 8, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 13, 17, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & TileCandidates/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & AlignEnumExprs/13 0/14 (/15 )/16 (/17 Tile{ AsIs: e.Pattern#1/5 } )/18 (/19 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } & TileCandidates\1/20 >/21 Tile{ ]] }
  if( ! refalrts::alloc_name( context[13], AlignEnumExprs, "AlignEnumExprs" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[14], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], gen_TileCandidates_L1, "TileCandidates\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[19], context[8] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AlignEnumExprs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { AlignEnumExprs, "AlignEnumExprs" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: s.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
    //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
    // </0 & AlignEnumExprs/4 s.idx#0/21 (/19 e.idxVB#0/17 )/20 (/15 e.idxVTB#0/13 )/16 (/11 e.idxVTTB#0/9 )/12 (/7 e.idxVTTTB#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    {refalrts::icBracketRightSave, 0, 13, 2},
    {refalrts::icBracketRightSave, 0, 17, 2},
    // closed e.idxVB#0 as range 17
    // closed e.idxVTB#0 as range 13
    // closed e.idxVTTB#0 as range 9
    // closed e.idxVTTTB#0 as range 5
    {refalrts::icsVarLeft, 0, 21, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +39, 0, 0},
    // s.idx ( e.idx ) ( t.idx e.idx ) ( e.idx ) ( t.idx e.idx )
    // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/17 )/20 (/15 t.PatternItem#1/22 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 t.ResultItem#1/24 e.Result#1/5 )/8 >/1
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    {refalrts::icSave, 0, 35, 13},
    {refalrts::ictVarLeftSave, 0, 22, 35},
    // closed e.Pattern#1 as range 35(13)
    {refalrts::icSave, 0, 37, 5},
    {refalrts::ictVarLeftSave, 0, 24, 37},
    // closed e.Result#1 as range 37(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AlignEnumExprs/4 } </26 & Inc/27 Tile{ AsIs: s.Num#1/21 } >/28 Tile{ AsIs: (/19 AsIs: e.ScannedPattern#1/17 HalfReuse: (/20 HalfReuse: s.Num1 #21/15 AsIs: t.PatternItem#1/22 } )/29 )/30 (/31 Tile{ AsIs: e.Pattern#1/35(13) } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 HalfReuse: (/12 HalfReuse: s.Num1 #21/7 AsIs: t.ResultItem#1/24 } )/32 )/33 (/34 Tile{ AsIs: e.Result#1/37(5) } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocFunc, 0, 0, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icReinitSVar, 0, 21, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitSVar, 0, 21, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 34, 8, 0},
    {refalrts::icLinkBrackets, 11, 33, 0},
    {refalrts::icLinkBrackets, 12, 32, 0},
    {refalrts::icLinkBrackets, 31, 16, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icLinkBrackets, 20, 29, 0},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceTile, 32, 34, 0},
    {refalrts::icSpliceTile, 16, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceTile, 29, 31, 0},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +39, 0, 0},
    // s.idx ( e.idx ) ( ) ( e.idx ) ( t.idx e.idx )
    // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/17 )/20 (/15 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 t.ResultItem#1/22 e.Result#1/5 )/8 >/1
    {refalrts::icSave, 0, 35, 13},
    {refalrts::icEmpty, 0, 0, 35},
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    {refalrts::icSave, 0, 37, 5},
    {refalrts::ictVarLeftSave, 0, 22, 37},
    // closed e.Result#1 as range 37(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </24 & AlignEnumExprs/25 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/21 HalfReuse: >/19 } (/26 Tile{ AsIs: e.ScannedPattern#1/17 } (/27 s.Num#1/21/28 '*'/29 )/30 Tile{ AsIs: )/20 AsIs: (/15 AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 HalfReuse: (/12 HalfReuse: s.Num1 #21/7 AsIs: t.ResultItem#1/22 } )/31 )/32 (/33 Tile{ AsIs: e.Result#1/37(5) } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icAllocFunc, 0, 1, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icCopySTVar, 28, 21, 0},
    {refalrts::icAllocChar, 0, '*', 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitSVar, 0, 21, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icLinkBrackets, 33, 8, 0},
    {refalrts::icLinkBrackets, 11, 32, 0},
    {refalrts::icLinkBrackets, 12, 31, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 26, 20, 0},
    {refalrts::icLinkBrackets, 27, 30, 0},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceTile, 31, 33, 0},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icSpliceTile, 27, 30, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icSpliceTile, 0, 19, 0},
    {refalrts::icSpliceTile, 24, 25, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +39, 0, 0},
    // s.idx ( e.idx ) ( t.idx e.idx ) ( e.idx ) ( )
    // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/17 )/20 (/15 t.PatternItem#1/22 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 )/8 >/1
    {refalrts::icSave, 0, 35, 5},
    {refalrts::icEmpty, 0, 0, 35},
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    {refalrts::icSave, 0, 37, 13},
    {refalrts::ictVarLeftSave, 0, 22, 37},
    // closed e.Pattern#1 as range 37(13)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AlignEnumExprs/4 } </24 & Inc/25 Tile{ AsIs: s.Num#1/21 } >/26 Tile{ AsIs: (/19 AsIs: e.ScannedPattern#1/17 HalfReuse: (/20 HalfReuse: s.Num1 #21/15 AsIs: t.PatternItem#1/22 } )/27 Tile{ AsIs: )/16 AsIs: (/11 } Tile{ AsIs: e.Pattern#1/37(13) } )/28 (/29 Tile{ AsIs: e.ScannedResult#1/9 } (/30 s.Num#1/21/31 '*'/32 )/33 Tile{ AsIs: )/12 AsIs: (/7 AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icAllocFunc, 0, 0, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icCopySTVar, 31, 21, 0},
    {refalrts::icAllocChar, 0, '*', 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icReinitSVar, 0, 21, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 29, 12, 0},
    {refalrts::icLinkBrackets, 30, 33, 0},
    {refalrts::icLinkBrackets, 11, 28, 0},
    {refalrts::icLinkBrackets, 19, 16, 0},
    {refalrts::icLinkBrackets, 20, 27, 0},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 30, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 28, 29, 0},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceTile, 16, 11, 0},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceTile, 24, 25, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx ( e.idx ) ( ) ( e.idx ) ( )
    // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/17 )/20 (/15 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 )/8 >/1
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} & AlignEnumExprs/4 s.Num#1/21 (/19 {REMOVED TILE} )/20 (/15 {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.ScannedPattern#1/17 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 AsIs: )/12 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 0, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 16, 12, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: s.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
  // </0 & AlignEnumExprs/4 s.idx#0/21 (/19 e.idxVB#0/17 )/20 (/15 e.idxVTB#0/13 )/16 (/11 e.idxVTTB#0/9 )/12 (/7 e.idxVTTTB#0/5 )/8 >/1
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
  // closed e.idxVB#0 as range 17
  // closed e.idxVTB#0 as range 13
  // closed e.idxVTTB#0 as range 9
  // closed e.idxVTTTB#0 as range 5
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) ( t.idx e.idx ) ( e.idx ) ( t.idx e.idx )
    // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/17 )/20 (/15 t.PatternItem#1/22 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 t.ResultItem#1/24 e.Result#1/5 )/8 >/1
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    context[35] = context[13];
    context[36] = context[14];
    context[23] = refalrts::tvar_left( context[22], context[35], context[36] );
    if( ! context[23] )
      continue;
    // closed e.Pattern#1 as range 35(13)
    context[37] = context[5];
    context[38] = context[6];
    context[25] = refalrts::tvar_left( context[24], context[37], context[38] );
    if( ! context[25] )
      continue;
    // closed e.Result#1 as range 37(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AlignEnumExprs/4 } </26 & Inc/27 Tile{ AsIs: s.Num#1/21 } >/28 Tile{ AsIs: (/19 AsIs: e.ScannedPattern#1/17 HalfReuse: (/20 HalfReuse: s.Num1 #21/15 AsIs: t.PatternItem#1/22 } )/29 )/30 (/31 Tile{ AsIs: e.Pattern#1/35(13) } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 HalfReuse: (/12 HalfReuse: s.Num1 #21/7 AsIs: t.ResultItem#1/24 } )/32 )/33 (/34 Tile{ AsIs: e.Result#1/37(5) } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[20] );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_svar( context[7], context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[34], context[8] );
    refalrts::link_brackets( context[11], context[33] );
    refalrts::link_brackets( context[12], context[32] );
    refalrts::link_brackets( context[31], context[16] );
    refalrts::link_brackets( context[19], context[30] );
    refalrts::link_brackets( context[20], context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[16], context[25] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) ( ) ( e.idx ) ( t.idx e.idx )
    // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/17 )/20 (/15 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 t.ResultItem#1/22 e.Result#1/5 )/8 >/1
    context[35] = context[13];
    context[36] = context[14];
    if( ! refalrts::empty_seq( context[35], context[36] ) )
      continue;
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    context[37] = context[5];
    context[38] = context[6];
    context[23] = refalrts::tvar_left( context[22], context[37], context[38] );
    if( ! context[23] )
      continue;
    // closed e.Result#1 as range 37(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </24 & AlignEnumExprs/25 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/21 HalfReuse: >/19 } (/26 Tile{ AsIs: e.ScannedPattern#1/17 } (/27 s.Num#1/21/28 '*'/29 )/30 Tile{ AsIs: )/20 AsIs: (/15 AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 HalfReuse: (/12 HalfReuse: s.Num1 #21/7 AsIs: t.ResultItem#1/22 } )/31 )/32 (/33 Tile{ AsIs: e.Result#1/37(5) } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], AlignEnumExprs, "AlignEnumExprs" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[28], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], '*' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_close_call( context[19] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_svar( context[7], context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[33], context[8] );
    refalrts::link_brackets( context[11], context[32] );
    refalrts::link_brackets( context[12], context[31] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[26], context[20] );
    refalrts::link_brackets( context[27], context[30] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[27], context[30] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[0], context[19] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) ( t.idx e.idx ) ( e.idx ) ( )
    // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/17 )/20 (/15 t.PatternItem#1/22 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 )/8 >/1
    context[35] = context[5];
    context[36] = context[6];
    if( ! refalrts::empty_seq( context[35], context[36] ) )
      continue;
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    context[37] = context[13];
    context[38] = context[14];
    context[23] = refalrts::tvar_left( context[22], context[37], context[38] );
    if( ! context[23] )
      continue;
    // closed e.Pattern#1 as range 37(13)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AlignEnumExprs/4 } </24 & Inc/25 Tile{ AsIs: s.Num#1/21 } >/26 Tile{ AsIs: (/19 AsIs: e.ScannedPattern#1/17 HalfReuse: (/20 HalfReuse: s.Num1 #21/15 AsIs: t.PatternItem#1/22 } )/27 Tile{ AsIs: )/16 AsIs: (/11 } Tile{ AsIs: e.Pattern#1/37(13) } )/28 (/29 Tile{ AsIs: e.ScannedResult#1/9 } (/30 s.Num#1/21/31 '*'/32 )/33 Tile{ AsIs: )/12 AsIs: (/7 AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], '*' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[20] );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[29], context[12] );
    refalrts::link_brackets( context[30], context[33] );
    refalrts::link_brackets( context[11], context[28] );
    refalrts::link_brackets( context[19], context[16] );
    refalrts::link_brackets( context[20], context[27] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[30], context[33] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[16], context[11] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx ( e.idx ) ( ) ( e.idx ) ( )
  // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/17 )/20 (/15 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedPattern#1 as range 17
  // closed e.ScannedResult#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & AlignEnumExprs/4 s.Num#1/21 (/19 {REMOVED TILE} )/20 (/15 {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.ScannedPattern#1/17 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoOverlapOffsets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoOverlapOffsets, "DoOverlapOffsets" },
    { OverlapChain, "OverlapChain" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
    //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
    // </0 & DoOverlapOffsets/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 >/1
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
    {refalrts::icOnFailGoTo, +40, 0, 0},
    // ( e.idx t.idx ) ( e.idx ) ( e.idx ) ( t.idx e.idx )
    // </0 & DoOverlapOffsets/4 (/7 e.Pattern#1/5 t.Last#1/23 )/8 (/11 e.OverlappedPattern#1/9 )/12 (/15 e.OverlappedResult#1/13 )/16 (/19 t.First#1/21 e.Result#1/17 )/20 >/1
    // closed e.OverlappedPattern#1 as range 9
    // closed e.OverlappedResult#1 as range 13
    {refalrts::icSave, 0, 36, 17},
    {refalrts::ictVarLeftSave, 0, 21, 36},
    // closed e.Result#1 as range 36(17)
    {refalrts::icSave, 0, 38, 5},
    {refalrts::ictVarRightSave, 0, 23, 38},
    // closed e.Pattern#1 as range 38(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: & OverlapChain/8 AsIs: (/11 AsIs: e.OverlappedPattern#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.OverlappedResult#1/13 AsIs: )/16 HalfReuse: >/19 } Tile{ AsIs: </0 AsIs: & DoOverlapOffsets/4 AsIs: (/7 } Tile{ AsIs: e.Pattern#1/38(5) } )/26 (/27 Tile{ AsIs: t.Last#1/23 } e.OverlappedPattern#1/9/28 )/30 (/31 e.OverlappedResult#1/13/32 Tile{ AsIs: t.First#1/21 } )/34 (/35 Tile{ AsIs: e.Result#1/36(17) } Tile{ AsIs: )/20 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icCopyEVar, 28, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icCopyEVar, 32, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icReinitFunc, 0, 1, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 35, 20, 0},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icLinkBrackets, 27, 30, 0},
    {refalrts::icLinkBrackets, 7, 26, 0},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceTile, 34, 35, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 32, 33, 0},
    {refalrts::icSpliceTile, 30, 31, 0},
    {refalrts::icSpliceTile, 28, 29, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceTile, 0, 7, 0},
    {refalrts::icSpliceTile, 8, 19, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +40, 0, 0},
    // ( ) ( e.idx t.idx ) ( t.idx e.idx ) ( )
    // </0 & DoOverlapOffsets/4 (/7 )/8 (/11 e.OverlappedPattern#1/9 t.Last#1/23 )/12 (/15 t.First#1/21 e.OverlappedResult#1/13 )/16 (/19 )/20 >/1
    {refalrts::icSave, 0, 36, 5},
    {refalrts::icEmpty, 0, 0, 36},
    {refalrts::icSave, 0, 38, 17},
    {refalrts::icEmpty, 0, 0, 38},
    {refalrts::icSave, 0, 40, 13},
    {refalrts::ictVarLeftSave, 0, 21, 40},
    // closed e.OverlappedResult#1 as range 40(13)
    {refalrts::icSave, 0, 42, 9},
    {refalrts::ictVarRightSave, 0, 23, 42},
    // closed e.OverlappedPattern#1 as range 42(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OverlapChain/8 AsIs: (/11 AsIs: e.OverlappedPattern#1/42(9) AsIs: t.Last#1/23 AsIs: )/12 AsIs: (/15 AsIs: t.First#1/21 AsIs: e.OverlappedResult#1/40(13) AsIs: )/16 HalfReuse: >/19 HalfReuse: </20 HalfReuse: & DoOverlapOffsets/1 } Tile{ HalfReuse: (/0 HalfReuse: )/4 } (/25 e.OverlappedPattern#1/42(9)/26 )/28 (/29 e.OverlappedResult#1/40(13)/30 )/32 (/33 )/34 >/35 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icCopyEVar, 26, 42, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icCopyEVar, 30, 40, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icReinitFunc, 0, 0, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icLinkBrackets, 25, 28, 0},
    {refalrts::icLinkBrackets, 0, 4, 0},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 25, 35, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 1, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( ) ( ) ( ) ( )
    // </0 & DoOverlapOffsets/4 (/7 )/8 (/11 )/12 (/15 )/16 (/19 )/20 >/1
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icEmpty, 0, 0, 17},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & DoOverlapOffsets/4 (/7 )/8 (/11 )/12 (/15 )/16 (/19 )/20 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
  // </0 & DoOverlapOffsets/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 >/1
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
    refalrts::start_sentence();
    // ( e.idx t.idx ) ( e.idx ) ( e.idx ) ( t.idx e.idx )
    // </0 & DoOverlapOffsets/4 (/7 e.Pattern#1/5 t.Last#1/23 )/8 (/11 e.OverlappedPattern#1/9 )/12 (/15 e.OverlappedResult#1/13 )/16 (/19 t.First#1/21 e.Result#1/17 )/20 >/1
    // closed e.OverlappedPattern#1 as range 9
    // closed e.OverlappedResult#1 as range 13
    context[36] = context[17];
    context[37] = context[18];
    context[22] = refalrts::tvar_left( context[21], context[36], context[37] );
    if( ! context[22] )
      continue;
    // closed e.Result#1 as range 36(17)
    context[38] = context[5];
    context[39] = context[6];
    context[24] = refalrts::tvar_right( context[23], context[38], context[39] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 38(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: & OverlapChain/8 AsIs: (/11 AsIs: e.OverlappedPattern#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.OverlappedResult#1/13 AsIs: )/16 HalfReuse: >/19 } Tile{ AsIs: </0 AsIs: & DoOverlapOffsets/4 AsIs: (/7 } Tile{ AsIs: e.Pattern#1/38(5) } )/26 (/27 Tile{ AsIs: t.Last#1/23 } e.OverlappedPattern#1/9/28 )/30 (/31 e.OverlappedResult#1/13/32 Tile{ AsIs: t.First#1/21 } )/34 (/35 Tile{ AsIs: e.Result#1/36(17) } Tile{ AsIs: )/20 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[28], context[29], context[9], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[32], context[33], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], OverlapChain, "OverlapChain" );
    refalrts::reinit_close_call( context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[35], context[20] );
    refalrts::link_brackets( context[31], context[34] );
    refalrts::link_brackets( context[27], context[30] );
    refalrts::link_brackets( context[7], context[26] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[19] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ) ( e.idx t.idx ) ( t.idx e.idx ) ( )
    // </0 & DoOverlapOffsets/4 (/7 )/8 (/11 e.OverlappedPattern#1/9 t.Last#1/23 )/12 (/15 t.First#1/21 e.OverlappedResult#1/13 )/16 (/19 )/20 >/1
    context[36] = context[5];
    context[37] = context[6];
    if( ! refalrts::empty_seq( context[36], context[37] ) )
      continue;
    context[38] = context[17];
    context[39] = context[18];
    if( ! refalrts::empty_seq( context[38], context[39] ) )
      continue;
    context[40] = context[13];
    context[41] = context[14];
    context[22] = refalrts::tvar_left( context[21], context[40], context[41] );
    if( ! context[22] )
      continue;
    // closed e.OverlappedResult#1 as range 40(13)
    context[42] = context[9];
    context[43] = context[10];
    context[24] = refalrts::tvar_right( context[23], context[42], context[43] );
    if( ! context[24] )
      continue;
    // closed e.OverlappedPattern#1 as range 42(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OverlapChain/8 AsIs: (/11 AsIs: e.OverlappedPattern#1/42(9) AsIs: t.Last#1/23 AsIs: )/12 AsIs: (/15 AsIs: t.First#1/21 AsIs: e.OverlappedResult#1/40(13) AsIs: )/16 HalfReuse: >/19 HalfReuse: </20 HalfReuse: & DoOverlapOffsets/1 } Tile{ HalfReuse: (/0 HalfReuse: )/4 } (/25 e.OverlappedPattern#1/42(9)/26 )/28 (/29 e.OverlappedResult#1/40(13)/30 )/32 (/33 )/34 >/35 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[42], context[43]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[30], context[31], context[40], context[41]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], OverlapChain, "OverlapChain" );
    refalrts::reinit_close_call( context[19] );
    refalrts::reinit_open_call( context[20] );
    refalrts::reinit_name( context[1], DoOverlapOffsets, "DoOverlapOffsets" );
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[33], context[34] );
    refalrts::link_brackets( context[29], context[32] );
    refalrts::link_brackets( context[25], context[28] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[35] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( ) ( ) ( ) ( )
  // </0 & DoOverlapOffsets/4 (/7 )/8 (/11 )/12 (/15 )/16 (/19 )/20 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoOverlapOffsets/4 (/7 )/8 (/11 )/12 (/15 )/16 (/19 )/20 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult OverlapChain(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ZipItems, "ZipItems" },
    { GlueTiles, "GlueTiles" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & OverlapChain/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & GlueTiles/14 Tile{ AsIs: </0 Reuse: & ZipItems/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } >/15 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 1, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & OverlapChain/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & GlueTiles/14 Tile{ AsIs: </0 Reuse: & ZipItems/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } >/15 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], GlueTiles, "GlueTiles" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ZipItems, "ZipItems" );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ZipItems(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { OverlapItem, "OverlapItem" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ )
    //GLOBAL GEN: ( e.$ ) ( e.$ )
    // </0 & ZipItems/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    {refalrts::icOnFailGoTo, +35, 0, 0},
    // ( ( s.idx t.idx ) e.idx ) ( ( s.idx t.idx ) e.idx )
    // </0 & ZipItems/4 (/7 (/15 s.CurIndexP#1/21 t.PatternItem#1/23 )/16 e.Pattern#1/5 )/8 (/11 (/19 s.CurIndexR#1/22 t.ResultItem#1/25 )/20 e.Result#1/9 )/12 >/1
    {refalrts::icSave, 0, 29, 5},
    {refalrts::icBracketLeftSave, 0, 13, 29},
    {refalrts::icSave, 0, 31, 9},
    {refalrts::icBracketLeftSave, 0, 17, 31},
    // closed e.Pattern#1 as range 29(5)
    // closed e.Result#1 as range 31(9)
    {refalrts::icsVarLeft, 0, 21, 13},
    {refalrts::icsVarLeft, 0, 22, 17},
    {refalrts::ictVarLeftSave, 0, 23, 13},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::ictVarLeftSave, 0, 25, 17},
    {refalrts::icEmpty, 0, 0, 17},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: s.CurIndexP1 #21/19 AsIs: s.CurIndexR#1/22 } </27 & OverlapItem/28 Tile{ AsIs: t.PatternItem#1/23 } Tile{ AsIs: t.ResultItem#1/25 } Tile{ HalfReuse: >/15 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ZipItems/4 AsIs: (/7 } Tile{ AsIs: e.Pattern#1/29(5) } Tile{ AsIs: )/16 } Tile{ HalfReuse: (/20 AsIs: e.Result#1/31(9) AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icAllocFunc, 0, 0, 28},
    {refalrts::icReinitSVar, 0, 21, 19},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 20, 12, 0},
    {refalrts::icLinkBrackets, 7, 16, 0},
    {refalrts::icLinkBrackets, 11, 8, 0},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSetRes, 0, 0, 20},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceTile, 0, 7, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceTile, 11, 22, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( ) ( )
    // </0 & ZipItems/4 (/7 )/8 (/11 )/12 >/1
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & ZipItems/4 (/7 )/8 (/11 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ )
  // </0 & ZipItems/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
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
    refalrts::start_sentence();
    // ( ( s.idx t.idx ) e.idx ) ( ( s.idx t.idx ) e.idx )
    // </0 & ZipItems/4 (/7 (/15 s.CurIndexP#1/21 t.PatternItem#1/23 )/16 e.Pattern#1/5 )/8 (/11 (/19 s.CurIndexR#1/22 t.ResultItem#1/25 )/20 e.Result#1/9 )/12 >/1
    context[29] = context[5];
    context[30] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[29], context[30] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[31] = context[9];
    context[32] = context[10];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[31], context[32] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Pattern#1 as range 29(5)
    // closed e.Result#1 as range 31(9)
    if( ! refalrts::svar_left( context[21], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    context[24] = refalrts::tvar_left( context[23], context[13], context[14] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    context[26] = refalrts::tvar_left( context[25], context[17], context[18] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: s.CurIndexP1 #21/19 AsIs: s.CurIndexR#1/22 } </27 & OverlapItem/28 Tile{ AsIs: t.PatternItem#1/23 } Tile{ AsIs: t.ResultItem#1/25 } Tile{ HalfReuse: >/15 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ZipItems/4 AsIs: (/7 } Tile{ AsIs: e.Pattern#1/29(5) } Tile{ AsIs: )/16 } Tile{ HalfReuse: (/20 AsIs: e.Result#1/31(9) AsIs: )/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], OverlapItem, "OverlapItem" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[19], context[21] );
    refalrts::reinit_close_call( context[15] );
    refalrts::reinit_open_bracket( context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[20], context[12] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[11], context[22] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( ) ( )
  // </0 & ZipItems/4 (/7 )/8 (/11 )/12 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ZipItems/4 (/7 )/8 (/11 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GlueTiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GlueNextTile, "GlueNextTile" },
    { GlueTiles, "GlueTiles" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AsIsE<int>::name,
    & ident_NoOverlap<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & GlueTiles/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // ( s.idx s.idx # NoOverlap ) e.idx
    // </0 & GlueTiles/4 (/7 s.CurIndexP#1/10 s.CurIndexR#1/11 # NoOverlap/9 )/8 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    {refalrts::icIdentRightSave, 9, 1, 5},
    // closed e.Tail#1 as range 18(2)
    {refalrts::icsVarLeft, 0, 10, 5},
    {refalrts::icsVarLeft, 0, 11, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & GlueTiles/4 (/7 s.CurIndexP#1/10 s.CurIndexR#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 HalfReuse: & GlueTiles/8 AsIs: e.Tail#1/18(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitFunc, 0, 1, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetRes, 0, 0, 9},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +25, 0, 0},
    // ( s.idx s.idx s.idx # AsIsE ) e.idx
    // </0 & GlueTiles/4 (/7 s.CurIndexP#1/10 s.CurIndexR#1/11 s.Weight#1/12 # AsIsE/9 )/8 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    {refalrts::icIdentRightSave, 9, 0, 5},
    // closed e.Tail#1 as range 18(2)
    {refalrts::icsVarLeft, 0, 10, 5},
    {refalrts::icsVarLeft, 0, 11, 5},
    {refalrts::icsVarLeft, 0, 12, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/13 s.Weight#1/12/14 Tile{ HalfReuse: s.CurIndexP1 #10/0 HalfReuse: s.CurIndexR1 #11/4 AsIs: (/7 AsIs: s.CurIndexP#1/10 AsIs: s.CurIndexR#1/11 AsIs: s.Weight#1/12 AsIs: # AsIsE/9 AsIs: )/8 } )/15 </16 & GlueTiles/17 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icCopySTVar, 14, 12, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 1, 17},
    {refalrts::icReinitSVar, 0, 10, 0},
    {refalrts::icReinitSVar, 0, 11, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 15, 17, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    // ( s.idx s.idx s.idx s.idx ) e.idx
    // </0 & GlueTiles/4 (/7 s.CurIndexP#1/9 s.CurIndexR#1/10 s.Weight#1/11 s.Ident#1/12 )/8 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    // closed e.Tail#1 as range 18(2)
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    {refalrts::icsVarLeft, 0, 11, 5},
    {refalrts::icsVarLeft, 0, 12, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & GlueNextTile/14 Tile{ HalfReuse: (/0 HalfReuse: s.Weight1 #11/4 AsIs: (/7 AsIs: s.CurIndexP#1/9 AsIs: s.CurIndexR#1/10 AsIs: s.Weight#1/11 AsIs: s.Ident#1/12 AsIs: )/8 } )/15 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 0, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitSVar, 0, 11, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icLinkBrackets, 0, 15, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & GlueTiles/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & GlueTiles/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & GlueTiles/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // ( s.idx s.idx # NoOverlap ) e.idx
    // </0 & GlueTiles/4 (/7 s.CurIndexP#1/10 s.CurIndexR#1/11 # NoOverlap/9 )/8 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_right(  & ident_NoOverlap<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 18(2)
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & GlueTiles/4 (/7 s.CurIndexP#1/10 s.CurIndexR#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 HalfReuse: & GlueTiles/8 AsIs: e.Tail#1/18(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], GlueTiles, "GlueTiles" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx s.idx s.idx # AsIsE ) e.idx
    // </0 & GlueTiles/4 (/7 s.CurIndexP#1/10 s.CurIndexR#1/11 s.Weight#1/12 # AsIsE/9 )/8 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_right(  & ident_AsIsE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 18(2)
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/13 s.Weight#1/12/14 Tile{ HalfReuse: s.CurIndexP1 #10/0 HalfReuse: s.CurIndexR1 #11/4 AsIs: (/7 AsIs: s.CurIndexP#1/10 AsIs: s.CurIndexR#1/11 AsIs: s.Weight#1/12 AsIs: # AsIsE/9 AsIs: )/8 } )/15 </16 & GlueTiles/17 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[14], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], GlueTiles, "GlueTiles" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[0], context[10] );
    refalrts::reinit_svar( context[4], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[13], context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx s.idx s.idx s.idx ) e.idx
    // </0 & GlueTiles/4 (/7 s.CurIndexP#1/9 s.CurIndexR#1/10 s.Weight#1/11 s.Ident#1/12 )/8 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Tail#1 as range 18(2)
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & GlueNextTile/14 Tile{ HalfReuse: (/0 HalfReuse: s.Weight1 #11/4 AsIs: (/7 AsIs: s.CurIndexP#1/9 AsIs: s.CurIndexR#1/10 AsIs: s.Weight#1/11 AsIs: s.Ident#1/12 AsIs: )/8 } )/15 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], GlueNextTile, "GlueNextTile" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[0], context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & GlueTiles/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & GlueTiles/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GlueNextTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FoldTile_EEnd, "FoldTile-EEnd" },
    { Add, "Add" },
    { GlueTiles, "GlueTiles" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoOverlap<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( s.$ e.$ ) e.$
    // </0 & GlueNextTile/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxT#0 as range 2
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::icOnFailGoTo, +20, 0, 0},
    // ( s.idx e.idx ) ( s.idx s.idx # NoOverlap ) e.idx
    // </0 & GlueNextTile/4 (/7 s.Weight#1/9 e.Items#1/5 )/8 (/12 s.CurIndexP#1/15 s.CurIndexR#1/16 # NoOverlap/14 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 22, 2},
    {refalrts::icBracketLeftSave, 0, 10, 22},
    {refalrts::icIdentRightSave, 14, 0, 10},
    // closed e.Items#1 as range 5
    // closed e.Tail#1 as range 22(2)
    {refalrts::icsVarLeft, 0, 15, 10},
    {refalrts::icsVarLeft, 0, 16, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/12 s.CurIndexP#1/15 s.CurIndexR#1/16 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & FoldTile-EEnd/7 AsIs: s.Weight#1/9 AsIs: e.Items#1/5 HalfReuse: >/8 } Tile{ HalfReuse: </14 HalfReuse: & GlueTiles/13 AsIs: e.Tail#1/22(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icReinitFunc, 0, 2, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 14},
    {refalrts::icSpliceTile, 4, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    // ( s.idx e.idx ) ( s.idx s.idx s.idx s.idx ) e.idx
    // </0 & GlueNextTile/4 (/7 s.Weight#1/9 e.Items#1/5 )/8 (/12 s.CurIndexP#1/14 s.CurIndexR#1/15 s.ItemWeight#1/16 s.Ident#1/17 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 22, 2},
    {refalrts::icBracketLeftSave, 0, 10, 22},
    // closed e.Items#1 as range 5
    // closed e.Tail#1 as range 22(2)
    {refalrts::icsVarLeft, 0, 14, 10},
    {refalrts::icsVarLeft, 0, 15, 10},
    {refalrts::icsVarLeft, 0, 16, 10},
    {refalrts::icsVarLeft, 0, 17, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GlueNextTile/4 AsIs: (/7 } </18 & Add/19 Tile{ AsIs: s.Weight#1/9 } s.ItemWeight#1/16/20 >/21 Tile{ AsIs: e.Items#1/5 } Tile{ AsIs: (/12 AsIs: s.CurIndexP#1/14 AsIs: s.CurIndexR#1/15 AsIs: s.ItemWeight#1/16 AsIs: s.Ident#1/17 AsIs: )/13 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Tail#1/22(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icAllocFunc, 0, 1, 19},
    {refalrts::icCopySTVar, 20, 16, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( s.idx e.idx )
    // </0 & GlueNextTile/4 (/7 s.Weight#1/9 e.Items#1/5 )/8 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Items#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & FoldTile-EEnd/7 AsIs: s.Weight#1/9 AsIs: e.Items#1/5 HalfReuse: >/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: ( s.$ e.$ ) e.$
  // </0 & GlueNextTile/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  do {
    refalrts::start_sentence();
    // ( s.idx e.idx ) ( s.idx s.idx # NoOverlap ) e.idx
    // </0 & GlueNextTile/4 (/7 s.Weight#1/9 e.Items#1/5 )/8 (/12 s.CurIndexP#1/15 s.CurIndexR#1/16 # NoOverlap/14 )/13 e.Tail#1/2 >/1
    context[22] = context[2];
    context[23] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[22], context[23] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_right(  & ident_NoOverlap<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.Items#1 as range 5
    // closed e.Tail#1 as range 22(2)
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/12 s.CurIndexP#1/15 s.CurIndexR#1/16 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & FoldTile-EEnd/7 AsIs: s.Weight#1/9 AsIs: e.Items#1/5 HalfReuse: >/8 } Tile{ HalfReuse: </14 HalfReuse: & GlueTiles/13 AsIs: e.Tail#1/22(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], FoldTile_EEnd, "FoldTile-EEnd" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_name( context[13], GlueTiles, "GlueTiles" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx ) ( s.idx s.idx s.idx s.idx ) e.idx
    // </0 & GlueNextTile/4 (/7 s.Weight#1/9 e.Items#1/5 )/8 (/12 s.CurIndexP#1/14 s.CurIndexR#1/15 s.ItemWeight#1/16 s.Ident#1/17 )/13 e.Tail#1/2 >/1
    context[22] = context[2];
    context[23] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[22], context[23] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Items#1 as range 5
    // closed e.Tail#1 as range 22(2)
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GlueNextTile/4 AsIs: (/7 } </18 & Add/19 Tile{ AsIs: s.Weight#1/9 } s.ItemWeight#1/16/20 >/21 Tile{ AsIs: e.Items#1/5 } Tile{ AsIs: (/12 AsIs: s.CurIndexP#1/14 AsIs: s.CurIndexR#1/15 AsIs: s.ItemWeight#1/16 AsIs: s.Ident#1/17 AsIs: )/13 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Tail#1/22(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], Add, "Add" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[20], context[16]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( s.idx e.idx )
  // </0 & GlueNextTile/4 (/7 s.Weight#1/9 e.Items#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & FoldTile-EEnd/7 AsIs: s.Weight#1/9 AsIs: e.Items#1/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], FoldTile_EEnd, "FoldTile-EEnd" );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FoldTile_EEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Sub, "Sub" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AsIsE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: s.$ e.$
    // </0 & FoldTile-EEnd/4 s.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +31, 0, 0},
    // s.idx e.idx ( s.idx s.idx 3 # AsIsE )
    // </0 & FoldTile-EEnd/4 s.Weight#1/5 e.Items#1/2 (/8 s.CurIndexP#1/12 s.CurIndexR#1/13 3/11 # AsIsE/10 )/9 >/1
    {refalrts::icSave, 0, 23, 2},
    {refalrts::icBracketRightSave, 0, 6, 23},
    {refalrts::icIdentRightSave, 10, 0, 6},
    {refalrts::icNumRightSave, 11, 3, 6},
    // closed e.Items#1 as range 23(2)
    {refalrts::icsVarLeft, 0, 12, 6},
    {refalrts::icsVarLeft, 0, 13, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FoldTile-EEnd/4 } </14 & Sub/15 Tile{ AsIs: s.Weight#1/5 } 3/16 >/17 Tile{ AsIs: e.Items#1/23(2) } >/18 (/19 3/20 s.CurIndexP#1/12/21 s.CurIndexR#1/13/22 Tile{ AsIs: (/8 AsIs: s.CurIndexP#1/12 AsIs: s.CurIndexR#1/13 AsIs: 3/11 AsIs: # AsIsE/10 AsIs: )/9 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 0, 15},
    {refalrts::icAllocInt, 0, 3, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocInt, 0, 3, 20},
    {refalrts::icCopySTVar, 21, 12, 0},
    {refalrts::icCopySTVar, 22, 13, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 1, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 18, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    // s.idx ( s.idx s.idx s.idx s.idx ) e.idx
    // </0 & FoldTile-EEnd/4 s.Weight#1/5 (/8 s.CurIndexP#1/10 s.CurIndexR#1/11 s.ItemWeight#1/12 s.Ident#1/13 )/9 e.Items#1/2 >/1
    {refalrts::icSave, 0, 23, 2},
    {refalrts::icBracketLeftSave, 0, 6, 23},
    // closed e.Items#1 as range 23(2)
    {refalrts::icsVarLeft, 0, 10, 6},
    {refalrts::icsVarLeft, 0, 11, 6},
    {refalrts::icsVarLeft, 0, 12, 6},
    {refalrts::icsVarLeft, 0, 13, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.Weight#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Weight1 #5/4 } s.CurIndexP#1/10/14 s.CurIndexR#1/11/15 Tile{ AsIs: (/8 AsIs: s.CurIndexP#1/10 AsIs: s.CurIndexR#1/11 AsIs: s.ItemWeight#1/12 AsIs: s.Ident#1/13 AsIs: )/9 AsIs: e.Items#1/23(2) HalfReuse: )/1 ]] }
    {refalrts::icCopySTVar, 14, 10, 0},
    {refalrts::icCopySTVar, 15, 11, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitSVar, 0, 5, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx
    // </0 & FoldTile-EEnd/4 s.Weight#1/5 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & FoldTile-EEnd/4 s.Weight#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & FoldTile-EEnd/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    // s.idx e.idx ( s.idx s.idx 3 # AsIsE )
    // </0 & FoldTile-EEnd/4 s.Weight#1/5 e.Items#1/2 (/8 s.CurIndexP#1/12 s.CurIndexR#1/13 3/11 # AsIsE/10 )/9 >/1
    context[23] = context[2];
    context[24] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_right( context[6], context[7], context[23], context[24] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_right(  & ident_AsIsE<int>::name, context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::number_right( 3UL, context[6], context[7] );
    if( ! context[11] )
      continue;
    // closed e.Items#1 as range 23(2)
    if( ! refalrts::svar_left( context[12], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FoldTile-EEnd/4 } </14 & Sub/15 Tile{ AsIs: s.Weight#1/5 } 3/16 >/17 Tile{ AsIs: e.Items#1/23(2) } >/18 (/19 3/20 s.CurIndexP#1/12/21 s.CurIndexR#1/13/22 Tile{ AsIs: (/8 AsIs: s.CurIndexP#1/12 AsIs: s.CurIndexR#1/13 AsIs: 3/11 AsIs: # AsIsE/10 AsIs: )/9 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Sub, "Sub" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[16], 3UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[20], 3UL ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[21], context[12]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[13]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[22] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( s.idx s.idx s.idx s.idx ) e.idx
    // </0 & FoldTile-EEnd/4 s.Weight#1/5 (/8 s.CurIndexP#1/10 s.CurIndexR#1/11 s.ItemWeight#1/12 s.Ident#1/13 )/9 e.Items#1/2 >/1
    context[23] = context[2];
    context[24] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[23], context[24] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Items#1 as range 23(2)
    if( ! refalrts::svar_left( context[10], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Weight#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Weight1 #5/4 } s.CurIndexP#1/10/14 s.CurIndexR#1/11/15 Tile{ AsIs: (/8 AsIs: s.CurIndexP#1/10 AsIs: s.CurIndexR#1/11 AsIs: s.ItemWeight#1/12 AsIs: s.Ident#1/13 AsIs: )/9 AsIs: e.Items#1/23(2) HalfReuse: )/1 ]] }
    if (! refalrts::copy_stvar(context[14], context[10]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[15], context[11]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx
  // </0 & FoldTile-EEnd/4 s.Weight#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FoldTile-EEnd/4 s.Weight#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_FilterOverlapped_S1L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & FilterOverlapped$1\1\1/4 (/7 s.CurIndexP#3/9 s.CurIndexR#3/10 s.ItemWeight#3/11 s.Ident#3/12 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    {refalrts::icsVarLeft, 0, 11, 5},
    {refalrts::icsVarLeft, 0, 12, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & FilterOverlapped$1\1\1/4 (/7 s.CurIndexP#3/9 s.CurIndexR#3/10 s.ItemWeight#3/11 s.Ident#3/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Ident3 #12/1 ]] }
    {refalrts::icReinitSVar, 0, 12, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & FilterOverlapped$1\1\1/4 (/7 s.CurIndexP#3/9 s.CurIndexR#3/10 s.ItemWeight#3/11 s.Ident#3/12 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FilterOverlapped$1\1\1/4 (/7 s.CurIndexP#3/9 s.CurIndexR#3/10 s.ItemWeight#3/11 s.Ident#3/12 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Ident3 #12/1 ]] }
  refalrts::reinit_svar( context[1], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_FilterOverlapped_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { RejectTile, "RejectTile" },
    { FilterOverlapped, "FilterOverlapped" },
    { gen_FilterOverlapped_S1L1L1, "FilterOverlapped$1\\1\\1" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & FilterOverlapped$1\1/4 (/7 s.MaxWeight#2/9 s.IndexP#2/10 s.IndexR#2/11 e.MaxItems#2/5 )/8 e.Tiles#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Tiles#2 as range 2
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    {refalrts::icsVarLeft, 0, 11, 5},
    // closed e.MaxItems#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.IndexP#2/10 s.IndexR#2/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.IndexP2 #10/4 HalfReuse: s.IndexR2 #11/7 AsIs: s.MaxWeight#2/9 } (/12 </13 & Map/14 & FilterOverlapped$1\1\1/15 Tile{ AsIs: e.MaxItems#2/5 } >/16 Tile{ AsIs: )/8 } )/17 </18 & FilterOverlapped/19 </20 & RejectTile/21 (/22 Tile{ AsIs: e.Tiles#2/2 } )/23 e.MaxItems#2/5/24 >/26 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 3, 14},
    {refalrts::icAllocFunc, 0, 2, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icAllocFunc, 0, 1, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 0, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icCopyEVar, 24, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitSVar, 0, 10, 4},
    {refalrts::icReinitSVar, 0, 11, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 0, 17, 0},
    {refalrts::icLinkBrackets, 12, 8, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 23, 26, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 17, 22, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icTrash, 0, 0, 9},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & FilterOverlapped$1\1/4 (/7 s.MaxWeight#2/9 s.IndexP#2/10 s.IndexR#2/11 e.MaxItems#2/5 )/8 e.Tiles#2/2 >/1
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
  // closed e.Tiles#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MaxItems#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.IndexP#2/10 s.IndexR#2/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.IndexP2 #10/4 HalfReuse: s.IndexR2 #11/7 AsIs: s.MaxWeight#2/9 } (/12 </13 & Map/14 & FilterOverlapped$1\1\1/15 Tile{ AsIs: e.MaxItems#2/5 } >/16 Tile{ AsIs: )/8 } )/17 </18 & FilterOverlapped/19 </20 & RejectTile/21 (/22 Tile{ AsIs: e.Tiles#2/2 } )/23 e.MaxItems#2/5/24 >/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], gen_FilterOverlapped_S1L1L1, "FilterOverlapped$1\\1\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], FilterOverlapped, "FilterOverlapped" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], RejectTile, "RejectTile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[24], context[25], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::reinit_svar( context[7], context[11] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[0], context[17] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[22] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[9], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FilterOverlapped(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FindHeavyTile, "FindHeavyTile" },
    { gen_FilterOverlapped_S1L1, "FilterOverlapped$1\\1" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & FilterOverlapped/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // t.idx e.idx
    // </0 & FilterOverlapped/4 t.NextTile#1/5 e.Tiles#1/2 >/1
    {refalrts::icSave, 0, 11, 2},
    {refalrts::ictVarLeftSave, 0, 5, 11},
    // closed e.Tiles#1 as range 11(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch/8 Tile{ AsIs: </0 Reuse: & FindHeavyTile/4 AsIs: t.NextTile#1/5 AsIs: e.Tiles#1/11(2) AsIs: >/1 } & FilterOverlapped$1\1/9 >/10 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocFunc, 0, 2, 8},
    {refalrts::icAllocFunc, 0, 1, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & FilterOverlapped/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & FilterOverlapped/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & FilterOverlapped/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // t.idx e.idx
    // </0 & FilterOverlapped/4 t.NextTile#1/5 e.Tiles#1/2 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[6] = refalrts::tvar_left( context[5], context[11], context[12] );
    if( ! context[6] )
      continue;
    // closed e.Tiles#1 as range 11(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch/8 Tile{ AsIs: </0 Reuse: & FindHeavyTile/4 AsIs: t.NextTile#1/5 AsIs: e.Tiles#1/11(2) AsIs: >/1 } & FilterOverlapped$1\1/9 >/10 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], gen_FilterOverlapped_S1L1, "FilterOverlapped$1\\1" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], FindHeavyTile, "FindHeavyTile" );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & FilterOverlapped/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FilterOverlapped/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_FindHeavyTile_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: s.$ s.$ s.$ ( e.$ ) s.$ s.$ s.$ ( e.$ ) s.$
    //GLOBAL GEN: s.$ s.$ s.$ ( e.$ ) s.$ s.$ s.$ ( e.$ ) s.$
    // </0 & FindHeavyTile\1\1/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 (/10 e.idxVVVB#0/8 )/11 s.idxVVVT#0/12 s.idxVVVTV#0/13 s.idxVVVTVV#0/14 (/17 e.idxVVVTVVVB#0/15 )/18 s.idxVVVTVVVT#0/19 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icBracketLeftSave, 0, 8, 2},
    // closed e.idxVVVB#0 as range 8
    {refalrts::icsVarLeft, 0, 12, 2},
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 14, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    // closed e.idxVVVTVVVB#0 as range 15
    {refalrts::icsVarLeft, 0, 19, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // s.idx s.idx s.idx ( e.idx ) s.idx s.idx s.idx ( e.idx ) '<'
    // </0 & FindHeavyTile\1\1/4 s.Weight#2/5 s.CurIndexP#2/6 s.CurIndexR#2/7 (/10 e.Items#2/8 )/11 s.MaxWeight#2/12 s.IndexP#2/13 s.IndexR#2/14 (/17 e.MaxItems#2/15 )/18 '<'/19 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 19},
    // closed e.Items#2 as range 8
    // closed e.MaxItems#2 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/10 {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} {REMOVED TILE} '<'/19 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: s.Weight#2/5 AsIs: s.CurIndexP#2/6 AsIs: s.CurIndexR#2/7 } Tile{ AsIs: e.Items#2/8 } Tile{ AsIs: )/18 } Tile{ HalfReuse: (/11 AsIs: s.MaxWeight#2/12 AsIs: s.IndexP#2/13 AsIs: s.IndexR#2/14 } Tile{ AsIs: e.MaxItems#2/15 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icLinkBrackets, 4, 18, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 11, 14, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceTile, 4, 7, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx s.idx s.idx ( e.idx ) s.idx s.idx s.idx ( e.idx ) s.idx
    // </0 & FindHeavyTile\1\1/4 s.Weight#2/5 s.CurIndexP#2/6 s.CurIndexR#2/7 (/10 e.Items#2/8 )/11 s.MaxWeight#2/12 s.IndexP#2/13 s.IndexR#2/14 (/17 e.MaxItems#2/15 )/18 s.Other#3/19 >/1
    // closed e.Items#2 as range 8
    // closed e.MaxItems#2 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/10 {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} )/18 s.Other#3/19 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 AsIs: s.MaxWeight#2/12 AsIs: s.IndexP#2/13 AsIs: s.IndexR#2/14 } Tile{ AsIs: e.MaxItems#2/15 } Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: s.Weight#2/5 AsIs: s.CurIndexP#2/6 AsIs: s.CurIndexR#2/7 } Tile{ AsIs: e.Items#2/8 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 4, 1, 0},
    {refalrts::icLinkBrackets, 11, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceTile, 0, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 11, 14, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: s.$ s.$ s.$ ( e.$ ) s.$ s.$ s.$ ( e.$ ) s.$
  //GLOBAL GEN: s.$ s.$ s.$ ( e.$ ) s.$ s.$ s.$ ( e.$ ) s.$
  // </0 & FindHeavyTile\1\1/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 (/10 e.idxVVVB#0/8 )/11 s.idxVVVT#0/12 s.idxVVVTV#0/13 s.idxVVVTVV#0/14 (/17 e.idxVVVTVVVB#0/15 )/18 s.idxVVVTVVVT#0/19 >/1
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
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.idxVVVB#0 as range 8
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxVVVTVVVB#0 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // s.idx s.idx s.idx ( e.idx ) s.idx s.idx s.idx ( e.idx ) '<'
    // </0 & FindHeavyTile\1\1/4 s.Weight#2/5 s.CurIndexP#2/6 s.CurIndexR#2/7 (/10 e.Items#2/8 )/11 s.MaxWeight#2/12 s.IndexP#2/13 s.IndexR#2/14 (/17 e.MaxItems#2/15 )/18 '<'/19 >/1
    if( ! refalrts::char_term( '<', context[19] ) )
      continue;
    // closed e.Items#2 as range 8
    // closed e.MaxItems#2 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/10 {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} {REMOVED TILE} '<'/19 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: s.Weight#2/5 AsIs: s.CurIndexP#2/6 AsIs: s.CurIndexR#2/7 } Tile{ AsIs: e.Items#2/8 } Tile{ AsIs: )/18 } Tile{ HalfReuse: (/11 AsIs: s.MaxWeight#2/12 AsIs: s.IndexP#2/13 AsIs: s.IndexR#2/14 } Tile{ AsIs: e.MaxItems#2/15 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[4], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx s.idx s.idx ( e.idx ) s.idx s.idx s.idx ( e.idx ) s.idx
  // </0 & FindHeavyTile\1\1/4 s.Weight#2/5 s.CurIndexP#2/6 s.CurIndexR#2/7 (/10 e.Items#2/8 )/11 s.MaxWeight#2/12 s.IndexP#2/13 s.IndexR#2/14 (/17 e.MaxItems#2/15 )/18 s.Other#3/19 >/1
  // closed e.Items#2 as range 8
  // closed e.MaxItems#2 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/10 {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} )/18 s.Other#3/19 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 AsIs: s.MaxWeight#2/12 AsIs: s.IndexP#2/13 AsIs: s.IndexR#2/14 } Tile{ AsIs: e.MaxItems#2/15 } Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: s.Weight#2/5 AsIs: s.CurIndexP#2/6 AsIs: s.CurIndexR#2/7 } Tile{ AsIs: e.Items#2/8 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[11] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[11], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_FindHeavyTile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_FindHeavyTile_L1L1, "FindHeavyTile\\1\\1" },
    { refalrts::create_closure, "@create_closure@" },
    { Fetch, "Fetch" },
    { Compare, "Compare" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & FindHeavyTile\1/4 (/7 s.MaxWeight#2/13 s.IndexP#2/14 s.IndexR#2/15 e.MaxItems#2/5 )/8 (/11 s.Weight#2/16 s.CurIndexP#2/17 s.CurIndexR#2/18 e.Items#2/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 13, 5},
    {refalrts::icsVarLeft, 0, 14, 5},
    {refalrts::icsVarLeft, 0, 15, 5},
    // closed e.MaxItems#2 as range 5
    {refalrts::icsVarLeft, 0, 16, 9},
    {refalrts::icsVarLeft, 0, 17, 9},
    {refalrts::icsVarLeft, 0, 18, 9},
    // closed e.Items#2 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </19 & Compare/20 s.MaxWeight#2/13/21 s.Weight#2/16/22 >/23 </24 Tile{ HalfReuse: & @create_closure@/8 HalfReuse: & FindHeavyTile\1\1/11 AsIs: s.Weight#2/16 AsIs: s.CurIndexP#2/17 AsIs: s.CurIndexR#2/18 } (/25 Tile{ AsIs: e.Items#2/9 } Tile{ HalfReuse: )/7 AsIs: s.MaxWeight#2/13 AsIs: s.IndexP#2/14 AsIs: s.IndexR#2/15 } (/26 Tile{ AsIs: e.MaxItems#2/5 } )/27 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocFunc, 0, 3, 20},
    {refalrts::icCopySTVar, 21, 13, 0},
    {refalrts::icCopySTVar, 22, 16, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitFunc, 0, 1, 8},
    {refalrts::icReinitFunc, 0, 0, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icLinkBrackets, 25, 7, 0},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icSpliceTile, 7, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 8, 18, 0},
    {refalrts::icSpliceTile, 19, 24, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & FindHeavyTile\1/4 (/7 s.MaxWeight#2/13 s.IndexP#2/14 s.IndexR#2/15 e.MaxItems#2/5 )/8 (/11 s.Weight#2/16 s.CurIndexP#2/17 s.CurIndexR#2/18 e.Items#2/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MaxItems#2 as range 5
  if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </19 & Compare/20 s.MaxWeight#2/13/21 s.Weight#2/16/22 >/23 </24 Tile{ HalfReuse: & @create_closure@/8 HalfReuse: & FindHeavyTile\1\1/11 AsIs: s.Weight#2/16 AsIs: s.CurIndexP#2/17 AsIs: s.CurIndexR#2/18 } (/25 Tile{ AsIs: e.Items#2/9 } Tile{ HalfReuse: )/7 AsIs: s.MaxWeight#2/13 AsIs: s.IndexP#2/14 AsIs: s.IndexR#2/15 } (/26 Tile{ AsIs: e.MaxItems#2/5 } )/27 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], Compare, "Compare" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[21], context[13]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[22], context[16]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_name( context[8], refalrts::create_closure, "@create_closure@" );
  refalrts::reinit_name( context[11], gen_FindHeavyTile_L1L1, "FindHeavyTile\\1\\1" );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[25], context[7] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[8], context[18] );
  res = refalrts::splice_evar( res, context[19], context[24] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FindHeavyTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_FindHeavyTile_L1, "FindHeavyTile\\1" },
    { MapReduce, "MapReduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & FindHeavyTile/4 t.NextTile#1/5 e.Tiles#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.Tiles#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapReduce/0 Reuse: & FindHeavyTile\1/4 AsIs: t.NextTile#1/5 AsIs: e.Tiles#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & FindHeavyTile/4 t.NextTile#1/5 e.Tiles#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tiles#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapReduce/0 Reuse: & FindHeavyTile\1/4 AsIs: t.NextTile#1/5 AsIs: e.Tiles#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], MapReduce, "MapReduce" );
  refalrts::update_name( context[4], gen_FindHeavyTile_L1, "FindHeavyTile\\1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_RejectTile_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & RejectTile\1\1/4 e.Tiles#3/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Tiles#3 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.Tiles#3/2 HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 4, 1, 0},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & RejectTile\1\1/4 e.Tiles#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tiles#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.Tiles#3/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_RejectTile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { gen_RejectTile_L1L1, "RejectTile\\1\\1" },
    { FilterResultPos, "FilterResultPos" },
    { Map, "Map" },
    { FilterPatternPos, "FilterPatternPos" },
    { Seq, "Seq" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & RejectTile\1/4 (/7 e.Tiles#2/5 )/8 (/11 s.CurIndexP#2/13 s.CurIndexR#2/14 s.ItemWeight#2/15 s.Ident#2/16 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Tiles#2 as range 5
    {refalrts::icsVarLeft, 0, 13, 9},
    {refalrts::icsVarLeft, 0, 14, 9},
    {refalrts::icsVarLeft, 0, 15, 9},
    {refalrts::icsVarLeft, 0, 16, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ItemWeight#2/15 s.Ident#2/16 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Tiles#2/5 } </17 & Seq/18 Tile{ AsIs: (/7 } & Map/19 (/20 & FilterPatternPos/21 Tile{ AsIs: s.CurIndexP#2/13 } )/22 Tile{ AsIs: )/8 AsIs: (/11 } & Map/23 (/24 & FilterResultPos/25 Tile{ AsIs: s.CurIndexR#2/14 } )/26 )/27 & RejectTile\1\1/28 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocFunc, 0, 5, 18},
    {refalrts::icAllocFunc, 0, 3, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icAllocFunc, 0, 4, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icAllocFunc, 0, 3, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icAllocFunc, 0, 2, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocFunc, 0, 1, 28},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icLinkBrackets, 11, 27, 0},
    {refalrts::icLinkBrackets, 24, 26, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 26, 28, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 23, 25, 0},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 19, 21, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & RejectTile\1/4 (/7 e.Tiles#2/5 )/8 (/11 s.CurIndexP#2/13 s.CurIndexR#2/14 s.ItemWeight#2/15 s.Ident#2/16 )/12 >/1
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
  // closed e.Tiles#2 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ItemWeight#2/15 s.Ident#2/16 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Tiles#2/5 } </17 & Seq/18 Tile{ AsIs: (/7 } & Map/19 (/20 & FilterPatternPos/21 Tile{ AsIs: s.CurIndexP#2/13 } )/22 Tile{ AsIs: )/8 AsIs: (/11 } & Map/23 (/24 & FilterResultPos/25 Tile{ AsIs: s.CurIndexR#2/14 } )/26 )/27 & RejectTile\1\1/28 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], FilterPatternPos, "FilterPatternPos" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], FilterResultPos, "FilterResultPos" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], gen_RejectTile_L1L1, "RejectTile\\1\\1" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[11], context[27] );
  refalrts::link_brackets( context[24], context[26] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[20], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult RejectTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_RejectTile_L1, "RejectTile\\1" },
    { Reduce, "Reduce" },
    { UnBracket, "UnBracket" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & RejectTile/4 (/7 e.Tiles#1/5 )/8 e.HeavyTileItems#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Tiles#1 as range 5
    // closed e.HeavyTileItems#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & UnBracket/10 </11 Tile{ HalfReuse: & Reduce/0 Reuse: & RejectTile\1/4 AsIs: (/7 AsIs: e.Tiles#1/5 AsIs: )/8 AsIs: e.HeavyTileItems#1/2 AsIs: >/1 } >/12 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 2, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 9, 11, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & RejectTile/4 (/7 e.Tiles#1/5 )/8 e.HeavyTileItems#1/2 >/1
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
  // closed e.Tiles#1 as range 5
  // closed e.HeavyTileItems#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & UnBracket/10 </11 Tile{ HalfReuse: & Reduce/0 Reuse: & RejectTile\1/4 AsIs: (/7 AsIs: e.Tiles#1/5 AsIs: )/8 AsIs: e.HeavyTileItems#1/2 AsIs: >/1 } >/12 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], UnBracket, "UnBracket" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Reduce, "Reduce" );
  refalrts::update_name( context[4], gen_RejectTile_L1, "RejectTile\\1" );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FilterPatternPos(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FoldTileW, "FoldTileW" },
    { Sub, "Sub" },
    { FoldTile, "FoldTile" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: s.$ t.$
    //GLOBAL GEN: s.$ t.$
    // </0 & FilterPatternPos/4 s.idx#0/5 t.idxV#0/6 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    // s.idx ( s.idx s.idx s.idx ( s.idx s.idx s.idx s.idx ) e.idx )
    // </0 & FilterPatternPos/4 s.CurIndexP#1/5 (/6 s.Weight#1/10 s.CurIndexP#1/11 s.CurIndexR#1/12 (/15 s.CurIndexP#1/17 s.CurIndexR#1/18 s.ItemWeight#1/19 s.Ident#1/20 )/16 e.Items#1/8 )/7 >/1
    {refalrts::icBracketTerm, 0, 8, 6},
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::icsRepeatLeft, 11, 5, 8},
    {refalrts::icsVarLeft, 0, 12, 8},
    {refalrts::icBracketLeftSave, 0, 13, 8},
    {refalrts::icsRepeatLeft, 17, 11, 13},
    {refalrts::icsRepeatLeft, 18, 12, 13},
    // closed e.Items#1 as range 8
    {refalrts::icsVarLeft, 0, 19, 13},
    {refalrts::icsVarLeft, 0, 20, 13},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.CurIndexP#1/5 {REMOVED TILE} s.CurIndexP#1/11 s.CurIndexR#1/12 {REMOVED TILE} s.CurIndexP#1/17 s.CurIndexR#1/18 {REMOVED TILE} s.Ident#1/20 )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/10 } Tile{ AsIs: s.ItemWeight#1/19 } Tile{ HalfReuse: >/15 } Tile{ AsIs: e.Items#1/8 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 6},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceTile, 6, 10, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    // s.idx ( s.idx s.idx s.idx e.idx ( s.idx s.idx s.idx s.idx ) )
    // </0 & FilterPatternPos/4 s.CurIndexP#1/5 (/6 s.Weight#1/15 s.IndexP#1/16 s.IndexR#1/17 e.Items#1/8 (/12 s.CurIndexP#1/14 s.CurIndexR#1/18 s.ItemWeight#1/19 s.Ident#1/20 )/13 )/7 >/1
    {refalrts::icBracketTerm, 0, 8, 6},
    {refalrts::icBracketRightSave, 0, 10, 8},
    {refalrts::icsRepeatLeft, 14, 5, 10},
    {refalrts::icsVarLeft, 0, 15, 8},
    {refalrts::icsVarLeft, 0, 16, 8},
    {refalrts::icsVarLeft, 0, 17, 8},
    // closed e.Items#1 as range 8
    {refalrts::icsVarLeft, 0, 18, 10},
    {refalrts::icsVarLeft, 0, 19, 10},
    {refalrts::icsVarLeft, 0, 20, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.CurIndexP#1/5 {REMOVED TILE} s.IndexP#1/16 s.IndexR#1/17 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/14 s.CurIndexR#1/18 {REMOVED TILE} s.Ident#1/20 {REMOVED TILE} )/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </12 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/15 } Tile{ AsIs: s.ItemWeight#1/19 } Tile{ HalfReuse: >/13 } Tile{ AsIs: e.Items#1/8 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icReinitFunc, 0, 1, 6},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceTile, 6, 15, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    // s.idx ( s.idx s.idx s.idx e.idx )
    // </0 & FilterPatternPos/4 s.CurIndexP#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 e.Items-B#1/13 (/17 s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 )/18 e.Items-E#1/8 )/7 >/1
    {refalrts::icBracketTerm, 0, 8, 6},
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::icsVarLeft, 0, 11, 8},
    {refalrts::icsVarLeft, 0, 12, 8},
    {refalrts::icEPrepare, 0, 13, 8},
    {refalrts::icEStart, 0, 13, 8},
    {refalrts::icSave, 0, 23, 8},
    {refalrts::icBracketLeftSave, 0, 15, 23},
    {refalrts::icsRepeatLeft, 19, 5, 15},
    // closed e.Items-E#1 as range 23(8)
    {refalrts::icsVarLeft, 0, 20, 15},
    {refalrts::icsVarLeft, 0, 21, 15},
    {refalrts::icsVarLeft, 0, 22, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.CurIndexP#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTileW/4 } Tile{ AsIs: e.Items-B#1/13 } Tile{ HalfReuse: >/17 } Tile{ HalfReuse: </18 } Tile{ HalfReuse: & FoldTileW/7 } Tile{ AsIs: e.Items-E#1/23(8) } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx t.idx
    // </0 & FilterPatternPos/4 s.CurIndexP#1/5 t.Tile#1/6 >/1
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & FilterPatternPos/4 s.CurIndexP#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Tile#1/6 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: s.$ t.$
  //GLOBAL GEN: s.$ t.$
  // </0 & FilterPatternPos/4 s.idx#0/5 t.idxV#0/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // s.idx ( s.idx s.idx s.idx ( s.idx s.idx s.idx s.idx ) e.idx )
    // </0 & FilterPatternPos/4 s.CurIndexP#1/5 (/6 s.Weight#1/10 s.CurIndexP#1/11 s.CurIndexR#1/12 (/15 s.CurIndexP#1/17 s.CurIndexR#1/18 s.ItemWeight#1/19 s.Ident#1/20 )/16 e.Items#1/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[11], context[5], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[8], context[9] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::repeated_stvar_left( context[17], context[11], context[13], context[14] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[18], context[12], context[13], context[14] ) )
      continue;
    // closed e.Items#1 as range 8
    if( ! refalrts::svar_left( context[19], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.CurIndexP#1/5 {REMOVED TILE} s.CurIndexP#1/11 s.CurIndexR#1/12 {REMOVED TILE} s.CurIndexP#1/17 s.CurIndexR#1/18 {REMOVED TILE} s.Ident#1/20 )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/10 } Tile{ AsIs: s.ItemWeight#1/19 } Tile{ HalfReuse: >/15 } Tile{ AsIs: e.Items#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], FoldTile, "FoldTile" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[6], Sub, "Sub" );
    refalrts::reinit_close_call( context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[6], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( s.idx s.idx s.idx e.idx ( s.idx s.idx s.idx s.idx ) )
    // </0 & FilterPatternPos/4 s.CurIndexP#1/5 (/6 s.Weight#1/15 s.IndexP#1/16 s.IndexR#1/17 e.Items#1/8 (/12 s.CurIndexP#1/14 s.CurIndexR#1/18 s.ItemWeight#1/19 s.Ident#1/20 )/13 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::repeated_stvar_left( context[14], context[5], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[8], context[9] ) )
      continue;
    // closed e.Items#1 as range 8
    if( ! refalrts::svar_left( context[18], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.CurIndexP#1/5 {REMOVED TILE} s.IndexP#1/16 s.IndexR#1/17 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/14 s.CurIndexR#1/18 {REMOVED TILE} s.Ident#1/20 {REMOVED TILE} )/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </12 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/15 } Tile{ AsIs: s.ItemWeight#1/19 } Tile{ HalfReuse: >/13 } Tile{ AsIs: e.Items#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], FoldTile, "FoldTile" );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[6], Sub, "Sub" );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[6], context[15] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( s.idx s.idx s.idx e.idx )
    // </0 & FilterPatternPos/4 s.CurIndexP#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 e.Items-B#1/13 (/17 s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 )/18 e.Items-E#1/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[8];
      context[24] = context[9];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[23], context[24] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      if( ! refalrts::repeated_stvar_left( context[19], context[5], context[15], context[16] ) )
        continue;
      // closed e.Items-E#1 as range 23(8)
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} s.CurIndexP#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTileW/4 } Tile{ AsIs: e.Items-B#1/13 } Tile{ HalfReuse: >/17 } Tile{ HalfReuse: </18 } Tile{ HalfReuse: & FoldTileW/7 } Tile{ AsIs: e.Items-E#1/23(8) } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], FoldTileW, "FoldTileW" );
      refalrts::reinit_close_call( context[17] );
      refalrts::reinit_open_call( context[18] );
      refalrts::reinit_name( context[7], FoldTileW, "FoldTileW" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[17] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[8], context[9] ) );
  } while ( 0 );

  // s.idx t.idx
  // </0 & FilterPatternPos/4 s.CurIndexP#1/5 t.Tile#1/6 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FilterPatternPos/4 s.CurIndexP#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tile#1/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FilterResultPos(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FoldTileW, "FoldTileW" },
    { Sub, "Sub" },
    { FoldTile, "FoldTile" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: s.$ t.$
    //GLOBAL GEN: s.$ t.$
    // </0 & FilterResultPos/4 s.idx#0/5 t.idxV#0/6 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    // s.idx ( s.idx s.idx s.idx ( s.idx s.idx s.idx s.idx ) e.idx )
    // </0 & FilterResultPos/4 s.CurIndexR#1/5 (/6 s.Weight#1/10 s.CurIndexP#1/11 s.CurIndexR#1/12 (/15 s.CurIndexP#1/17 s.CurIndexR#1/18 s.ItemWeight#1/19 s.Ident#1/20 )/16 e.Items#1/8 )/7 >/1
    {refalrts::icBracketTerm, 0, 8, 6},
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::icsVarLeft, 0, 11, 8},
    {refalrts::icsRepeatLeft, 12, 5, 8},
    {refalrts::icBracketLeftSave, 0, 13, 8},
    {refalrts::icsRepeatLeft, 17, 11, 13},
    {refalrts::icsRepeatLeft, 18, 12, 13},
    // closed e.Items#1 as range 8
    {refalrts::icsVarLeft, 0, 19, 13},
    {refalrts::icsVarLeft, 0, 20, 13},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.CurIndexR#1/5 {REMOVED TILE} s.CurIndexP#1/11 s.CurIndexR#1/12 {REMOVED TILE} s.CurIndexP#1/17 s.CurIndexR#1/18 {REMOVED TILE} s.Ident#1/20 )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/10 } Tile{ AsIs: s.ItemWeight#1/19 } Tile{ HalfReuse: >/15 } Tile{ AsIs: e.Items#1/8 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 6},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceTile, 6, 10, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    // s.idx ( s.idx s.idx s.idx e.idx ( s.idx s.idx s.idx s.idx ) )
    // </0 & FilterResultPos/4 s.CurIndexR#1/5 (/6 s.Weight#1/14 s.IndexP#1/15 s.IndexR#1/16 e.Items#1/8 (/12 s.CurIndexP#1/17 s.CurIndexR#1/18 s.ItemWeight#1/19 s.Ident#1/20 )/13 )/7 >/1
    {refalrts::icBracketTerm, 0, 8, 6},
    {refalrts::icBracketRightSave, 0, 10, 8},
    {refalrts::icsVarLeft, 0, 14, 8},
    {refalrts::icsVarLeft, 0, 15, 8},
    {refalrts::icsVarLeft, 0, 16, 8},
    // closed e.Items#1 as range 8
    {refalrts::icsVarLeft, 0, 17, 10},
    {refalrts::icsRepeatLeft, 18, 5, 10},
    {refalrts::icsVarLeft, 0, 19, 10},
    {refalrts::icsVarLeft, 0, 20, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.CurIndexR#1/5 {REMOVED TILE} s.IndexP#1/15 s.IndexR#1/16 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/17 s.CurIndexR#1/18 {REMOVED TILE} s.Ident#1/20 {REMOVED TILE} )/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </12 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/14 } Tile{ AsIs: s.ItemWeight#1/19 } Tile{ HalfReuse: >/13 } Tile{ AsIs: e.Items#1/8 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icReinitFunc, 0, 1, 6},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceTile, 6, 14, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    // s.idx ( s.idx s.idx s.idx e.idx )
    // </0 & FilterResultPos/4 s.CurIndexR#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 e.Items-B#1/13 (/17 s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 )/18 e.Items-E#1/8 )/7 >/1
    {refalrts::icBracketTerm, 0, 8, 6},
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::icsVarLeft, 0, 11, 8},
    {refalrts::icsVarLeft, 0, 12, 8},
    {refalrts::icEPrepare, 0, 13, 8},
    {refalrts::icEStart, 0, 13, 8},
    {refalrts::icSave, 0, 23, 8},
    {refalrts::icBracketLeftSave, 0, 15, 23},
    // closed e.Items-E#1 as range 23(8)
    {refalrts::icsVarLeft, 0, 19, 15},
    {refalrts::icsRepeatLeft, 20, 5, 15},
    {refalrts::icsVarLeft, 0, 21, 15},
    {refalrts::icsVarLeft, 0, 22, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.CurIndexR#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTileW/4 } Tile{ AsIs: e.Items-B#1/13 } Tile{ HalfReuse: >/17 } Tile{ HalfReuse: </18 } Tile{ HalfReuse: & FoldTileW/7 } Tile{ AsIs: e.Items-E#1/23(8) } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx t.idx
    // </0 & FilterResultPos/4 s.CurIndexR#1/5 t.Tile#1/6 >/1
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & FilterResultPos/4 s.CurIndexR#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Tile#1/6 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: s.$ t.$
  //GLOBAL GEN: s.$ t.$
  // </0 & FilterResultPos/4 s.idx#0/5 t.idxV#0/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // s.idx ( s.idx s.idx s.idx ( s.idx s.idx s.idx s.idx ) e.idx )
    // </0 & FilterResultPos/4 s.CurIndexR#1/5 (/6 s.Weight#1/10 s.CurIndexP#1/11 s.CurIndexR#1/12 (/15 s.CurIndexP#1/17 s.CurIndexR#1/18 s.ItemWeight#1/19 s.Ident#1/20 )/16 e.Items#1/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[12], context[5], context[8], context[9] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[8], context[9] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::repeated_stvar_left( context[17], context[11], context[13], context[14] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[18], context[12], context[13], context[14] ) )
      continue;
    // closed e.Items#1 as range 8
    if( ! refalrts::svar_left( context[19], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.CurIndexR#1/5 {REMOVED TILE} s.CurIndexP#1/11 s.CurIndexR#1/12 {REMOVED TILE} s.CurIndexP#1/17 s.CurIndexR#1/18 {REMOVED TILE} s.Ident#1/20 )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/10 } Tile{ AsIs: s.ItemWeight#1/19 } Tile{ HalfReuse: >/15 } Tile{ AsIs: e.Items#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], FoldTile, "FoldTile" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[6], Sub, "Sub" );
    refalrts::reinit_close_call( context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[6], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( s.idx s.idx s.idx e.idx ( s.idx s.idx s.idx s.idx ) )
    // </0 & FilterResultPos/4 s.CurIndexR#1/5 (/6 s.Weight#1/14 s.IndexP#1/15 s.IndexR#1/16 e.Items#1/8 (/12 s.CurIndexP#1/17 s.CurIndexR#1/18 s.ItemWeight#1/19 s.Ident#1/20 )/13 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::svar_left( context[14], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[8], context[9] ) )
      continue;
    // closed e.Items#1 as range 8
    if( ! refalrts::svar_left( context[17], context[10], context[11] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[18], context[5], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.CurIndexR#1/5 {REMOVED TILE} s.IndexP#1/15 s.IndexR#1/16 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/17 s.CurIndexR#1/18 {REMOVED TILE} s.Ident#1/20 {REMOVED TILE} )/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </12 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/14 } Tile{ AsIs: s.ItemWeight#1/19 } Tile{ HalfReuse: >/13 } Tile{ AsIs: e.Items#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], FoldTile, "FoldTile" );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[6], Sub, "Sub" );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[6], context[14] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( s.idx s.idx s.idx e.idx )
    // </0 & FilterResultPos/4 s.CurIndexR#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 e.Items-B#1/13 (/17 s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 )/18 e.Items-E#1/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[8];
      context[24] = context[9];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[23], context[24] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Items-E#1 as range 23(8)
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[20], context[5], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} s.CurIndexR#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTileW/4 } Tile{ AsIs: e.Items-B#1/13 } Tile{ HalfReuse: >/17 } Tile{ HalfReuse: </18 } Tile{ HalfReuse: & FoldTileW/7 } Tile{ AsIs: e.Items-E#1/23(8) } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], FoldTileW, "FoldTileW" );
      refalrts::reinit_close_call( context[17] );
      refalrts::reinit_open_call( context[18] );
      refalrts::reinit_name( context[7], FoldTileW, "FoldTileW" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[17] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[8], context[9] ) );
  } while ( 0 );

  // s.idx t.idx
  // </0 & FilterResultPos/4 s.CurIndexR#1/5 t.Tile#1/6 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FilterResultPos/4 s.CurIndexR#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tile#1/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FoldTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FoldTile_EEnd, "FoldTile-EEnd" },
    { Sub, "Sub" },
    { FoldTile, "FoldTile" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AsIsE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: s.$ e.$
    // </0 & FoldTile/4 s.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +32, 0, 0},
    // s.idx ( s.idx s.idx 3 # AsIsE ) e.idx
    // </0 & FoldTile/4 s.Weight#1/5 (/8 s.CurIndexP#1/12 s.CurIndexR#1/13 3/11 # AsIsE/10 )/9 e.Items#1/2 >/1
    {refalrts::icSave, 0, 23, 2},
    {refalrts::icBracketLeftSave, 0, 6, 23},
    {refalrts::icIdentRightSave, 10, 0, 6},
    {refalrts::icNumRightSave, 11, 3, 6},
    // closed e.Items#1 as range 23(2)
    {refalrts::icsVarLeft, 0, 12, 6},
    {refalrts::icsVarLeft, 0, 13, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/14 3/15 s.CurIndexP#1/12/16 s.CurIndexR#1/13/17 Tile{ AsIs: (/8 AsIs: s.CurIndexP#1/12 AsIs: s.CurIndexR#1/13 AsIs: 3/11 AsIs: # AsIsE/10 AsIs: )/9 } )/18 </19 & FoldTile/20 Tile{ AsIs: </0 Reuse: & Sub/4 AsIs: s.Weight#1/5 } 3/21 >/22 Tile{ AsIs: e.Items#1/23(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icAllocInt, 0, 3, 15},
    {refalrts::icCopySTVar, 16, 12, 0},
    {refalrts::icCopySTVar, 17, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocFunc, 0, 2, 20},
    {refalrts::icAllocInt, 0, 3, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 0, 5, 0},
    {refalrts::icSpliceTile, 18, 20, 0},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icSpliceTile, 14, 17, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +5, 0, 0},
    // s.idx e.idx
    // </0 & FoldTile/4 s.Weight#1/5 e.Items#1/2 >/1
    // closed e.Items#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile-EEnd/4 AsIs: s.Weight#1/5 AsIs: e.Items#1/2 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx
    // </0 & FoldTile/4 s.Weight#1/5 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & FoldTile/4 s.Weight#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & FoldTile/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    // s.idx ( s.idx s.idx 3 # AsIsE ) e.idx
    // </0 & FoldTile/4 s.Weight#1/5 (/8 s.CurIndexP#1/12 s.CurIndexR#1/13 3/11 # AsIsE/10 )/9 e.Items#1/2 >/1
    context[23] = context[2];
    context[24] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[23], context[24] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_right(  & ident_AsIsE<int>::name, context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::number_right( 3UL, context[6], context[7] );
    if( ! context[11] )
      continue;
    // closed e.Items#1 as range 23(2)
    if( ! refalrts::svar_left( context[12], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/14 3/15 s.CurIndexP#1/12/16 s.CurIndexR#1/13/17 Tile{ AsIs: (/8 AsIs: s.CurIndexP#1/12 AsIs: s.CurIndexR#1/13 AsIs: 3/11 AsIs: # AsIsE/10 AsIs: )/9 } )/18 </19 & FoldTile/20 Tile{ AsIs: </0 Reuse: & Sub/4 AsIs: s.Weight#1/5 } 3/21 >/22 Tile{ AsIs: e.Items#1/23(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[15], 3UL ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[16], context[12]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[17], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], FoldTile, "FoldTile" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[21], 3UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Sub, "Sub" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[18] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx e.idx
    // </0 & FoldTile/4 s.Weight#1/5 e.Items#1/2 >/1
    // closed e.Items#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile-EEnd/4 AsIs: s.Weight#1/5 AsIs: e.Items#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], FoldTile_EEnd, "FoldTile-EEnd" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx
  // </0 & FoldTile/4 s.Weight#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FoldTile/4 s.Weight#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_FoldTileW_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Add, "Add" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & FoldTileW$1\1/4 s.Weight#2/9 (/7 s.IndexP#2/10 s.IndexR#2/11 s.ItemWeight#2/12 s.Ident#2/13 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 10, 5},
    {refalrts::icsVarLeft, 0, 11, 5},
    {refalrts::icsVarLeft, 0, 12, 5},
    {refalrts::icsVarLeft, 0, 13, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.IndexP#2/10 s.IndexR#2/11 s.ItemWeight#2/12 s.Ident#2/13 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Weight#2/9 HalfReuse: s.ItemWeight2 #12/7 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 12, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & FoldTileW$1\1/4 s.Weight#2/9 (/7 s.IndexP#2/10 s.IndexR#2/11 s.ItemWeight#2/12 s.Ident#2/13 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.IndexP#2/10 s.IndexR#2/11 s.ItemWeight#2/12 s.Ident#2/13 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Weight#2/9 HalfReuse: s.ItemWeight2 #12/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], Add, "Add" );
  refalrts::reinit_svar( context[7], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FoldTileW(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_FoldTileW_S1L1, "FoldTileW$1\\1" },
    { Reduce, "Reduce" },
    { FoldTile, "FoldTile" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & FoldTileW/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +24, 0, 0},
    // ( s.idx s.idx s.idx s.idx ) e.idx
    // </0 & FoldTileW/4 (/7 s.CurIndexP#1/9 s.CurIndexR#1/10 s.ItemWeight#1/11 s.Ident#1/12 )/8 e.Items#1/2 >/1
    {refalrts::icSave, 0, 20, 2},
    {refalrts::icBracketLeftSave, 0, 5, 20},
    // closed e.Items#1 as range 20(2)
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    {refalrts::icsVarLeft, 0, 11, 5},
    {refalrts::icsVarLeft, 0, 12, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & FoldTile/13 </14 & Reduce/15 & FoldTileW$1\1/16 s.ItemWeight#1/11/17 e.Items#1/20(2)/18 Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: s.CurIndexP#1/9 AsIs: s.CurIndexR#1/10 AsIs: s.ItemWeight#1/11 AsIs: s.Ident#1/12 AsIs: )/8 AsIs: e.Items#1/20(2) AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 2, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 1, 15},
    {refalrts::icAllocFunc, 0, 0, 16},
    {refalrts::icCopySTVar, 17, 11, 0},
    {refalrts::icCopyEVar, 18, 20, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icSpliceTile, 13, 17, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & FoldTileW/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & FoldTileW/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & FoldTileW/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // ( s.idx s.idx s.idx s.idx ) e.idx
    // </0 & FoldTileW/4 (/7 s.CurIndexP#1/9 s.CurIndexR#1/10 s.ItemWeight#1/11 s.Ident#1/12 )/8 e.Items#1/2 >/1
    context[20] = context[2];
    context[21] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[20], context[21] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Items#1 as range 20(2)
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & FoldTile/13 </14 & Reduce/15 & FoldTileW$1\1/16 s.ItemWeight#1/11/17 e.Items#1/20(2)/18 Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: s.CurIndexP#1/9 AsIs: s.CurIndexR#1/10 AsIs: s.ItemWeight#1/11 AsIs: s.Ident#1/12 AsIs: )/8 AsIs: e.Items#1/20(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[13], FoldTile, "FoldTile" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], gen_FoldTileW_S1L1, "FoldTileW$1\\1" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[17], context[11]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[20], context[21]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[4] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & FoldTileW/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FoldTileW/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ReplaceTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Modify, "Modify" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Num<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ReplaceTile/4 (/7 e.Pattern-B#1/24 (/28 # Num/30 s.IndexP#1/31 t.PatternItem#1/32 )/29 e.Pattern-E#1/5 )/8 (/11 e.Result-B#1/34 (/38 # Num/40 s.IndexR#1/41 t.ResultItem#1/42 )/39 e.Result-E#1/9 )/12 (/15 s.IndexP#1/21 s.IndexR#1/22 s.Weight#1/23 (/19 e.Idents#1/17 )/20 )/16 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icBracketRightSave, 0, 17, 13},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Idents#1 as range 17
    {refalrts::icsVarLeft, 0, 21, 13},
    {refalrts::icsVarLeft, 0, 22, 13},
    {refalrts::icsVarLeft, 0, 23, 13},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icEPrepare, 0, 24, 5},
    {refalrts::icEStart, 0, 24, 5},
    {refalrts::icSave, 0, 46, 5},
    {refalrts::icBracketLeftSave, 0, 26, 46},
    {refalrts::icIdentLeftSave, 30, 0, 26},
    {refalrts::icsRepeatLeft, 31, 21, 26},
    // closed e.Pattern-E#1 as range 46(5)
    {refalrts::ictVarLeftSave, 0, 32, 26},
    {refalrts::icEmpty, 0, 0, 26},
    {refalrts::icSave, 0, 48, 9},
    {refalrts::icEPrepare, 0, 34, 48},
    {refalrts::icEStart, 0, 34, 48},
    {refalrts::icSave, 0, 50, 48},
    {refalrts::icBracketLeftSave, 0, 36, 50},
    {refalrts::icIdentLeftSave, 40, 0, 36},
    {refalrts::icsRepeatLeft, 41, 22, 36},
    // closed e.Result-E#1 as range 50(9)
    {refalrts::ictVarLeftSave, 0, 42, 36},
    {refalrts::icEmpty, 0, 0, 36},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.IndexP#1/21 s.IndexR#1/22 s.Weight#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Modify/4 AsIs: (/7 } Tile{ AsIs: e.Idents#1/17 } Tile{ HalfReuse: )/1 } Tile{ AsIs: (/19 } Tile{ AsIs: e.Pattern-B#1/24 } Tile{ AsIs: )/20 HalfReuse: (/16 } Tile{ AsIs: (/28 AsIs: # Num/30 AsIs: s.IndexP#1/31 AsIs: t.PatternItem#1/32 AsIs: )/29 AsIs: e.Pattern-E#1/46(5) AsIs: )/8 AsIs: (/11 AsIs: e.Result-B#1/34 HalfReuse: )/38 HalfReuse: (/40 } (/44 # Num/45 Tile{ AsIs: s.IndexR#1/41 AsIs: t.ResultItem#1/42 AsIs: )/39 AsIs: e.Result-E#1/50(9) AsIs: )/12 HalfReuse: >/15 } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icAllocIdent, 0, 0, 45},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 40},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 40, 12, 0},
    {refalrts::icLinkBrackets, 44, 39, 0},
    {refalrts::icLinkBrackets, 11, 38, 0},
    {refalrts::icLinkBrackets, 16, 8, 0},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 41, 15, 0},
    {refalrts::icSpliceTile, 44, 45, 0},
    {refalrts::icSpliceTile, 28, 40, 0},
    {refalrts::icSpliceTile, 20, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icFail, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & ReplaceTile/4 (/7 e.Pattern-B#1/24 (/28 # Num/30 s.IndexP#1/31 t.PatternItem#1/32 )/29 e.Pattern-E#1/5 )/8 (/11 e.Result-B#1/34 (/38 # Num/40 s.IndexR#1/41 t.ResultItem#1/42 )/39 e.Result-E#1/9 )/12 (/15 s.IndexP#1/21 s.IndexR#1/22 s.Weight#1/23 (/19 e.Idents#1/17 )/20 )/16 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#1 as range 17
  if( ! refalrts::svar_left( context[21], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  refalrts::start_e_loop();
  do {
    context[46] = context[5];
    context[47] = context[6];
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[46], context[47] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    context[30] = refalrts::ident_left(  & ident_Num<int>::name, context[26], context[27] );
    if( ! context[30] )
      continue;
    if( ! refalrts::repeated_stvar_left( context[31], context[21], context[26], context[27] ) )
      continue;
    // closed e.Pattern-E#1 as range 46(5)
    context[33] = refalrts::tvar_left( context[32], context[26], context[27] );
    if( ! context[33] )
      continue;
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    context[48] = context[9];
    context[49] = context[10];
    context[34] = 0;
    context[35] = 0;
    refalrts::start_e_loop();
    do {
      context[50] = context[48];
      context[51] = context[49];
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[50], context[51] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      context[40] = refalrts::ident_left(  & ident_Num<int>::name, context[36], context[37] );
      if( ! context[40] )
        continue;
      if( ! refalrts::repeated_stvar_left( context[41], context[22], context[36], context[37] ) )
        continue;
      // closed e.Result-E#1 as range 50(9)
      context[43] = refalrts::tvar_left( context[42], context[36], context[37] );
      if( ! context[43] )
        continue;
      if( ! refalrts::empty_seq( context[36], context[37] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.IndexP#1/21 s.IndexR#1/22 s.Weight#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Modify/4 AsIs: (/7 } Tile{ AsIs: e.Idents#1/17 } Tile{ HalfReuse: )/1 } Tile{ AsIs: (/19 } Tile{ AsIs: e.Pattern-B#1/24 } Tile{ AsIs: )/20 HalfReuse: (/16 } Tile{ AsIs: (/28 AsIs: # Num/30 AsIs: s.IndexP#1/31 AsIs: t.PatternItem#1/32 AsIs: )/29 AsIs: e.Pattern-E#1/46(5) AsIs: )/8 AsIs: (/11 AsIs: e.Result-B#1/34 HalfReuse: )/38 HalfReuse: (/40 } (/44 # Num/45 Tile{ AsIs: s.IndexR#1/41 AsIs: t.ResultItem#1/42 AsIs: )/39 AsIs: e.Result-E#1/50(9) AsIs: )/12 HalfReuse: >/15 } Tile{ ]] }
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[45], & ident_Num<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], Modify, "Modify" );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::reinit_open_bracket( context[16] );
      refalrts::reinit_close_bracket( context[38] );
      refalrts::reinit_open_bracket( context[40] );
      refalrts::reinit_close_call( context[15] );
      refalrts::push_stack( context[15] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[40], context[12] );
      refalrts::link_brackets( context[44], context[39] );
      refalrts::link_brackets( context[11], context[38] );
      refalrts::link_brackets( context[16], context[8] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[41], context[15] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[28], context[40] );
      res = refalrts::splice_evar( res, context[20], context[16] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[7], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[34], context[35], context[48], context[49] ) );
  } while ( refalrts::open_evar_advance( context[24], context[25], context[5], context[6] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Modify_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Tile<int>::name,
    & ident_RemovedTile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Modify\1/4 (/7 e.PatFirst#1/5 )/8 (/11 e.ResFirst#1/9 )/12 (/15 # RemovedTile/17 e.PatSecond#2/13 )/16 (/20 (/24 # Tile/26 e.Tile#2/22 )/25 e.ResSecond#2/18 )/21 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icIdentLeftSave, 17, 1, 13},
    {refalrts::icBracketLeftSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 22, 18},
    {refalrts::icIdentLeftSave, 26, 0, 22},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.PatFirst#1 as range 5
    // closed e.ResFirst#1 as range 9
    // closed e.PatSecond#2 as range 13
    // closed e.Tile#2 as range 22
    // closed e.ResSecond#2 as range 18
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} & Modify\1/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.PatFirst#1/5 } Tile{ AsIs: # RemovedTile/17 AsIs: e.PatSecond#2/13 AsIs: )/16 AsIs: (/20 } Tile{ AsIs: e.ResFirst#1/9 } Tile{ AsIs: (/24 AsIs: # Tile/26 AsIs: e.Tile#2/22 AsIs: )/25 AsIs: e.ResSecond#2/18 AsIs: )/21 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icLinkBrackets, 0, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 24, 21, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 17, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & Modify\1/4 (/7 e.PatFirst#1/5 )/8 (/11 e.ResFirst#1/9 )/12 (/15 # RemovedTile/17 e.PatSecond#2/13 )/16 (/20 (/24 # Tile/26 e.Tile#2/22 )/25 e.ResSecond#2/18 )/21 >/1
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
  context[17] = refalrts::ident_left(  & ident_RemovedTile<int>::name, context[13], context[14] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[18], context[19] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = refalrts::ident_left(  & ident_Tile<int>::name, context[22], context[23] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatFirst#1 as range 5
  // closed e.ResFirst#1 as range 9
  // closed e.PatSecond#2 as range 13
  // closed e.Tile#2 as range 22
  // closed e.ResSecond#2 as range 18

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & Modify\1/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.PatFirst#1/5 } Tile{ AsIs: # RemovedTile/17 AsIs: e.PatSecond#2/13 AsIs: )/16 AsIs: (/20 } Tile{ AsIs: e.ResFirst#1/9 } Tile{ AsIs: (/24 AsIs: # Tile/26 AsIs: e.Tile#2/22 AsIs: )/25 AsIs: e.ResSecond#2/18 AsIs: )/21 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[0], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[21] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Modify(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoModify, "DoModify" },
    { gen_Modify_L1, "Modify\\1" },
    { refalrts::create_closure, "@create_closure@" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Tile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Modify/4 (/7 e.Idents#1/5 )/8 (/11 e.PatFirst#1/9 )/12 (/15 e.PatSecond#1/13 )/16 (/19 e.ResFirst#1/17 )/20 (/23 e.ResSecond#1/21 )/24 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 21, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Idents#1 as range 5
    // closed e.PatFirst#1 as range 9
    // closed e.PatSecond#1 as range 13
    // closed e.ResFirst#1 as range 17
    // closed e.ResSecond#1 as range 21
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </25 & Fetch/26 Tile{ AsIs: </0 Reuse: & DoModify/4 AsIs: (/7 AsIs: e.Idents#1/5 AsIs: )/8 AsIs: (/11 } # Tile/27 Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.PatSecond#1/13 } Tile{ AsIs: )/20 AsIs: (/23 AsIs: e.ResSecond#1/21 AsIs: )/24 AsIs: >/1 } </28 & @create_closure@/29 & Modify\1/30 (/31 Tile{ AsIs: e.PatFirst#1/9 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ResFirst#1/17 } )/32 >/33 >/34 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocFunc, 0, 3, 26},
    {refalrts::icAllocIdent, 0, 0, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icAllocFunc, 0, 2, 29},
    {refalrts::icAllocFunc, 0, 1, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icLinkBrackets, 15, 32, 0},
    {refalrts::icLinkBrackets, 31, 12, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 11, 16, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 32, 34, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 28, 31, 0},
    {refalrts::icSpliceTile, 20, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 0, 11, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & Modify/4 (/7 e.Idents#1/5 )/8 (/11 e.PatFirst#1/9 )/12 (/15 e.PatSecond#1/13 )/16 (/19 e.ResFirst#1/17 )/20 (/23 e.ResSecond#1/21 )/24 >/1
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
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#1 as range 5
  // closed e.PatFirst#1 as range 9
  // closed e.PatSecond#1 as range 13
  // closed e.ResFirst#1 as range 17
  // closed e.ResSecond#1 as range 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 & Fetch/26 Tile{ AsIs: </0 Reuse: & DoModify/4 AsIs: (/7 AsIs: e.Idents#1/5 AsIs: )/8 AsIs: (/11 } # Tile/27 Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.PatSecond#1/13 } Tile{ AsIs: )/20 AsIs: (/23 AsIs: e.ResSecond#1/21 AsIs: )/24 AsIs: >/1 } </28 & @create_closure@/29 & Modify\1/30 (/31 Tile{ AsIs: e.PatFirst#1/9 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ResFirst#1/17 } )/32 >/33 >/34 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], & ident_Tile<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], refalrts::create_closure, "@create_closure@" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], gen_Modify_L1, "Modify\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoModify, "DoModify" );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[28] );
  refalrts::link_brackets( context[15], context[32] );
  refalrts::link_brackets( context[31], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[28], context[31] );
  res = refalrts::splice_evar( res, context[20], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoModify(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoModify, "DoModify" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_RemovedTile<int>::name,
    & ident_Tile<int>::name,
    & ident_Num<int>::name,
    & ident_RIGHT_EDGE<int>::name,
    & ident_AsIs<int>::name,
    & ident_LEFT_EDGE<int>::name,
    & ident_AsIsE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) ( e.$ )
    //GLOBAL GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) ( e.$ )
    // </0 & DoModify/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/21 e.idxTBV#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 17, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTTB#0 as range 13
    // closed e.idxTTTB#0 as range 17
    {refalrts::icsVarLeft, 0, 21, 9},
    // closed e.idxTBV#0 as range 9
    {refalrts::icOnFailGoTo, +42, 0, 0},
    // ( # AsIsE e.idx ) ( # Tile e.idx ) ( ( # Num s.idx ( s.idx e.idx s.idx ) ) e.idx ) ( ( # Num s.idx ( s.idx e.idx ) ) e.idx )
    // </0 & DoModify/4 (/7 # AsIsE/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 # Num/27 s.NumP#1/41 (/35 s.TypeFromPat#1/42 e.InfoFromPat#1/33 s.Offset#1/45 )/36 )/26 e.PatSecond#1/13 )/16 (/19 (/30 # Num/32 s.NumR#1/43 (/39 s.TypeFromRes#1/44 e.InfoFromRes#1/37 )/40 )/31 e.ResSecond#1/17 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    {refalrts::icSave, 0, 46, 5},
    {refalrts::icIdentLeftSave, 22, 6, 46},
    {refalrts::icSave, 0, 48, 13},
    {refalrts::icBracketLeftSave, 0, 23, 48},
    {refalrts::icIdentLeftSave, 27, 2, 23},
    {refalrts::icSave, 0, 50, 17},
    {refalrts::icBracketLeftSave, 0, 28, 50},
    {refalrts::icIdentLeftSave, 32, 2, 28},
    {refalrts::icBracketRightSave, 0, 33, 23},
    {refalrts::icBracketRightSave, 0, 37, 28},
    // closed e.Idents#1 as range 46(5)
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 48(13)
    // closed e.ResSecond#1 as range 50(17)
    {refalrts::icsVarLeft, 0, 41, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icsVarLeft, 0, 42, 33},
    {refalrts::icsVarLeft, 0, 43, 28},
    {refalrts::icEmpty, 0, 0, 28},
    {refalrts::icsVarLeft, 0, 44, 37},
    // closed e.InfoFromRes#1 as range 37
    {refalrts::icsVarRight, 0, 45, 33},
    // closed e.InfoFromPat#1 as range 33
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NumP#1/41 (/35 s.TypeFromPat#1/42 e.InfoFromPat#1/33 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/30 # Num/32 s.NumR#1/43 (/39 s.TypeFromRes#1/44 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/46(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # AsIs/15 AsIs: (/25 HalfReuse: s.TypeFromRes1 #44/27 } Tile{ AsIs: e.InfoFromRes#1/37 } Tile{ AsIs: s.Offset#1/45 AsIs: )/36 AsIs: )/26 } Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.PatSecond#1/48(13) } Tile{ AsIs: )/40 HalfReuse: (/31 AsIs: e.ResSecond#1/50(17) AsIs: )/20 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icReinitSVar, 0, 44, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 31, 20, 0},
    {refalrts::icLinkBrackets, 19, 40, 0},
    {refalrts::icLinkBrackets, 11, 16, 0},
    {refalrts::icLinkBrackets, 12, 26, 0},
    {refalrts::icLinkBrackets, 25, 36, 0},
    {refalrts::icLinkBrackets, 22, 8, 0},
    {refalrts::icSetRes, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 48},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icSpliceTile, 45, 26, 0},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceTile, 4, 27, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    // ( # AsIs e.idx ) ( # Tile e.idx ) ( ( # Num s.idx ( # LEFT-EDGE ) ) e.idx ) ( ( # Num s.idx ( # LEFT-EDGE ) ) e.idx )
    // </0 & DoModify/4 (/7 # AsIs/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 # Num/27 s.NumP#1/43 (/35 # LEFT-EDGE/37 )/36 )/26 e.PatSecond#1/13 )/16 (/19 (/30 # Num/32 s.NumR#1/44 (/40 # LEFT-EDGE/42 )/41 )/31 e.ResSecond#1/17 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    {refalrts::icSave, 0, 46, 5},
    {refalrts::icIdentLeftSave, 22, 4, 46},
    {refalrts::icSave, 0, 48, 13},
    {refalrts::icBracketLeftSave, 0, 23, 48},
    {refalrts::icIdentLeftSave, 27, 2, 23},
    {refalrts::icSave, 0, 50, 17},
    {refalrts::icBracketLeftSave, 0, 28, 50},
    {refalrts::icIdentLeftSave, 32, 2, 28},
    {refalrts::icBracketRightSave, 0, 33, 23},
    {refalrts::icIdentLeftSave, 37, 5, 33},
    {refalrts::icBracketRightSave, 0, 38, 28},
    {refalrts::icIdentLeftSave, 42, 5, 38},
    {refalrts::icEmpty, 0, 0, 33},
    {refalrts::icEmpty, 0, 0, 38},
    // closed e.Idents#1 as range 46(5)
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 48(13)
    // closed e.ResSecond#1 as range 50(17)
    {refalrts::icsVarLeft, 0, 43, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icsVarLeft, 0, 44, 28},
    {refalrts::icEmpty, 0, 0, 28},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NumP#1/43 (/35 # LEFT-EDGE/37 )/36 )/26 {REMOVED TILE} )/16 (/19 (/30 # Num/32 s.NumR#1/44 {REMOVED TILE} # LEFT-EDGE/42 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/46(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # LEFT-EDGE/15 HalfReuse: )/25 HalfReuse: )/27 } Tile{ AsIs: (/40 } Tile{ AsIs: e.PatSecond#1/48(13) } Tile{ AsIs: )/41 HalfReuse: (/31 AsIs: e.ResSecond#1/50(17) AsIs: )/20 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 5, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 31, 20, 0},
    {refalrts::icLinkBrackets, 40, 41, 0},
    {refalrts::icLinkBrackets, 11, 27, 0},
    {refalrts::icLinkBrackets, 12, 25, 0},
    {refalrts::icLinkBrackets, 22, 8, 0},
    {refalrts::icSetRes, 0, 0, 41},
    {refalrts::icSpliceEVar, 0, 0, 48},
    {refalrts::icSpliceTile, 40, 40, 0},
    {refalrts::icSpliceTile, 4, 27, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    // ( # AsIs e.idx ) ( # Tile e.idx ) ( ( # Num s.idx ( # RIGHT-EDGE ) ) ) ( ( # Num s.idx ( # RIGHT-EDGE ) ) )
    // </0 & DoModify/4 (/7 # AsIs/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 # Num/27 s.NumP#1/43 (/35 # RIGHT-EDGE/37 )/36 )/26 )/16 (/19 (/30 # Num/32 s.NumR#1/44 (/40 # RIGHT-EDGE/42 )/41 )/31 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    {refalrts::icSave, 0, 46, 5},
    {refalrts::icIdentLeftSave, 22, 4, 46},
    {refalrts::icSave, 0, 48, 13},
    {refalrts::icBracketLeftSave, 0, 23, 48},
    {refalrts::icIdentLeftSave, 27, 2, 23},
    {refalrts::icSave, 0, 50, 17},
    {refalrts::icBracketLeftSave, 0, 28, 50},
    {refalrts::icIdentLeftSave, 32, 2, 28},
    {refalrts::icBracketRightSave, 0, 33, 23},
    {refalrts::icIdentLeftSave, 37, 3, 33},
    {refalrts::icBracketRightSave, 0, 38, 28},
    {refalrts::icIdentLeftSave, 42, 3, 38},
    {refalrts::icEmpty, 0, 0, 33},
    {refalrts::icEmpty, 0, 0, 48},
    {refalrts::icEmpty, 0, 0, 38},
    {refalrts::icEmpty, 0, 0, 50},
    // closed e.Idents#1 as range 46(5)
    // closed e.Tile#1 as range 9
    {refalrts::icsVarLeft, 0, 43, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icsVarLeft, 0, 44, 28},
    {refalrts::icEmpty, 0, 0, 28},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NumP#1/43 (/35 # RIGHT-EDGE/37 )/36 )/26 )/16 (/19 (/30 # Num/32 s.NumR#1/44 (/40 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/46(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # RIGHT-EDGE/15 HalfReuse: )/25 HalfReuse: )/27 } Tile{ HalfReuse: (/42 AsIs: )/41 HalfReuse: (/31 AsIs: )/20 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 3, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 42},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 31, 20, 0},
    {refalrts::icLinkBrackets, 42, 41, 0},
    {refalrts::icLinkBrackets, 11, 27, 0},
    {refalrts::icLinkBrackets, 12, 25, 0},
    {refalrts::icLinkBrackets, 22, 8, 0},
    {refalrts::icSetRes, 0, 0, 42},
    {refalrts::icSpliceTile, 4, 27, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +40, 0, 0},
    // ( s.idx e.idx ) ( # Tile e.idx ) ( ( # Num s.idx ( s.idx e.idx s.idx ) ) e.idx ) ( ( # Num s.idx ( s.idx e.idx ) ) e.idx )
    // </0 & DoModify/4 (/7 s.Ident#1/40 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/24 # Num/26 s.NumP#1/41 (/34 s.TypeFromPat#1/42 e.InfoFromPat#1/32 s.Offset#1/45 )/35 )/25 e.PatSecond#1/13 )/16 (/19 (/29 # Num/31 s.NumR#1/43 (/38 s.TypeFromRes#1/44 e.InfoFromRes#1/36 )/39 )/30 e.ResSecond#1/17 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    {refalrts::icSave, 0, 46, 13},
    {refalrts::icBracketLeftSave, 0, 22, 46},
    {refalrts::icIdentLeftSave, 26, 2, 22},
    {refalrts::icSave, 0, 48, 17},
    {refalrts::icBracketLeftSave, 0, 27, 48},
    {refalrts::icIdentLeftSave, 31, 2, 27},
    {refalrts::icBracketRightSave, 0, 32, 22},
    {refalrts::icBracketRightSave, 0, 36, 27},
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 46(13)
    // closed e.ResSecond#1 as range 48(17)
    {refalrts::icSave, 0, 50, 5},
    {refalrts::icsVarLeft, 0, 40, 50},
    // closed e.Idents#1 as range 50(5)
    {refalrts::icsVarLeft, 0, 41, 22},
    {refalrts::icEmpty, 0, 0, 22},
    {refalrts::icsVarLeft, 0, 42, 32},
    {refalrts::icsVarLeft, 0, 43, 27},
    {refalrts::icEmpty, 0, 0, 27},
    {refalrts::icsVarLeft, 0, 44, 36},
    // closed e.InfoFromRes#1 as range 36
    {refalrts::icsVarRight, 0, 45, 32},
    // closed e.InfoFromPat#1 as range 32
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.Ident#1/40 {REMOVED TILE} {REMOVED TILE} s.NumP#1/41 (/34 s.TypeFromPat#1/42 e.InfoFromPat#1/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/29 # Num/31 s.NumR#1/43 (/38 s.TypeFromRes#1/44 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoModify/4 AsIs: (/7 } Tile{ AsIs: e.Idents#1/50(5) } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: s.Ident1 #40/15 AsIs: (/24 HalfReuse: s.TypeFromRes1 #44/26 } Tile{ AsIs: e.InfoFromRes#1/36 } Tile{ AsIs: s.Offset#1/45 AsIs: )/35 AsIs: )/25 } Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.PatSecond#1/46(13) } Tile{ AsIs: )/39 HalfReuse: (/30 AsIs: e.ResSecond#1/48(17) AsIs: )/20 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitSVar, 0, 40, 15},
    {refalrts::icReinitSVar, 0, 44, 26},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 30, 20, 0},
    {refalrts::icLinkBrackets, 19, 39, 0},
    {refalrts::icLinkBrackets, 11, 16, 0},
    {refalrts::icLinkBrackets, 12, 25, 0},
    {refalrts::icLinkBrackets, 24, 35, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 39},
    {refalrts::icSpliceEVar, 0, 0, 46},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icSpliceTile, 45, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceTile, 8, 26, 0},
    {refalrts::icSpliceEVar, 0, 0, 50},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( ) ( # Tile e.idx ) ( e.idx ) ( e.idx )
    // </0 & DoModify/4 (/7 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 e.PatSecond#1/13 )/16 (/19 e.ResSecond#1/17 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 13
    // closed e.ResSecond#1 as range 17
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} )/16 (/19 {REMOVED TILE} )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # RemovedTile/4 } Tile{ AsIs: e.PatSecond#1/13 } Tile{ HalfReuse: )/7 HalfReuse: (/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 AsIs: )/12 } Tile{ AsIs: e.ResSecond#1/17 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 8, 1, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 0, 7, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 7, 12, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) ( e.$ )
  // </0 & DoModify/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/21 e.idxTBV#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 >/1
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
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTTB#0 as range 17
  if( ! refalrts::svar_left( context[21], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    refalrts::start_sentence();
    // ( # AsIsE e.idx ) ( # Tile e.idx ) ( ( # Num s.idx ( s.idx e.idx s.idx ) ) e.idx ) ( ( # Num s.idx ( s.idx e.idx ) ) e.idx )
    // </0 & DoModify/4 (/7 # AsIsE/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 # Num/27 s.NumP#1/41 (/35 s.TypeFromPat#1/42 e.InfoFromPat#1/33 s.Offset#1/45 )/36 )/26 e.PatSecond#1/13 )/16 (/19 (/30 # Num/32 s.NumR#1/43 (/39 s.TypeFromRes#1/44 e.InfoFromRes#1/37 )/40 )/31 e.ResSecond#1/17 )/20 >/1
    if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[21] ) )
      continue;
    context[46] = context[5];
    context[47] = context[6];
    context[22] = refalrts::ident_left(  & ident_AsIsE<int>::name, context[46], context[47] );
    if( ! context[22] )
      continue;
    context[48] = context[13];
    context[49] = context[14];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[48], context[49] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Num<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[50] = context[17];
    context[51] = context[18];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[50], context[51] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_Num<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    context[33] = 0;
    context[34] = 0;
    context[35] = refalrts::brackets_right( context[33], context[34], context[23], context[24] );
    if( ! context[35] )
      continue;
    refalrts::bracket_pointers(context[35], context[36]);
    context[37] = 0;
    context[38] = 0;
    context[39] = refalrts::brackets_right( context[37], context[38], context[28], context[29] );
    if( ! context[39] )
      continue;
    refalrts::bracket_pointers(context[39], context[40]);
    // closed e.Idents#1 as range 46(5)
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 48(13)
    // closed e.ResSecond#1 as range 50(17)
    if( ! refalrts::svar_left( context[41], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[33], context[34] ) )
      continue;
    if( ! refalrts::svar_left( context[43], context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    if( ! refalrts::svar_left( context[44], context[37], context[38] ) )
      continue;
    // closed e.InfoFromRes#1 as range 37
    if( ! refalrts::svar_right( context[45], context[33], context[34] ) )
      continue;
    // closed e.InfoFromPat#1 as range 33

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NumP#1/41 (/35 s.TypeFromPat#1/42 e.InfoFromPat#1/33 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/30 # Num/32 s.NumR#1/43 (/39 s.TypeFromRes#1/44 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/46(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # AsIs/15 AsIs: (/25 HalfReuse: s.TypeFromRes1 #44/27 } Tile{ AsIs: e.InfoFromRes#1/37 } Tile{ AsIs: s.Offset#1/45 AsIs: )/36 AsIs: )/26 } Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.PatSecond#1/48(13) } Tile{ AsIs: )/40 HalfReuse: (/31 AsIs: e.ResSecond#1/50(17) AsIs: )/20 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], DoModify, "DoModify" );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_AsIs<int>::name );
    refalrts::reinit_svar( context[27], context[44] );
    refalrts::reinit_open_bracket( context[31] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[31], context[20] );
    refalrts::link_brackets( context[19], context[40] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::link_brackets( context[12], context[26] );
    refalrts::link_brackets( context[25], context[36] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[40];
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[45], context[26] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[4], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # AsIs e.idx ) ( # Tile e.idx ) ( ( # Num s.idx ( # LEFT-EDGE ) ) e.idx ) ( ( # Num s.idx ( # LEFT-EDGE ) ) e.idx )
    // </0 & DoModify/4 (/7 # AsIs/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 # Num/27 s.NumP#1/43 (/35 # LEFT-EDGE/37 )/36 )/26 e.PatSecond#1/13 )/16 (/19 (/30 # Num/32 s.NumR#1/44 (/40 # LEFT-EDGE/42 )/41 )/31 e.ResSecond#1/17 )/20 >/1
    if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[21] ) )
      continue;
    context[46] = context[5];
    context[47] = context[6];
    context[22] = refalrts::ident_left(  & ident_AsIs<int>::name, context[46], context[47] );
    if( ! context[22] )
      continue;
    context[48] = context[13];
    context[49] = context[14];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[48], context[49] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Num<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[50] = context[17];
    context[51] = context[18];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[50], context[51] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_Num<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    context[33] = 0;
    context[34] = 0;
    context[35] = refalrts::brackets_right( context[33], context[34], context[23], context[24] );
    if( ! context[35] )
      continue;
    refalrts::bracket_pointers(context[35], context[36]);
    context[37] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[33], context[34] );
    if( ! context[37] )
      continue;
    context[38] = 0;
    context[39] = 0;
    context[40] = refalrts::brackets_right( context[38], context[39], context[28], context[29] );
    if( ! context[40] )
      continue;
    refalrts::bracket_pointers(context[40], context[41]);
    context[42] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[38], context[39] );
    if( ! context[42] )
      continue;
    if( ! refalrts::empty_seq( context[33], context[34] ) )
      continue;
    if( ! refalrts::empty_seq( context[38], context[39] ) )
      continue;
    // closed e.Idents#1 as range 46(5)
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 48(13)
    // closed e.ResSecond#1 as range 50(17)
    if( ! refalrts::svar_left( context[43], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[44], context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NumP#1/43 (/35 # LEFT-EDGE/37 )/36 )/26 {REMOVED TILE} )/16 (/19 (/30 # Num/32 s.NumR#1/44 {REMOVED TILE} # LEFT-EDGE/42 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/46(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # LEFT-EDGE/15 HalfReuse: )/25 HalfReuse: )/27 } Tile{ AsIs: (/40 } Tile{ AsIs: e.PatSecond#1/48(13) } Tile{ AsIs: )/41 HalfReuse: (/31 AsIs: e.ResSecond#1/50(17) AsIs: )/20 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], DoModify, "DoModify" );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_LEFT_EDGE<int>::name );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::reinit_close_bracket( context[27] );
    refalrts::reinit_open_bracket( context[31] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[31], context[20] );
    refalrts::link_brackets( context[40], context[41] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[41];
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[4], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # AsIs e.idx ) ( # Tile e.idx ) ( ( # Num s.idx ( # RIGHT-EDGE ) ) ) ( ( # Num s.idx ( # RIGHT-EDGE ) ) )
    // </0 & DoModify/4 (/7 # AsIs/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 # Num/27 s.NumP#1/43 (/35 # RIGHT-EDGE/37 )/36 )/26 )/16 (/19 (/30 # Num/32 s.NumR#1/44 (/40 # RIGHT-EDGE/42 )/41 )/31 )/20 >/1
    if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[21] ) )
      continue;
    context[46] = context[5];
    context[47] = context[6];
    context[22] = refalrts::ident_left(  & ident_AsIs<int>::name, context[46], context[47] );
    if( ! context[22] )
      continue;
    context[48] = context[13];
    context[49] = context[14];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[48], context[49] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_Num<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[50] = context[17];
    context[51] = context[18];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[50], context[51] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_Num<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    context[33] = 0;
    context[34] = 0;
    context[35] = refalrts::brackets_right( context[33], context[34], context[23], context[24] );
    if( ! context[35] )
      continue;
    refalrts::bracket_pointers(context[35], context[36]);
    context[37] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[33], context[34] );
    if( ! context[37] )
      continue;
    context[38] = 0;
    context[39] = 0;
    context[40] = refalrts::brackets_right( context[38], context[39], context[28], context[29] );
    if( ! context[40] )
      continue;
    refalrts::bracket_pointers(context[40], context[41]);
    context[42] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[38], context[39] );
    if( ! context[42] )
      continue;
    if( ! refalrts::empty_seq( context[33], context[34] ) )
      continue;
    if( ! refalrts::empty_seq( context[48], context[49] ) )
      continue;
    if( ! refalrts::empty_seq( context[38], context[39] ) )
      continue;
    if( ! refalrts::empty_seq( context[50], context[51] ) )
      continue;
    // closed e.Idents#1 as range 46(5)
    // closed e.Tile#1 as range 9
    if( ! refalrts::svar_left( context[43], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[44], context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NumP#1/43 (/35 # RIGHT-EDGE/37 )/36 )/26 )/16 (/19 (/30 # Num/32 s.NumR#1/44 (/40 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/46(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # RIGHT-EDGE/15 HalfReuse: )/25 HalfReuse: )/27 } Tile{ HalfReuse: (/42 AsIs: )/41 HalfReuse: (/31 AsIs: )/20 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], DoModify, "DoModify" );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_RIGHT_EDGE<int>::name );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::reinit_close_bracket( context[27] );
    refalrts::reinit_open_bracket( context[42] );
    refalrts::reinit_open_bracket( context[31] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[31], context[20] );
    refalrts::link_brackets( context[42], context[41] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[42];
    res = refalrts::splice_evar( res, context[4], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx ) ( # Tile e.idx ) ( ( # Num s.idx ( s.idx e.idx s.idx ) ) e.idx ) ( ( # Num s.idx ( s.idx e.idx ) ) e.idx )
    // </0 & DoModify/4 (/7 s.Ident#1/40 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/24 # Num/26 s.NumP#1/41 (/34 s.TypeFromPat#1/42 e.InfoFromPat#1/32 s.Offset#1/45 )/35 )/25 e.PatSecond#1/13 )/16 (/19 (/29 # Num/31 s.NumR#1/43 (/38 s.TypeFromRes#1/44 e.InfoFromRes#1/36 )/39 )/30 e.ResSecond#1/17 )/20 >/1
    if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[21] ) )
      continue;
    context[46] = context[13];
    context[47] = context[14];
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[46], context[47] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = refalrts::ident_left(  & ident_Num<int>::name, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[48] = context[17];
    context[49] = context[18];
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[48], context[49] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = refalrts::ident_left(  & ident_Num<int>::name, context[27], context[28] );
    if( ! context[31] )
      continue;
    context[32] = 0;
    context[33] = 0;
    context[34] = refalrts::brackets_right( context[32], context[33], context[22], context[23] );
    if( ! context[34] )
      continue;
    refalrts::bracket_pointers(context[34], context[35]);
    context[36] = 0;
    context[37] = 0;
    context[38] = refalrts::brackets_right( context[36], context[37], context[27], context[28] );
    if( ! context[38] )
      continue;
    refalrts::bracket_pointers(context[38], context[39]);
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 46(13)
    // closed e.ResSecond#1 as range 48(17)
    context[50] = context[5];
    context[51] = context[6];
    if( ! refalrts::svar_left( context[40], context[50], context[51] ) )
      continue;
    // closed e.Idents#1 as range 50(5)
    if( ! refalrts::svar_left( context[41], context[22], context[23] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[32], context[33] ) )
      continue;
    if( ! refalrts::svar_left( context[43], context[27], context[28] ) )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    if( ! refalrts::svar_left( context[44], context[36], context[37] ) )
      continue;
    // closed e.InfoFromRes#1 as range 36
    if( ! refalrts::svar_right( context[45], context[32], context[33] ) )
      continue;
    // closed e.InfoFromPat#1 as range 32

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Ident#1/40 {REMOVED TILE} {REMOVED TILE} s.NumP#1/41 (/34 s.TypeFromPat#1/42 e.InfoFromPat#1/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/29 # Num/31 s.NumR#1/43 (/38 s.TypeFromRes#1/44 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoModify/4 AsIs: (/7 } Tile{ AsIs: e.Idents#1/50(5) } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: s.Ident1 #40/15 AsIs: (/24 HalfReuse: s.TypeFromRes1 #44/26 } Tile{ AsIs: e.InfoFromRes#1/36 } Tile{ AsIs: s.Offset#1/45 AsIs: )/35 AsIs: )/25 } Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.PatSecond#1/46(13) } Tile{ AsIs: )/39 HalfReuse: (/30 AsIs: e.ResSecond#1/48(17) AsIs: )/20 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_svar( context[15], context[40] );
    refalrts::reinit_svar( context[26], context[44] );
    refalrts::reinit_open_bracket( context[30] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[30], context[20] );
    refalrts::link_brackets( context[19], context[39] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::link_brackets( context[24], context[35] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[39];
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[45], context[25] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[8], context[26] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( ) ( # Tile e.idx ) ( e.idx ) ( e.idx )
  // </0 & DoModify/4 (/7 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 e.PatSecond#1/13 )/16 (/19 e.ResSecond#1/17 )/20 >/1
  if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[21] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tile#1 as range 9
  // closed e.PatSecond#1 as range 13
  // closed e.ResSecond#1 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} )/16 (/19 {REMOVED TILE} )/20 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # RemovedTile/4 } Tile{ AsIs: e.PatSecond#1/13 } Tile{ HalfReuse: )/7 HalfReuse: (/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 AsIs: )/12 } Tile{ AsIs: e.ResSecond#1/17 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_RemovedTile<int>::name );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult OverlapItem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoOverlap<int>::name,
    & ident_RIGHT_EDGE<int>::name,
    & ident_LEFT_EDGE<int>::name,
    & ident_AsIs<int>::name,
    & ident_HalfReuse<int>::name,
    & ident_Reuse<int>::name,
    & ident_TkVariable<int>::name,
    & ident_AsIsE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: t.$ t.$
    //GLOBAL GEN: t.$ t.$
    // </0 & OverlapItem/4 t.idx#0/5 t.idxV#0/7 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // ( # TkVariable 'e' e.idx s.idx ) ( # TkVariable 'e' e.idx )
    // </0 & OverlapItem/4 (/5 # TkVariable/13 'e'/14 e.Index#1/17 s.Offset#1/19 )/6 (/7 # TkVariable/15 'e'/16 e.Index#1/11 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    {refalrts::icIdentLeftSave, 13, 6, 9},
    {refalrts::icCharLeftSave, 14, static_cast<unsigned char>('e'), 9},
    {refalrts::icIdentLeftSave, 15, 6, 11},
    {refalrts::icCharLeftSave, 16, static_cast<unsigned char>('e'), 11},
    // closed e.Index#1 as range 11
    {refalrts::iceRepeatLeft, 17, 11, 9},
    {refalrts::icsVarLeft, 0, 19, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # TkVariable/13 'e'/14 e.Index#1/17 s.Offset#1/19 )/6 (/7 # TkVariable/15 'e'/16 e.Index#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIsE/1 ]] }
    {refalrts::icReinitInt, 0, 3, 8},
    {refalrts::icReinitIdent, 0, 7, 1},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    // ( s.idx e.idx s.idx ) ( s.idx e.idx )
    // </0 & OverlapItem/4 (/5 s.AnyType#1/13 e.Info#1/15 s.Offset#1/17 )/6 (/7 s.AnyType#1/14 e.Info#1/11 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    {refalrts::icsVarLeft, 0, 13, 9},
    {refalrts::icsRepeatLeft, 14, 13, 11},
    // closed e.Info#1 as range 11
    {refalrts::iceRepeatLeft, 15, 11, 9},
    {refalrts::icsVarLeft, 0, 17, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.AnyType#1/13 e.Info#1/15 s.Offset#1/17 )/6 (/7 s.AnyType#1/14 e.Info#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIs/1 ]] }
    {refalrts::icReinitInt, 0, 3, 8},
    {refalrts::icReinitIdent, 0, 3, 1},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // ( # TkVariable s.idx e.idx s.idx ) t.idx
    // </0 & OverlapItem/4 (/5 # TkVariable/11 s.Mode#1/12 e.Index#1/9 s.Offset#1/13 )/6 t.AnyItem#1/7 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icIdentLeftSave, 11, 6, 9},
    {refalrts::icsVarLeft, 0, 12, 9},
    {refalrts::icsVarRight, 0, 13, 9},
    // closed e.Index#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # TkVariable/11 s.Mode#1/12 e.Index#1/9 s.Offset#1/13 )/6 t.AnyItem#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    // ( s.idx e.idx s.idx ) ( # TkVariable 's' e.idx )
    // </0 & OverlapItem/4 (/5 s.AnyType#1/15 e.Info#1/9 s.Offset#1/16 )/6 (/7 # TkVariable/13 's'/14 e.Index#1/11 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    {refalrts::icIdentLeftSave, 13, 6, 11},
    {refalrts::icCharLeftSave, 14, static_cast<unsigned char>('s'), 11},
    // closed e.Index#1 as range 11
    {refalrts::icsVarLeft, 0, 15, 9},
    {refalrts::icsVarRight, 0, 16, 9},
    // closed e.Info#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.AnyType#1/15 e.Info#1/9 s.Offset#1/16 )/6 (/7 # TkVariable/13 's'/14 e.Index#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/8 HalfReuse: # HalfReuse/1 ]] }
    {refalrts::icReinitInt, 0, 1, 8},
    {refalrts::icReinitIdent, 0, 4, 1},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // ( s.idx e.idx s.idx ) ( # TkVariable s.idx e.idx )
    // </0 & OverlapItem/4 (/5 s.AnyType#1/14 e.Info#1/9 s.Offset#1/16 )/6 (/7 # TkVariable/13 s.Mode#1/15 e.Index#1/11 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    {refalrts::icIdentLeftSave, 13, 6, 11},
    {refalrts::icsVarLeft, 0, 14, 9},
    {refalrts::icsVarLeft, 0, 15, 11},
    // closed e.Index#1 as range 11
    {refalrts::icsVarRight, 0, 16, 9},
    // closed e.Info#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.AnyType#1/14 e.Info#1/9 s.Offset#1/16 )/6 (/7 # TkVariable/13 s.Mode#1/15 e.Index#1/11 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // ( s.idx e.idx s.idx ) ( # LEFT-EDGE )
    // </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/9 s.Offset#1/15 )/6 (/7 # LEFT-EDGE/13 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    {refalrts::icIdentLeftSave, 13, 2, 11},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icsVarLeft, 0, 14, 9},
    {refalrts::icsVarRight, 0, 15, 9},
    // closed e.Info1#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/9 s.Offset#1/15 )/6 (/7 # LEFT-EDGE/13 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // ( s.idx e.idx s.idx ) ( # RIGHT-EDGE )
    // </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/9 s.Offset#1/15 )/6 (/7 # RIGHT-EDGE/13 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    {refalrts::icIdentLeftSave, 13, 1, 11},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icsVarLeft, 0, 14, 9},
    {refalrts::icsVarRight, 0, 15, 9},
    // closed e.Info1#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/9 s.Offset#1/15 )/6 (/7 # RIGHT-EDGE/13 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // ( s.idx e.idx s.idx ) ( s.idx e.idx )
    // </0 & OverlapItem/4 (/5 s.Type#1/13 e.Info1#1/9 s.Offset#1/15 )/6 (/7 s.Type#1/14 e.Info2#1/11 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    {refalrts::icsVarLeft, 0, 13, 9},
    {refalrts::icsRepeatLeft, 14, 13, 11},
    // closed e.Info2#1 as range 11
    {refalrts::icsVarRight, 0, 15, 9},
    // closed e.Info1#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type#1/13 e.Info1#1/9 s.Offset#1/15 )/6 (/7 s.Type#1/14 e.Info2#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/8 HalfReuse: # Reuse/1 ]] }
    {refalrts::icReinitInt, 0, 2, 8},
    {refalrts::icReinitIdent, 0, 5, 1},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // ( s.idx e.idx s.idx ) ( s.idx e.idx )
    // </0 & OverlapItem/4 (/5 s.Type1#1/13 e.Info1#1/9 s.Offset#1/15 )/6 (/7 s.Type2#1/14 e.Info2#1/11 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    {refalrts::icsVarLeft, 0, 13, 9},
    {refalrts::icsVarLeft, 0, 14, 11},
    // closed e.Info2#1 as range 11
    {refalrts::icsVarRight, 0, 15, 9},
    // closed e.Info1#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type1#1/13 e.Info1#1/9 s.Offset#1/15 )/6 (/7 s.Type2#1/14 e.Info2#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/8 HalfReuse: # HalfReuse/1 ]] }
    {refalrts::icReinitInt, 0, 1, 8},
    {refalrts::icReinitIdent, 0, 4, 1},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    // ( # LEFT-EDGE ) ( # LEFT-EDGE )
    // </0 & OverlapItem/4 (/5 # LEFT-EDGE/13 )/6 (/7 # LEFT-EDGE/14 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    {refalrts::icIdentLeftSave, 13, 2, 9},
    {refalrts::icIdentLeftSave, 14, 2, 11},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # LEFT-EDGE/13 )/6 (/7 # LEFT-EDGE/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIs/1 ]] }
    {refalrts::icReinitInt, 0, 3, 8},
    {refalrts::icReinitIdent, 0, 3, 1},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    // ( # RIGHT-EDGE ) ( # RIGHT-EDGE )
    // </0 & OverlapItem/4 (/5 # RIGHT-EDGE/13 )/6 (/7 # RIGHT-EDGE/14 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    {refalrts::icIdentLeftSave, 13, 1, 9},
    {refalrts::icIdentLeftSave, 14, 1, 11},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # RIGHT-EDGE/13 )/6 (/7 # RIGHT-EDGE/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIs/1 ]] }
    {refalrts::icReinitInt, 0, 3, 8},
    {refalrts::icReinitIdent, 0, 3, 1},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    // ( # LEFT-EDGE ) t.idx
    // </0 & OverlapItem/4 (/5 # LEFT-EDGE/11 )/6 t.Other#1/7 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icIdentLeftSave, 11, 2, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # LEFT-EDGE/11 )/6 t.Other#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    // ( # RIGHT-EDGE ) t.idx
    // </0 & OverlapItem/4 (/5 # RIGHT-EDGE/11 )/6 t.Other#1/7 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icIdentLeftSave, 11, 1, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # RIGHT-EDGE/11 )/6 t.Other#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    // t.idx '*'
    // </0 & OverlapItem/4 t.AnyItem#1/5 '*'/7 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('*'), 7},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 t.AnyItem#1/5 '*'/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // '*' t.idx
    // </0 & OverlapItem/4 '*'/5 t.AnyItem#1/7 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('*'), 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 '*'/5 t.AnyItem#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[14];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: t.$ t.$
  //GLOBAL GEN: t.$ t.$
  // </0 & OverlapItem/4 t.idx#0/5 t.idxV#0/7 >/1
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
    refalrts::start_sentence();
    // ( # TkVariable 'e' e.idx s.idx ) ( # TkVariable 'e' e.idx )
    // </0 & OverlapItem/4 (/5 # TkVariable/13 'e'/14 e.Index#1/17 s.Offset#1/19 )/6 (/7 # TkVariable/15 'e'/16 e.Index#1/11 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'e', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = refalrts::char_left( 'e', context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.Index#1 as range 11
    if( ! refalrts::repeated_evar_left( context[17], context[18], context[11], context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # TkVariable/13 'e'/14 e.Index#1/17 s.Offset#1/19 )/6 (/7 # TkVariable/15 'e'/16 e.Index#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIsE/1 ]] }
    refalrts::reinit_number( context[8], 3UL );
    refalrts::reinit_ident( context[1], & ident_AsIsE<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx s.idx ) ( s.idx e.idx )
    // </0 & OverlapItem/4 (/5 s.AnyType#1/13 e.Info#1/15 s.Offset#1/17 )/6 (/7 s.AnyType#1/14 e.Info#1/11 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[14], context[13], context[11], context[12] ) )
      continue;
    // closed e.Info#1 as range 11
    if( ! refalrts::repeated_evar_left( context[15], context[16], context[11], context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.AnyType#1/13 e.Info#1/15 s.Offset#1/17 )/6 (/7 s.AnyType#1/14 e.Info#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIs/1 ]] }
    refalrts::reinit_number( context[8], 3UL );
    refalrts::reinit_ident( context[1], & ident_AsIs<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkVariable s.idx e.idx s.idx ) t.idx
    // </0 & OverlapItem/4 (/5 # TkVariable/11 s.Mode#1/12 e.Index#1/9 s.Offset#1/13 )/6 t.AnyItem#1/7 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[9], context[10] ) )
      continue;
    // closed e.Index#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # TkVariable/11 s.Mode#1/12 e.Index#1/9 s.Offset#1/13 )/6 t.AnyItem#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    refalrts::reinit_ident( context[1], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx s.idx ) ( # TkVariable 's' e.idx )
    // </0 & OverlapItem/4 (/5 s.AnyType#1/15 e.Info#1/9 s.Offset#1/16 )/6 (/7 # TkVariable/13 's'/14 e.Index#1/11 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 's', context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Index#1 as range 11
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[9], context[10] ) )
      continue;
    // closed e.Info#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.AnyType#1/15 e.Info#1/9 s.Offset#1/16 )/6 (/7 # TkVariable/13 's'/14 e.Index#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/8 HalfReuse: # HalfReuse/1 ]] }
    refalrts::reinit_number( context[8], 1UL );
    refalrts::reinit_ident( context[1], & ident_HalfReuse<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx s.idx ) ( # TkVariable s.idx e.idx )
    // </0 & OverlapItem/4 (/5 s.AnyType#1/14 e.Info#1/9 s.Offset#1/16 )/6 (/7 # TkVariable/13 s.Mode#1/15 e.Index#1/11 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    // closed e.Index#1 as range 11
    if( ! refalrts::svar_right( context[16], context[9], context[10] ) )
      continue;
    // closed e.Info#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.AnyType#1/14 e.Info#1/9 s.Offset#1/16 )/6 (/7 # TkVariable/13 s.Mode#1/15 e.Index#1/11 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    refalrts::reinit_ident( context[1], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx s.idx ) ( # LEFT-EDGE )
    // </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/9 s.Offset#1/15 )/6 (/7 # LEFT-EDGE/13 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[9], context[10] ) )
      continue;
    // closed e.Info1#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/9 s.Offset#1/15 )/6 (/7 # LEFT-EDGE/13 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    refalrts::reinit_ident( context[1], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx s.idx ) ( # RIGHT-EDGE )
    // </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/9 s.Offset#1/15 )/6 (/7 # RIGHT-EDGE/13 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[9], context[10] ) )
      continue;
    // closed e.Info1#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/9 s.Offset#1/15 )/6 (/7 # RIGHT-EDGE/13 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    refalrts::reinit_ident( context[1], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx s.idx ) ( s.idx e.idx )
    // </0 & OverlapItem/4 (/5 s.Type#1/13 e.Info1#1/9 s.Offset#1/15 )/6 (/7 s.Type#1/14 e.Info2#1/11 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[14], context[13], context[11], context[12] ) )
      continue;
    // closed e.Info2#1 as range 11
    if( ! refalrts::svar_right( context[15], context[9], context[10] ) )
      continue;
    // closed e.Info1#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type#1/13 e.Info1#1/9 s.Offset#1/15 )/6 (/7 s.Type#1/14 e.Info2#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/8 HalfReuse: # Reuse/1 ]] }
    refalrts::reinit_number( context[8], 2UL );
    refalrts::reinit_ident( context[1], & ident_Reuse<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx s.idx ) ( s.idx e.idx )
    // </0 & OverlapItem/4 (/5 s.Type1#1/13 e.Info1#1/9 s.Offset#1/15 )/6 (/7 s.Type2#1/14 e.Info2#1/11 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    // closed e.Info2#1 as range 11
    if( ! refalrts::svar_right( context[15], context[9], context[10] ) )
      continue;
    // closed e.Info1#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type1#1/13 e.Info1#1/9 s.Offset#1/15 )/6 (/7 s.Type2#1/14 e.Info2#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/8 HalfReuse: # HalfReuse/1 ]] }
    refalrts::reinit_number( context[8], 1UL );
    refalrts::reinit_ident( context[1], & ident_HalfReuse<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # LEFT-EDGE ) ( # LEFT-EDGE )
    // </0 & OverlapItem/4 (/5 # LEFT-EDGE/13 )/6 (/7 # LEFT-EDGE/14 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[11], context[12] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # LEFT-EDGE/13 )/6 (/7 # LEFT-EDGE/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIs/1 ]] }
    refalrts::reinit_number( context[8], 3UL );
    refalrts::reinit_ident( context[1], & ident_AsIs<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # RIGHT-EDGE ) ( # RIGHT-EDGE )
    // </0 & OverlapItem/4 (/5 # RIGHT-EDGE/13 )/6 (/7 # RIGHT-EDGE/14 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[11], context[12] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # RIGHT-EDGE/13 )/6 (/7 # RIGHT-EDGE/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIs/1 ]] }
    refalrts::reinit_number( context[8], 3UL );
    refalrts::reinit_ident( context[1], & ident_AsIs<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # LEFT-EDGE ) t.idx
    // </0 & OverlapItem/4 (/5 # LEFT-EDGE/11 )/6 t.Other#1/7 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # LEFT-EDGE/11 )/6 t.Other#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    refalrts::reinit_ident( context[1], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # RIGHT-EDGE ) t.idx
    // </0 & OverlapItem/4 (/5 # RIGHT-EDGE/11 )/6 t.Other#1/7 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # RIGHT-EDGE/11 )/6 t.Other#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    refalrts::reinit_ident( context[1], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // t.idx '*'
    // </0 & OverlapItem/4 t.AnyItem#1/5 '*'/7 >/1
    if( ! refalrts::char_term( '*', context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 t.AnyItem#1/5 '*'/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    refalrts::reinit_ident( context[1], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // '*' t.idx
  // </0 & OverlapItem/4 '*'/5 t.AnyItem#1/7 >/1
  if( ! refalrts::char_term( '*', context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & OverlapItem/4 '*'/5 t.AnyItem#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
  refalrts::reinit_ident( context[1], & ident_NoOverlap<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
