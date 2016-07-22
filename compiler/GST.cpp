// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GST(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoFindTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoModify(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoReplaceMaxTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FindTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FindTile_EEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Modify(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult OverlapItem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReplaceMaxTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Skip(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

// identifier #LEFT_EDGE
template <typename SREFAL_PARAM_INT>
struct ident_LEFT_EDGE {
  static const char *name() {
    return "LEFT_EDGE";
  }
};

// identifier #NoOverlap
template <typename SREFAL_PARAM_INT>
struct ident_NoOverlap {
  static const char *name() {
    return "NoOverlap";
  }
};

// identifier #NoTiles
template <typename SREFAL_PARAM_INT>
struct ident_NoTiles {
  static const char *name() {
    return "NoTiles";
  }
};

// identifier #RIGHT_EDGE
template <typename SREFAL_PARAM_INT>
struct ident_RIGHT_EDGE {
  static const char *name() {
    return "RIGHT_EDGE";
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

// identifier #TileReplaced
template <typename SREFAL_PARAM_INT>
struct ident_TileReplaced {
  static const char *name() {
    return "TileReplaced";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

static refalrts::FnResult lambda_GST_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GST, "GST" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoTiles<int>::name,
    & ident_TileReplaced<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )(E )S (E )(E )
    //GLOBAL GEN:(E )(E )S (E )(E )
    // </0 & lambda_GST_0/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 s.idxTT#0/21 (/19 e.idxTTVB#0/17 )/20 (/15 e.idxTTVTB#0/13 )/16 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketRightSave, 0, 13, 2},
    {refalrts::icBracketRightSave, 0, 17, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTVB#0 as range 17
    // closed e.idxTTVTB#0 as range 13
    {refalrts::icsVarLeft, 0, 21, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //(E )(E )#TileReplaced(E )(E )
    // </0 & lambda_GST_0/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # TileReplaced/21 (/19 e.Pattern#2/17 )/20 (/15 e.Result#2/13 )/16 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    // closed e.Pattern#2 as range 17
    // closed e.Result#2 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GST_0/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </12 HalfReuse: & GST/21 AsIs: (/19 AsIs: e.Pattern#2/17 AsIs: )/20 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icReinitFunc, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )(E )#NoTiles(E )(E )
    // </0 & lambda_GST_0/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # NoTiles/21 (/19 e.Pattern#1/22 )/20 (/15 e.Result#1/24 )/16 >/1
    {refalrts::icIdentTerm, 0, 0, 21},
    // closed e.Pattern#1 as range 5
    {refalrts::iceRepeatLeft, 22, 5, 17},
    {refalrts::icEmpty, 0, 0, 17},
    // closed e.Result#1 as range 9
    {refalrts::iceRepeatLeft, 24, 9, 13},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GST_0/4 {REMOVED TILE}  # NoTiles/21 (/19 e.Pattern#1/22 )/20 (/15 e.Result#1/24 )/16 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 } Tile{ ]] }
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 12, 0},
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
  //FAST GEN:(E )(E )S (E )(E )
  //GLOBAL GEN:(E )(E )S (E )(E )
  // </0 & lambda_GST_0/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 s.idxTT#0/21 (/19 e.idxTTVB#0/17 )/20 (/15 e.idxTTVTB#0/13 )/16 >/1
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
  // closed e.idxTTVB#0 as range 17
  // closed e.idxTTVTB#0 as range 13
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    //(E )(E )#TileReplaced(E )(E )
    // </0 & lambda_GST_0/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # TileReplaced/21 (/19 e.Pattern#2/17 )/20 (/15 e.Result#2/13 )/16 >/1
    if( ! refalrts::ident_term(  & ident_TileReplaced<int>::name, context[21] ) )
      continue;
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    // closed e.Pattern#2 as range 17
    // closed e.Result#2 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GST_0/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </12 HalfReuse: & GST/21 AsIs: (/19 AsIs: e.Pattern#2/17 AsIs: )/20 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[21], GST, "GST" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )(E )#NoTiles(E )(E )
  // </0 & lambda_GST_0/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # NoTiles/21 (/19 e.Pattern#1/22 )/20 (/15 e.Result#1/24 )/16 >/1
  if( ! refalrts::ident_term(  & ident_NoTiles<int>::name, context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 5
  if( ! refalrts::repeated_evar_left( context[22], context[23], context[5], context[6], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 9
  if( ! refalrts::repeated_evar_left( context[24], context[25], context[9], context[10], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GST_0/4 {REMOVED TILE}  # NoTiles/21 (/19 e.Pattern#1/22 )/20 (/15 e.Result#1/24 )/16 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult GST(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ReplaceMaxTile, "ReplaceMaxTile" },
    { lambda_GST_0, "lambda_GST_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
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
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </13 & Fetch/14 Tile{ AsIs: </0 Reuse: & ReplaceMaxTile/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } </15 & CreateClosure /16 & lambda_GST_0/17 (/18 e.Pattern#1/5/19 )/21 (/22 e.Result#1/9/23 )/25 >/26 >/27 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 3, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 2, 16},
    {refalrts::icAllocFunc, 0, 1, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icCopyEVar, 19, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icCopyEVar, 23, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 15, 27, 0},
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </13 & Fetch/14 Tile{ AsIs: </0 Reuse: & ReplaceMaxTile/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } </15 & CreateClosure /16 & lambda_GST_0/17 (/18 e.Pattern#1/5/19 )/21 (/22 e.Result#1/9/23 )/25 >/26 >/27 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], lambda_GST_0, "lambda_GST_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[23], context[24], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ReplaceMaxTile, "ReplaceMaxTile" );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[22], context[25] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[27] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ReplaceMaxTile_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Modify, "Modify" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ReplaceMaxTile_0/4 (/7 e.Idents#2/5 )/8 (/11 e.PatFirst#3/9 )/12 (/15 e.PatSecond#3/13 )/16 (/19 e.ResFirst#3/17 )/20 (/23 e.ResSecond#3/21 )/24 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 21, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Idents#2 as range 5
    // closed e.PatFirst#3 as range 9
    // closed e.PatSecond#3 as range 13
    // closed e.ResFirst#3 as range 17
    // closed e.ResSecond#3 as range 21
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Modify/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.PatFirst#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.PatSecond#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.ResFirst#3/17 AsIs: )/20 AsIs: (/23 AsIs: e.ResSecond#3/21 AsIs: )/24 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
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
  // </0 & lambda_ReplaceMaxTile_0/4 (/7 e.Idents#2/5 )/8 (/11 e.PatFirst#3/9 )/12 (/15 e.PatSecond#3/13 )/16 (/19 e.ResFirst#3/17 )/20 (/23 e.ResSecond#3/21 )/24 >/1
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
  // closed e.Idents#2 as range 5
  // closed e.PatFirst#3 as range 9
  // closed e.PatSecond#3 as range 13
  // closed e.ResFirst#3 as range 17
  // closed e.ResSecond#3 as range 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Modify/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.PatFirst#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.PatSecond#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.ResFirst#3/17 AsIs: )/20 AsIs: (/23 AsIs: e.ResSecond#3/21 AsIs: )/24 AsIs: >/1 ]] }
  refalrts::update_name( context[4], Modify, "Modify" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ReplaceMaxTile_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Skip, "Skip" },
    { lambda_ReplaceMaxTile_0, "lambda_ReplaceMaxTile_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TileReplaced<int>::name,
    & ident_NoTiles<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:(E )(E )S E 
    // </0 & lambda_ReplaceMaxTile_1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 s.idxTT#0/13 e.idxTTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    {refalrts::icsVarLeft, 0, 13, 2},
    // closed e.idxTTV#0 as range 2
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //(E )(E )#NoTiles
    // </0 & lambda_ReplaceMaxTile_1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # NoTiles/13 >/1
    {refalrts::icIdentTerm, 0, 1, 13},
    {refalrts::icSave, 0, 35, 2},
    {refalrts::icEmpty, 0, 0, 35},
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  # NoTiles/13 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoTiles/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )(E )#TileReplaced(S S S (E ))
    // </0 & lambda_ReplaceMaxTile_1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # TileReplaced/13 (/16 s.IndexP#2/22 s.IndexR#2/23 s.Weight#2/24 (/20 e.Idents#2/18 )/21 )/17 >/1
    {refalrts::icIdentTerm, 0, 0, 13},
    {refalrts::icBracketLeftSave, 0, 14, 2},
    {refalrts::icBracketRightSave, 0, 18, 14},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    // closed e.Idents#2 as range 18
    {refalrts::icsVarLeft, 0, 22, 14},
    {refalrts::icsVarLeft, 0, 23, 14},
    {refalrts::icsVarLeft, 0, 24, 14},
    {refalrts::icEmpty, 0, 0, 14},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.IndexP#2/22 s.IndexR#2/23 s.Weight#2/24 {REMOVED TILE} 
    //RESULT: Tile{ [[ } # TileReplaced/25 </26 & Fetch/27 </28 Tile{ HalfReuse: & Skip/0 HalfReuse: s.IndexP2 #22/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 HalfReuse: >/11 } </29 Tile{ HalfReuse: & Skip/12 HalfReuse: s.IndexR2 #23/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/9 } )/30 >/31 </32 & CreateClosure /33 & lambda_ReplaceMaxTile_0/34 Tile{ AsIs: (/20 AsIs: e.Idents#2/18 AsIs: )/21 HalfReuse: >/17 AsIs: >/1 ]] }
    {refalrts::icAllocIdent, 0, 0, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocFunc, 0, 3, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icAllocFunc, 0, 2, 33},
    {refalrts::icAllocFunc, 0, 1, 34},
    {refalrts::icReinitFunc, 0, 0, 0},
    {refalrts::icReinitSVar, 0, 22, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icReinitFunc, 0, 0, 12},
    {refalrts::icReinitSVar, 0, 23, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icLinkBrackets, 16, 30, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 20},
    {refalrts::icSpliceTile, 30, 34, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 12, 16, 0},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceTile, 0, 11, 0},
    {refalrts::icSpliceTile, 25, 28, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:(E )(E )S E 
  // </0 & lambda_ReplaceMaxTile_1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 s.idxTT#0/13 e.idxTTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTV#0 as range 2
  do {
    refalrts::start_sentence();
    //(E )(E )#NoTiles
    // </0 & lambda_ReplaceMaxTile_1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # NoTiles/13 >/1
    if( ! refalrts::ident_term(  & ident_NoTiles<int>::name, context[13] ) )
      continue;
    context[35] = context[2];
    context[36] = context[3];
    if( ! refalrts::empty_seq( context[35], context[36] ) )
      continue;
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  # NoTiles/13 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoTiles/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_NoTiles<int>::name );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )(E )#TileReplaced(S S S (E ))
  // </0 & lambda_ReplaceMaxTile_1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # TileReplaced/13 (/16 s.IndexP#2/22 s.IndexR#2/23 s.Weight#2/24 (/20 e.Idents#2/18 )/21 )/17 >/1
  if( ! refalrts::ident_term(  & ident_TileReplaced<int>::name, context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_right( context[18], context[19], context[14], context[15] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9
  // closed e.Idents#2 as range 18
  if( ! refalrts::svar_left( context[22], context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[24], context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.IndexP#2/22 s.IndexR#2/23 s.Weight#2/24 {REMOVED TILE} 
  //RESULT: Tile{ [[ } # TileReplaced/25 </26 & Fetch/27 </28 Tile{ HalfReuse: & Skip/0 HalfReuse: s.IndexP2 #22/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 HalfReuse: >/11 } </29 Tile{ HalfReuse: & Skip/12 HalfReuse: s.IndexR2 #23/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/9 } )/30 >/31 </32 & CreateClosure /33 & lambda_ReplaceMaxTile_0/34 Tile{ AsIs: (/20 AsIs: e.Idents#2/18 AsIs: )/21 HalfReuse: >/17 AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[25], & ident_TileReplaced<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], lambda_ReplaceMaxTile_0, "lambda_ReplaceMaxTile_0" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Skip, "Skip" );
  refalrts::reinit_svar( context[4], context[22] );
  refalrts::reinit_close_call( context[11] );
  refalrts::reinit_name( context[12], Skip, "Skip" );
  refalrts::reinit_svar( context[13], context[23] );
  refalrts::reinit_close_call( context[17] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[32] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[29] );
  refalrts::link_brackets( context[16], context[30] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[28] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[30], context[34] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ReplaceMaxTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ReplaceMaxTile_1, "lambda_ReplaceMaxTile_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { DoReplaceMaxTile, "DoReplaceMaxTile" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ReplaceMaxTile/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </13 & Fetch/14 </15 & DoReplaceMaxTile/16 (/17 0/18 0/19 0/20 (/21 )/22 )/23 (/24 0/25 (/26 )/27 e.Pattern#1/5/28 )/30 (/31 0/32 (/33 )/34 e.Result#1/9/35 )/37 >/38 </39 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ReplaceMaxTile_1/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } >/40 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 3, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 2, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocInt, 0, 0, 18},
    {refalrts::icAllocInt, 0, 0, 19},
    {refalrts::icAllocInt, 0, 0, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icAllocInt, 0, 0, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icCopyEVar, 28, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icAllocInt, 0, 0, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icCopyEVar, 35, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icLinkBrackets, 31, 37, 0},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icLinkBrackets, 24, 30, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icLinkBrackets, 17, 23, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 40, 40, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 13, 39, 0},
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
  // </0 & ReplaceMaxTile/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </13 & Fetch/14 </15 & DoReplaceMaxTile/16 (/17 0/18 0/19 0/20 (/21 )/22 )/23 (/24 0/25 (/26 )/27 e.Pattern#1/5/28 )/30 (/31 0/32 (/33 )/34 e.Result#1/9/35 )/37 >/38 </39 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ReplaceMaxTile_1/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } >/40 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], DoReplaceMaxTile, "DoReplaceMaxTile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[18], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[19], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[20], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[25], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[28], context[29], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[32], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[35], context[36], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_ReplaceMaxTile_1, "lambda_ReplaceMaxTile_1" );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[39] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[31], context[37] );
  refalrts::link_brackets( context[33], context[34] );
  refalrts::link_brackets( context[24], context[30] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[17], context[23] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[13], context[39] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Modify_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // </0 & lambda_Modify_0/4 (/7 e.PatFirst#1/5 )/8 (/11 e.ResFirst#1/9 )/12 (/15 # RemovedTile/17 e.PatSecond#2/13 )/16 (/20 (/24 # Tile/26 e.Tile#2/22 )/25 e.ResSecond#2/18 )/21 >/1
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
    //TRASH: {REMOVED TILE}  & lambda_Modify_0/4 (/7 {REMOVED TILE}  )/8 (/11 {REMOVED TILE}  )/12 (/15 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
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
  // </0 & lambda_Modify_0/4 (/7 e.PatFirst#1/5 )/8 (/11 e.ResFirst#1/9 )/12 (/15 # RemovedTile/17 e.PatSecond#2/13 )/16 (/20 (/24 # Tile/26 e.Tile#2/22 )/25 e.ResSecond#2/18 )/21 >/1
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
  //TRASH: {REMOVED TILE}  & lambda_Modify_0/4 (/7 {REMOVED TILE}  )/8 (/11 {REMOVED TILE}  )/12 (/15 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
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
    { lambda_Modify_0, "lambda_Modify_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
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
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </25 & Fetch/26 Tile{ AsIs: </0 Reuse: & DoModify/4 AsIs: (/7 AsIs: e.Idents#1/5 AsIs: )/8 AsIs: (/11 } # Tile/27 Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.PatSecond#1/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.ResSecond#1/21 } )/28 >/29 </30 & CreateClosure /31 & lambda_Modify_0/32 (/33 Tile{ AsIs: e.PatFirst#1/9 } Tile{ AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.ResFirst#1/17 } )/34 Tile{ HalfReuse: >/24 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocFunc, 0, 3, 26},
    {refalrts::icAllocIdent, 0, 0, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 2, 31},
    {refalrts::icAllocFunc, 0, 1, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 23, 34, 0},
    {refalrts::icLinkBrackets, 33, 20, 0},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 19, 28, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 24},
    {refalrts::icSpliceTile, 34, 34, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 28, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceTile, 12, 19, 0},
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </25 & Fetch/26 Tile{ AsIs: </0 Reuse: & DoModify/4 AsIs: (/7 AsIs: e.Idents#1/5 AsIs: )/8 AsIs: (/11 } # Tile/27 Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.PatSecond#1/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.ResSecond#1/21 } )/28 >/29 </30 & CreateClosure /31 & lambda_Modify_0/32 (/33 Tile{ AsIs: e.PatFirst#1/9 } Tile{ AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.ResFirst#1/17 } )/34 Tile{ HalfReuse: >/24 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], & ident_Tile<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], lambda_Modify_0, "lambda_Modify_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoModify, "DoModify" );
  refalrts::reinit_close_call( context[24] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[23], context[34] );
  refalrts::link_brackets( context[33], context[20] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[28] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[28], context[33] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[12], context[19] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoModify(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoModify, "DoModify" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_RemovedTile<int>::name,
    & ident_Tile<int>::name,
    & ident_RIGHT_EDGE<int>::name,
    & ident_AsIs<int>::name,
    & ident_LEFT_EDGE<int>::name,
    & ident_AsIsE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )(S E )(E )(E )
    //GLOBAL GEN:(E )(S E )(E )(E )
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
    {refalrts::icOnFailGoTo, +39, 0, 0},
    //(#AsIsEE )(#TileE )((S E S )E )((S E )E )
    // </0 & DoModify/4 (/7 # AsIsE/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 s.TypeFromPat#1/31 e.InfoFromPat#1/23 s.Offset#1/33 )/26 e.PatSecond#1/13 )/16 (/19 (/29 s.TypeFromRes#1/32 e.InfoFromRes#1/27 )/30 e.ResSecond#1/17 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    {refalrts::icSave, 0, 35, 5},
    {refalrts::icIdentLeftSave, 22, 5, 35},
    {refalrts::icSave, 0, 37, 13},
    {refalrts::icBracketLeftSave, 0, 23, 37},
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icBracketLeftSave, 0, 27, 39},
    // closed e.Idents#1 as range 35(5)
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 37(13)
    // closed e.ResSecond#1 as range 39(17)
    {refalrts::icsVarLeft, 0, 31, 23},
    {refalrts::icsVarLeft, 0, 32, 27},
    // closed e.InfoFromRes#1 as range 27
    {refalrts::icsVarRight, 0, 33, 23},
    // closed e.InfoFromPat#1 as range 23
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.TypeFromPat#1/31 e.InfoFromPat#1/23 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/35(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # AsIs/15 AsIs: (/25 } Tile{ AsIs: s.TypeFromRes#1/32 } Tile{ AsIs: e.InfoFromRes#1/27 } Tile{ AsIs: s.Offset#1/33 } Tile{ HalfReuse: )/19 HalfReuse: )/29 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: (/26 AsIs: e.PatSecond#1/37(13) AsIs: )/16 } Tile{ HalfReuse: (/30 AsIs: e.ResSecond#1/39(17) AsIs: )/20 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 3, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 30, 20, 0},
    {refalrts::icLinkBrackets, 26, 16, 0},
    {refalrts::icLinkBrackets, 11, 0, 0},
    {refalrts::icLinkBrackets, 12, 29, 0},
    {refalrts::icLinkBrackets, 25, 19, 0},
    {refalrts::icLinkBrackets, 22, 8, 0},
    {refalrts::icSetRes, 0, 0, 30},
    {refalrts::icSpliceTile, 26, 16, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 29, 0},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 4, 25, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    //(#AsIsE )(#TileE )((#LEFT_EDGE)E )((#LEFT_EDGE)E )
    // </0 & DoModify/4 (/7 # AsIs/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 # LEFT_EDGE/27 )/26 e.PatSecond#1/13 )/16 (/19 (/30 # LEFT_EDGE/32 )/31 e.ResSecond#1/17 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    {refalrts::icSave, 0, 35, 5},
    {refalrts::icIdentLeftSave, 22, 3, 35},
    {refalrts::icSave, 0, 37, 13},
    {refalrts::icBracketLeftSave, 0, 23, 37},
    {refalrts::icIdentLeftSave, 27, 4, 23},
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icBracketLeftSave, 0, 28, 39},
    {refalrts::icIdentLeftSave, 32, 4, 28},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmpty, 0, 0, 28},
    // closed e.Idents#1 as range 35(5)
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 37(13)
    // closed e.ResSecond#1 as range 39(17)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  (/30 # LEFT_EDGE/32 )/31 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/35(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # LEFT_EDGE/15 HalfReuse: )/25 HalfReuse: )/27 HalfReuse: (/26 AsIs: e.PatSecond#1/37(13) AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.ResSecond#1/39(17) } Tile{ AsIs: )/20 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 26, 16, 0},
    {refalrts::icLinkBrackets, 11, 27, 0},
    {refalrts::icLinkBrackets, 12, 25, 0},
    {refalrts::icLinkBrackets, 22, 8, 0},
    {refalrts::icSetRes, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 4, 19, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    //(#AsIsE )(#TileE )((#RIGHT_EDGE))((#RIGHT_EDGE))
    // </0 & DoModify/4 (/7 # AsIs/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 # RIGHT_EDGE/27 )/26 )/16 (/19 (/30 # RIGHT_EDGE/32 )/31 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    {refalrts::icSave, 0, 35, 5},
    {refalrts::icIdentLeftSave, 22, 3, 35},
    {refalrts::icSave, 0, 37, 13},
    {refalrts::icBracketLeftSave, 0, 23, 37},
    {refalrts::icIdentLeftSave, 27, 2, 23},
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icBracketLeftSave, 0, 28, 39},
    {refalrts::icIdentLeftSave, 32, 2, 28},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmpty, 0, 0, 37},
    {refalrts::icEmpty, 0, 0, 28},
    {refalrts::icEmpty, 0, 0, 39},
    // closed e.Idents#1 as range 35(5)
    // closed e.Tile#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  )/31 )/20 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/35(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # RIGHT_EDGE/15 HalfReuse: )/25 HalfReuse: )/27 HalfReuse: (/26 AsIs: )/16 AsIs: (/19 HalfReuse: )/30 HalfReuse: >/32 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 2, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icLinkBrackets, 26, 16, 0},
    {refalrts::icLinkBrackets, 11, 27, 0},
    {refalrts::icLinkBrackets, 12, 25, 0},
    {refalrts::icLinkBrackets, 22, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 32, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    //(S E )(#TileE )((S E S )E )((S E )E )
    // </0 & DoModify/4 (/7 s.Ident#1/30 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/24 s.TypeFromPat#1/31 e.InfoFromPat#1/22 s.Offset#1/33 )/25 e.PatSecond#1/13 )/16 (/19 (/28 s.TypeFromRes#1/32 e.InfoFromRes#1/26 )/29 e.ResSecond#1/17 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    {refalrts::icSave, 0, 35, 13},
    {refalrts::icBracketLeftSave, 0, 22, 35},
    {refalrts::icSave, 0, 37, 17},
    {refalrts::icBracketLeftSave, 0, 26, 37},
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 35(13)
    // closed e.ResSecond#1 as range 37(17)
    {refalrts::icSave, 0, 39, 5},
    {refalrts::icsVarLeft, 0, 30, 39},
    // closed e.Idents#1 as range 39(5)
    {refalrts::icsVarLeft, 0, 31, 22},
    {refalrts::icsVarLeft, 0, 32, 26},
    // closed e.InfoFromRes#1 as range 26
    {refalrts::icsVarRight, 0, 33, 22},
    // closed e.InfoFromPat#1 as range 22
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Ident#1/30 {REMOVED TILE}  {REMOVED TILE}  s.TypeFromPat#1/31 e.InfoFromPat#1/22 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoModify/4 AsIs: (/7 } Tile{ AsIs: e.Idents#1/39(5) } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: s.Ident1 #30/15 AsIs: (/24 } Tile{ AsIs: s.TypeFromRes#1/32 } Tile{ AsIs: e.InfoFromRes#1/26 } Tile{ AsIs: s.Offset#1/33 } Tile{ HalfReuse: )/19 HalfReuse: )/28 } )/34 Tile{ HalfReuse: (/25 AsIs: e.PatSecond#1/35(13) AsIs: )/16 } Tile{ HalfReuse: (/29 AsIs: e.ResSecond#1/37(17) AsIs: )/20 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitSVar, 0, 30, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 29, 20, 0},
    {refalrts::icLinkBrackets, 25, 16, 0},
    {refalrts::icLinkBrackets, 11, 34, 0},
    {refalrts::icLinkBrackets, 12, 28, 0},
    {refalrts::icLinkBrackets, 24, 19, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 29},
    {refalrts::icSpliceTile, 25, 16, 0},
    {refalrts::icSpliceTile, 34, 34, 0},
    {refalrts::icSpliceTile, 19, 28, 0},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 8, 24, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //()(#TileE )(E )(E )
    // </0 & DoModify/4 (/7 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 e.PatSecond#1/13 )/16 (/19 e.ResSecond#1/17 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 13
    // closed e.ResSecond#1 as range 17
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/15 {REMOVED TILE}  )/16 (/19 {REMOVED TILE}  )/20 {REMOVED TILE} 
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
  //FAST GEN:(E )(S E )(E )(E )
  //GLOBAL GEN:(E )(S E )(E )(E )
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
    //(#AsIsEE )(#TileE )((S E S )E )((S E )E )
    // </0 & DoModify/4 (/7 # AsIsE/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 s.TypeFromPat#1/31 e.InfoFromPat#1/23 s.Offset#1/33 )/26 e.PatSecond#1/13 )/16 (/19 (/29 s.TypeFromRes#1/32 e.InfoFromRes#1/27 )/30 e.ResSecond#1/17 )/20 >/1
    if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[21] ) )
      continue;
    context[35] = context[5];
    context[36] = context[6];
    context[22] = refalrts::ident_left(  & ident_AsIsE<int>::name, context[35], context[36] );
    if( ! context[22] )
      continue;
    context[37] = context[13];
    context[38] = context[14];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[37], context[38] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[39] = context[17];
    context[40] = context[18];
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[39], context[40] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    // closed e.Idents#1 as range 35(5)
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 37(13)
    // closed e.ResSecond#1 as range 39(17)
    if( ! refalrts::svar_left( context[31], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
      continue;
    // closed e.InfoFromRes#1 as range 27
    if( ! refalrts::svar_right( context[33], context[23], context[24] ) )
      continue;
    // closed e.InfoFromPat#1 as range 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.TypeFromPat#1/31 e.InfoFromPat#1/23 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/35(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # AsIs/15 AsIs: (/25 } Tile{ AsIs: s.TypeFromRes#1/32 } Tile{ AsIs: e.InfoFromRes#1/27 } Tile{ AsIs: s.Offset#1/33 } Tile{ HalfReuse: )/19 HalfReuse: )/29 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: (/26 AsIs: e.PatSecond#1/37(13) AsIs: )/16 } Tile{ HalfReuse: (/30 AsIs: e.ResSecond#1/39(17) AsIs: )/20 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], DoModify, "DoModify" );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_AsIs<int>::name );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::reinit_close_bracket( context[29] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_bracket( context[26] );
    refalrts::reinit_open_bracket( context[30] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[30], context[20] );
    refalrts::link_brackets( context[26], context[16] );
    refalrts::link_brackets( context[11], context[0] );
    refalrts::link_brackets( context[12], context[29] );
    refalrts::link_brackets( context[25], context[19] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[30];
    res = refalrts::splice_evar( res, context[26], context[16] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[19], context[29] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[4], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#AsIsE )(#TileE )((#LEFT_EDGE)E )((#LEFT_EDGE)E )
    // </0 & DoModify/4 (/7 # AsIs/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 # LEFT_EDGE/27 )/26 e.PatSecond#1/13 )/16 (/19 (/30 # LEFT_EDGE/32 )/31 e.ResSecond#1/17 )/20 >/1
    if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[21] ) )
      continue;
    context[35] = context[5];
    context[36] = context[6];
    context[22] = refalrts::ident_left(  & ident_AsIs<int>::name, context[35], context[36] );
    if( ! context[22] )
      continue;
    context[37] = context[13];
    context[38] = context[14];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[37], context[38] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[39] = context[17];
    context[40] = context[18];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[39], context[40] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    // closed e.Idents#1 as range 35(5)
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 37(13)
    // closed e.ResSecond#1 as range 39(17)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  (/30 # LEFT_EDGE/32 )/31 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/35(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # LEFT_EDGE/15 HalfReuse: )/25 HalfReuse: )/27 HalfReuse: (/26 AsIs: e.PatSecond#1/37(13) AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.ResSecond#1/39(17) } Tile{ AsIs: )/20 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], DoModify, "DoModify" );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_LEFT_EDGE<int>::name );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::reinit_close_bracket( context[27] );
    refalrts::reinit_open_bracket( context[26] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[26], context[16] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[4], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#AsIsE )(#TileE )((#RIGHT_EDGE))((#RIGHT_EDGE))
    // </0 & DoModify/4 (/7 # AsIs/22 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/25 # RIGHT_EDGE/27 )/26 )/16 (/19 (/30 # RIGHT_EDGE/32 )/31 )/20 >/1
    if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[21] ) )
      continue;
    context[35] = context[5];
    context[36] = context[6];
    context[22] = refalrts::ident_left(  & ident_AsIs<int>::name, context[35], context[36] );
    if( ! context[22] )
      continue;
    context[37] = context[13];
    context[38] = context[14];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[37], context[38] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[23], context[24] );
    if( ! context[27] )
      continue;
    context[39] = context[17];
    context[40] = context[18];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[39], context[40] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[37], context[38] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[39], context[40] ) )
      continue;
    // closed e.Idents#1 as range 35(5)
    // closed e.Tile#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  )/31 )/20 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/22 AsIs: e.Idents#1/35(5) AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: # RIGHT_EDGE/15 HalfReuse: )/25 HalfReuse: )/27 HalfReuse: (/26 AsIs: )/16 AsIs: (/19 HalfReuse: )/30 HalfReuse: >/32 } Tile{ ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], DoModify, "DoModify" );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_RIGHT_EDGE<int>::name );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::reinit_close_bracket( context[27] );
    refalrts::reinit_open_bracket( context[26] );
    refalrts::reinit_close_bracket( context[30] );
    refalrts::reinit_close_call( context[32] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[19], context[30] );
    refalrts::link_brackets( context[26], context[16] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[32] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S E )(#TileE )((S E S )E )((S E )E )
    // </0 & DoModify/4 (/7 s.Ident#1/30 e.Idents#1/5 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 (/24 s.TypeFromPat#1/31 e.InfoFromPat#1/22 s.Offset#1/33 )/25 e.PatSecond#1/13 )/16 (/19 (/28 s.TypeFromRes#1/32 e.InfoFromRes#1/26 )/29 e.ResSecond#1/17 )/20 >/1
    if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[21] ) )
      continue;
    context[35] = context[13];
    context[36] = context[14];
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[35], context[36] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[37] = context[17];
    context[38] = context[18];
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[37], context[38] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 35(13)
    // closed e.ResSecond#1 as range 37(17)
    context[39] = context[5];
    context[40] = context[6];
    if( ! refalrts::svar_left( context[30], context[39], context[40] ) )
      continue;
    // closed e.Idents#1 as range 39(5)
    if( ! refalrts::svar_left( context[31], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
      continue;
    // closed e.InfoFromRes#1 as range 26
    if( ! refalrts::svar_right( context[33], context[22], context[23] ) )
      continue;
    // closed e.InfoFromPat#1 as range 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Ident#1/30 {REMOVED TILE}  {REMOVED TILE}  s.TypeFromPat#1/31 e.InfoFromPat#1/22 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoModify/4 AsIs: (/7 } Tile{ AsIs: e.Idents#1/39(5) } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Tile/21 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: s.Ident1 #30/15 AsIs: (/24 } Tile{ AsIs: s.TypeFromRes#1/32 } Tile{ AsIs: e.InfoFromRes#1/26 } Tile{ AsIs: s.Offset#1/33 } Tile{ HalfReuse: )/19 HalfReuse: )/28 } )/34 Tile{ HalfReuse: (/25 AsIs: e.PatSecond#1/35(13) AsIs: )/16 } Tile{ HalfReuse: (/29 AsIs: e.ResSecond#1/37(17) AsIs: )/20 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_svar( context[15], context[30] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::reinit_close_bracket( context[28] );
    refalrts::reinit_open_bracket( context[25] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[29], context[20] );
    refalrts::link_brackets( context[25], context[16] );
    refalrts::link_brackets( context[11], context[34] );
    refalrts::link_brackets( context[12], context[28] );
    refalrts::link_brackets( context[24], context[19] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[29];
    res = refalrts::splice_evar( res, context[25], context[16] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[19], context[28] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[8], context[24] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //()(#TileE )(E )(E )
  // </0 & DoModify/4 (/7 )/8 (/11 # Tile/21 e.Tile#1/9 )/12 (/15 e.PatSecond#1/13 )/16 (/19 e.ResSecond#1/17 )/20 >/1
  if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[21] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tile#1 as range 9
  // closed e.PatSecond#1 as range 13
  // closed e.ResSecond#1 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/15 {REMOVED TILE}  )/16 (/19 {REMOVED TILE}  )/20 {REMOVED TILE} 
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

static refalrts::FnResult Skip(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Dec, "Dec" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:S (E )E 
    // </0 & Skip/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 e.idxVT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    // closed e.idxVB#0 as range 6
    // closed e.idxVT#0 as range 2
    {refalrts::icOnFailGoTo, +13, 0, 0},
    //S (E )
    // </0 & Skip/4 s.Num#1/5 (/8 e.Str#1/6 )/9 >/1
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icEmpty, 0, 0, 19},
    // closed e.Str#1 as range 6
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Skip/4 AsIs: s.Num#1/5 AsIs: (/8 } )/10 (/11 Tile{ AsIs: e.Str#1/6 } Tile{ AsIs: )/9 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 9, 0},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSetRes, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //0 (E )(E )
    // </0 & Skip/4 0/5 (/8 e.Str_B#1/6 )/9 (/12 e.Str_E#1/10 )/13 >/1
    {refalrts::icNumTerm, 0, 0, 5},
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icBracketLeftSave, 0, 10, 19},
    {refalrts::icEmpty, 0, 0, 19},
    // closed e.Str_B#1 as range 6
    // closed e.Str_E#1 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Skip/4 0/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Str_B#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Str_E#1/10 AsIs: )/13 } Tile{ ]] }
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 8, 13, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (E )(T E )
    // </0 & Skip/4 s.Num#1/5 (/8 e.Str_B#1/6 )/9 (/12 t.Sym#1/14 e.Str_E#1/10 )/13 >/1
    {refalrts::icBracketLeftSave, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Str_B#1 as range 6
    {refalrts::ictVarLeftSave, 0, 14, 10},
    // closed e.Str_E#1 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Skip/4 } </16 & Dec/17 Tile{ AsIs: s.Num#1/5 HalfReuse: >/8 } (/18 Tile{ AsIs: e.Str_B#1/6 } Tile{ AsIs: t.Sym#1/14 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.Str_E#1/10 } Tile{ AsIs: )/13 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 0, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icLinkBrackets, 18, 9, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 9, 12, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 5, 8, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:S (E )E 
  // </0 & Skip/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 e.idxVT#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.idxVB#0 as range 6
  // closed e.idxVT#0 as range 2
  do {
    refalrts::start_sentence();
    //S (E )
    // </0 & Skip/4 s.Num#1/5 (/8 e.Str#1/6 )/9 >/1
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.Str#1 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Skip/4 AsIs: s.Num#1/5 AsIs: (/8 } )/10 (/11 Tile{ AsIs: e.Str#1/6 } Tile{ AsIs: )/9 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[9] );
    refalrts::link_brackets( context[8], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //0 (E )(E )
    // </0 & Skip/4 0/5 (/8 e.Str_B#1/6 )/9 (/12 e.Str_E#1/10 )/13 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    context[19] = context[2];
    context[20] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[19], context[20] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.Str_B#1 as range 6
    // closed e.Str_E#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Skip/4 0/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Str_B#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Str_E#1/10 AsIs: )/13 } Tile{ ]] }
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S (E )(T E )
  // </0 & Skip/4 s.Num#1/5 (/8 e.Str_B#1/6 )/9 (/12 t.Sym#1/14 e.Str_E#1/10 )/13 >/1
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Str_B#1 as range 6
  context[15] = refalrts::tvar_left( context[14], context[10], context[11] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Str_E#1 as range 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Skip/4 } </16 & Dec/17 Tile{ AsIs: s.Num#1/5 HalfReuse: >/8 } (/18 Tile{ AsIs: e.Str_B#1/6 } Tile{ AsIs: t.Sym#1/14 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.Str_E#1/10 } Tile{ AsIs: )/13 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], Dec, "Dec" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[18], context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_DoReplaceMaxTile_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    //FAST GEN:S S S (E )S S S (E )S 
    //GLOBAL GEN:S S S (E )S S S (E )S 
    // </0 & lambda_DoReplaceMaxTile_0/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 (/10 e.idxVVVB#0/8 )/11 s.idxVVVT#0/12 s.idxVVVTV#0/13 s.idxVVVTVV#0/14 (/17 e.idxVVVTVVVB#0/15 )/18 s.idxVVVTVVVT#0/19 >/1
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
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //S S S (E )S S S (E )'<'
    // </0 & lambda_DoReplaceMaxTile_0/4 s.MaxWeight#1/5 s.IndexP#1/6 s.IndexR#1/7 (/10 e.MaxIdents#1/8 )/11 s.Weight#2/12 s.CurIndexP#1/13 s.CurIndexR#1/14 (/17 e.Idents#2/15 )/18 '<'/19 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 19},
    // closed e.MaxIdents#1 as range 8
    // closed e.Idents#2 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_DoReplaceMaxTile_0/4 s.MaxWeight#1/5 s.IndexP#1/6 s.IndexR#1/7 (/10 e.MaxIdents#1/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 AsIs: s.Weight#2/12 AsIs: s.CurIndexP#1/13 AsIs: s.CurIndexR#1/14 AsIs: (/17 AsIs: e.Idents#2/15 AsIs: )/18 HalfReuse: )/19 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icLinkBrackets, 11, 19, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 19, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S S S (E )S S S (E )S 
    // </0 & lambda_DoReplaceMaxTile_0/4 s.MaxWeight#1/5 s.IndexP#1/6 s.IndexR#1/7 (/10 e.MaxIdents#1/8 )/11 s.Weight#2/12 s.CurIndexP#1/13 s.CurIndexR#1/14 (/17 e.Idents#2/15 )/18 s.Other#3/19 >/1
    // closed e.MaxIdents#1 as range 8
    // closed e.Idents#2 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  s.Weight#2/12 s.CurIndexP#1/13 s.CurIndexR#1/14 (/17 e.Idents#2/15 )/18 s.Other#3/19 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: s.MaxWeight#1/5 AsIs: s.IndexP#1/6 AsIs: s.IndexR#1/7 AsIs: (/10 AsIs: e.MaxIdents#1/8 AsIs: )/11 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 4, 1, 0},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 4, 11, 0},
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
  //FAST GEN:S S S (E )S S S (E )S 
  //GLOBAL GEN:S S S (E )S S S (E )S 
  // </0 & lambda_DoReplaceMaxTile_0/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 (/10 e.idxVVVB#0/8 )/11 s.idxVVVT#0/12 s.idxVVVTV#0/13 s.idxVVVTVV#0/14 (/17 e.idxVVVTVVVB#0/15 )/18 s.idxVVVTVVVT#0/19 >/1
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
    //S S S (E )S S S (E )'<'
    // </0 & lambda_DoReplaceMaxTile_0/4 s.MaxWeight#1/5 s.IndexP#1/6 s.IndexR#1/7 (/10 e.MaxIdents#1/8 )/11 s.Weight#2/12 s.CurIndexP#1/13 s.CurIndexR#1/14 (/17 e.Idents#2/15 )/18 '<'/19 >/1
    if( ! refalrts::char_term( '<', context[19] ) )
      continue;
    // closed e.MaxIdents#1 as range 8
    // closed e.Idents#2 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_DoReplaceMaxTile_0/4 s.MaxWeight#1/5 s.IndexP#1/6 s.IndexR#1/7 (/10 e.MaxIdents#1/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 AsIs: s.Weight#2/12 AsIs: s.CurIndexP#1/13 AsIs: s.CurIndexR#1/14 AsIs: (/17 AsIs: e.Idents#2/15 AsIs: )/18 HalfReuse: )/19 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::link_brackets( context[11], context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S S S (E )S S S (E )S 
  // </0 & lambda_DoReplaceMaxTile_0/4 s.MaxWeight#1/5 s.IndexP#1/6 s.IndexR#1/7 (/10 e.MaxIdents#1/8 )/11 s.Weight#2/12 s.CurIndexP#1/13 s.CurIndexR#1/14 (/17 e.Idents#2/15 )/18 s.Other#3/19 >/1
  // closed e.MaxIdents#1 as range 8
  // closed e.Idents#2 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  s.Weight#2/12 s.CurIndexP#1/13 s.CurIndexR#1/14 (/17 e.Idents#2/15 )/18 s.Other#3/19 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: s.MaxWeight#1/5 AsIs: s.IndexP#1/6 AsIs: s.IndexR#1/7 AsIs: (/10 AsIs: e.MaxIdents#1/8 AsIs: )/11 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[4], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_DoReplaceMaxTile_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoReplaceMaxTile, "DoReplaceMaxTile" },
    { Inc, "Inc" },
    { lambda_DoReplaceMaxTile_0, "lambda_DoReplaceMaxTile_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Compare, "Compare" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_DoReplaceMaxTile_1/4 s.MaxWeight#1/17 s.CurIndexP#1/18 s.CurIndexR#1/19 s.IndexP#1/20 s.IndexR#1/21 (/24 e.MaxIdents#1/22 )/25 (/28 e.ScannedPattern#1/26 )/29 (/32 e.ScannedResult#1/30 )/33 s.Weight#2/34 (/15 e.Idents#2/13 )/16 (/11 e.Pattern#2/9 )/12 (/7 t.NextItem#2/35 e.Result#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    {refalrts::icBracketRightSave, 0, 13, 2},
    // closed e.Idents#2 as range 13
    // closed e.Pattern#2 as range 9
    {refalrts::icsVarLeft, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 18, 2},
    {refalrts::icsVarLeft, 0, 19, 2},
    {refalrts::icsVarLeft, 0, 20, 2},
    {refalrts::icsVarLeft, 0, 21, 2},
    {refalrts::icBracketLeftSave, 0, 22, 2},
    {refalrts::icBracketLeftSave, 0, 26, 2},
    {refalrts::icBracketLeftSave, 0, 30, 2},
    // closed e.MaxIdents#1 as range 22
    // closed e.ScannedPattern#1 as range 26
    // closed e.ScannedResult#1 as range 30
    {refalrts::icsVarLeft, 0, 34, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeftSave, 0, 35, 5},
    // closed e.Result#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoReplaceMaxTile/4 } </37 & Fetch/38 </39 & Compare/40 Tile{ HalfReuse: s.MaxWeight1 #17/33 AsIs: s.Weight#2/34 } >/41 </42 & CreateClosure /43 & lambda_DoReplaceMaxTile_0/44 Tile{ AsIs: s.MaxWeight#1/17 } Tile{ AsIs: s.IndexP#1/20 AsIs: s.IndexR#1/21 AsIs: (/24 AsIs: e.MaxIdents#1/22 AsIs: )/25 HalfReuse: s.Weight2 #34/28 } Tile{ AsIs: s.CurIndexP#1/18 AsIs: s.CurIndexR#1/19 } Tile{ AsIs: (/15 AsIs: e.Idents#2/13 AsIs: )/16 HalfReuse: >/11 } Tile{ HalfReuse: >/12 AsIs: (/7 } s.CurIndexP#1/18/45 (/46 Tile{ AsIs: e.ScannedPattern#1/26 } )/47 Tile{ AsIs: e.Pattern#2/9 } Tile{ AsIs: )/29 AsIs: (/32 } </48 & Inc/49 s.CurIndexR#1/19/50 >/51 (/52 Tile{ AsIs: e.ScannedResult#1/30 } Tile{ AsIs: t.NextItem#2/35 } )/53 Tile{ AsIs: e.Result#2/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 37},
    {refalrts::icAllocFunc, 0, 5, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 39},
    {refalrts::icAllocFunc, 0, 4, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 41},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 42},
    {refalrts::icAllocFunc, 0, 3, 43},
    {refalrts::icAllocFunc, 0, 2, 44},
    {refalrts::icCopySTVar, 45, 18, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 46},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 47},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 48},
    {refalrts::icAllocFunc, 0, 1, 49},
    {refalrts::icCopySTVar, 50, 19, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 51},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 52},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 53},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 17, 33},
    {refalrts::icReinitSVar, 0, 34, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 32, 8, 0},
    {refalrts::icLinkBrackets, 52, 53, 0},
    {refalrts::icPushStack, 0, 0, 51},
    {refalrts::icPushStack, 0, 0, 48},
    {refalrts::icLinkBrackets, 7, 29, 0},
    {refalrts::icLinkBrackets, 46, 47, 0},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 42},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icPushStack, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 53, 53, 0},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceTile, 48, 52, 0},
    {refalrts::icSpliceTile, 29, 32, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 47, 47, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 45, 46, 0},
    {refalrts::icSpliceTile, 12, 7, 0},
    {refalrts::icSpliceTile, 15, 11, 0},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icSpliceTile, 20, 28, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 41, 44, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icSpliceTile, 37, 40, 0},
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
  // </0 & lambda_DoReplaceMaxTile_1/4 s.MaxWeight#1/17 s.CurIndexP#1/18 s.CurIndexR#1/19 s.IndexP#1/20 s.IndexR#1/21 (/24 e.MaxIdents#1/22 )/25 (/28 e.ScannedPattern#1/26 )/29 (/32 e.ScannedResult#1/30 )/33 s.Weight#2/34 (/15 e.Idents#2/13 )/16 (/11 e.Pattern#2/9 )/12 (/7 t.NextItem#2/35 e.Result#2/5 )/8 >/1
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
  // closed e.Idents#2 as range 13
  // closed e.Pattern#2 as range 9
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.MaxIdents#1 as range 22
  // closed e.ScannedPattern#1 as range 26
  // closed e.ScannedResult#1 as range 30
  if( ! refalrts::svar_left( context[34], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[36] = refalrts::tvar_left( context[35], context[5], context[6] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoReplaceMaxTile/4 } </37 & Fetch/38 </39 & Compare/40 Tile{ HalfReuse: s.MaxWeight1 #17/33 AsIs: s.Weight#2/34 } >/41 </42 & CreateClosure /43 & lambda_DoReplaceMaxTile_0/44 Tile{ AsIs: s.MaxWeight#1/17 } Tile{ AsIs: s.IndexP#1/20 AsIs: s.IndexR#1/21 AsIs: (/24 AsIs: e.MaxIdents#1/22 AsIs: )/25 HalfReuse: s.Weight2 #34/28 } Tile{ AsIs: s.CurIndexP#1/18 AsIs: s.CurIndexR#1/19 } Tile{ AsIs: (/15 AsIs: e.Idents#2/13 AsIs: )/16 HalfReuse: >/11 } Tile{ HalfReuse: >/12 AsIs: (/7 } s.CurIndexP#1/18/45 (/46 Tile{ AsIs: e.ScannedPattern#1/26 } )/47 Tile{ AsIs: e.Pattern#2/9 } Tile{ AsIs: )/29 AsIs: (/32 } </48 & Inc/49 s.CurIndexR#1/19/50 >/51 (/52 Tile{ AsIs: e.ScannedResult#1/30 } Tile{ AsIs: t.NextItem#2/35 } )/53 Tile{ AsIs: e.Result#2/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[38], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[40], Compare, "Compare" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[43], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[44], lambda_DoReplaceMaxTile_0, "lambda_DoReplaceMaxTile_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[45], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[48] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[49], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[50], context[19]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[52] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[53] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoReplaceMaxTile, "DoReplaceMaxTile" );
  refalrts::reinit_svar( context[33], context[17] );
  refalrts::reinit_svar( context[28], context[34] );
  refalrts::reinit_close_call( context[11] );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[32], context[8] );
  refalrts::link_brackets( context[52], context[53] );
  refalrts::push_stack( context[51] );
  refalrts::push_stack( context[48] );
  refalrts::link_brackets( context[7], context[29] );
  refalrts::link_brackets( context[46], context[47] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[42] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::push_stack( context[41] );
  refalrts::push_stack( context[39] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[53], context[53] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[48], context[52] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[47], context[47] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[12], context[7] );
  res = refalrts::splice_evar( res, context[15], context[11] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[20], context[28] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[41], context[44] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[37], context[40] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoReplaceMaxTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FindTile, "FindTile" },
    { Fetch, "Fetch" },
    { lambda_DoReplaceMaxTile_1, "lambda_DoReplaceMaxTile_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Inc, "Inc" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TileReplaced<int>::name,
    & ident_NoTiles<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(S S S (E ))(E )(E )
    //GLOBAL GEN:(S S S (E ))(S (E )E )(S (E )E )
    // </0 & DoReplaceMaxTile/4 (/7 s.idxB#0/21 s.idxBV#0/22 s.idxBVV#0/23 (/19 e.idxBVVVB#0/17 )/20 )/8 (/11 s.idxTB#0/24 (/27 e.idxTBVB#0/25 )/28 e.idxTBVT#0/9 )/12 (/15 s.idxTTB#0/29 (/32 e.idxTTBVB#0/30 )/33 e.idxTTBVT#0/13 )/16 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icBracketRightSave, 0, 17, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxBVVVB#0 as range 17
    {refalrts::icsVarLeft, 0, 21, 5},
    {refalrts::icsVarLeft, 0, 22, 5},
    {refalrts::icsVarLeft, 0, 23, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icsVarLeft, 0, 24, 9},
    {refalrts::icBracketLeftSave, 0, 25, 9},
    // closed e.idxTBVB#0 as range 25
    // closed e.idxTBVT#0 as range 9
    {refalrts::icsVarLeft, 0, 29, 13},
    {refalrts::icBracketLeftSave, 0, 30, 13},
    // closed e.idxTTBVB#0 as range 30
    // closed e.idxTTBVT#0 as range 13
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //(0 0 0 ())(S (E ))(S (E ))
    // </0 & DoReplaceMaxTile/4 (/7 0/21 0/22 0/23 (/19 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.Pattern#1/25 )/28 )/12 (/15 s.CurIndexR#1/29 (/32 e.Result#1/30 )/33 )/16 >/1
    {refalrts::icNumTerm, 0, 0, 21},
    {refalrts::icNumTerm, 0, 0, 22},
    {refalrts::icNumTerm, 0, 0, 23},
    {refalrts::icSave, 0, 43, 17},
    {refalrts::icEmpty, 0, 0, 43},
    {refalrts::icSave, 0, 45, 9},
    {refalrts::icEmpty, 0, 0, 45},
    {refalrts::icSave, 0, 47, 13},
    {refalrts::icEmpty, 0, 0, 47},
    // closed e.Pattern#1 as range 25
    // closed e.Result#1 as range 30
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & DoReplaceMaxTile/4 (/7 0/21 0/22 0/23 (/19 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.Pattern#1/25 )/28 )/12 (/15 s.CurIndexR#1/29 (/32 e.Result#1/30 )/33 )/16 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoTiles/0 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 1, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    //(S S S (E ))(S (E ))(S (E ))
    // </0 & DoReplaceMaxTile/4 (/7 s.MaxWeight#1/21 s.IndexP#1/22 s.IndexR#1/23 (/19 e.MaxIdents#1/17 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.Pattern#1/25 )/28 )/12 (/15 s.CurIndexR#1/29 (/32 e.Result#1/30 )/33 )/16 >/1
    {refalrts::icSave, 0, 43, 9},
    {refalrts::icEmpty, 0, 0, 43},
    {refalrts::icSave, 0, 45, 13},
    {refalrts::icEmpty, 0, 0, 45},
    // closed e.MaxIdents#1 as range 17
    // closed e.Pattern#1 as range 25
    // closed e.Result#1 as range 30
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.IndexP#1/22 {REMOVED TILE}  {REMOVED TILE}  (/11 s.CurIndexP#1/24 (/27 e.Pattern#1/25 )/28 )/12 (/15 s.CurIndexR#1/29 (/32 e.Result#1/30 )/33 )/16 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TileReplaced/0 HalfReuse: (/4 HalfReuse: s.IndexP1 #22/7 } Tile{ AsIs: s.IndexR#1/23 } Tile{ AsIs: s.MaxWeight#1/21 } Tile{ AsIs: (/19 AsIs: e.MaxIdents#1/17 AsIs: )/20 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitSVar, 0, 22, 7},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 8, 0},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    //(S S S (E ))(S (E )T E )(S (E ))
    // </0 & DoReplaceMaxTile/4 (/7 s.MaxWeight#1/21 s.IndexP#1/22 s.IndexR#1/23 (/19 e.MaxIdents#1/17 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.ScannedPattern#1/25 )/28 t.NextTerm#1/34 e.Pattern#1/9 )/12 (/15 s.CurIndexR#1/29 (/32 e.ScannedResult#1/30 )/33 )/16 >/1
    {refalrts::icSave, 0, 43, 13},
    {refalrts::icEmpty, 0, 0, 43},
    // closed e.MaxIdents#1 as range 17
    // closed e.ScannedPattern#1 as range 25
    // closed e.ScannedResult#1 as range 30
    {refalrts::icSave, 0, 45, 9},
    {refalrts::ictVarLeftSave, 0, 34, 45},
    // closed e.Pattern#1 as range 45(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.CurIndexR#1/29 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoReplaceMaxTile/4 AsIs: (/7 AsIs: s.MaxWeight#1/21 AsIs: s.IndexP#1/22 AsIs: s.IndexR#1/23 AsIs: (/19 AsIs: e.MaxIdents#1/17 AsIs: )/20 AsIs: )/8 AsIs: (/11 } </36 & Inc/37 Tile{ AsIs: s.CurIndexP#1/24 HalfReuse: >/27 } Tile{ AsIs: (/32 } Tile{ AsIs: e.ScannedPattern#1/25 } Tile{ AsIs: t.NextTerm#1/34 } Tile{ AsIs: )/28 } Tile{ AsIs: e.Pattern#1/45(9) } Tile{ AsIs: )/12 AsIs: (/15 } 0/38 (/39 Tile{ AsIs: )/33 } Tile{ AsIs: e.ScannedResult#1/30 } Tile{ AsIs: )/16 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocFunc, 0, 4, 37},
    {refalrts::icAllocInt, 0, 0, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 39, 33, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 32, 28, 0},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetRes, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 34, 35, 0},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceTile, 36, 37, 0},
    {refalrts::icTrash, 0, 0, 11},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(S S S (E ))(S (E )E )(S (E )T E )
    // </0 & DoReplaceMaxTile/4 (/7 s.MaxWeight#1/21 s.IndexP#1/22 s.IndexR#1/23 (/19 e.MaxIdents#1/17 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.ScannedPattern#1/25 )/28 e.Pattern#1/9 )/12 (/15 s.CurIndexR#1/29 (/32 e.ScannedResult#1/30 )/33 t.NextItem#1/34 e.Result#1/13 )/16 >/1
    // closed e.MaxIdents#1 as range 17
    // closed e.ScannedPattern#1 as range 25
    // closed e.Pattern#1 as range 9
    // closed e.ScannedResult#1 as range 30
    {refalrts::ictVarLeftSave, 0, 34, 13},
    // closed e.Result#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.MaxWeight#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.CurIndexR#1/29 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & FindTile/32 } Tile{ HalfReuse: (/28 AsIs: e.Pattern#1/9 AsIs: )/12 } Tile{ HalfReuse: (/33 AsIs: t.NextItem#1/34 AsIs: e.Result#1/13 AsIs: )/16 AsIs: >/1 } </36 & CreateClosure /37 & lambda_DoReplaceMaxTile_1/38 Tile{ HalfReuse: s.MaxWeight1 #21/11 AsIs: s.CurIndexP#1/24 HalfReuse: s.CurIndexR1 #29/27 } Tile{ AsIs: s.IndexP#1/22 AsIs: s.IndexR#1/23 AsIs: (/19 AsIs: e.MaxIdents#1/17 AsIs: )/20 HalfReuse: (/8 } Tile{ AsIs: e.ScannedPattern#1/25 } )/39 Tile{ AsIs: (/15 } Tile{ AsIs: e.ScannedResult#1/30 } )/40 >/41 >/42 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocFunc, 0, 3, 37},
    {refalrts::icAllocFunc, 0, 2, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 41},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 42},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 32},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icReinitSVar, 0, 21, 11},
    {refalrts::icReinitSVar, 0, 29, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icPushStack, 0, 0, 42},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icLinkBrackets, 15, 40, 0},
    {refalrts::icLinkBrackets, 8, 39, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 33, 16, 0},
    {refalrts::icLinkBrackets, 28, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 40, 42, 0},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 39, 39, 0},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceTile, 22, 8, 0},
    {refalrts::icSpliceTile, 11, 27, 0},
    {refalrts::icSpliceTile, 36, 38, 0},
    {refalrts::icSpliceTile, 33, 1, 0},
    {refalrts::icSpliceTile, 28, 12, 0},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icTrash, 0, 0, 7},
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
  //FAST GEN:(S S S (E ))(E )(E )
  //GLOBAL GEN:(S S S (E ))(S (E )E )(S (E )E )
  // </0 & DoReplaceMaxTile/4 (/7 s.idxB#0/21 s.idxBV#0/22 s.idxBVV#0/23 (/19 e.idxBVVVB#0/17 )/20 )/8 (/11 s.idxTB#0/24 (/27 e.idxTBVB#0/25 )/28 e.idxTBVT#0/9 )/12 (/15 s.idxTTB#0/29 (/32 e.idxTTBVB#0/30 )/33 e.idxTTBVT#0/13 )/16 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBVVVB#0 as range 17
  if( ! refalrts::svar_left( context[21], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[24], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[9], context[10] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  // closed e.idxTBVB#0 as range 25
  // closed e.idxTBVT#0 as range 9
  if( ! refalrts::svar_left( context[29], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[13], context[14] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.idxTTBVB#0 as range 30
  // closed e.idxTTBVT#0 as range 13
  do {
    refalrts::start_sentence();
    //(0 0 0 ())(S (E ))(S (E ))
    // </0 & DoReplaceMaxTile/4 (/7 0/21 0/22 0/23 (/19 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.Pattern#1/25 )/28 )/12 (/15 s.CurIndexR#1/29 (/32 e.Result#1/30 )/33 )/16 >/1
    if( ! refalrts::number_term( 0UL, context[21] ) )
      continue;
    if( ! refalrts::number_term( 0UL, context[22] ) )
      continue;
    if( ! refalrts::number_term( 0UL, context[23] ) )
      continue;
    context[43] = context[17];
    context[44] = context[18];
    if( ! refalrts::empty_seq( context[43], context[44] ) )
      continue;
    context[45] = context[9];
    context[46] = context[10];
    if( ! refalrts::empty_seq( context[45], context[46] ) )
      continue;
    context[47] = context[13];
    context[48] = context[14];
    if( ! refalrts::empty_seq( context[47], context[48] ) )
      continue;
    // closed e.Pattern#1 as range 25
    // closed e.Result#1 as range 30

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & DoReplaceMaxTile/4 (/7 0/21 0/22 0/23 (/19 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.Pattern#1/25 )/28 )/12 (/15 s.CurIndexR#1/29 (/32 e.Result#1/30 )/33 )/16 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoTiles/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_NoTiles<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S S S (E ))(S (E ))(S (E ))
    // </0 & DoReplaceMaxTile/4 (/7 s.MaxWeight#1/21 s.IndexP#1/22 s.IndexR#1/23 (/19 e.MaxIdents#1/17 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.Pattern#1/25 )/28 )/12 (/15 s.CurIndexR#1/29 (/32 e.Result#1/30 )/33 )/16 >/1
    context[43] = context[9];
    context[44] = context[10];
    if( ! refalrts::empty_seq( context[43], context[44] ) )
      continue;
    context[45] = context[13];
    context[46] = context[14];
    if( ! refalrts::empty_seq( context[45], context[46] ) )
      continue;
    // closed e.MaxIdents#1 as range 17
    // closed e.Pattern#1 as range 25
    // closed e.Result#1 as range 30

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.IndexP#1/22 {REMOVED TILE}  {REMOVED TILE}  (/11 s.CurIndexP#1/24 (/27 e.Pattern#1/25 )/28 )/12 (/15 s.CurIndexR#1/29 (/32 e.Result#1/30 )/33 )/16 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TileReplaced/0 HalfReuse: (/4 HalfReuse: s.IndexP1 #22/7 } Tile{ AsIs: s.IndexR#1/23 } Tile{ AsIs: s.MaxWeight#1/21 } Tile{ AsIs: (/19 AsIs: e.MaxIdents#1/17 AsIs: )/20 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TileReplaced<int>::name );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_svar( context[7], context[22] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[8] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S S S (E ))(S (E )T E )(S (E ))
    // </0 & DoReplaceMaxTile/4 (/7 s.MaxWeight#1/21 s.IndexP#1/22 s.IndexR#1/23 (/19 e.MaxIdents#1/17 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.ScannedPattern#1/25 )/28 t.NextTerm#1/34 e.Pattern#1/9 )/12 (/15 s.CurIndexR#1/29 (/32 e.ScannedResult#1/30 )/33 )/16 >/1
    context[43] = context[13];
    context[44] = context[14];
    if( ! refalrts::empty_seq( context[43], context[44] ) )
      continue;
    // closed e.MaxIdents#1 as range 17
    // closed e.ScannedPattern#1 as range 25
    // closed e.ScannedResult#1 as range 30
    context[45] = context[9];
    context[46] = context[10];
    context[35] = refalrts::tvar_left( context[34], context[45], context[46] );
    if( ! context[35] )
      continue;
    // closed e.Pattern#1 as range 45(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.CurIndexR#1/29 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoReplaceMaxTile/4 AsIs: (/7 AsIs: s.MaxWeight#1/21 AsIs: s.IndexP#1/22 AsIs: s.IndexR#1/23 AsIs: (/19 AsIs: e.MaxIdents#1/17 AsIs: )/20 AsIs: )/8 AsIs: (/11 } </36 & Inc/37 Tile{ AsIs: s.CurIndexP#1/24 HalfReuse: >/27 } Tile{ AsIs: (/32 } Tile{ AsIs: e.ScannedPattern#1/25 } Tile{ AsIs: t.NextTerm#1/34 } Tile{ AsIs: )/28 } Tile{ AsIs: e.Pattern#1/45(9) } Tile{ AsIs: )/12 AsIs: (/15 } 0/38 (/39 Tile{ AsIs: )/33 } Tile{ AsIs: e.ScannedResult#1/30 } Tile{ AsIs: )/16 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[37], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[38], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[39], context[33] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[32], context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[36] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(S S S (E ))(S (E )E )(S (E )T E )
  // </0 & DoReplaceMaxTile/4 (/7 s.MaxWeight#1/21 s.IndexP#1/22 s.IndexR#1/23 (/19 e.MaxIdents#1/17 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.ScannedPattern#1/25 )/28 e.Pattern#1/9 )/12 (/15 s.CurIndexR#1/29 (/32 e.ScannedResult#1/30 )/33 t.NextItem#1/34 e.Result#1/13 )/16 >/1
  // closed e.MaxIdents#1 as range 17
  // closed e.ScannedPattern#1 as range 25
  // closed e.Pattern#1 as range 9
  // closed e.ScannedResult#1 as range 30
  context[35] = refalrts::tvar_left( context[34], context[13], context[14] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.MaxWeight#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.CurIndexR#1/29 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & FindTile/32 } Tile{ HalfReuse: (/28 AsIs: e.Pattern#1/9 AsIs: )/12 } Tile{ HalfReuse: (/33 AsIs: t.NextItem#1/34 AsIs: e.Result#1/13 AsIs: )/16 AsIs: >/1 } </36 & CreateClosure /37 & lambda_DoReplaceMaxTile_1/38 Tile{ HalfReuse: s.MaxWeight1 #21/11 AsIs: s.CurIndexP#1/24 HalfReuse: s.CurIndexR1 #29/27 } Tile{ AsIs: s.IndexP#1/22 AsIs: s.IndexR#1/23 AsIs: (/19 AsIs: e.MaxIdents#1/17 AsIs: )/20 HalfReuse: (/8 } Tile{ AsIs: e.ScannedPattern#1/25 } )/39 Tile{ AsIs: (/15 } Tile{ AsIs: e.ScannedResult#1/30 } )/40 >/41 >/42 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[38], lambda_DoReplaceMaxTile_1, "lambda_DoReplaceMaxTile_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[42] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[32], FindTile, "FindTile" );
  refalrts::reinit_open_bracket( context[28] );
  refalrts::reinit_open_bracket( context[33] );
  refalrts::reinit_svar( context[11], context[21] );
  refalrts::reinit_svar( context[27], context[29] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::push_stack( context[42] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[41] );
  refalrts::push_stack( context[36] );
  refalrts::link_brackets( context[15], context[40] );
  refalrts::link_brackets( context[8], context[39] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[33], context[16] );
  refalrts::link_brackets( context[28], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[40], context[42] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[22], context[8] );
  res = refalrts::splice_evar( res, context[11], context[27] );
  res = refalrts::splice_evar( res, context[36], context[38] );
  res = refalrts::splice_evar( res, context[33], context[1] );
  res = refalrts::splice_evar( res, context[28], context[12] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FindTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FindTile_EEnd, "FindTile_EEnd" },
    { DoFindTile, "DoFindTile" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & FindTile/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindTile_EEnd/4 HalfReuse: </7 } & DoFindTile/13 0/14 (/15 )/16 (/17 )/18 (/19 Tile{ AsIs: e.Pattern#1/5 } )/20 (/21 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } >/22 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 1, 13},
    {refalrts::icAllocInt, 0, 0, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 21, 8, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 13, 19, 0},
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
  // </0 & FindTile/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindTile_EEnd/4 HalfReuse: </7 } & DoFindTile/13 0/14 (/15 )/16 (/17 )/18 (/19 Tile{ AsIs: e.Pattern#1/5 } )/20 (/21 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } >/22 Tile{ ]] }
  if( ! refalrts::alloc_name( context[13], DoFindTile, "DoFindTile" ) )
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
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FindTile_EEnd, "FindTile_EEnd" );
  refalrts::reinit_open_call( context[7] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[21], context[8] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[19] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_DoFindTile_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Add, "Add" },
    { DoFindTile, "DoFindTile" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoOverlap<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:S (E )(E )T (E )(E )T (E )S E 
    // </0 & lambda_DoFindTile_0/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 t.idxVTT#0/14 (/18 e.idxVTTVB#0/16 )/19 (/22 e.idxVTTVTB#0/20 )/23 t.idxVTTVTT#0/24 (/28 e.idxVTTVTTVB#0/26 )/29 s.idxVTTVTTVT#0/30 e.idxVTTVTTVTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 10, 2},
    // closed e.idxVB#0 as range 6
    // closed e.idxVTB#0 as range 10
    {refalrts::ictVarLeftSave, 0, 14, 2},
    {refalrts::icBracketLeftSave, 0, 16, 2},
    {refalrts::icBracketLeftSave, 0, 20, 2},
    // closed e.idxVTTVB#0 as range 16
    // closed e.idxVTTVTB#0 as range 20
    {refalrts::ictVarLeftSave, 0, 24, 2},
    {refalrts::icBracketLeftSave, 0, 26, 2},
    // closed e.idxVTTVTTVB#0 as range 26
    {refalrts::icsVarLeft, 0, 30, 2},
    // closed e.idxVTTVTTVTV#0 as range 2
    {refalrts::icOnFailGoTo, +19, 0, 0},
    //S (E )(E )T (E )(E )T (E )#NoOverlap
    // </0 & lambda_DoFindTile_0/4 s.Weight#1/5 (/8 e.Idents#1/6 )/9 (/12 e.ScannedPattern#1/10 )/13 t.PatternItem#1/14 (/18 e.Pattern#1/16 )/19 (/22 e.ScannedResult#1/20 )/23 t.ResultItem#1/24 (/28 e.Result#1/26 )/29 # NoOverlap/30 >/1
    {refalrts::icIdentTerm, 0, 0, 30},
    {refalrts::icSave, 0, 36, 2},
    {refalrts::icEmpty, 0, 0, 36},
    // closed e.Idents#1 as range 6
    // closed e.ScannedPattern#1 as range 10
    // closed e.Pattern#1 as range 16
    // closed e.ScannedResult#1 as range 20
    // closed e.Result#1 as range 26
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_DoFindTile_0/4 {REMOVED TILE}  {REMOVED TILE}  )/13 {REMOVED TILE}  (/18 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/23 {REMOVED TILE}  (/28 {REMOVED TILE}  )/29 # NoOverlap/30 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/5 AsIs: (/8 AsIs: e.Idents#1/6 AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.ScannedPattern#1/10 } Tile{ AsIs: t.PatternItem#1/14 } Tile{ AsIs: e.Pattern#1/16 } Tile{ AsIs: )/19 AsIs: (/22 } Tile{ AsIs: e.ScannedResult#1/20 } Tile{ AsIs: t.ResultItem#1/24 } Tile{ AsIs: e.Result#1/26 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 22, 1, 0},
    {refalrts::icLinkBrackets, 12, 19, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 24, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceTile, 19, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 5, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (E )(E )T (E )(E )T (E )S S 
    // </0 & lambda_DoFindTile_0/4 s.Weight#1/5 (/8 e.Idents#1/6 )/9 (/12 e.ScannedPattern#1/10 )/13 t.PatternItem#1/14 (/18 e.Pattern#1/16 )/19 (/22 e.ScannedResult#1/20 )/23 t.ResultItem#1/24 (/28 e.Result#1/26 )/29 s.ItemWeight#2/30 s.Ident#2/31 >/1
    // closed e.Idents#1 as range 6
    // closed e.ScannedPattern#1 as range 10
    // closed e.Pattern#1 as range 16
    // closed e.ScannedResult#1 as range 20
    // closed e.Result#1 as range 26
    {refalrts::icsVarLeft, 0, 31, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ItemWeight#2/30 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </32 & DoFindTile/33 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Weight#1/5 HalfReuse: s.ItemWeight2 #30/8 } >/34 (/35 Tile{ AsIs: e.Idents#1/6 } Tile{ AsIs: s.Ident#2/31 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.ScannedPattern#1/10 } Tile{ AsIs: t.PatternItem#1/14 } Tile{ AsIs: )/13 } Tile{ AsIs: (/18 AsIs: e.Pattern#1/16 AsIs: )/19 AsIs: (/22 } Tile{ AsIs: e.ScannedResult#1/20 } Tile{ AsIs: t.ResultItem#1/24 } Tile{ AsIs: )/23 } Tile{ AsIs: (/28 AsIs: e.Result#1/26 AsIs: )/29 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icAllocFunc, 0, 1, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 30, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icLinkBrackets, 35, 9, 0},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 28, 29, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceTile, 24, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceTile, 18, 22, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 9, 12, 0},
    {refalrts::icSpliceTile, 31, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 34, 35, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 32, 33, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:S (E )(E )T (E )(E )T (E )S E 
  // </0 & lambda_DoFindTile_0/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 t.idxVTT#0/14 (/18 e.idxVTTVB#0/16 )/19 (/22 e.idxVTTVTB#0/20 )/23 t.idxVTTVTT#0/24 (/28 e.idxVTTVTTVB#0/26 )/29 s.idxVTTVTTVT#0/30 e.idxVTTVTTVTV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.idxVB#0 as range 6
  // closed e.idxVTB#0 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.idxVTTVB#0 as range 16
  // closed e.idxVTTVTB#0 as range 20
  context[25] = refalrts::tvar_left( context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.idxVTTVTTVB#0 as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTTVTTVTV#0 as range 2
  do {
    refalrts::start_sentence();
    //S (E )(E )T (E )(E )T (E )#NoOverlap
    // </0 & lambda_DoFindTile_0/4 s.Weight#1/5 (/8 e.Idents#1/6 )/9 (/12 e.ScannedPattern#1/10 )/13 t.PatternItem#1/14 (/18 e.Pattern#1/16 )/19 (/22 e.ScannedResult#1/20 )/23 t.ResultItem#1/24 (/28 e.Result#1/26 )/29 # NoOverlap/30 >/1
    if( ! refalrts::ident_term(  & ident_NoOverlap<int>::name, context[30] ) )
      continue;
    context[36] = context[2];
    context[37] = context[3];
    if( ! refalrts::empty_seq( context[36], context[37] ) )
      continue;
    // closed e.Idents#1 as range 6
    // closed e.ScannedPattern#1 as range 10
    // closed e.Pattern#1 as range 16
    // closed e.ScannedResult#1 as range 20
    // closed e.Result#1 as range 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_DoFindTile_0/4 {REMOVED TILE}  {REMOVED TILE}  )/13 {REMOVED TILE}  (/18 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/23 {REMOVED TILE}  (/28 {REMOVED TILE}  )/29 # NoOverlap/30 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/5 AsIs: (/8 AsIs: e.Idents#1/6 AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.ScannedPattern#1/10 } Tile{ AsIs: t.PatternItem#1/14 } Tile{ AsIs: e.Pattern#1/16 } Tile{ AsIs: )/19 AsIs: (/22 } Tile{ AsIs: e.ScannedResult#1/20 } Tile{ AsIs: t.ResultItem#1/24 } Tile{ AsIs: e.Result#1/26 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[22], context[1] );
    refalrts::link_brackets( context[12], context[19] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[5], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S (E )(E )T (E )(E )T (E )S S 
  // </0 & lambda_DoFindTile_0/4 s.Weight#1/5 (/8 e.Idents#1/6 )/9 (/12 e.ScannedPattern#1/10 )/13 t.PatternItem#1/14 (/18 e.Pattern#1/16 )/19 (/22 e.ScannedResult#1/20 )/23 t.ResultItem#1/24 (/28 e.Result#1/26 )/29 s.ItemWeight#2/30 s.Ident#2/31 >/1
  // closed e.Idents#1 as range 6
  // closed e.ScannedPattern#1 as range 10
  // closed e.Pattern#1 as range 16
  // closed e.ScannedResult#1 as range 20
  // closed e.Result#1 as range 26
  if( ! refalrts::svar_left( context[31], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ItemWeight#2/30 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </32 & DoFindTile/33 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Weight#1/5 HalfReuse: s.ItemWeight2 #30/8 } >/34 (/35 Tile{ AsIs: e.Idents#1/6 } Tile{ AsIs: s.Ident#2/31 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.ScannedPattern#1/10 } Tile{ AsIs: t.PatternItem#1/14 } Tile{ AsIs: )/13 } Tile{ AsIs: (/18 AsIs: e.Pattern#1/16 AsIs: )/19 AsIs: (/22 } Tile{ AsIs: e.ScannedResult#1/20 } Tile{ AsIs: t.ResultItem#1/24 } Tile{ AsIs: )/23 } Tile{ AsIs: (/28 AsIs: e.Result#1/26 AsIs: )/29 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], DoFindTile, "DoFindTile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Add, "Add" );
  refalrts::reinit_svar( context[8], context[30] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[32] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[35], context[9] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoFindTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_DoFindTile_0, "lambda_DoFindTile_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { OverlapItem, "OverlapItem" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AsIsE<int>::name,
    & ident_Tile<int>::name,
    & ident_RemovedTile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S (E )(E )(E )(E )(E )
    //GLOBAL GEN:S (E )(E )(E )(E )(E )
    // </0 & DoFindTile/4 s.idx#0/25 (/23 e.idxVB#0/21 )/24 (/19 e.idxVTB#0/17 )/20 (/15 e.idxVTTB#0/13 )/16 (/11 e.idxVTTTB#0/9 )/12 (/7 e.idxVTTTTB#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    {refalrts::icBracketRightSave, 0, 13, 2},
    {refalrts::icBracketRightSave, 0, 17, 2},
    {refalrts::icBracketRightSave, 0, 21, 2},
    // closed e.idxVB#0 as range 21
    // closed e.idxVTB#0 as range 17
    // closed e.idxVTTB#0 as range 13
    // closed e.idxVTTTB#0 as range 9
    // closed e.idxVTTTTB#0 as range 5
    {refalrts::icsVarLeft, 0, 25, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    //S (E )(E )(#RemovedTileE )(E )(E )
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 # RemovedTile/26 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    {refalrts::icSave, 0, 41, 13},
    {refalrts::icIdentLeftSave, 26, 2, 41},
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.Pattern#1 as range 41(13)
    // closed e.ScannedResult#1 as range 9
    // closed e.Result#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  (/15 # RemovedTile/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/25 AsIs: (/23 AsIs: e.Idents#1/21 AsIs: )/24 AsIs: (/19 AsIs: e.ScannedPattern#1/17 HalfReuse: # RemovedTile/20 } Tile{ AsIs: e.Pattern#1/41(13) } Tile{ AsIs: )/16 AsIs: (/11 } Tile{ AsIs: e.ScannedResult#1/9 } Tile{ AsIs: e.Result#1/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitIdent, 0, 2, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icLinkBrackets, 19, 16, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 16, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 25, 20, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //S (E )(E )(E )(E )((#TileE )E )
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 (/28 # Tile/30 e.NestedTile#1/26 )/29 e.Result#1/5 )/8 >/1
    {refalrts::icSave, 0, 41, 5},
    {refalrts::icBracketLeftSave, 0, 26, 41},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.Pattern#1 as range 13
    // closed e.ScannedResult#1 as range 9
    // closed e.NestedTile#1 as range 26
    // closed e.Result#1 as range 41(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/16 (/11 {REMOVED TILE}  )/12 (/7 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/25 AsIs: (/23 AsIs: e.Idents#1/21 AsIs: )/24 AsIs: (/19 } Tile{ AsIs: e.ScannedPattern#1/17 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedResult#1/9 } Tile{ AsIs: (/28 AsIs: # Tile/30 AsIs: e.NestedTile#1/26 AsIs: )/29 AsIs: e.Result#1/41(5) AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 15, 8, 0},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 28, 8, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 20, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 25, 19, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    //S (E )(E )()(E )(E )
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    {refalrts::icSave, 0, 41, 13},
    {refalrts::icEmpty, 0, 0, 41},
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    // closed e.Result#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  )/16 (/11 {REMOVED TILE}  )/12 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/25 AsIs: (/23 AsIs: e.Idents#1/21 AsIs: )/24 AsIs: (/19 AsIs: e.ScannedPattern#1/17 AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedResult#1/9 } Tile{ AsIs: e.Result#1/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 15, 1, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 25, 15, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    //S (E )(E )(E )(E )()
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 )/8 >/1
    {refalrts::icSave, 0, 41, 5},
    {refalrts::icEmpty, 0, 0, 41},
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.Pattern#1 as range 13
    // closed e.ScannedResult#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  {REMOVED TILE}  )/20 (/15 {REMOVED TILE}  {REMOVED TILE}  (/7 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/25 AsIs: (/23 AsIs: e.Idents#1/21 AsIs: )/24 AsIs: (/19 } Tile{ AsIs: e.ScannedPattern#1/17 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 AsIs: )/12 } Tile{ ]] }
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 19, 16, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 16, 12, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 25, 19, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //S (#AsIsE)(E )(E )(E )(E )
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 # AsIsE/26 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    {refalrts::icSave, 0, 41, 21},
    {refalrts::icIdentLeftSave, 26, 0, 41},
    {refalrts::icEmpty, 0, 0, 41},
    // closed e.ScannedPattern#1 as range 17
    // closed e.Pattern#1 as range 13
    // closed e.ScannedResult#1 as range 9
    // closed e.Result#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/16 (/11 {REMOVED TILE}  )/12 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/25 AsIs: (/23 AsIs: # AsIsE/26 AsIs: )/24 AsIs: (/19 } Tile{ AsIs: e.ScannedPattern#1/17 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedResult#1/9 } Tile{ AsIs: e.Result#1/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 15, 1, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 20, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 25, 19, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (E )(E )(T E )(E )(T E )
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 t.PatternItem#1/26 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 t.ResultItem#1/28 e.Result#1/5 )/8 >/1
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    {refalrts::ictVarLeftSave, 0, 26, 13},
    // closed e.Pattern#1 as range 13
    {refalrts::ictVarLeftSave, 0, 28, 5},
    // closed e.Result#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </30 & Fetch/31 </32 Tile{ HalfReuse: & OverlapItem/15 AsIs: t.PatternItem#1/26 } Tile{ AsIs: t.ResultItem#1/28 } >/33 </34 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_DoFindTile_0/4 AsIs: s.Weight#1/25 AsIs: (/23 AsIs: e.Idents#1/21 AsIs: )/24 AsIs: (/19 AsIs: e.ScannedPattern#1/17 AsIs: )/20 } t.PatternItem#1/26/35 Tile{ AsIs: (/7 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 AsIs: )/12 } t.ResultItem#1/28/37 (/39 Tile{ AsIs: e.Result#1/5 } )/40 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 3, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 34},
    {refalrts::icCopyEVar, 35, 26, 0},
    {refalrts::icCopyEVar, 37, 28, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icReinitFunc, 0, 2, 15},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icLinkBrackets, 39, 40, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 16, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 40, 40, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 37, 39, 0},
    {refalrts::icSpliceTile, 16, 12, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceTile, 0, 20, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icSpliceTile, 28, 29, 0},
    {refalrts::icSpliceTile, 15, 27, 0},
    {refalrts::icSpliceTile, 30, 32, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:S (E )(E )(E )(E )(E )
  //GLOBAL GEN:S (E )(E )(E )(E )(E )
  // </0 & DoFindTile/4 s.idx#0/25 (/23 e.idxVB#0/21 )/24 (/19 e.idxVTB#0/17 )/20 (/15 e.idxVTTB#0/13 )/16 (/11 e.idxVTTTB#0/9 )/12 (/7 e.idxVTTTTB#0/5 )/8 >/1
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
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.idxVB#0 as range 21
  // closed e.idxVTB#0 as range 17
  // closed e.idxVTTB#0 as range 13
  // closed e.idxVTTTB#0 as range 9
  // closed e.idxVTTTTB#0 as range 5
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    //S (E )(E )(#RemovedTileE )(E )(E )
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 # RemovedTile/26 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    context[41] = context[13];
    context[42] = context[14];
    context[26] = refalrts::ident_left(  & ident_RemovedTile<int>::name, context[41], context[42] );
    if( ! context[26] )
      continue;
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.Pattern#1 as range 41(13)
    // closed e.ScannedResult#1 as range 9
    // closed e.Result#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  (/15 # RemovedTile/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/25 AsIs: (/23 AsIs: e.Idents#1/21 AsIs: )/24 AsIs: (/19 AsIs: e.ScannedPattern#1/17 HalfReuse: # RemovedTile/20 } Tile{ AsIs: e.Pattern#1/41(13) } Tile{ AsIs: )/16 AsIs: (/11 } Tile{ AsIs: e.ScannedResult#1/9 } Tile{ AsIs: e.Result#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_ident( context[20], & ident_RemovedTile<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[19], context[16] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[16], context[11] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[25], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (E )(E )(E )(E )((#TileE )E )
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 (/28 # Tile/30 e.NestedTile#1/26 )/29 e.Result#1/5 )/8 >/1
    context[41] = context[5];
    context[42] = context[6];
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[41], context[42] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    context[30] = refalrts::ident_left(  & ident_Tile<int>::name, context[26], context[27] );
    if( ! context[30] )
      continue;
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.Pattern#1 as range 13
    // closed e.ScannedResult#1 as range 9
    // closed e.NestedTile#1 as range 26
    // closed e.Result#1 as range 41(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/16 (/11 {REMOVED TILE}  )/12 (/7 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/25 AsIs: (/23 AsIs: e.Idents#1/21 AsIs: )/24 AsIs: (/19 } Tile{ AsIs: e.ScannedPattern#1/17 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedResult#1/9 } Tile{ AsIs: (/28 AsIs: # Tile/30 AsIs: e.NestedTile#1/26 AsIs: )/29 AsIs: e.Result#1/41(5) AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[15], context[8] );
    refalrts::link_brackets( context[28], context[29] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[28], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[25], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (E )(E )()(E )(E )
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    context[41] = context[13];
    context[42] = context[14];
    if( ! refalrts::empty_seq( context[41], context[42] ) )
      continue;
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    // closed e.Result#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  )/16 (/11 {REMOVED TILE}  )/12 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/25 AsIs: (/23 AsIs: e.Idents#1/21 AsIs: )/24 AsIs: (/19 AsIs: e.ScannedPattern#1/17 AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedResult#1/9 } Tile{ AsIs: e.Result#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[15], context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[25], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (E )(E )(E )(E )()
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 )/8 >/1
    context[41] = context[5];
    context[42] = context[6];
    if( ! refalrts::empty_seq( context[41], context[42] ) )
      continue;
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.Pattern#1 as range 13
    // closed e.ScannedResult#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  {REMOVED TILE}  )/20 (/15 {REMOVED TILE}  {REMOVED TILE}  (/7 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/25 AsIs: (/23 AsIs: e.Idents#1/21 AsIs: )/24 AsIs: (/19 } Tile{ AsIs: e.ScannedPattern#1/17 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[19], context[16] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[25], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (#AsIsE)(E )(E )(E )(E )
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 # AsIsE/26 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    context[41] = context[21];
    context[42] = context[22];
    context[26] = refalrts::ident_left(  & ident_AsIsE<int>::name, context[41], context[42] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[41], context[42] ) )
      continue;
    // closed e.ScannedPattern#1 as range 17
    // closed e.Pattern#1 as range 13
    // closed e.ScannedResult#1 as range 9
    // closed e.Result#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/16 (/11 {REMOVED TILE}  )/12 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/25 AsIs: (/23 AsIs: # AsIsE/26 AsIs: )/24 AsIs: (/19 } Tile{ AsIs: e.ScannedPattern#1/17 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedResult#1/9 } Tile{ AsIs: e.Result#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[15], context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[25], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S (E )(E )(T E )(E )(T E )
  // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 t.PatternItem#1/26 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 t.ResultItem#1/28 e.Result#1/5 )/8 >/1
  // closed e.Idents#1 as range 21
  // closed e.ScannedPattern#1 as range 17
  // closed e.ScannedResult#1 as range 9
  context[27] = refalrts::tvar_left( context[26], context[13], context[14] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 13
  context[29] = refalrts::tvar_left( context[28], context[5], context[6] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </30 & Fetch/31 </32 Tile{ HalfReuse: & OverlapItem/15 AsIs: t.PatternItem#1/26 } Tile{ AsIs: t.ResultItem#1/28 } >/33 </34 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_DoFindTile_0/4 AsIs: s.Weight#1/25 AsIs: (/23 AsIs: e.Idents#1/21 AsIs: )/24 AsIs: (/19 AsIs: e.ScannedPattern#1/17 AsIs: )/20 } t.PatternItem#1/26/35 Tile{ AsIs: (/7 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 AsIs: )/12 } t.ResultItem#1/28/37 (/39 Tile{ AsIs: e.Result#1/5 } )/40 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[34] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[35], context[36], context[26], context[27]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[37], context[38], context[28], context[29]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[15], OverlapItem, "OverlapItem" );
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_DoFindTile_0, "lambda_DoFindTile_0" );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[34] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[32] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[37], context[39] );
  res = refalrts::splice_evar( res, context[16], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[0], context[20] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[15], context[27] );
  res = refalrts::splice_evar( res, context[30], context[32] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult OverlapItem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
    //FAST GEN:(E )T 
    //GLOBAL GEN:(S E )T 
    // </0 & OverlapItem/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 t.idxT#0/10 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::ictVarLeftSave, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //(#TkVariable'e'E S )(#TkVariable'e'E )
    // </0 & OverlapItem/4 (/7 # TkVariable/9 'e'/14 e.Index#1/17 s.Offset#1/19 )/8 (/10 # TkVariable/15 'e'/16 e.Index#1/12 )/11 >/1
    {refalrts::icBracketTerm, 0, 12, 10},
    {refalrts::icIdentTerm, 0, 6, 9},
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icCharLeftSave, 14, static_cast<unsigned char>('e'), 20},
    {refalrts::icIdentLeftSave, 15, 6, 12},
    {refalrts::icCharLeftSave, 16, static_cast<unsigned char>('e'), 12},
    // closed e.Index#1 as range 12
    {refalrts::iceRepeatLeft, 17, 12, 20},
    {refalrts::icsVarLeft, 0, 19, 20},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # TkVariable/9 'e'/14 e.Index#1/17 s.Offset#1/19 )/8 (/10 # TkVariable/15 'e'/16 e.Index#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 3/0 HalfReuse: # AsIsE/4 } Tile{ ]] }
    {refalrts::icReinitInt, 0, 3, 0},
    {refalrts::icReinitIdent, 0, 7, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(S E S )(S E )
    // </0 & OverlapItem/4 (/7 s.AnyType#1/9 e.Info#1/15 s.Offset#1/17 )/8 (/10 s.AnyType#1/14 e.Info#1/12 )/11 >/1
    {refalrts::icBracketTerm, 0, 12, 10},
    {refalrts::icsRepeatLeft, 14, 9, 12},
    // closed e.Info#1 as range 12
    {refalrts::icSave, 0, 20, 5},
    {refalrts::iceRepeatLeft, 15, 12, 20},
    {refalrts::icsVarLeft, 0, 17, 20},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 s.AnyType#1/9 e.Info#1/15 s.Offset#1/17 )/8 (/10 s.AnyType#1/14 e.Info#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 3/0 HalfReuse: # AsIs/4 } Tile{ ]] }
    {refalrts::icReinitInt, 0, 3, 0},
    {refalrts::icReinitIdent, 0, 3, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    //(#TkVariableS E S )T 
    // </0 & OverlapItem/4 (/7 # TkVariable/9 s.Mode#1/12 e.Index#1/5 s.Offset#1/13 )/8 t.AnyItem#1/10 >/1
    {refalrts::icIdentTerm, 0, 6, 9},
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icsVarLeft, 0, 12, 20},
    {refalrts::icsVarRight, 0, 13, 20},
    // closed e.Index#1 as range 20(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 # TkVariable/9 s.Mode#1/12 e.Index#1/20(5) s.Offset#1/13 )/8 t.AnyItem#1/10 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //(S E S )(#TkVariable's'E )
    // </0 & OverlapItem/4 (/7 s.AnyType#1/9 e.Info#1/5 s.Offset#1/16 )/8 (/10 # TkVariable/14 's'/15 e.Index#1/12 )/11 >/1
    {refalrts::icBracketTerm, 0, 12, 10},
    {refalrts::icIdentLeftSave, 14, 6, 12},
    {refalrts::icCharLeftSave, 15, static_cast<unsigned char>('s'), 12},
    // closed e.Index#1 as range 12
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icsVarRight, 0, 16, 20},
    // closed e.Info#1 as range 20(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 s.AnyType#1/9 e.Info#1/20(5) s.Offset#1/16 )/8 (/10 # TkVariable/14 's'/15 e.Index#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 1/0 HalfReuse: # HalfReuse/4 } Tile{ ]] }
    {refalrts::icReinitInt, 0, 1, 0},
    {refalrts::icReinitIdent, 0, 4, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(S E S )(#TkVariableS E )
    // </0 & OverlapItem/4 (/7 s.AnyType#1/9 e.Info#1/5 s.Offset#1/16 )/8 (/10 # TkVariable/14 s.Mode#1/15 e.Index#1/12 )/11 >/1
    {refalrts::icBracketTerm, 0, 12, 10},
    {refalrts::icIdentLeftSave, 14, 6, 12},
    {refalrts::icsVarLeft, 0, 15, 12},
    // closed e.Index#1 as range 12
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icsVarRight, 0, 16, 20},
    // closed e.Info#1 as range 20(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 s.AnyType#1/9 e.Info#1/20(5) s.Offset#1/16 )/8 (/10 # TkVariable/14 s.Mode#1/15 e.Index#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(S E S )(#LEFT_EDGE)
    // </0 & OverlapItem/4 (/7 s.Type1#1/9 e.Info1#1/5 s.Offset#1/15 )/8 (/10 # LEFT_EDGE/14 )/11 >/1
    {refalrts::icBracketTerm, 0, 12, 10},
    {refalrts::icIdentLeftSave, 14, 2, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icsVarRight, 0, 15, 20},
    // closed e.Info1#1 as range 20(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 s.Type1#1/9 e.Info1#1/20(5) s.Offset#1/15 )/8 (/10 # LEFT_EDGE/14 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(S E S )(#RIGHT_EDGE)
    // </0 & OverlapItem/4 (/7 s.Type1#1/9 e.Info1#1/5 s.Offset#1/15 )/8 (/10 # RIGHT_EDGE/14 )/11 >/1
    {refalrts::icBracketTerm, 0, 12, 10},
    {refalrts::icIdentLeftSave, 14, 1, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icsVarRight, 0, 15, 20},
    // closed e.Info1#1 as range 20(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 s.Type1#1/9 e.Info1#1/20(5) s.Offset#1/15 )/8 (/10 # RIGHT_EDGE/14 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(S E S )(S E )
    // </0 & OverlapItem/4 (/7 s.Type#1/9 e.Info1#1/5 s.Offset#1/15 )/8 (/10 s.Type#1/14 e.Info2#1/12 )/11 >/1
    {refalrts::icBracketTerm, 0, 12, 10},
    {refalrts::icsRepeatLeft, 14, 9, 12},
    // closed e.Info2#1 as range 12
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icsVarRight, 0, 15, 20},
    // closed e.Info1#1 as range 20(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 s.Type#1/9 e.Info1#1/20(5) s.Offset#1/15 )/8 (/10 s.Type#1/14 e.Info2#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 2/0 HalfReuse: # Reuse/4 } Tile{ ]] }
    {refalrts::icReinitInt, 0, 2, 0},
    {refalrts::icReinitIdent, 0, 5, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(S E S )(S E )
    // </0 & OverlapItem/4 (/7 s.Type1#1/9 e.Info1#1/5 s.Offset#1/15 )/8 (/10 s.Type2#1/14 e.Info2#1/12 )/11 >/1
    {refalrts::icBracketTerm, 0, 12, 10},
    {refalrts::icsVarLeft, 0, 14, 12},
    // closed e.Info2#1 as range 12
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icsVarRight, 0, 15, 20},
    // closed e.Info1#1 as range 20(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 s.Type1#1/9 e.Info1#1/20(5) s.Offset#1/15 )/8 (/10 s.Type2#1/14 e.Info2#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 1/0 HalfReuse: # HalfReuse/4 } Tile{ ]] }
    {refalrts::icReinitInt, 0, 1, 0},
    {refalrts::icReinitIdent, 0, 4, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(#LEFT_EDGE)(#LEFT_EDGE)
    // </0 & OverlapItem/4 (/7 # LEFT_EDGE/9 )/8 (/10 # LEFT_EDGE/14 )/11 >/1
    {refalrts::icBracketTerm, 0, 12, 10},
    {refalrts::icIdentTerm, 0, 2, 9},
    {refalrts::icIdentLeftSave, 14, 2, 12},
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # LEFT_EDGE/9 )/8 (/10 # LEFT_EDGE/14 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 3/0 HalfReuse: # AsIs/4 } Tile{ ]] }
    {refalrts::icReinitInt, 0, 3, 0},
    {refalrts::icReinitIdent, 0, 3, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(#RIGHT_EDGE)(#RIGHT_EDGE)
    // </0 & OverlapItem/4 (/7 # RIGHT_EDGE/9 )/8 (/10 # RIGHT_EDGE/14 )/11 >/1
    {refalrts::icBracketTerm, 0, 12, 10},
    {refalrts::icIdentTerm, 0, 1, 9},
    {refalrts::icIdentLeftSave, 14, 1, 12},
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # RIGHT_EDGE/9 )/8 (/10 # RIGHT_EDGE/14 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 3/0 HalfReuse: # AsIs/4 } Tile{ ]] }
    {refalrts::icReinitInt, 0, 3, 0},
    {refalrts::icReinitIdent, 0, 3, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //(#LEFT_EDGE)T 
    // </0 & OverlapItem/4 (/7 # LEFT_EDGE/9 )/8 t.Other#1/10 >/1
    {refalrts::icIdentTerm, 0, 2, 9},
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 # LEFT_EDGE/9 )/8 t.Other#1/10 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(#RIGHT_EDGE)T 
    // </0 & OverlapItem/4 (/7 # RIGHT_EDGE/9 )/8 t.Other#1/10 >/1
    {refalrts::icIdentTerm, 0, 1, 9},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 # RIGHT_EDGE/9 )/8 t.Other#1/10 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[12];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )T 
  //GLOBAL GEN:(S E )T 
  // </0 & OverlapItem/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 t.idxT#0/10 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    //(#TkVariable'e'E S )(#TkVariable'e'E )
    // </0 & OverlapItem/4 (/7 # TkVariable/9 'e'/14 e.Index#1/17 s.Offset#1/19 )/8 (/10 # TkVariable/15 'e'/16 e.Index#1/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_TkVariable<int>::name, context[9] ) )
      continue;
    context[20] = context[5];
    context[21] = context[6];
    context[14] = refalrts::char_left( 'e', context[20], context[21] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[12], context[13] );
    if( ! context[15] )
      continue;
    context[16] = refalrts::char_left( 'e', context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Index#1 as range 12
    if( ! refalrts::repeated_evar_left( context[17], context[18], context[12], context[13], context[20], context[21] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # TkVariable/9 'e'/14 e.Index#1/17 s.Offset#1/19 )/8 (/10 # TkVariable/15 'e'/16 e.Index#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 3/0 HalfReuse: # AsIsE/4 } Tile{ ]] }
    refalrts::reinit_number( context[0], 3UL );
    refalrts::reinit_ident( context[4], & ident_AsIsE<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S E S )(S E )
    // </0 & OverlapItem/4 (/7 s.AnyType#1/9 e.Info#1/15 s.Offset#1/17 )/8 (/10 s.AnyType#1/14 e.Info#1/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[14], context[9], context[12], context[13] ) )
      continue;
    // closed e.Info#1 as range 12
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::repeated_evar_left( context[15], context[16], context[12], context[13], context[20], context[21] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 s.AnyType#1/9 e.Info#1/15 s.Offset#1/17 )/8 (/10 s.AnyType#1/14 e.Info#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 3/0 HalfReuse: # AsIs/4 } Tile{ ]] }
    refalrts::reinit_number( context[0], 3UL );
    refalrts::reinit_ident( context[4], & ident_AsIs<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkVariableS E S )T 
    // </0 & OverlapItem/4 (/7 # TkVariable/9 s.Mode#1/12 e.Index#1/5 s.Offset#1/13 )/8 t.AnyItem#1/10 >/1
    if( ! refalrts::ident_term(  & ident_TkVariable<int>::name, context[9] ) )
      continue;
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::svar_left( context[12], context[20], context[21] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[20], context[21] ) )
      continue;
    // closed e.Index#1 as range 20(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 # TkVariable/9 s.Mode#1/12 e.Index#1/20(5) s.Offset#1/13 )/8 t.AnyItem#1/10 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S E S )(#TkVariable's'E )
    // </0 & OverlapItem/4 (/7 s.AnyType#1/9 e.Info#1/5 s.Offset#1/16 )/8 (/10 # TkVariable/14 's'/15 e.Index#1/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( 's', context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.Index#1 as range 12
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::svar_right( context[16], context[20], context[21] ) )
      continue;
    // closed e.Info#1 as range 20(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 s.AnyType#1/9 e.Info#1/20(5) s.Offset#1/16 )/8 (/10 # TkVariable/14 's'/15 e.Index#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 1/0 HalfReuse: # HalfReuse/4 } Tile{ ]] }
    refalrts::reinit_number( context[0], 1UL );
    refalrts::reinit_ident( context[4], & ident_HalfReuse<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S E S )(#TkVariableS E )
    // </0 & OverlapItem/4 (/7 s.AnyType#1/9 e.Info#1/5 s.Offset#1/16 )/8 (/10 # TkVariable/14 s.Mode#1/15 e.Index#1/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
      continue;
    // closed e.Index#1 as range 12
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::svar_right( context[16], context[20], context[21] ) )
      continue;
    // closed e.Info#1 as range 20(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 s.AnyType#1/9 e.Info#1/20(5) s.Offset#1/16 )/8 (/10 # TkVariable/14 s.Mode#1/15 e.Index#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S E S )(#LEFT_EDGE)
    // </0 & OverlapItem/4 (/7 s.Type1#1/9 e.Info1#1/5 s.Offset#1/15 )/8 (/10 # LEFT_EDGE/14 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::svar_right( context[15], context[20], context[21] ) )
      continue;
    // closed e.Info1#1 as range 20(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 s.Type1#1/9 e.Info1#1/20(5) s.Offset#1/15 )/8 (/10 # LEFT_EDGE/14 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S E S )(#RIGHT_EDGE)
    // </0 & OverlapItem/4 (/7 s.Type1#1/9 e.Info1#1/5 s.Offset#1/15 )/8 (/10 # RIGHT_EDGE/14 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::svar_right( context[15], context[20], context[21] ) )
      continue;
    // closed e.Info1#1 as range 20(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 s.Type1#1/9 e.Info1#1/20(5) s.Offset#1/15 )/8 (/10 # RIGHT_EDGE/14 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S E S )(S E )
    // </0 & OverlapItem/4 (/7 s.Type#1/9 e.Info1#1/5 s.Offset#1/15 )/8 (/10 s.Type#1/14 e.Info2#1/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[14], context[9], context[12], context[13] ) )
      continue;
    // closed e.Info2#1 as range 12
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::svar_right( context[15], context[20], context[21] ) )
      continue;
    // closed e.Info1#1 as range 20(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 s.Type#1/9 e.Info1#1/20(5) s.Offset#1/15 )/8 (/10 s.Type#1/14 e.Info2#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 2/0 HalfReuse: # Reuse/4 } Tile{ ]] }
    refalrts::reinit_number( context[0], 2UL );
    refalrts::reinit_ident( context[4], & ident_Reuse<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S E S )(S E )
    // </0 & OverlapItem/4 (/7 s.Type1#1/9 e.Info1#1/5 s.Offset#1/15 )/8 (/10 s.Type2#1/14 e.Info2#1/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.Info2#1 as range 12
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::svar_right( context[15], context[20], context[21] ) )
      continue;
    // closed e.Info1#1 as range 20(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 s.Type1#1/9 e.Info1#1/20(5) s.Offset#1/15 )/8 (/10 s.Type2#1/14 e.Info2#1/12 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 1/0 HalfReuse: # HalfReuse/4 } Tile{ ]] }
    refalrts::reinit_number( context[0], 1UL );
    refalrts::reinit_ident( context[4], & ident_HalfReuse<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#LEFT_EDGE)(#LEFT_EDGE)
    // </0 & OverlapItem/4 (/7 # LEFT_EDGE/9 )/8 (/10 # LEFT_EDGE/14 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_LEFT_EDGE<int>::name, context[9] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # LEFT_EDGE/9 )/8 (/10 # LEFT_EDGE/14 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 3/0 HalfReuse: # AsIs/4 } Tile{ ]] }
    refalrts::reinit_number( context[0], 3UL );
    refalrts::reinit_ident( context[4], & ident_AsIs<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#RIGHT_EDGE)(#RIGHT_EDGE)
    // </0 & OverlapItem/4 (/7 # RIGHT_EDGE/9 )/8 (/10 # RIGHT_EDGE/14 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_RIGHT_EDGE<int>::name, context[9] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # RIGHT_EDGE/9 )/8 (/10 # RIGHT_EDGE/14 )/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 3/0 HalfReuse: # AsIs/4 } Tile{ ]] }
    refalrts::reinit_number( context[0], 3UL );
    refalrts::reinit_ident( context[4], & ident_AsIs<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#LEFT_EDGE)T 
    // </0 & OverlapItem/4 (/7 # LEFT_EDGE/9 )/8 t.Other#1/10 >/1
    if( ! refalrts::ident_term(  & ident_LEFT_EDGE<int>::name, context[9] ) )
      continue;
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 # LEFT_EDGE/9 )/8 t.Other#1/10 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_NoOverlap<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(#RIGHT_EDGE)T 
  // </0 & OverlapItem/4 (/7 # RIGHT_EDGE/9 )/8 t.Other#1/10 >/1
  if( ! refalrts::ident_term(  & ident_RIGHT_EDGE<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 # RIGHT_EDGE/9 )/8 t.Other#1/10 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: # NoOverlap/0 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_NoOverlap<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FindTile_EEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    //FAST GEN:S (E )(E )(E )
    //GLOBAL GEN:S (E )(E )(E )
    // </0 & FindTile_EEnd/4 s.idx#0/17 (/15 e.idxVB#0/13 )/16 (/11 e.idxVTB#0/9 )/12 (/7 e.idxVTTB#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    {refalrts::icBracketRightSave, 0, 13, 2},
    // closed e.idxVB#0 as range 13
    // closed e.idxVTB#0 as range 9
    // closed e.idxVTTB#0 as range 5
    {refalrts::icsVarLeft, 0, 17, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //S (#AsIsE)(E )(E )
    // </0 & FindTile_EEnd/4 s.Weight#1/17 (/15 # AsIsE/18 )/16 (/11 e.Pattern#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    {refalrts::icSave, 0, 22, 13},
    {refalrts::icIdentLeftSave, 18, 0, 22},
    {refalrts::icEmpty, 0, 0, 22},
    // closed e.Pattern#1 as range 9
    // closed e.Result#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FindTile_EEnd/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/17 AsIs: (/15 AsIs: # AsIsE/18 AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 17, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //S (E #AsIsE)(E )(E )
    // </0 & FindTile_EEnd/4 s.Weight#1/17 (/15 e.Idents#1/13 # AsIsE/18 )/16 (/11 e.Pattern#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    {refalrts::icSave, 0, 22, 13},
    {refalrts::icIdentRightSave, 18, 0, 22},
    // closed e.Idents#1 as range 22(13)
    // closed e.Pattern#1 as range 9
    // closed e.Result#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FindTile_EEnd/4 } Tile{ HalfReuse: </18 } & Sub/19 Tile{ AsIs: s.Weight#1/17 HalfReuse: 3/15 } >/20 (/21 Tile{ AsIs: e.Idents#1/22(13) } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 0, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icReinitInt, 0, 3, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 21, 16, 0},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSetRes, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icSpliceTile, 17, 15, 0},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (E )(E )(E )
    // </0 & FindTile_EEnd/4 s.Weight#1/17 (/15 e.Idents#1/13 )/16 (/11 e.Pattern#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    // closed e.Idents#1 as range 13
    // closed e.Pattern#1 as range 9
    // closed e.Result#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FindTile_EEnd/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/17 AsIs: (/15 AsIs: e.Idents#1/13 AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 17, 8, 0},
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
  //FAST GEN:S (E )(E )(E )
  //GLOBAL GEN:S (E )(E )(E )
  // </0 & FindTile_EEnd/4 s.idx#0/17 (/15 e.idxVB#0/13 )/16 (/11 e.idxVTB#0/9 )/12 (/7 e.idxVTTB#0/5 )/8 >/1
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
  // closed e.idxVB#0 as range 13
  // closed e.idxVTB#0 as range 9
  // closed e.idxVTTB#0 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    //S (#AsIsE)(E )(E )
    // </0 & FindTile_EEnd/4 s.Weight#1/17 (/15 # AsIsE/18 )/16 (/11 e.Pattern#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    context[22] = context[13];
    context[23] = context[14];
    context[18] = refalrts::ident_left(  & ident_AsIsE<int>::name, context[22], context[23] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.Pattern#1 as range 9
    // closed e.Result#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FindTile_EEnd/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/17 AsIs: (/15 AsIs: # AsIsE/18 AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (E #AsIsE)(E )(E )
    // </0 & FindTile_EEnd/4 s.Weight#1/17 (/15 e.Idents#1/13 # AsIsE/18 )/16 (/11 e.Pattern#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    context[22] = context[13];
    context[23] = context[14];
    context[18] = refalrts::ident_right(  & ident_AsIsE<int>::name, context[22], context[23] );
    if( ! context[18] )
      continue;
    // closed e.Idents#1 as range 22(13)
    // closed e.Pattern#1 as range 9
    // closed e.Result#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FindTile_EEnd/4 } Tile{ HalfReuse: </18 } & Sub/19 Tile{ AsIs: s.Weight#1/17 HalfReuse: 3/15 } >/20 (/21 Tile{ AsIs: e.Idents#1/22(13) } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[19], Sub, "Sub" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[18] );
    refalrts::reinit_number( context[15], 3UL );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[16] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[17], context[15] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S (E )(E )(E )
  // </0 & FindTile_EEnd/4 s.Weight#1/17 (/15 e.Idents#1/13 )/16 (/11 e.Pattern#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
  // closed e.Idents#1 as range 13
  // closed e.Pattern#1 as range 9
  // closed e.Result#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & FindTile_EEnd/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/17 AsIs: (/15 AsIs: e.Idents#1/13 AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
