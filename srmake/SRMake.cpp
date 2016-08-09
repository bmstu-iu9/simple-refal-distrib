// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult System(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Make(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Make_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Make_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Make_S2L2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeProject(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_MakeProject_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_MakeProject_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #NotFound
template <typename SREFAL_PARAM_INT>
struct ident_NotFound {
  static const char *name() {
    return "NotFound";
  }
};

// identifier #Output
template <typename SREFAL_PARAM_INT>
struct ident_Output {
  static const char *name() {
    return "Output";
  }
};

// identifier #Runtime
template <typename SREFAL_PARAM_INT>
struct ident_Runtime {
  static const char *name() {
    return "Runtime";
  }
};

// identifier #Search
template <typename SREFAL_PARAM_INT>
struct ident_Search {
  static const char *name() {
    return "Search";
  }
};

// identifier #Source
template <typename SREFAL_PARAM_INT>
struct ident_Source {
  static const char *name() {
    return "Source";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Main, "Main" },
    { ArgList, "ArgList" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Go/4 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 1, 5},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 7, 0},
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
  // </0 & Go/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
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
#endif
}

static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseCommandLine, "ParseCommandLine" },
    { MakeProject, "MakeProject" },
    { WriteLine, "WriteLine" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"  srmake [-s path\\to\\srefc.exe] -c c++compiler {-d search-dir} MainFileName[.sref", 81},
    {"sage:", 5}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) e.$
    // </0 & Main/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +19, 0, 0},
    // ( e.idx )
    // </0 & Main/4 (/7 e.Program#1/5 )/8 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icEmpty, 0, 0, 16},
    // closed e.Program#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} e.Program#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'U'/7 }"sage:"/9 >/11 </12 & WriteLine/13"  srmake [-s path\\to\\srefc.exe] -c c++compiler {-d search-dir} MainFileName[.sref"/14 Tile{ HalfReuse: ']'/8 AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icAllocFunc, 0, 2, 13},
    {refalrts::icAllocString, 0, 0, 14},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitChar, 0, 'U', 7},
    {refalrts::icReinitChar, 0, ']', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 9, 15, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) e.idx
    // </0 & Main/4 (/7 e.Program#1/5 )/8 e.Arguments#1/2 >/1
    // closed e.Program#1 as range 5
    // closed e.Arguments#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} e.Program#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeProject/4 HalfReuse: </7 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/9 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
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
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Main/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx )
    // </0 & Main/4 (/7 e.Program#1/5 )/8 >/1
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Program#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Program#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'U'/7 }"sage:"/9 >/11 </12 & WriteLine/13"  srmake [-s path\\to\\srefc.exe] -c c++compiler {-d search-dir} MainFileName[.sref"/14 Tile{ HalfReuse: ']'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "sage:", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "  srmake [-s path\\to\\srefc.exe] -c c++compiler {-d search-dir} MainFileName[.sref", 81 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], WriteLine, "WriteLine" );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], ']' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & Main/4 (/7 e.Program#1/5 )/8 e.Arguments#1/2 >/1
  // closed e.Program#1 as range 5
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.Program#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeProject/4 HalfReuse: </7 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], MakeProject, "MakeProject" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], ParseCommandLine, "ParseCommandLine" );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_MakeProject_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & MakeProject$1\1/4 (/7 s.FolderTag#2/9 e.Folder#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.Folder#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} & MakeProject$1\1/4 (/7 s.FolderTag#2/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Folder#2/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
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
  // </0 & MakeProject$1\1/4 (/7 s.FolderTag#2/9 e.Folder#2/5 )/8 >/1
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
  // closed e.Folder#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & MakeProject$1\1/4 (/7 s.FolderTag#2/9 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Folder#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_MakeProject_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WriteLine, "WriteLine" },
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {": ", 2},
    {"nd line argument ", 17},
    {"omm", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & MakeProject$2\1/4 (/7 s.Pos#2/9 e.Message#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.Message#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 }"omm"/10 Tile{ HalfReuse: 'a'/8 }"nd line argument "/12 </14 & StrFromInt/15 Tile{ AsIs: s.Pos#2/9 } >/16": "/17 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 2, 10},
    {refalrts::icAllocString, 0, 1, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 1, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icAllocString, 0, 0, 17},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'C', 7},
    {refalrts::icReinitChar, 0, 'a', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 16, 18, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
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
  // </0 & MakeProject$2\1/4 (/7 s.Pos#2/9 e.Message#2/5 )/8 >/1
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
  // closed e.Message#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 }"omm"/10 Tile{ HalfReuse: 'a'/8 }"nd line argument "/12 </14 & StrFromInt/15 Tile{ AsIs: s.Pos#2/9 } >/16": "/17 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "omm", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "nd line argument ", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], ": ", 2 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::reinit_char( context[7], 'C' );
  refalrts::reinit_char( context[8], 'a' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult MakeProject(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_MakeProject_S2L1, "MakeProject$2\\1" },
    { Map, "Map" },
    { Exit, "Exit" },
    { gen_MakeProject_S1L1, "MakeProject$1\\1" },
    { CreateFileList, "CreateFileList" },
    { Make, "Make" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Fails<int>::name,
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: s.$ e.$
    //GLOBAL GEN: s.$ e.$
    // </0 & MakeProject/4 s.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +42, 0, 0},
    // # Success ( e.idx ) ( e.idx ) ( e.idx ) e.idx
    // </0 & MakeProject/4 # Success/5 (/8 e.CppCompiler#1/6 )/9 (/12 e.SrefCompiler#1/10 )/13 (/16 e.SourceFile#1/14 )/17 e.Folders#1/2 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    {refalrts::icSave, 0, 28, 2},
    {refalrts::icBracketLeftSave, 0, 6, 28},
    {refalrts::icBracketLeftSave, 0, 10, 28},
    {refalrts::icBracketLeftSave, 0, 14, 28},
    // closed e.CppCompiler#1 as range 6
    // closed e.SrefCompiler#1 as range 10
    // closed e.SourceFile#1 as range 14
    // closed e.Folders#1 as range 28(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: & Make/9 AsIs: (/12 AsIs: e.SrefCompiler#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.CppCompiler#1/6 } )/19 (/20 e.Folders#1/28(2)/21 )/23 Tile{ AsIs: </0 Reuse: & CreateFileList/4 HalfReuse: (/5 HalfReuse: </8 } & Map/24 Tile{ HalfReuse: & MakeProject$1\1/17 AsIs: e.Folders#1/28(2) AsIs: >/1 } )/25 Tile{ AsIs: e.SourceFile#1/14 } >/26 >/27 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icCopyEVar, 21, 28, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icAllocFunc, 0, 1, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icReinitFunc, 0, 5, 9},
    {refalrts::icUpdateFunc, 0, 4, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitFunc, 0, 3, 17},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 5, 25, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 17, 1, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 9, 16, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // # Fails e.idx
    // </0 & MakeProject/4 # Fails/5 e.Errors#1/2 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    // closed e.Errors#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & MakeProject$2\1/5 AsIs: e.Errors#1/2 AsIs: >/1 } </6 & Exit/7 1/8 >/9 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icAllocFunc, 0, 2, 7},
    {refalrts::icAllocInt, 0, 1, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 9, 0},
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
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & MakeProject/4 s.idx#0/5 e.idxV#0/2 >/1
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
    // # Success ( e.idx ) ( e.idx ) ( e.idx ) e.idx
    // </0 & MakeProject/4 # Success/5 (/8 e.CppCompiler#1/6 )/9 (/12 e.SrefCompiler#1/10 )/13 (/16 e.SourceFile#1/14 )/17 e.Folders#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Success<int>::name, context[5] ) )
      continue;
    context[28] = context[2];
    context[29] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[28], context[29] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[28], context[29] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[28], context[29] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.CppCompiler#1 as range 6
    // closed e.SrefCompiler#1 as range 10
    // closed e.SourceFile#1 as range 14
    // closed e.Folders#1 as range 28(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: & Make/9 AsIs: (/12 AsIs: e.SrefCompiler#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.CppCompiler#1/6 } )/19 (/20 e.Folders#1/28(2)/21 )/23 Tile{ AsIs: </0 Reuse: & CreateFileList/4 HalfReuse: (/5 HalfReuse: </8 } & Map/24 Tile{ HalfReuse: & MakeProject$1\1/17 AsIs: e.Folders#1/28(2) AsIs: >/1 } )/25 Tile{ AsIs: e.SourceFile#1/14 } >/26 >/27 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[28], context[29]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[9], Make, "Make" );
    refalrts::update_name( context[4], CreateFileList, "CreateFileList" );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[17], gen_MakeProject_S1L1, "MakeProject$1\\1" );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[5], context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[20], context[23] );
    refalrts::link_brackets( context[16], context[19] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // # Fails e.idx
  // </0 & MakeProject/4 # Fails/5 e.Errors#1/2 >/1
  if( ! refalrts::ident_term(  & ident_Fails<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & MakeProject$2\1/5 AsIs: e.Errors#1/2 AsIs: >/1 } </6 & Exit/7 1/8 >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Exit, "Exit" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[8], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Map, "Map" );
  refalrts::reinit_name( context[5], gen_MakeProject_S2L1, "MakeProject$2\\1" );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Make_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WriteLine, "WriteLine" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Source<int>::name,
    & ident_Output<int>::name,
    & ident_NotFound<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" not foun", 9},
    {"MMAND LINE ERROR: Unit ", 23}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ )
    //GLOBAL GEN: ( s.$ e.$ )
    // </0 & Make$1\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // ( # NotFound e.idx )
    // </0 & Make$1\1/4 (/7 # NotFound/9 e.UnitName#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 2, 9},
    // closed e.UnitName#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 HalfReuse: 'O'/9 }"MMAND LINE ERROR: Unit "/10 Tile{ AsIs: e.UnitName#2/5 }" not foun"/12 Tile{ HalfReuse: 'd'/8 AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 10},
    {refalrts::icAllocString, 0, 0, 12},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'C', 7},
    {refalrts::icReinitChar, 0, 'O', 9},
    {refalrts::icReinitChar, 0, 'd', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +5, 0, 0},
    // ( # Output e.idx )
    // </0 & Make$1\1/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 9},
    // closed e.Output#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & Make$1\1/4 (/7 # Output/9 e.Output#2/5 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( # Source ( e.idx ) e.idx )
    // </0 & Make$1\1/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 9},
    {refalrts::icBracketLeftSave, 0, 10, 5},
    // closed e.Source#2 as range 10
    // closed e.Output#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & Make$1\1/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1 {REMOVED TILE}
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
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & Make$1\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    refalrts::start_sentence();
    // ( # NotFound e.idx )
    // </0 & Make$1\1/4 (/7 # NotFound/9 e.UnitName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_NotFound<int>::name, context[9] ) )
      continue;
    // closed e.UnitName#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 HalfReuse: 'O'/9 }"MMAND LINE ERROR: Unit "/10 Tile{ AsIs: e.UnitName#2/5 }" not foun"/12 Tile{ HalfReuse: 'd'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], "MMAND LINE ERROR: Unit ", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], " not foun", 9 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], WriteLine, "WriteLine" );
    refalrts::reinit_char( context[7], 'C' );
    refalrts::reinit_char( context[9], 'O' );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Output e.idx )
    // </0 & Make$1\1/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Output<int>::name, context[9] ) )
      continue;
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Make$1\1/4 (/7 # Output/9 e.Output#2/5 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( # Source ( e.idx ) e.idx )
  // </0 & Make$1\1/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Source<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Source#2 as range 10
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Make$1\1/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Make_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Runtime<int>::name,
    & ident_Search<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( s.$ e.$ )
    //GLOBAL GEN: ( s.$ e.$ )
    // </0 & Make$2\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::icOnFailGoTo, +12, 0, 0},
    // ( # Search e.idx )
    // </0 & Make$2\1/4 (/7 # Search/9 e.Folder#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 9},
    // closed e.Folder#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } Tile{ HalfReuse: '-'/0 HalfReuse: 'd'/4 HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    {refalrts::icReinitChar, 0, ' ', 1},
    {refalrts::icReinitChar, 0, '-', 0},
    {refalrts::icReinitChar, 0, 'd', 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, '\"', 9},
    {refalrts::icReinitChar, 0, '\"', 8},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( # Runtime e.idx )
    // </0 & Make$2\1/4 (/7 # Runtime/9 e.Folder#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 9},
    // closed e.Folder#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } Tile{ HalfReuse: '-'/0 HalfReuse: 'D'/4 HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    {refalrts::icReinitChar, 0, ' ', 1},
    {refalrts::icReinitChar, 0, '-', 0},
    {refalrts::icReinitChar, 0, 'D', 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, '\"', 9},
    {refalrts::icReinitChar, 0, '\"', 8},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
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
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & Make$2\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    refalrts::start_sentence();
    // ( # Search e.idx )
    // </0 & Make$2\1/4 (/7 # Search/9 e.Folder#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Search<int>::name, context[9] ) )
      continue;
    // closed e.Folder#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } Tile{ HalfReuse: '-'/0 HalfReuse: 'd'/4 HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    refalrts::reinit_char( context[1], ' ' );
    refalrts::reinit_char( context[0], '-' );
    refalrts::reinit_char( context[4], 'd' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '\"' );
    refalrts::reinit_char( context[8], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( # Runtime e.idx )
  // </0 & Make$2\1/4 (/7 # Runtime/9 e.Folder#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Runtime<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folder#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } Tile{ HalfReuse: '-'/0 HalfReuse: 'D'/4 HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
  refalrts::reinit_char( context[1], ' ' );
  refalrts::reinit_char( context[0], '-' );
  refalrts::reinit_char( context[4], 'D' );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::reinit_char( context[9], '\"' );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Make_S2L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Source<int>::name,
    & ident_Output<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( s.$ e.$ )
    //GLOBAL GEN: ( s.$ e.$ )
    // </0 & Make$2\2/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // ( # Output e.idx )
    // </0 & Make$2\2/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 9},
    // closed e.Output#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & Make$2\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Output#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, '\"', 9},
    {refalrts::icReinitChar, 0, '\"', 8},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( # Source ( e.idx ) e.idx )
    // </0 & Make$2\2/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 9},
    {refalrts::icBracketLeftSave, 0, 10, 5},
    // closed e.Source#2 as range 10
    // closed e.Output#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & Make$2\2/4 (/7 {REMOVED TILE} e.Output#2/5 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '\"'/12 AsIs: e.Source#2/10 HalfReuse: '\"'/13 } Tile{ ]] }
    {refalrts::icReinitChar, 0, ' ', 9},
    {refalrts::icReinitChar, 0, '\"', 12},
    {refalrts::icReinitChar, 0, '\"', 13},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 13, 0},
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
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & Make$2\2/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    refalrts::start_sentence();
    // ( # Output e.idx )
    // </0 & Make$2\2/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Output<int>::name, context[9] ) )
      continue;
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Make$2\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Output#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '\"' );
    refalrts::reinit_char( context[8], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( # Source ( e.idx ) e.idx )
  // </0 & Make$2\2/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Source<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Source#2 as range 10
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Make$2\2/4 (/7 {REMOVED TILE} e.Output#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '\"'/12 AsIs: e.Source#2/10 HalfReuse: '\"'/13 } Tile{ ]] }
  refalrts::reinit_char( context[9], ' ' );
  refalrts::reinit_char( context[12], '\"' );
  refalrts::reinit_char( context[13], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Make(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_Make_S2L2, "Make$2\\2" },
    { System, "System" },
    { Map, "Map" },
    { gen_Make_S2L1, "Make$2\\1" },
    { Exit, "Exit" },
    { gen_Make_S1L1, "Make$1\\1" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"-c", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) e.$
    //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) e.$
    // </0 & Make/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTB#0 as range 13
    // closed e.idxTTT#0 as range 2
    {refalrts::icOnFailGoTo, +24, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
    // </0 & Make/4 (/7 e.SrefC#1/5 )/8 (/11 e.CompilerCommand#1/9 )/12 (/15 e.Directories#1/13 )/16 e.Units-B#1/17 (/21 # NotFound/23 e.UnitName#1/19 )/22 e.Units-E#1/2 >/1
    // closed e.SrefC#1 as range 5
    // closed e.CompilerCommand#1 as range 9
    // closed e.Directories#1 as range 13
    {refalrts::icSave, 0, 25, 2},
    {refalrts::icEPrepare, 0, 17, 25},
    {refalrts::icEStart, 0, 17, 25},
    {refalrts::icSave, 0, 27, 25},
    {refalrts::icBracketLeftSave, 0, 19, 27},
    {refalrts::icIdentLeftSave, 23, 0, 19},
    // closed e.UnitName#1 as range 19
    // closed e.Units-E#1 as range 27(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} e.SrefC#1/5 {REMOVED TILE} e.CompilerCommand#1/9 {REMOVED TILE} e.Directories#1/13 )/16 e.Units-B#1/17 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & Make$1\1/7 } Tile{ AsIs: (/21 AsIs: # NotFound/23 AsIs: e.UnitName#1/19 AsIs: )/22 AsIs: e.Units-E#1/27(2) AsIs: >/1 } Tile{ HalfReuse: </12 HalfReuse: & Exit/15 } Tile{ HalfReuse: 1/8 HalfReuse: >/11 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitFunc, 0, 5, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icReinitFunc, 0, 4, 15},
    {refalrts::icReinitInt, 0, 1, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceTile, 21, 1, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
    // </0 & Make/4 (/7 e.SrefC#1/5 )/8 (/11 e.CompilerCommand#1/9 )/12 (/15 e.Directories#1/13 )/16 e.Units#1/2 >/1
    // closed e.SrefC#1 as range 5
    // closed e.CompilerCommand#1 as range 9
    // closed e.Directories#1 as range 13
    // closed e.Units#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.SrefC#1/5 } Tile{ HalfReuse: ' '/7 }"-c"/17 Tile{ HalfReuse: ' '/8 HalfReuse: '\"'/11 AsIs: e.CompilerCommand#1/9 HalfReuse: '\"'/12 HalfReuse: </15 } & Map/19 & Make$2\1/20 Tile{ AsIs: e.Directories#1/13 } >/21 </22 & Map/23 Tile{ HalfReuse: & Make$2\2/16 AsIs: e.Units#1/2 AsIs: >/1 } >/24 Tile{ ]] }
    {refalrts::icAllocString, 0, 0, 17},
    {refalrts::icAllocFunc, 0, 2, 19},
    {refalrts::icAllocFunc, 0, 3, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icAllocFunc, 0, 2, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, ' ', 8},
    {refalrts::icReinitChar, 0, '\"', 11},
    {refalrts::icReinitChar, 0, '\"', 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icReinitFunc, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 16, 1, 0},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 19, 20, 0},
    {refalrts::icSpliceTile, 8, 15, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
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
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) e.$
  // </0 & Make/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
    // </0 & Make/4 (/7 e.SrefC#1/5 )/8 (/11 e.CompilerCommand#1/9 )/12 (/15 e.Directories#1/13 )/16 e.Units-B#1/17 (/21 # NotFound/23 e.UnitName#1/19 )/22 e.Units-E#1/2 >/1
    // closed e.SrefC#1 as range 5
    // closed e.CompilerCommand#1 as range 9
    // closed e.Directories#1 as range 13
    context[25] = context[2];
    context[26] = context[3];
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[27], context[28] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left(  & ident_NotFound<int>::name, context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.UnitName#1 as range 19
      // closed e.Units-E#1 as range 27(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} e.SrefC#1/5 {REMOVED TILE} e.CompilerCommand#1/9 {REMOVED TILE} e.Directories#1/13 )/16 e.Units-B#1/17 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & Make$1\1/7 } Tile{ AsIs: (/21 AsIs: # NotFound/23 AsIs: e.UnitName#1/19 AsIs: )/22 AsIs: e.Units-E#1/27(2) AsIs: >/1 } Tile{ HalfReuse: </12 HalfReuse: & Exit/15 } Tile{ HalfReuse: 1/8 HalfReuse: >/11 } Tile{ ]] }
      refalrts::update_name( context[4], Map, "Map" );
      refalrts::reinit_name( context[7], gen_Make_S1L1, "Make$1\\1" );
      refalrts::reinit_open_call( context[12] );
      refalrts::reinit_name( context[15], Exit, "Exit" );
      refalrts::reinit_number( context[8], 1UL );
      refalrts::reinit_close_call( context[11] );
      refalrts::push_stack( context[11] );
      refalrts::push_stack( context[12] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      res = refalrts::splice_evar( res, context[21], context[1] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[7], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[17], context[18], context[25], context[26] ) );
  } while ( 0 );

  // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
  // </0 & Make/4 (/7 e.SrefC#1/5 )/8 (/11 e.CompilerCommand#1/9 )/12 (/15 e.Directories#1/13 )/16 e.Units#1/2 >/1
  // closed e.SrefC#1 as range 5
  // closed e.CompilerCommand#1 as range 9
  // closed e.Directories#1 as range 13
  // closed e.Units#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.SrefC#1/5 } Tile{ HalfReuse: ' '/7 }"-c"/17 Tile{ HalfReuse: ' '/8 HalfReuse: '\"'/11 AsIs: e.CompilerCommand#1/9 HalfReuse: '\"'/12 HalfReuse: </15 } & Map/19 & Make$2\1/20 Tile{ AsIs: e.Directories#1/13 } >/21 </22 & Map/23 Tile{ HalfReuse: & Make$2\2/16 AsIs: e.Units#1/2 AsIs: >/1 } >/24 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[17], context[18], "-c", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], gen_Make_S2L1, "Make$2\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], System, "System" );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_char( context[11], '\"' );
  refalrts::reinit_char( context[12], '\"' );
  refalrts::reinit_open_call( context[15] );
  refalrts::reinit_name( context[16], gen_Make_S2L2, "Make$2\\2" );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
