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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GST_0/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # TileReplaced/13 (/16 e.Pattern#2/14 )/17 (/20 e.Result#2/18 )/21 >/1
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
    context[13] = refalrts::ident_left(  & ident_TileReplaced<int>::name, context[2], context[3] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Pattern#1 as range 5
    // closed e.Result#1 as range 9
    // closed e.Pattern#2 as range 14
    // closed e.Result#2 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GST_0/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </12 HalfReuse: & GST/13 AsIs: (/16 AsIs: e.Pattern#2/14 AsIs: )/17 AsIs: (/20 AsIs: e.Result#2/18 AsIs: )/21 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[13], GST, "GST" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GST_0/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # NoTiles/13 (/16 e.Pattern#1/22 )/17 (/20 e.Result#1/24 )/21 >/1
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
  context[13] = refalrts::ident_left(  & ident_NoTiles<int>::name, context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 5
  if( ! refalrts::repeated_evar_left( context[22], context[23], context[5], context[6], context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 9
  if( ! refalrts::repeated_evar_left( context[24], context[25], context[9], context[10], context[18], context[19] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[18], context[19] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GST_0/4 {REMOVED TILE}  # NoTiles/13 (/16 e.Pattern#1/22 )/17 (/20 e.Result#1/24 )/21 >/1 {REMOVED TILE} 
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
}

refalrts::FnResult GST(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GST/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
}

static refalrts::FnResult lambda_ReplaceMaxTile_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ReplaceMaxTile_0/4 (/7 e.Idents#2/5 )/8 (/11 e.PatFirst#3/9 )/12 (/15 e.PatSecond#3/13 )/16 (/19 e.ResFirst#3/17 )/20 (/23 e.ResSecond#3/21 )/24 >/1
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
}

static refalrts::FnResult lambda_ReplaceMaxTile_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ReplaceMaxTile_1/4 (/8 e.Pattern#1/6 )/9 (/12 e.Result#1/10 )/13 # NoTiles/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_right(  & ident_NoTiles<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Pattern#1 as range 6
    // closed e.Result#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  # NoTiles/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoTiles/4 AsIs: (/8 AsIs: e.Pattern#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Result#1/10 AsIs: )/13 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_NoTiles<int>::name );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ReplaceMaxTile_1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 # TileReplaced/13 (/16 s.IndexP#2/22 s.IndexR#2/23 s.Weight#2/24 (/20 e.Idents#2/18 )/21 )/17 >/1
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
  context[13] = refalrts::ident_left(  & ident_TileReplaced<int>::name, context[2], context[3] );
  if( ! context[13] )
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
}

static refalrts::FnResult ReplaceMaxTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ReplaceMaxTile/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
}

static refalrts::FnResult lambda_Modify_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Modify_0/4 (/7 e.PatFirst#1/5 )/8 (/11 e.ResFirst#1/9 )/12 (/15 # RemovedTile/17 e.PatSecond#2/13 )/16 (/20 (/24 # Tile/26 e.Tile#2/22 )/25 e.ResSecond#2/18 )/21 >/1
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
}

static refalrts::FnResult Modify(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Modify/4 (/7 e.Idents#1/5 )/8 (/11 e.PatFirst#1/9 )/12 (/15 e.PatSecond#1/13 )/16 (/19 e.ResFirst#1/17 )/20 (/23 e.ResSecond#1/21 )/24 >/1
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
}

static refalrts::FnResult DoModify(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoModify/4 (/7 # AsIsE/9 e.Idents#1/5 )/8 (/12 # Tile/14 e.Tile#1/10 )/13 (/17 (/21 s.TypeFromPat#1/31 e.InfoFromPat#1/19 s.Offset#1/33 )/22 e.PatSecond#1/15 )/18 (/25 (/29 s.TypeFromRes#1/32 e.InfoFromRes#1/27 )/30 e.ResSecond#1/23 )/26 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_AsIsE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_Tile<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[23], context[24] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Idents#1 as range 5
    // closed e.Tile#1 as range 10
    // closed e.PatSecond#1 as range 15
    // closed e.ResSecond#1 as range 23
    if( ! refalrts::svar_left( context[31], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
      continue;
    // closed e.InfoFromRes#1 as range 27
    if( ! refalrts::svar_right( context[33], context[19], context[20] ) )
      continue;
    // closed e.InfoFromPat#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.TypeFromPat#1/31 e.InfoFromPat#1/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/9 AsIs: e.Idents#1/5 AsIs: )/8 AsIs: (/12 AsIs: # Tile/14 AsIs: e.Tile#1/10 HalfReuse: (/13 HalfReuse: # AsIs/17 AsIs: (/21 } Tile{ AsIs: s.TypeFromRes#1/32 } Tile{ AsIs: e.InfoFromRes#1/27 } Tile{ AsIs: s.Offset#1/33 } Tile{ HalfReuse: )/25 HalfReuse: )/29 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: (/22 AsIs: e.PatSecond#1/15 AsIs: )/18 } Tile{ HalfReuse: (/30 AsIs: e.ResSecond#1/23 AsIs: )/26 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], DoModify, "DoModify" );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[17], & ident_AsIs<int>::name );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::reinit_close_bracket( context[29] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_open_bracket( context[30] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[30], context[26] );
    refalrts::link_brackets( context[22], context[18] );
    refalrts::link_brackets( context[12], context[0] );
    refalrts::link_brackets( context[13], context[29] );
    refalrts::link_brackets( context[21], context[25] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[30];
    res = refalrts::splice_evar( res, context[22], context[18] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[25], context[29] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[4], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoModify/4 (/7 # AsIs/9 e.Idents#1/5 )/8 (/12 # Tile/14 e.Tile#1/10 )/13 (/17 (/21 # LEFT_EDGE/23 )/22 e.PatSecond#1/15 )/18 (/26 (/30 # LEFT_EDGE/32 )/31 e.ResSecond#1/24 )/27 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_AsIs<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_Tile<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Idents#1 as range 5
    // closed e.Tile#1 as range 10
    // closed e.PatSecond#1 as range 15
    // closed e.ResSecond#1 as range 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  (/30 # LEFT_EDGE/32 )/31 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/9 AsIs: e.Idents#1/5 AsIs: )/8 AsIs: (/12 AsIs: # Tile/14 AsIs: e.Tile#1/10 HalfReuse: (/13 HalfReuse: # LEFT_EDGE/17 HalfReuse: )/21 HalfReuse: )/23 HalfReuse: (/22 AsIs: e.PatSecond#1/15 AsIs: )/18 AsIs: (/26 } Tile{ AsIs: e.ResSecond#1/24 } Tile{ AsIs: )/27 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], DoModify, "DoModify" );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[17], & ident_LEFT_EDGE<int>::name );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_close_bracket( context[23] );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[22], context[18] );
    refalrts::link_brackets( context[12], context[23] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[27];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[4], context[26] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoModify/4 (/7 # AsIs/9 e.Idents#1/5 )/8 (/12 # Tile/14 e.Tile#1/10 )/13 (/17 (/21 # RIGHT_EDGE/23 )/22 )/18 (/26 (/30 # RIGHT_EDGE/32 )/31 )/27 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_AsIs<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_Tile<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Idents#1 as range 5
    // closed e.Tile#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  )/31 )/27 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/9 AsIs: e.Idents#1/5 AsIs: )/8 AsIs: (/12 AsIs: # Tile/14 AsIs: e.Tile#1/10 HalfReuse: (/13 HalfReuse: # RIGHT_EDGE/17 HalfReuse: )/21 HalfReuse: )/23 HalfReuse: (/22 AsIs: )/18 AsIs: (/26 HalfReuse: )/30 HalfReuse: >/32 } Tile{ ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], DoModify, "DoModify" );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[17], & ident_RIGHT_EDGE<int>::name );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_close_bracket( context[23] );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_close_bracket( context[30] );
    refalrts::reinit_close_call( context[32] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[26], context[30] );
    refalrts::link_brackets( context[22], context[18] );
    refalrts::link_brackets( context[12], context[23] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::link_brackets( context[9], context[8] );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoModify/4 (/7 s.Ident#1/30 e.Idents#1/5 )/8 (/11 # Tile/13 e.Tile#1/9 )/12 (/16 (/20 s.TypeFromPat#1/31 e.InfoFromPat#1/18 s.Offset#1/33 )/21 e.PatSecond#1/14 )/17 (/24 (/28 s.TypeFromRes#1/32 e.InfoFromRes#1/26 )/29 e.ResSecond#1/22 )/25 >/1
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
    context[13] = refalrts::ident_left(  & ident_Tile<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[22], context[23] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Tile#1 as range 9
    // closed e.PatSecond#1 as range 14
    // closed e.ResSecond#1 as range 22
    if( ! refalrts::svar_left( context[30], context[5], context[6] ) )
      continue;
    // closed e.Idents#1 as range 5
    if( ! refalrts::svar_left( context[31], context[18], context[19] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
      continue;
    // closed e.InfoFromRes#1 as range 26
    if( ! refalrts::svar_right( context[33], context[18], context[19] ) )
      continue;
    // closed e.InfoFromPat#1 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Ident#1/30 {REMOVED TILE}  {REMOVED TILE}  s.TypeFromPat#1/31 e.InfoFromPat#1/18 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoModify/4 AsIs: (/7 } Tile{ AsIs: e.Idents#1/5 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Tile/13 AsIs: e.Tile#1/9 HalfReuse: (/12 HalfReuse: s.Ident1 #30/16 AsIs: (/20 } Tile{ AsIs: s.TypeFromRes#1/32 } Tile{ AsIs: e.InfoFromRes#1/26 } Tile{ AsIs: s.Offset#1/33 } Tile{ HalfReuse: )/24 HalfReuse: )/28 } )/34 Tile{ HalfReuse: (/21 AsIs: e.PatSecond#1/14 AsIs: )/17 } Tile{ HalfReuse: (/29 AsIs: e.ResSecond#1/22 AsIs: )/25 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_svar( context[16], context[30] );
    refalrts::reinit_close_bracket( context[24] );
    refalrts::reinit_close_bracket( context[28] );
    refalrts::reinit_open_bracket( context[21] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[29], context[25] );
    refalrts::link_brackets( context[21], context[17] );
    refalrts::link_brackets( context[11], context[34] );
    refalrts::link_brackets( context[12], context[28] );
    refalrts::link_brackets( context[20], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[29];
    res = refalrts::splice_evar( res, context[21], context[17] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[24], context[28] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[8], context[20] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoModify/4 (/7 )/8 (/11 # Tile/13 e.Tile#1/9 )/12 (/16 e.PatSecond#1/14 )/17 (/20 e.ResSecond#1/18 )/21 >/1
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
  context[13] = refalrts::ident_left(  & ident_Tile<int>::name, context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tile#1 as range 9
  // closed e.PatSecond#1 as range 14
  // closed e.ResSecond#1 as range 18

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/16 {REMOVED TILE}  )/17 (/20 {REMOVED TILE}  )/21 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # RemovedTile/4 } Tile{ AsIs: e.PatSecond#1/14 } Tile{ HalfReuse: )/7 HalfReuse: (/8 AsIs: (/11 AsIs: # Tile/13 AsIs: e.Tile#1/9 AsIs: )/12 } Tile{ AsIs: e.ResSecond#1/18 } Tile{ HalfReuse: )/1 ]] }
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
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Skip(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Skip/4 s.Num#1/9 (/7 e.Str#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Str#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Skip/4 AsIs: s.Num#1/9 AsIs: (/7 } )/10 (/11 Tile{ AsIs: e.Str#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Skip/4 0/5 (/8 e.Str_B#1/6 )/9 (/12 e.Str_E#1/10 )/13 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::number_left( 0UL, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Skip/4 s.Num#1/13 (/11 e.Str_B#1/9 )/12 (/7 t.Sym#1/14 e.Str_E#1/5 )/8 >/1
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
  // closed e.Str_B#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Str_E#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Skip/4 } </16 & Dec/17 Tile{ AsIs: s.Num#1/13 HalfReuse: >/11 } (/18 Tile{ AsIs: e.Str_B#1/9 } Tile{ AsIs: t.Sym#1/14 } Tile{ AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Str_E#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], Dec, "Dec" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_call( context[11] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[18], context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[7] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[13], context[11] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_DoReplaceMaxTile_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_DoReplaceMaxTile_0/4 s.MaxWeight#1/10 s.IndexP#1/11 s.IndexR#1/12 (/15 e.MaxIdents#1/13 )/16 s.Weight#2/17 s.CurIndexP#1/18 s.CurIndexR#1/19 (/8 e.Idents#2/6 )/9 '<'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_right( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Idents#2 as range 6
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.MaxIdents#1 as range 13
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_DoReplaceMaxTile_0/4 s.MaxWeight#1/10 s.IndexP#1/11 s.IndexR#1/12 (/15 e.MaxIdents#1/13 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/16 AsIs: s.Weight#2/17 AsIs: s.CurIndexP#1/18 AsIs: s.CurIndexR#1/19 AsIs: (/8 AsIs: e.Idents#2/6 AsIs: )/9 HalfReuse: )/5 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[5] );
    refalrts::link_brackets( context[16], context[5] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[5] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_DoReplaceMaxTile_0/4 s.MaxWeight#1/5 s.IndexP#1/6 s.IndexR#1/7 (/10 e.MaxIdents#1/8 )/11 s.Weight#2/12 s.CurIndexP#1/13 s.CurIndexR#1/14 (/17 e.Idents#2/15 )/18 s.Other#3/19 >/1
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
  // closed e.MaxIdents#1 as range 8
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
  // closed e.Idents#2 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

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
}

static refalrts::FnResult lambda_DoReplaceMaxTile_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_DoReplaceMaxTile_1/4 s.MaxWeight#1/17 s.CurIndexP#1/18 s.CurIndexR#1/19 s.IndexP#1/20 s.IndexR#1/21 (/24 e.MaxIdents#1/22 )/25 (/28 e.ScannedPattern#1/26 )/29 (/32 e.ScannedResult#1/30 )/33 s.Weight#2/34 (/15 e.Idents#2/13 )/16 (/11 e.Pattern#2/9 )/12 (/7 t.NextItem#2/35 e.Result#2/5 )/8 >/1
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
}

static refalrts::FnResult DoReplaceMaxTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoReplaceMaxTile/4 (/7 0/9 0/10 0/11 (/14 )/15 )/8 (/18 s.CurIndexP#1/32 (/26 e.Pattern#1/24 )/27 )/19 (/22 s.CurIndexR#1/33 (/30 e.Result#1/28 )/31 )/23 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::number_left( 0UL, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::number_left( 0UL, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::number_left( 0UL, context[5], context[6] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_right( context[24], context[25], context[16], context[17] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_right( context[28], context[29], context[20], context[21] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Pattern#1 as range 24
    // closed e.Result#1 as range 28
    if( ! refalrts::svar_left( context[32], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & DoReplaceMaxTile/4 (/7 0/9 0/10 0/11 (/14 )/15 )/8 (/18 s.CurIndexP#1/32 (/26 e.Pattern#1/24 )/27 )/19 (/22 s.CurIndexR#1/33 (/30 e.Result#1/28 )/31 )/23 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoReplaceMaxTile/4 (/7 s.MaxWeight#1/29 s.IndexP#1/30 s.IndexR#1/31 (/19 e.MaxIdents#1/17 )/20 )/8 (/11 s.CurIndexP#1/32 (/23 e.Pattern#1/21 )/24 )/12 (/15 s.CurIndexR#1/33 (/27 e.Result#1/25 )/28 )/16 >/1
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
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[9], context[10] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[13], context[14] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.MaxIdents#1 as range 17
    // closed e.Pattern#1 as range 21
    // closed e.Result#1 as range 25
    if( ! refalrts::svar_left( context[29], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.IndexP#1/30 {REMOVED TILE}  {REMOVED TILE}  (/11 s.CurIndexP#1/32 (/23 e.Pattern#1/21 )/24 )/12 (/15 s.CurIndexR#1/33 (/27 e.Result#1/25 )/28 )/16 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # TileReplaced/0 HalfReuse: (/4 HalfReuse: s.IndexP1 #30/7 } Tile{ AsIs: s.IndexR#1/31 } Tile{ AsIs: s.MaxWeight#1/29 } Tile{ AsIs: (/19 AsIs: e.MaxIdents#1/17 AsIs: )/20 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_TileReplaced<int>::name );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_svar( context[7], context[30] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[8] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoReplaceMaxTile/4 (/7 s.MaxWeight#1/25 s.IndexP#1/26 s.IndexR#1/27 (/19 e.MaxIdents#1/17 )/20 )/8 (/11 s.CurIndexP#1/28 (/31 e.ScannedPattern#1/29 )/32 t.NextTerm#1/34 e.Pattern#1/9 )/12 (/15 s.CurIndexR#1/33 (/23 e.ScannedResult#1/21 )/24 )/16 >/1
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
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[13], context[14] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.MaxIdents#1 as range 17
    // closed e.ScannedResult#1 as range 21
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[9], context[10] ) )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[9], context[10] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    // closed e.ScannedPattern#1 as range 29
    if( ! refalrts::svar_left( context[33], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    context[35] = refalrts::tvar_left( context[34], context[9], context[10] );
    if( ! context[35] )
      continue;
    // closed e.Pattern#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.CurIndexR#1/33 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoReplaceMaxTile/4 AsIs: (/7 AsIs: s.MaxWeight#1/25 AsIs: s.IndexP#1/26 AsIs: s.IndexR#1/27 AsIs: (/19 AsIs: e.MaxIdents#1/17 AsIs: )/20 AsIs: )/8 AsIs: (/11 } </36 & Inc/37 Tile{ AsIs: s.CurIndexP#1/28 HalfReuse: >/31 } Tile{ AsIs: (/23 } Tile{ AsIs: e.ScannedPattern#1/29 } Tile{ AsIs: t.NextTerm#1/34 } Tile{ AsIs: )/32 } Tile{ AsIs: e.Pattern#1/9 } Tile{ AsIs: )/12 AsIs: (/15 } 0/38 (/39 Tile{ AsIs: )/24 } Tile{ AsIs: e.ScannedResult#1/21 } Tile{ AsIs: )/16 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[37], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[38], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[31] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[39], context[24] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[32] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[36] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoReplaceMaxTile/4 (/7 s.MaxWeight#1/21 s.IndexP#1/22 s.IndexR#1/23 (/19 e.MaxIdents#1/17 )/20 )/8 (/11 s.CurIndexP#1/24 (/27 e.ScannedPattern#1/25 )/28 e.Pattern#1/9 )/12 (/15 s.CurIndexR#1/29 (/32 e.ScannedResult#1/30 )/33 t.NextItem#1/34 e.Result#1/13 )/16 >/1
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
  // closed e.MaxIdents#1 as range 17
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
  // closed e.ScannedPattern#1 as range 25
  // closed e.Pattern#1 as range 9
  if( ! refalrts::svar_left( context[29], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[13], context[14] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
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
}

static refalrts::FnResult FindTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FindTile/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
}

static refalrts::FnResult lambda_DoFindTile_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_DoFindTile_0/4 s.Weight#1/10 (/13 e.Idents#1/11 )/14 (/17 e.ScannedPattern#1/15 )/18 t.PatternItem#1/19 (/23 e.Pattern#1/21 )/24 (/27 e.ScannedResult#1/25 )/28 t.ResultItem#1/29 (/8 e.Result#1/6 )/9 # NoOverlap/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_right(  & ident_NoOverlap<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_right( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Result#1 as range 6
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Idents#1 as range 11
    // closed e.ScannedPattern#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Pattern#1 as range 21
    // closed e.ScannedResult#1 as range 25
    context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
    if( ! context[30] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_DoFindTile_0/4 {REMOVED TILE}  {REMOVED TILE}  )/18 {REMOVED TILE}  (/23 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/28 {REMOVED TILE}  (/8 {REMOVED TILE}  )/9 # NoOverlap/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/10 AsIs: (/13 AsIs: e.Idents#1/11 AsIs: )/14 AsIs: (/17 } Tile{ AsIs: e.ScannedPattern#1/15 } Tile{ AsIs: t.PatternItem#1/19 } Tile{ AsIs: e.Pattern#1/21 } Tile{ AsIs: )/24 AsIs: (/27 } Tile{ AsIs: e.ScannedResult#1/25 } Tile{ AsIs: t.ResultItem#1/29 } Tile{ AsIs: e.Result#1/6 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[27], context[1] );
    refalrts::link_brackets( context[17], context[24] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_DoFindTile_0/4 s.Weight#1/5 (/8 e.Idents#1/6 )/9 (/12 e.ScannedPattern#1/10 )/13 t.PatternItem#1/14 (/18 e.Pattern#1/16 )/19 (/22 e.ScannedResult#1/20 )/23 t.ResultItem#1/24 (/28 e.Result#1/26 )/29 s.ItemWeight#2/30 s.Ident#2/31 >/1
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
  // closed e.Idents#1 as range 6
  // closed e.ScannedPattern#1 as range 10
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
  // closed e.Pattern#1 as range 16
  // closed e.ScannedResult#1 as range 20
  context[25] = refalrts::tvar_left( context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.Result#1 as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
}

static refalrts::FnResult DoFindTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoFindTile/4 s.Weight#1/26 (/24 e.Idents#1/22 )/25 (/20 e.ScannedPattern#1/18 )/21 (/15 # RemovedTile/17 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_RemovedTile<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_right( context[22], context[23], context[2], context[3] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    // closed e.Idents#1 as range 22
    // closed e.ScannedPattern#1 as range 18
    // closed e.Pattern#1 as range 13
    // closed e.ScannedResult#1 as range 9
    // closed e.Result#1 as range 5
    if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  (/15 # RemovedTile/17 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/26 AsIs: (/24 AsIs: e.Idents#1/22 AsIs: )/25 AsIs: (/20 AsIs: e.ScannedPattern#1/18 HalfReuse: # RemovedTile/21 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/16 AsIs: (/11 } Tile{ AsIs: e.ScannedResult#1/9 } Tile{ AsIs: e.Result#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_ident( context[21], & ident_RemovedTile<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[20], context[16] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[16], context[11] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[26], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoFindTile/4 s.Weight#1/30 (/28 e.Idents#1/26 )/29 (/24 e.ScannedPattern#1/22 )/25 (/20 e.Pattern#1/18 )/21 (/16 e.ScannedResult#1/14 )/17 (/7 (/11 # Tile/13 e.NestedTile#1/9 )/12 e.Result#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Tile<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_right( context[22], context[23], context[2], context[3] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_right( context[26], context[27], context[2], context[3] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    // closed e.Idents#1 as range 26
    // closed e.ScannedPattern#1 as range 22
    // closed e.Pattern#1 as range 18
    // closed e.ScannedResult#1 as range 14
    // closed e.NestedTile#1 as range 9
    // closed e.Result#1 as range 5
    if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/21 (/16 {REMOVED TILE}  )/17 (/7 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/30 AsIs: (/28 AsIs: e.Idents#1/26 AsIs: )/29 AsIs: (/24 } Tile{ AsIs: e.ScannedPattern#1/22 } Tile{ AsIs: e.Pattern#1/18 } Tile{ AsIs: )/25 AsIs: (/20 } Tile{ AsIs: e.ScannedResult#1/14 } Tile{ AsIs: (/11 AsIs: # Tile/13 AsIs: e.NestedTile#1/9 AsIs: )/12 AsIs: e.Result#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[20], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[28], context[29] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[25], context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[30], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.ScannedResult#1 as range 9
    // closed e.Result#1 as range 5
    if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Idents#1 as range 21
    // closed e.ScannedPattern#1 as range 17
    // closed e.Pattern#1 as range 13
    // closed e.ScannedResult#1 as range 9
    if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoFindTile/4 s.Weight#1/26 (/23 # AsIsE/25 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_AsIsE<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.ScannedPattern#1 as range 17
    // closed e.Pattern#1 as range 13
    // closed e.ScannedResult#1 as range 9
    // closed e.Result#1 as range 5
    if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoFindTile/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/16 (/11 {REMOVED TILE}  )/12 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/26 AsIs: (/23 AsIs: # AsIsE/25 AsIs: )/24 AsIs: (/19 } Tile{ AsIs: e.ScannedPattern#1/17 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedResult#1/9 } Tile{ AsIs: e.Result#1/5 } Tile{ HalfReuse: )/1 ]] }
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
    res = refalrts::splice_evar( res, context[26], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoFindTile/4 s.Weight#1/25 (/23 e.Idents#1/21 )/24 (/19 e.ScannedPattern#1/17 )/20 (/15 t.PatternItem#1/26 e.Pattern#1/13 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 t.ResultItem#1/28 e.Result#1/5 )/8 >/1
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
  // closed e.Idents#1 as range 21
  // closed e.ScannedPattern#1 as range 17
  // closed e.ScannedResult#1 as range 9
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
}

static refalrts::FnResult OverlapItem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 # TkVariable/9 'e'/10 e.Index#1/17 s.Offset#1/19 )/8 (/13 # TkVariable/15 'e'/16 e.Index#1/11 )/14 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'e', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = refalrts::char_left( 'e', context[11], context[12] );
    if( ! context[16] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 11
    if( ! refalrts::repeated_evar_left( context[17], context[18], context[11], context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # TkVariable/9 'e'/10 e.Index#1/17 s.Offset#1/19 )/8 (/13 # TkVariable/15 'e'/16 e.Index#1/11 )/14 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 s.AnyType#1/13 e.Info#1/15 s.Offset#1/17 )/8 (/11 s.AnyType#1/14 e.Info#1/9 )/12 >/1
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
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[14], context[13], context[9], context[10] ) )
      continue;
    // closed e.Info#1 as range 9
    if( ! refalrts::repeated_evar_left( context[15], context[16], context[9], context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 s.AnyType#1/13 e.Info#1/15 s.Offset#1/17 )/8 (/11 s.AnyType#1/14 e.Info#1/9 )/12 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 # TkVariable/9 s.Mode#1/10 e.Index#1/5 s.Offset#1/13 )/8 t.AnyItem#1/11 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 # TkVariable/9 s.Mode#1/10 e.Index#1/5 s.Offset#1/13 )/8 t.AnyItem#1/11 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 s.AnyType#1/15 e.Info#1/5 s.Offset#1/16 )/8 (/11 # TkVariable/13 's'/14 e.Index#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 's', context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 9
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[5], context[6] ) )
      continue;
    // closed e.Info#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 s.AnyType#1/15 e.Info#1/5 s.Offset#1/16 )/8 (/11 # TkVariable/13 's'/14 e.Index#1/9 )/12 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 s.AnyType#1/14 e.Info#1/5 s.Offset#1/16 )/8 (/11 # TkVariable/13 s.Mode#1/15 e.Index#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    // closed e.Index#1 as range 9
    if( ! refalrts::svar_right( context[16], context[5], context[6] ) )
      continue;
    // closed e.Info#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 s.AnyType#1/14 e.Info#1/5 s.Offset#1/16 )/8 (/11 # TkVariable/13 s.Mode#1/15 e.Index#1/9 )/12 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 s.Type1#1/14 e.Info1#1/5 s.Offset#1/15 )/8 (/11 # LEFT_EDGE/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[5], context[6] ) )
      continue;
    // closed e.Info1#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 s.Type1#1/14 e.Info1#1/5 s.Offset#1/15 )/8 (/11 # LEFT_EDGE/13 )/12 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 s.Type1#1/14 e.Info1#1/5 s.Offset#1/15 )/8 (/11 # RIGHT_EDGE/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[5], context[6] ) )
      continue;
    // closed e.Info1#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & OverlapItem/4 (/7 s.Type1#1/14 e.Info1#1/5 s.Offset#1/15 )/8 (/11 # RIGHT_EDGE/13 )/12 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 s.Type#1/13 e.Info1#1/5 s.Offset#1/15 )/8 (/11 s.Type#1/14 e.Info2#1/9 )/12 >/1
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
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[14], context[13], context[9], context[10] ) )
      continue;
    // closed e.Info2#1 as range 9
    if( ! refalrts::svar_right( context[15], context[5], context[6] ) )
      continue;
    // closed e.Info1#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 s.Type#1/13 e.Info1#1/5 s.Offset#1/15 )/8 (/11 s.Type#1/14 e.Info2#1/9 )/12 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 s.Type1#1/13 e.Info1#1/5 s.Offset#1/15 )/8 (/11 s.Type2#1/14 e.Info2#1/9 )/12 >/1
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
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Info2#1 as range 9
    if( ! refalrts::svar_right( context[15], context[5], context[6] ) )
      continue;
    // closed e.Info1#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 s.Type1#1/13 e.Info1#1/5 s.Offset#1/15 )/8 (/11 s.Type2#1/14 e.Info2#1/9 )/12 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 # LEFT_EDGE/9 )/8 (/12 # LEFT_EDGE/14 )/13 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # LEFT_EDGE/9 )/8 (/12 # LEFT_EDGE/14 )/13 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 # RIGHT_EDGE/9 )/8 (/12 # RIGHT_EDGE/14 )/13 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # RIGHT_EDGE/9 )/8 (/12 # RIGHT_EDGE/14 )/13 >/1 {REMOVED TILE} 
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OverlapItem/4 (/7 # LEFT_EDGE/9 )/8 t.Other#1/10 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & OverlapItem/4 (/7 # RIGHT_EDGE/9 )/8 t.Other#1/10 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
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
}

static refalrts::FnResult FindTile_EEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FindTile_EEnd/4 s.Weight#1/18 (/15 # AsIsE/17 )/16 (/11 e.Pattern#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_AsIsE<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Pattern#1 as range 9
    // closed e.Result#1 as range 5
    if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FindTile_EEnd/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Weight#1/18 AsIs: (/15 AsIs: # AsIsE/17 AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FindTile_EEnd/4 s.Weight#1/18 (/15 e.Idents#1/13 # AsIsE/17 )/16 (/11 e.Pattern#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_right(  & ident_AsIsE<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Idents#1 as range 13
    // closed e.Pattern#1 as range 9
    // closed e.Result#1 as range 5
    if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FindTile_EEnd/4 } Tile{ HalfReuse: </17 } & Sub/19 Tile{ AsIs: s.Weight#1/18 HalfReuse: 3/15 } >/20 (/21 Tile{ AsIs: e.Idents#1/13 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[19], Sub, "Sub" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_number( context[15], 3UL );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[16] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[15] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FindTile_EEnd/4 s.Weight#1/17 (/15 e.Idents#1/13 )/16 (/11 e.Pattern#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
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
  // closed e.Idents#1 as range 13
  // closed e.Pattern#1 as range 9
  // closed e.Result#1 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

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
}


//End of file
