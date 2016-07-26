// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult System(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CompileFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CreateErrorFileMark(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetBaseNameLowerCase(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Link(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LookupSourceFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main_SwCompiledFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main_SwFoundFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main_SwRenamedTargets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main_SwValidCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RenameLocations(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RenameLocations_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RenameTargets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReportErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ScanCollisions(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #Collision
template <typename SREFAL_PARAM_INT>
struct ident_Collision {
  static const char *name() {
    return "Collision";
  }
};

// identifier #CommandLine
template <typename SREFAL_PARAM_INT>
struct ident_CommandLine {
  static const char *name() {
    return "CommandLine";
  }
};

// identifier #ErrorFile
template <typename SREFAL_PARAM_INT>
struct ident_ErrorFile {
  static const char *name() {
    return "ErrorFile";
  }
};

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #NoCppCompiler
template <typename SREFAL_PARAM_INT>
struct ident_NoCppCompiler {
  static const char *name() {
    return "NoCppCompiler";
  }
};

// identifier #NoErrorFile
template <typename SREFAL_PARAM_INT>
struct ident_NoErrorFile {
  static const char *name() {
    return "NoErrorFile";
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
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
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
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseCommandLine, "ParseCommandLine" },
    { Main_SwValidCommandLine, "Main_SwValidCommandLine" },
    { LoadFile, "LoadFile" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CommandLine<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )E 
    //GLOBAL GEN:(E )E 
    // </0 & Main/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +28, 0, 0},
    //(E )('@'E )
    // </0 & Main/4 (/7 e.ProgName#1/5 )/8 (/11 '@'/13 e.Config#1/9 )/12 >/1
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icBracketLeftSave, 0, 9, 19},
    {refalrts::icCharLeftSave, 13, static_cast<unsigned char>('@'), 9},
    {refalrts::icEmpty, 0, 0, 19},
    // closed e.ProgName#1 as range 5
    // closed e.Config#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.ProgName#1/5 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwValidCommandLine/4 AsIs: (/7 } e.Config#1/9/14 )/16 </17 Tile{ HalfReuse: & ParseCommandLine/8 HalfReuse: </11 HalfReuse: & LoadFile/13 AsIs: e.Config#1/9 HalfReuse: >/12 AsIs: >/1 } >/18 Tile{ ]] }
    {refalrts::icCopyEVar, 14, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icReinitFunc, 0, 2, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 7, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )E 
    // </0 & Main/4 (/7 e.ProgName#1/5 )/8 e.Arguments#1/2 >/1
    // closed e.ProgName#1 as range 5
    // closed e.Arguments#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.ProgName#1/5 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwValidCommandLine/4 HalfReuse: # CommandLine/7 } </9 Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/10 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
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
  //FAST GEN:(E )E 
  //GLOBAL GEN:(E )E 
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
    //(E )('@'E )
    // </0 & Main/4 (/7 e.ProgName#1/5 )/8 (/11 '@'/13 e.Config#1/9 )/12 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[19], context[20] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::char_left( '@', context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.ProgName#1 as range 5
    // closed e.Config#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.ProgName#1/5 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwValidCommandLine/4 AsIs: (/7 } e.Config#1/9/14 )/16 </17 Tile{ HalfReuse: & ParseCommandLine/8 HalfReuse: </11 HalfReuse: & LoadFile/13 AsIs: e.Config#1/9 HalfReuse: >/12 AsIs: >/1 } >/18 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[9], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Main_SwValidCommandLine, "Main_SwValidCommandLine" );
    refalrts::reinit_name( context[8], ParseCommandLine, "ParseCommandLine" );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], LoadFile, "LoadFile" );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )E 
  // </0 & Main/4 (/7 e.ProgName#1/5 )/8 e.Arguments#1/2 >/1
  // closed e.ProgName#1 as range 5
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.ProgName#1/5 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwValidCommandLine/4 HalfReuse: # CommandLine/7 } </9 Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main_SwValidCommandLine, "Main_SwValidCommandLine" );
  refalrts::reinit_ident( context[7], & ident_CommandLine<int>::name );
  refalrts::reinit_name( context[8], ParseCommandLine, "ParseCommandLine" );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Main_SwValidCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ReportErrors, "ReportErrors" },
    { Main_SwFoundFiles, "Main_SwFoundFiles" },
    { LookupSourceFiles, "LookupSourceFiles" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoErrorFile<int>::name,
    & ident_Fails<int>::name,
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T S E 
    //GLOBAL GEN:T S E 
    // </0 & Main_SwValidCommandLine/4 t.idx#0/5 s.idxV#0/7 e.idxVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    // closed e.idxVV#0 as range 2
    {refalrts::icOnFailGoTo, +24, 0, 0},
    //T #SuccessT S S T (E )E 
    // </0 & Main_SwValidCommandLine/4 t.CommandLineSource#1/5 # Success/7 t.CppCompiler#1/8 s.GenMode#1/10 s.Opt#1/11 t.ErrorFile#1/12 (/16 e.Folders#1/14 )/17 e.Files#1/2 >/1
    {refalrts::icIdentTerm, 0, 2, 7},
    {refalrts::icSave, 0, 20, 2},
    {refalrts::ictVarLeftSave, 0, 8, 20},
    {refalrts::icsVarLeft, 0, 10, 20},
    {refalrts::icsVarLeft, 0, 11, 20},
    {refalrts::ictVarLeftSave, 0, 12, 20},
    {refalrts::icBracketLeftSave, 0, 14, 20},
    // closed e.Folders#1 as range 14
    // closed e.Files#1 as range 20(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwFoundFiles/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.CppCompiler#1/8 AsIs: s.GenMode#1/10 AsIs: s.Opt#1/11 AsIs: t.ErrorFile#1/12 } Tile{ HalfReuse: </7 } & LookupSourceFiles/18 Tile{ AsIs: (/16 AsIs: e.Folders#1/14 AsIs: )/17 AsIs: e.Files#1/20(2) AsIs: >/1 } >/19 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 2, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceTile, 16, 1, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 8, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T #FailsE 
    // </0 & Main_SwValidCommandLine/4 t.CommandLineSource#1/5 # Fails/7 e.Errors#1/2 >/1
    {refalrts::icIdentTerm, 0, 1, 7},
    // closed e.Errors#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 Reuse: # NoErrorFile/7 AsIs: e.Errors#1/2 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icUpdateIdent, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
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
  //FAST GEN:T S E 
  //GLOBAL GEN:T S E 
  // </0 & Main_SwValidCommandLine/4 t.idx#0/5 s.idxV#0/7 e.idxVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVV#0 as range 2
  do {
    refalrts::start_sentence();
    //T #SuccessT S S T (E )E 
    // </0 & Main_SwValidCommandLine/4 t.CommandLineSource#1/5 # Success/7 t.CppCompiler#1/8 s.GenMode#1/10 s.Opt#1/11 t.ErrorFile#1/12 (/16 e.Folders#1/14 )/17 e.Files#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Success<int>::name, context[7] ) )
      continue;
    context[20] = context[2];
    context[21] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[20], context[21] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[20], context[21] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[20], context[21] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[20], context[21] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[20], context[21] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Folders#1 as range 14
    // closed e.Files#1 as range 20(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwFoundFiles/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.CppCompiler#1/8 AsIs: s.GenMode#1/10 AsIs: s.Opt#1/11 AsIs: t.ErrorFile#1/12 } Tile{ HalfReuse: </7 } & LookupSourceFiles/18 Tile{ AsIs: (/16 AsIs: e.Folders#1/14 AsIs: )/17 AsIs: e.Files#1/20(2) AsIs: >/1 } >/19 Tile{ ]] }
    if( ! refalrts::alloc_name( context[18], LookupSourceFiles, "LookupSourceFiles" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Main_SwFoundFiles, "Main_SwFoundFiles" );
    refalrts::reinit_open_call( context[7] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //T #FailsE 
  // </0 & Main_SwValidCommandLine/4 t.CommandLineSource#1/5 # Fails/7 e.Errors#1/2 >/1
  if( ! refalrts::ident_term(  & ident_Fails<int>::name, context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 Reuse: # NoErrorFile/7 AsIs: e.Errors#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ReportErrors, "ReportErrors" );
  refalrts::update_ident( context[7], & ident_NoErrorFile<int>::name );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ReportErrors_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    {": Error: ", 9},
    {"nd line argument ", 17},
    {"omm", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ReportErrors_0/4 (/7 s.Pos#2/9 e.Message#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.Message#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 }"omm"/10 Tile{ HalfReuse: 'a'/8 }"nd line argument "/12 </14 & StrFromInt/15 Tile{ AsIs: s.Pos#2/9 } >/16": Error: "/17 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
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
  // </0 & lambda_ReportErrors_0/4 (/7 s.Pos#2/9 e.Message#2/5 )/8 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 }"omm"/10 Tile{ HalfReuse: 'a'/8 }"nd line argument "/12 </14 & StrFromInt/15 Tile{ AsIs: s.Pos#2/9 } >/16": Error: "/17 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
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
  if( ! refalrts::alloc_chars( context[17], context[18], ": Error: ", 9 ) )
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

static refalrts::FnResult lambda_ReportErrors_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { WriteLine, "WriteLine" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" Error: ", 8}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ReportErrors_1/4 (/7 e.ConfigFile#1/5 )/8 (/11 s.Pos#2/13 e.Message#2/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.ConfigFile#1 as range 5
    {refalrts::icsVarLeft, 0, 13, 9},
    // closed e.Message#2 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.ConfigFile#1/5 } Tile{ HalfReuse: ':'/7 } Tile{ HalfReuse: </8 HalfReuse: & StrFromInt/11 AsIs: s.Pos#2/13 } >/14 Tile{ HalfReuse: ':'/12 }" Error: "/15 Tile{ AsIs: e.Message#2/9 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icAllocString, 0, 0, 15},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitChar, 0, ':', 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitFunc, 0, 0, 11},
    {refalrts::icReinitChar, 0, ':', 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 8, 13, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
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
  // </0 & lambda_ReportErrors_1/4 (/7 e.ConfigFile#1/5 )/8 (/11 s.Pos#2/13 e.Message#2/9 )/12 >/1
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
  // closed e.ConfigFile#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.ConfigFile#1/5 } Tile{ HalfReuse: ':'/7 } Tile{ HalfReuse: </8 HalfReuse: & StrFromInt/11 AsIs: s.Pos#2/13 } >/14 Tile{ HalfReuse: ':'/12 }" Error: "/15 Tile{ AsIs: e.Message#2/9 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], " Error: ", 8 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::reinit_char( context[7], ':' );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[11], StrFromInt, "StrFromInt" );
  refalrts::reinit_char( context[12], ':' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ReportErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ReportErrors_1, "lambda_ReportErrors_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Exit, "Exit" },
    { CreateErrorFileMark, "CreateErrorFileMark" },
    { Map, "Map" },
    { lambda_ReportErrors_0, "lambda_ReportErrors_0" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CommandLine<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T T E 
    //GLOBAL GEN:T T E 
    // </0 & ReportErrors/4 t.idx#0/5 t.idxV#0/7 e.idxVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    // closed e.idxVV#0 as range 2
    {refalrts::icOnFailGoTo, +23, 0, 0},
    //#CommandLineT E 
    // </0 & ReportErrors/4 # CommandLine/5 t.ErrorFile#1/7 e.Errors#1/2 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    // closed e.Errors#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_ReportErrors_0/5 } Tile{ AsIs: e.Errors#1/2 } >/9 </10 & CreateErrorFileMark/11 Tile{ AsIs: t.ErrorFile#1/7 } >/12 </13 & Exit/14 1/15 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icAllocFunc, 0, 3, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 2, 14},
    {refalrts::icAllocInt, 0, 1, 15},
    {refalrts::icUpdateFunc, 0, 4, 4},
    {refalrts::icReinitFunc, 0, 5, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 9, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )T E 
    // </0 & ReportErrors/4 (/5 e.ConfigFile#1/9 )/6 t.ErrorFile#1/7 e.Errors#1/2 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    // closed e.ConfigFile#1 as range 9
    // closed e.Errors#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </11 & Map/12 </13 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ReportErrors_1/4 AsIs: (/5 AsIs: e.ConfigFile#1/9 AsIs: )/6 } >/14 Tile{ AsIs: e.Errors#1/2 } >/15 </16 & CreateErrorFileMark/17 Tile{ AsIs: t.ErrorFile#1/7 } >/18 </19 & Exit/20 1/21 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 4, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 3, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocFunc, 0, 2, 20},
    {refalrts::icAllocInt, 0, 1, 21},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icLinkBrackets, 5, 6, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 18, 21, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 15, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 0, 6, 0},
    {refalrts::icSpliceTile, 11, 13, 0},
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
  //FAST GEN:T T E 
  //GLOBAL GEN:T T E 
  // </0 & ReportErrors/4 t.idx#0/5 t.idxV#0/7 e.idxVV#0/2 >/1
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
    refalrts::start_sentence();
    //#CommandLineT E 
    // </0 & ReportErrors/4 # CommandLine/5 t.ErrorFile#1/7 e.Errors#1/2 >/1
    if( ! refalrts::ident_term(  & ident_CommandLine<int>::name, context[5] ) )
      continue;
    // closed e.Errors#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_ReportErrors_0/5 } Tile{ AsIs: e.Errors#1/2 } >/9 </10 & CreateErrorFileMark/11 Tile{ AsIs: t.ErrorFile#1/7 } >/12 </13 & Exit/14 1/15 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], CreateErrorFileMark, "CreateErrorFileMark" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Exit, "Exit" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[15], 1UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Map, "Map" );
    refalrts::reinit_name( context[5], lambda_ReportErrors_0, "lambda_ReportErrors_0" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )T E 
  // </0 & ReportErrors/4 (/5 e.ConfigFile#1/9 )/6 t.ErrorFile#1/7 e.Errors#1/2 >/1
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ConfigFile#1 as range 9
  // closed e.Errors#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </11 & Map/12 </13 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ReportErrors_1/4 AsIs: (/5 AsIs: e.ConfigFile#1/9 AsIs: )/6 } >/14 Tile{ AsIs: e.Errors#1/2 } >/15 </16 & CreateErrorFileMark/17 Tile{ AsIs: t.ErrorFile#1/7 } >/18 </19 & Exit/20 1/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], CreateErrorFileMark, "CreateErrorFileMark" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], Exit, "Exit" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[21], 1UL ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_ReportErrors_1, "lambda_ReportErrors_1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CreateErrorFileMark(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SaveFile, "SaveFile" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ErrorFile<int>::name,
    & ident_NoErrorFile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T 
    //GLOBAL GEN:T 
    // </0 & CreateErrorFileMark/4 t.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +5, 0, 0},
    //#NoErrorFile
    // </0 & CreateErrorFileMark/4 # NoErrorFile/5 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CreateErrorFileMark/4 # NoErrorFile/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(#ErrorFileE )
    // </0 & CreateErrorFileMark/4 (/5 # ErrorFile/9 e.FileName#1/7 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 0, 7},
    // closed e.FileName#1 as range 7
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & SaveFile/5 HalfReuse: (/9 AsIs: e.FileName#1/7 AsIs: )/6 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 5},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 9, 6, 0},
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
  //FAST GEN:T 
  //GLOBAL GEN:T 
  // </0 & CreateErrorFileMark/4 t.idx#0/5 >/1
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
    //#NoErrorFile
    // </0 & CreateErrorFileMark/4 # NoErrorFile/5 >/1
    if( ! refalrts::ident_term(  & ident_NoErrorFile<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CreateErrorFileMark/4 # NoErrorFile/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(#ErrorFileE )
  // </0 & CreateErrorFileMark/4 (/5 # ErrorFile/9 e.FileName#1/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::ident_left(  & ident_ErrorFile<int>::name, context[7], context[8] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & SaveFile/5 HalfReuse: (/9 AsIs: e.FileName#1/7 AsIs: )/6 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[5], SaveFile, "SaveFile" );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[9], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Main_SwFoundFiles_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Output<int>::name,
    & ident_Source<int>::name,
    & ident_NotFound<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" is not foun", 12}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(S S E )
    //GLOBAL GEN:(S S E )
    // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    // closed e.idxBVV#0 as range 5
    {refalrts::icOnFailGoTo, +19, 0, 0},
    //(S #NotFoundE )
    // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # NotFound/10 e.FileName#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 2, 10},
    // closed e.FileName#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 } 'i'/11 Tile{ HalfReuse: 'l'/0 HalfReuse: 'e'/4 } ' '/12 Tile{ AsIs: e.FileName#2/5 }" is not foun"/13 Tile{ HalfReuse: 'd'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocChar, 0, 'i', 11},
    {refalrts::icAllocChar, 0, ' ', 12},
    {refalrts::icAllocString, 0, 0, 13},
    {refalrts::icReinitChar, 0, 'f', 10},
    {refalrts::icReinitChar, 0, 'l', 0},
    {refalrts::icReinitChar, 0, 'e', 4},
    {refalrts::icReinitChar, 0, 'd', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceTile, 7, 10, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    //(S #Source(E )E )
    // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 10},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icBracketLeftSave, 0, 11, 15},
    // closed e.Source#2 as range 11
    // closed e.Output#2 as range 15(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/15(5) )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(S #OutputE )
    // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 10},
    // closed e.Output#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE} 
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
  //FAST GEN:(S S E )
  //GLOBAL GEN:(S S E )
  // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  // closed e.idxBVV#0 as range 5
  do {
    refalrts::start_sentence();
    //(S #NotFoundE )
    // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # NotFound/10 e.FileName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_NotFound<int>::name, context[10] ) )
      continue;
    // closed e.FileName#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 } 'i'/11 Tile{ HalfReuse: 'l'/0 HalfReuse: 'e'/4 } ' '/12 Tile{ AsIs: e.FileName#2/5 }" is not foun"/13 Tile{ HalfReuse: 'd'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " is not foun", 12 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'f' );
    refalrts::reinit_char( context[0], 'l' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S #Source(E )E )
    // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Source<int>::name, context[10] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[15], context[16] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Source#2 as range 11
    // closed e.Output#2 as range 15(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/15(5) )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(S #OutputE )
  // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Output<int>::name, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Main_SwFoundFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Main_SwRenamedTargets, "Main_SwRenamedTargets" },
    { RenameTargets, "RenameTargets" },
    { ReportErrors, "ReportErrors" },
    { lambda_Main_SwFoundFiles_0, "lambda_Main_SwFoundFiles_0" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T T S S T E 
    //GLOBAL GEN:T T S S T E 
    // </0 & Main_SwFoundFiles/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 s.idxVVV#0/10 t.idxVVVV#0/11 e.idxVVVVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    // closed e.idxVVVVV#0 as range 2
    {refalrts::icOnFailGoTo, +25, 0, 0},
    //T T S S T E 
    // </0 & Main_SwFoundFiles/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files_B#1/13 (/17 s.Pos#1/19 # NotFound/20 e.FileName#1/15 )/18 e.Files_E#1/2 >/1
    {refalrts::icSave, 0, 25, 2},
    {refalrts::icEPrepare, 0, 13, 25},
    {refalrts::icEStart, 0, 13, 25},
    {refalrts::icSave, 0, 27, 25},
    {refalrts::icBracketLeftSave, 0, 15, 27},
    // closed e.Files_E#1 as range 27(2)
    {refalrts::icsVarLeft, 0, 19, 15},
    {refalrts::icIdentLeftSave, 20, 0, 15},
    // closed e.FileName#1 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE}  e.Files_B#1/13 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.ErrorFile#1/11 } </21 & Map/22 & lambda_Main_SwFoundFiles_0/23 Tile{ AsIs: (/17 AsIs: s.Pos#1/19 AsIs: # NotFound/20 AsIs: e.FileName#1/15 AsIs: )/18 AsIs: e.Files_E#1/27(2) AsIs: >/1 } >/24 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icAllocFunc, 0, 4, 22},
    {refalrts::icAllocFunc, 0, 3, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 17, 1, 0},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icTrash, 0, 0, 6},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T T S S T E 
    // </0 & Main_SwFoundFiles/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files#1/2 >/1
    // closed e.Files#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwRenamedTargets/4 AsIs: t.CommandLineSource#1/5 AsIs: t.CppCompiler#1/7 AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 AsIs: t.ErrorFile#1/11 } </13 & RenameTargets/14 t.CppCompiler#1/7/15 Tile{ AsIs: e.Files#1/2 } >/17 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 1, 14},
    {refalrts::icCopyEVar, 15, 7, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 13, 16, 0},
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
  //FAST GEN:T T S S T E 
  //GLOBAL GEN:T T S S T E 
  // </0 & Main_SwFoundFiles/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 s.idxVVV#0/10 t.idxVVVV#0/11 e.idxVVVVV#0/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVVV#0 as range 2
  do {
    refalrts::start_sentence();
    //T T S S T E 
    // </0 & Main_SwFoundFiles/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files_B#1/13 (/17 s.Pos#1/19 # NotFound/20 e.FileName#1/15 )/18 e.Files_E#1/2 >/1
    context[25] = context[2];
    context[26] = context[3];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[27], context[28] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Files_E#1 as range 27(2)
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      context[20] = refalrts::ident_left(  & ident_NotFound<int>::name, context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.FileName#1 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE}  e.Files_B#1/13 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.ErrorFile#1/11 } </21 & Map/22 & lambda_Main_SwFoundFiles_0/23 Tile{ AsIs: (/17 AsIs: s.Pos#1/19 AsIs: # NotFound/20 AsIs: e.FileName#1/15 AsIs: )/18 AsIs: e.Files_E#1/27(2) AsIs: >/1 } >/24 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[22], Map, "Map" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[23], lambda_Main_SwFoundFiles_0, "lambda_Main_SwFoundFiles_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ReportErrors, "ReportErrors" );
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[21] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[25], context[26] ) );
  } while ( 0 );

  //T T S S T E 
  // </0 & Main_SwFoundFiles/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files#1/2 >/1
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwRenamedTargets/4 AsIs: t.CommandLineSource#1/5 AsIs: t.CppCompiler#1/7 AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 AsIs: t.ErrorFile#1/11 } </13 & RenameTargets/14 t.CppCompiler#1/7/15 Tile{ AsIs: e.Files#1/2 } >/17 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], RenameTargets, "RenameTargets" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[15], context[16], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main_SwRenamedTargets, "Main_SwRenamedTargets" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Main_SwRenamedTargets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Output<int>::name,
    & ident_Source<int>::name,
    & ident_Collision<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"ave same name", 13},
    {" and", 4},
    {"le", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )
    //GLOBAL GEN:(S S E )
    // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    // closed e.idxBVV#0 as range 5
    {refalrts::icOnFailGoTo, +25, 0, 0},
    //(S #Collision(E )E )
    // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Collision/10 (/13 e.FirstTarget#2/11 )/14 e.SecondTarget#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 2, 10},
    {refalrts::icSave, 0, 22, 5},
    {refalrts::icBracketLeftSave, 0, 11, 22},
    // closed e.FirstTarget#2 as range 11
    // closed e.SecondTarget#2 as range 22(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 HalfReuse: 'i'/13 }"le"/15 Tile{ HalfReuse: 's'/0 HalfReuse: ' '/4 } Tile{ AsIs: e.FirstTarget#2/11 }" and"/17 Tile{ HalfReuse: ' '/14 AsIs: e.SecondTarget#2/22(5) HalfReuse: ' '/8 HalfReuse: 'h'/1 }"ave same name"/19 )/21 Tile{ ]] }
    {refalrts::icAllocString, 0, 2, 15},
    {refalrts::icAllocString, 0, 1, 17},
    {refalrts::icAllocString, 0, 0, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icReinitChar, 0, 'f', 10},
    {refalrts::icReinitChar, 0, 'i', 13},
    {refalrts::icReinitChar, 0, 's', 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, ' ', 14},
    {refalrts::icReinitChar, 0, ' ', 8},
    {refalrts::icReinitChar, 0, 'h', 1},
    {refalrts::icLinkBrackets, 7, 21, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 21, 0},
    {refalrts::icSpliceTile, 14, 1, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 7, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    //(S #Source(E )E )
    // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 10},
    {refalrts::icSave, 0, 22, 5},
    {refalrts::icBracketLeftSave, 0, 11, 22},
    // closed e.Source#2 as range 11
    // closed e.Output#2 as range 22(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/22(5) )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(S #OutputE )
    // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 10},
    // closed e.Output#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE} 
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
  //FAST GEN:(E )
  //GLOBAL GEN:(S S E )
  // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  // closed e.idxBVV#0 as range 5
  do {
    refalrts::start_sentence();
    //(S #Collision(E )E )
    // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Collision/10 (/13 e.FirstTarget#2/11 )/14 e.SecondTarget#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Collision<int>::name, context[10] ) )
      continue;
    context[22] = context[5];
    context[23] = context[6];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[22], context[23] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.FirstTarget#2 as range 11
    // closed e.SecondTarget#2 as range 22(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 HalfReuse: 'i'/13 }"le"/15 Tile{ HalfReuse: 's'/0 HalfReuse: ' '/4 } Tile{ AsIs: e.FirstTarget#2/11 }" and"/17 Tile{ HalfReuse: ' '/14 AsIs: e.SecondTarget#2/22(5) HalfReuse: ' '/8 HalfReuse: 'h'/1 }"ave same name"/19 )/21 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[15], context[16], "le", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[17], context[18], " and", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "ave same name", 13 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'f' );
    refalrts::reinit_char( context[13], 'i' );
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[14], ' ' );
    refalrts::reinit_char( context[8], ' ' );
    refalrts::reinit_char( context[1], 'h' );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S #Source(E )E )
    // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Source<int>::name, context[10] ) )
      continue;
    context[22] = context[5];
    context[23] = context[6];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[22], context[23] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Source#2 as range 11
    // closed e.Output#2 as range 22(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/22(5) )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(S #OutputE )
  // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Output<int>::name, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Main_SwRenamedTargets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Main_SwCompiledFiles, "Main_SwCompiledFiles" },
    { CompileFiles, "CompileFiles" },
    { ReportErrors, "ReportErrors" },
    { lambda_Main_SwRenamedTargets_0, "lambda_Main_SwRenamedTargets_0" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Collision<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T T S S T E 
    //GLOBAL GEN:T T S S T E 
    // </0 & Main_SwRenamedTargets/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 s.idxVVV#0/10 t.idxVVVV#0/11 e.idxVVVVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    // closed e.idxVVVVV#0 as range 2
    {refalrts::icOnFailGoTo, +25, 0, 0},
    //T T S S T E 
    // </0 & Main_SwRenamedTargets/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files_B#1/13 (/17 s.Pos#1/19 # Collision/20 e.Collision#1/15 )/18 e.Files_E#1/2 >/1
    {refalrts::icSave, 0, 25, 2},
    {refalrts::icEPrepare, 0, 13, 25},
    {refalrts::icEStart, 0, 13, 25},
    {refalrts::icSave, 0, 27, 25},
    {refalrts::icBracketLeftSave, 0, 15, 27},
    // closed e.Files_E#1 as range 27(2)
    {refalrts::icsVarLeft, 0, 19, 15},
    {refalrts::icIdentLeftSave, 20, 0, 15},
    // closed e.Collision#1 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE}  e.Files_B#1/13 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.ErrorFile#1/11 } </21 & Map/22 & lambda_Main_SwRenamedTargets_0/23 Tile{ AsIs: (/17 AsIs: s.Pos#1/19 AsIs: # Collision/20 AsIs: e.Collision#1/15 AsIs: )/18 AsIs: e.Files_E#1/27(2) AsIs: >/1 } >/24 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icAllocFunc, 0, 4, 22},
    {refalrts::icAllocFunc, 0, 3, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 17, 1, 0},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icTrash, 0, 0, 6},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T T S S T E 
    // </0 & Main_SwRenamedTargets/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files#1/2 >/1
    // closed e.Files#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.CommandLineSource#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwCompiledFiles/4 } Tile{ AsIs: t.CppCompiler#1/7 } Tile{ AsIs: t.ErrorFile#1/11 } </13 & CompileFiles/14 Tile{ AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 } Tile{ AsIs: e.Files#1/2 } >/15 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 1, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrash, 0, 0, 4},
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
  //FAST GEN:T T S S T E 
  //GLOBAL GEN:T T S S T E 
  // </0 & Main_SwRenamedTargets/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 s.idxVVV#0/10 t.idxVVVV#0/11 e.idxVVVVV#0/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVVV#0 as range 2
  do {
    refalrts::start_sentence();
    //T T S S T E 
    // </0 & Main_SwRenamedTargets/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files_B#1/13 (/17 s.Pos#1/19 # Collision/20 e.Collision#1/15 )/18 e.Files_E#1/2 >/1
    context[25] = context[2];
    context[26] = context[3];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[27], context[28] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Files_E#1 as range 27(2)
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      context[20] = refalrts::ident_left(  & ident_Collision<int>::name, context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.Collision#1 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE}  e.Files_B#1/13 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.ErrorFile#1/11 } </21 & Map/22 & lambda_Main_SwRenamedTargets_0/23 Tile{ AsIs: (/17 AsIs: s.Pos#1/19 AsIs: # Collision/20 AsIs: e.Collision#1/15 AsIs: )/18 AsIs: e.Files_E#1/27(2) AsIs: >/1 } >/24 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[22], Map, "Map" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[23], lambda_Main_SwRenamedTargets_0, "lambda_Main_SwRenamedTargets_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ReportErrors, "ReportErrors" );
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[21] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[25], context[26] ) );
  } while ( 0 );

  //T T S S T E 
  // </0 & Main_SwRenamedTargets/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files#1/2 >/1
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  t.CommandLineSource#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwCompiledFiles/4 } Tile{ AsIs: t.CppCompiler#1/7 } Tile{ AsIs: t.ErrorFile#1/11 } </13 & CompileFiles/14 Tile{ AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 } Tile{ AsIs: e.Files#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], CompileFiles, "CompileFiles" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main_SwCompiledFiles, "Main_SwCompiledFiles" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Main_SwCompiledFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Link, "Link" },
    { WriteLine, "WriteLine" },
    { CreateErrorFileMark, "CreateErrorFileMark" },
    { Exit, "Exit" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Fails<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"** Compilation successed **", 27}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T T E 
    //GLOBAL GEN:T T E 
    // </0 & Main_SwCompiledFiles/4 t.idx#0/5 t.idxV#0/7 e.idxVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    // closed e.idxVV#0 as range 2
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //T T E 
    // </0 & Main_SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 e.Outputs_B#1/9 # Fails/11 e.OutputsErrors_E#1/2 >/1
    {refalrts::icSave, 0, 15, 2},
    {refalrts::icEPrepare, 0, 9, 15},
    {refalrts::icEStart, 0, 9, 15},
    {refalrts::icSave, 0, 17, 15},
    {refalrts::icIdentLeftSave, 11, 0, 17},
    // closed e.OutputsErrors_E#1 as range 17(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.CppCompiler#1/5 {REMOVED TILE}  e.Outputs_B#1/9 {REMOVED TILE}  e.OutputsErrors_E#1/17(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateErrorFileMark/4 } Tile{ AsIs: t.ErrorFile#1/7 } >/12 Tile{ HalfReuse: </11 } & Exit/13 1/14 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icAllocFunc, 0, 3, 13},
    {refalrts::icAllocInt, 0, 1, 14},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T T E 
    // </0 & Main_SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 e.Targets#1/2 >/1
    // closed e.Targets#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.ErrorFile#1/7 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link/4 AsIs: t.CppCompiler#1/5 } Tile{ AsIs: e.Targets#1/2 } >/9 </10 & WriteLine/11"** Compilation successed **"/12 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icAllocFunc, 0, 1, 11},
    {refalrts::icAllocString, 0, 0, 12},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 9, 13, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrash, 0, 0, 6},
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
  //FAST GEN:T T E 
  //GLOBAL GEN:T T E 
  // </0 & Main_SwCompiledFiles/4 t.idx#0/5 t.idxV#0/7 e.idxVV#0/2 >/1
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
    refalrts::start_sentence();
    //T T E 
    // </0 & Main_SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 e.Outputs_B#1/9 # Fails/11 e.OutputsErrors_E#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[15];
      context[18] = context[16];
      context[11] = refalrts::ident_left(  & ident_Fails<int>::name, context[17], context[18] );
      if( ! context[11] )
        continue;
      // closed e.OutputsErrors_E#1 as range 17(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  t.CppCompiler#1/5 {REMOVED TILE}  e.Outputs_B#1/9 {REMOVED TILE}  e.OutputsErrors_E#1/17(2) {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateErrorFileMark/4 } Tile{ AsIs: t.ErrorFile#1/7 } >/12 Tile{ HalfReuse: </11 } & Exit/13 1/14 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], Exit, "Exit" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[14], 1UL ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], CreateErrorFileMark, "CreateErrorFileMark" );
      refalrts::reinit_open_call( context[11] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[11] );
      refalrts::push_stack( context[12] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[15], context[16] ) );
  } while ( 0 );

  //T T E 
  // </0 & Main_SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 e.Targets#1/2 >/1
  // closed e.Targets#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  t.ErrorFile#1/7 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link/4 AsIs: t.CppCompiler#1/5 } Tile{ AsIs: e.Targets#1/2 } >/9 </10 & WriteLine/11"** Compilation successed **"/12 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "** Compilation successed **", 27 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Link, "Link" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_LookupSourceFiles_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_LookupSourceFiles_0/4 s.Pos#2/9 (/7 s.ResultTag#3/10 e.Info#3/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 10, 5},
    // closed e.Info#3 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & lambda_LookupSourceFiles_0/4 s.Pos#2/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Pos2 #9/7 AsIs: s.ResultTag#3/10 AsIs: e.Info#3/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitSVar, 0, 9, 7},
    {refalrts::icLinkBrackets, 0, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
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
  // </0 & lambda_LookupSourceFiles_0/4 s.Pos#2/9 (/7 s.ResultTag#3/10 e.Info#3/5 )/8 >/1
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
  // closed e.Info#3 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_LookupSourceFiles_0/4 s.Pos#2/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Pos2 #9/7 AsIs: s.ResultTag#3/10 AsIs: e.Info#3/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_LookupSourceFiles_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FindFiles, "FindFiles" },
    { lambda_LookupSourceFiles_0, "lambda_LookupSourceFiles_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_LookupSourceFiles_1/4 (/7 e.Folders#1/5 )/8 (/11 s.Pos#2/13 e.FileName#2/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Folders#1 as range 5
    {refalrts::icsVarLeft, 0, 13, 9},
    // closed e.FileName#2 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 & Fetch/15 Tile{ AsIs: </0 Reuse: & FindFiles/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.FileName#2/9 } )/16 >/17 </18 & CreateClosure /19 & lambda_LookupSourceFiles_0/20 Tile{ AsIs: s.Pos#2/13 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 3, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icAllocFunc, 0, 2, 19},
    {refalrts::icAllocFunc, 0, 1, 20},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 16, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 16, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 0, 11, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
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
  // </0 & lambda_LookupSourceFiles_1/4 (/7 e.Folders#1/5 )/8 (/11 s.Pos#2/13 e.FileName#2/9 )/12 >/1
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
  // closed e.Folders#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </14 & Fetch/15 Tile{ AsIs: </0 Reuse: & FindFiles/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.FileName#2/9 } )/16 >/17 </18 & CreateClosure /19 & lambda_LookupSourceFiles_0/20 Tile{ AsIs: s.Pos#2/13 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_LookupSourceFiles_0, "lambda_LookupSourceFiles_0" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FindFiles, "FindFiles" );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult LookupSourceFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_LookupSourceFiles_1, "lambda_LookupSourceFiles_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & LookupSourceFiles/4 (/7 e.Folders#1/5 )/8 e.Files#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Folders#1 as range 5
    // closed e.Files#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & Map/10 </11 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_LookupSourceFiles_1/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 } >/12 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 2, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
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
  // </0 & LookupSourceFiles/4 (/7 e.Folders#1/5 )/8 e.Files#1/2 >/1
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
  // closed e.Folders#1 as range 5
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & Map/10 </11 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_LookupSourceFiles_1/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 } >/12 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_LookupSourceFiles_1, "lambda_LookupSourceFiles_1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult RenameTargets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GetFileName, "GetFileName" },
    { ScanCollisions, "ScanCollisions" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoCppCompiler<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T E 
    //GLOBAL GEN:T E 
    // </0 & RenameTargets/4 t.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //#NoCppCompilerE 
    // </0 & RenameTargets/4 # NoCppCompiler/5 e.Files#1/2 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    // closed e.Files#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & RenameTargets/4 # NoCppCompiler/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Files#1/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )E 
    // </0 & RenameTargets/4 (/5 e.CppCompiler#1/7 )/6 e.Files#1/2 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    // closed e.CppCompiler#1 as range 7
    // closed e.Files#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.CppCompiler#1/7 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ScanCollisions/4 HalfReuse: </5 } & Map/9 Tile{ HalfReuse: & GetFileName/6 AsIs: e.Files#1/2 AsIs: >/1 } >/10 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 2, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icReinitFunc, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icSpliceTile, 6, 1, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icTrash, 0, 0, 5},
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
  //FAST GEN:T E 
  //GLOBAL GEN:T E 
  // </0 & RenameTargets/4 t.idx#0/5 e.idxV#0/2 >/1
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
    refalrts::start_sentence();
    //#NoCppCompilerE 
    // </0 & RenameTargets/4 # NoCppCompiler/5 e.Files#1/2 >/1
    if( ! refalrts::ident_term(  & ident_NoCppCompiler<int>::name, context[5] ) )
      continue;
    // closed e.Files#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & RenameTargets/4 # NoCppCompiler/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Files#1/2 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )E 
  // </0 & RenameTargets/4 (/5 e.CppCompiler#1/7 )/6 e.Files#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CppCompiler#1 as range 7
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.CppCompiler#1/7 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ScanCollisions/4 HalfReuse: </5 } & Map/9 Tile{ HalfReuse: & GetFileName/6 AsIs: e.Files#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_name( context[9], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ScanCollisions, "ScanCollisions" );
  refalrts::reinit_open_call( context[5] );
  refalrts::reinit_name( context[6], GetFileName, "GetFileName" );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[6], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GetBaseNameLowerCase, "GetBaseNameLowerCase" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Source<int>::name,
    & ident_Output<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(S S E )
    //GLOBAL GEN:(S S E )
    // </0 & GetFileName/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    // closed e.idxBVV#0 as range 5
    {refalrts::icOnFailGoTo, +19, 0, 0},
    //(S #OutputE )
    // </0 & GetFileName/4 (/7 s.Pos#1/9 # Output/10 e.FileName#1/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 10},
    // closed e.FileName#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 (/12 </13 & GetBaseNameLowerCase/14 e.FileName#1/5/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Output/10 AsIs: e.FileName#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 0, 14},
    {refalrts::icCopyEVar, 15, 5, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 12, 4, 0},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 11, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(S #Source(E )E )
    // </0 & GetFileName/4 (/7 s.Pos#1/9 # Source/10 (/13 e.Source#1/11 )/14 e.Output#1/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 10},
    {refalrts::icBracketLeftSave, 0, 11, 5},
    // closed e.Source#1 as range 11
    // closed e.Output#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/15 (/16 </17 & GetBaseNameLowerCase/18 e.Output#1/5/19 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Source/10 AsIs: (/13 AsIs: e.Source#1/11 AsIs: )/14 AsIs: e.Output#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocFunc, 0, 0, 18},
    {refalrts::icCopyEVar, 19, 5, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 15, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 16, 4, 0},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 20, 0},
    {refalrts::icSpliceTile, 15, 18, 0},
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
  //FAST GEN:(S S E )
  //GLOBAL GEN:(S S E )
  // </0 & GetFileName/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  // closed e.idxBVV#0 as range 5
  do {
    refalrts::start_sentence();
    //(S #OutputE )
    // </0 & GetFileName/4 (/7 s.Pos#1/9 # Output/10 e.FileName#1/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Output<int>::name, context[10] ) )
      continue;
    // closed e.FileName#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 (/12 </13 & GetBaseNameLowerCase/14 e.FileName#1/5/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Output/10 AsIs: e.FileName#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], GetBaseNameLowerCase, "GetBaseNameLowerCase" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[12], context[4] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(S #Source(E )E )
  // </0 & GetFileName/4 (/7 s.Pos#1/9 # Source/10 (/13 e.Source#1/11 )/14 e.Output#1/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Source<int>::name, context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Source#1 as range 11
  // closed e.Output#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/15 (/16 </17 & GetBaseNameLowerCase/18 e.Output#1/5/19 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Source/10 AsIs: (/13 AsIs: e.Source#1/11 AsIs: )/14 AsIs: e.Output#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], GetBaseNameLowerCase, "GetBaseNameLowerCase" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::reinit_close_call( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ScanCollisions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ScanCollisions, "ScanCollisions" },
    { RenameLocations, "RenameLocations" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & ScanCollisions/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //((E )E )E 
    // </0 & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 e.Locations1#1/5 )/8 e.Files_B#1/13 (/17 (/21 e.BaseName#1/23 )/22 e.Locations2#1/15 )/18 e.Files_E#1/2 >/1
    {refalrts::icSave, 0, 25, 2},
    {refalrts::icBracketLeftSave, 0, 5, 25},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    // closed e.BaseName#1 as range 9
    // closed e.Locations1#1 as range 5
    {refalrts::icEPrepare, 0, 13, 25},
    {refalrts::icEStart, 0, 13, 25},
    {refalrts::icSave, 0, 27, 25},
    {refalrts::icBracketLeftSave, 0, 15, 27},
    {refalrts::icBracketLeftSave, 0, 19, 15},
    {refalrts::iceRepeatLeft, 23, 9, 19},
    {refalrts::icEmpty, 0, 0, 19},
    // closed e.Locations2#1 as range 15
    // closed e.Files_E#1 as range 27(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ScanCollisions/8 AsIs: e.Files_B#1/13 AsIs: (/17 AsIs: (/21 AsIs: e.BaseName#1/23 AsIs: )/22 } Tile{ AsIs: e.Locations1#1/5 } Tile{ AsIs: e.Locations2#1/15 } Tile{ AsIs: )/18 AsIs: e.Files_E#1/27(2) AsIs: >/1 ]] }
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSetRes, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 8, 22, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //((E )E )E 
    // </0 & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 e.Locations#1/5 )/8 e.Files#1/2 >/1
    {refalrts::icSave, 0, 25, 2},
    {refalrts::icBracketLeftSave, 0, 5, 25},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    // closed e.BaseName#1 as range 9
    // closed e.Locations#1 as range 5
    // closed e.Files#1 as range 25(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.BaseName#1/9 )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations/4 } Tile{ AsIs: e.Locations#1/5 } Tile{ HalfReuse: >/7 HalfReuse: </11 } Tile{ HalfReuse: & ScanCollisions/8 AsIs: e.Files#1/25(2) AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 7, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & ScanCollisions/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ScanCollisions/4 >/1 {REMOVED TILE} 
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
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & ScanCollisions/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //((E )E )E 
    // </0 & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 e.Locations1#1/5 )/8 e.Files_B#1/13 (/17 (/21 e.BaseName#1/23 )/22 e.Locations2#1/15 )/18 e.Files_E#1/2 >/1
    context[25] = context[2];
    context[26] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[25], context[26] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.BaseName#1 as range 9
    // closed e.Locations1#1 as range 5
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[27], context[28] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      if( ! refalrts::repeated_evar_left( context[23], context[24], context[9], context[10], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Locations2#1 as range 15
      // closed e.Files_E#1 as range 27(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ScanCollisions/8 AsIs: e.Files_B#1/13 AsIs: (/17 AsIs: (/21 AsIs: e.BaseName#1/23 AsIs: )/22 } Tile{ AsIs: e.Locations1#1/5 } Tile{ AsIs: e.Locations2#1/15 } Tile{ AsIs: )/18 AsIs: e.Files_E#1/27(2) AsIs: >/1 ]] }
      refalrts::reinit_name( context[8], ScanCollisions, "ScanCollisions" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[8], context[22] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[25], context[26] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //((E )E )E 
    // </0 & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 e.Locations#1/5 )/8 e.Files#1/2 >/1
    context[25] = context[2];
    context[26] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[25], context[26] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.BaseName#1 as range 9
    // closed e.Locations#1 as range 5
    // closed e.Files#1 as range 25(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.BaseName#1/9 )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations/4 } Tile{ AsIs: e.Locations#1/5 } Tile{ HalfReuse: >/7 HalfReuse: </11 } Tile{ HalfReuse: & ScanCollisions/8 AsIs: e.Files#1/25(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], RenameLocations, "RenameLocations" );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[8], ScanCollisions, "ScanCollisions" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[7], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & ScanCollisions/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ScanCollisions/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult RenameLocations(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { RenameLocations_Aux, "RenameLocations_Aux" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Output<int>::name,
    & ident_Collision<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & RenameLocations/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +25, 0, 0},
    //E 
    // </0 & RenameLocations/4 e.Locations_B#1/5 (/9 s.Pos1#1/11 # Output/12 e.FirstTarget#1/7 )/10 e.Locations_M#1/13 (/17 s.Pos2#1/19 # Output/20 e.SecondTarget#1/15 )/18 e.Locations_E#1/2 >/1
    {refalrts::icSave, 0, 21, 2},
    {refalrts::icEPrepare, 0, 5, 21},
    {refalrts::icEStart, 0, 5, 21},
    {refalrts::icSave, 0, 23, 21},
    {refalrts::icBracketLeftSave, 0, 7, 23},
    {refalrts::icsVarLeft, 0, 11, 7},
    {refalrts::icIdentLeftSave, 12, 0, 7},
    // closed e.FirstTarget#1 as range 7
    {refalrts::icEPrepare, 0, 13, 23},
    {refalrts::icEStart, 0, 13, 23},
    {refalrts::icSave, 0, 25, 23},
    {refalrts::icBracketLeftSave, 0, 15, 25},
    // closed e.Locations_E#1 as range 25(2)
    {refalrts::icsVarLeft, 0, 19, 15},
    {refalrts::icIdentLeftSave, 20, 0, 15},
    // closed e.SecondTarget#1 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & RenameLocations/4 e.Locations_B#1/5 (/9 s.Pos1#1/11 {REMOVED TILE}  e.Locations_M#1/13 {REMOVED TILE}  {REMOVED TILE}  )/18 e.Locations_E#1/25(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/17 AsIs: s.Pos2#1/19 Reuse: # Collision/20 } Tile{ HalfReuse: (/12 AsIs: e.FirstTarget#1/7 AsIs: )/10 } Tile{ AsIs: e.SecondTarget#1/15 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icUpdateIdent, 0, 1, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 17, 1, 0},
    {refalrts::icLinkBrackets, 12, 10, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 12, 10, 0},
    {refalrts::icSpliceTile, 17, 20, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //E 
    // </0 & RenameLocations/4 e.Locations_B#1/5 (/9 s.Pos#1/11 # Output/12 e.Target#1/7 )/10 e.Locations_E#1/2 >/1
    {refalrts::icSave, 0, 21, 2},
    {refalrts::icEPrepare, 0, 5, 21},
    {refalrts::icEStart, 0, 5, 21},
    {refalrts::icSave, 0, 23, 21},
    {refalrts::icBracketLeftSave, 0, 7, 23},
    // closed e.Locations_E#1 as range 23(2)
    {refalrts::icsVarLeft, 0, 11, 7},
    {refalrts::icIdentLeftSave, 12, 0, 7},
    // closed e.Target#1 as range 7
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & RenameLocations_Aux/0 HalfReuse: 1/4 AsIs: e.Locations_B#1/5 AsIs: (/9 AsIs: s.Pos#1/11 AsIs: # Output/12 AsIs: e.Target#1/7 AsIs: )/10 AsIs: e.Locations_E#1/23(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icReinitFunc, 0, 0, 0},
    {refalrts::icReinitInt, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //E 
    // </0 & RenameLocations/4 e.Locations#1/2 >/1
    // closed e.Locations#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & RenameLocations_Aux/0 HalfReuse: 0/4 AsIs: e.Locations#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icReinitFunc, 0, 0, 0},
    {refalrts::icReinitInt, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & RenameLocations/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //E 
    // </0 & RenameLocations/4 e.Locations_B#1/5 (/9 s.Pos1#1/11 # Output/12 e.FirstTarget#1/7 )/10 e.Locations_M#1/13 (/17 s.Pos2#1/19 # Output/20 e.SecondTarget#1/15 )/18 e.Locations_E#1/2 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[21];
      context[24] = context[22];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[23], context[24] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
        continue;
      context[12] = refalrts::ident_left(  & ident_Output<int>::name, context[7], context[8] );
      if( ! context[12] )
        continue;
      // closed e.FirstTarget#1 as range 7
      context[13] = 0;
      context[14] = 0;
      refalrts::start_e_loop();
      do {
        context[25] = context[23];
        context[26] = context[24];
        context[15] = 0;
        context[16] = 0;
        context[17] = refalrts::brackets_left( context[15], context[16], context[25], context[26] );
        if( ! context[17] )
          continue;
        refalrts::bracket_pointers(context[17], context[18]);
        // closed e.Locations_E#1 as range 25(2)
        if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
          continue;
        context[20] = refalrts::ident_left(  & ident_Output<int>::name, context[15], context[16] );
        if( ! context[20] )
          continue;
        // closed e.SecondTarget#1 as range 15

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  </0 & RenameLocations/4 e.Locations_B#1/5 (/9 s.Pos1#1/11 {REMOVED TILE}  e.Locations_M#1/13 {REMOVED TILE}  {REMOVED TILE}  )/18 e.Locations_E#1/25(2) {REMOVED TILE} 
        //RESULT: Tile{ [[ } Tile{ AsIs: (/17 AsIs: s.Pos2#1/19 Reuse: # Collision/20 } Tile{ HalfReuse: (/12 AsIs: e.FirstTarget#1/7 AsIs: )/10 } Tile{ AsIs: e.SecondTarget#1/15 } Tile{ HalfReuse: )/1 ]] }
        refalrts::update_ident( context[20], & ident_Collision<int>::name );
        refalrts::reinit_open_bracket( context[12] );
        refalrts::reinit_close_bracket( context[1] );
        refalrts::link_brackets( context[17], context[1] );
        refalrts::link_brackets( context[12], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[12], context[10] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[13], context[14], context[23], context[24] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[21], context[22] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //E 
    // </0 & RenameLocations/4 e.Locations_B#1/5 (/9 s.Pos#1/11 # Output/12 e.Target#1/7 )/10 e.Locations_E#1/2 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[21];
      context[24] = context[22];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[23], context[24] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      // closed e.Locations_E#1 as range 23(2)
      if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
        continue;
      context[12] = refalrts::ident_left(  & ident_Output<int>::name, context[7], context[8] );
      if( ! context[12] )
        continue;
      // closed e.Target#1 as range 7

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & RenameLocations_Aux/0 HalfReuse: 1/4 AsIs: e.Locations_B#1/5 AsIs: (/9 AsIs: s.Pos#1/11 AsIs: # Output/12 AsIs: e.Target#1/7 AsIs: )/10 AsIs: e.Locations_E#1/23(2) AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[13] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_name( context[0], RenameLocations_Aux, "RenameLocations_Aux" );
      refalrts::reinit_number( context[4], 1UL );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[13] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[21], context[22] ) );
  } while ( 0 );

  //E 
  // </0 & RenameLocations/4 e.Locations#1/2 >/1
  // closed e.Locations#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & RenameLocations_Aux/0 HalfReuse: 0/4 AsIs: e.Locations#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], RenameLocations_Aux, "RenameLocations_Aux" );
  refalrts::reinit_number( context[4], 0UL );
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

static refalrts::FnResult lambda_RenameLocations_Aux_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { Inc, "Inc" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Output<int>::name,
    & ident_Source<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"cpp", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S (E )
    //GLOBAL GEN:S (S S E )
    // </0 & lambda_RenameLocations_Aux_0/4 s.idx#0/9 (/7 s.idxVB#0/10 s.idxVBV#0/11 e.idxVBVV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 10, 5},
    {refalrts::icsVarLeft, 0, 11, 5},
    // closed e.idxVBVV#0 as range 5
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //0 (S #Source(E )E )
    // </0 & lambda_RenameLocations_Aux_0/4 0/9 (/7 s.Pos#2/10 # Source/11 (/14 e.Source#2/12 )/15 e.Output#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 11},
    {refalrts::icNumTerm, 0, 0, 9},
    {refalrts::icSave, 0, 24, 5},
    {refalrts::icBracketLeftSave, 0, 12, 24},
    // closed e.Source#2 as range 12
    // closed e.Output#2 as range 24(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_RenameLocations_Aux_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ Reuse: 1/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/14 AsIs: e.Source#2/12 AsIs: )/15 AsIs: e.Output#2/24(5) AsIs: )/8 } Tile{ ]] }
    {refalrts::icUpdateInt, 0, 1, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    //S (S #Source(E )E '.''c''p''p')
    // </0 & lambda_RenameLocations_Aux_0/4 s.Num#2/9 (/7 s.Pos#2/10 # Source/11 (/18 e.Source#2/16 )/19 e.Output#2/5 '.'/15 'c'/14 'p'/13 'p'/12 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 11},
    {refalrts::icSave, 0, 24, 5},
    {refalrts::icCharRightSave, 12, static_cast<unsigned char>('p'), 24},
    {refalrts::icCharRightSave, 13, static_cast<unsigned char>('p'), 24},
    {refalrts::icCharRightSave, 14, static_cast<unsigned char>('c'), 24},
    {refalrts::icCharRightSave, 15, static_cast<unsigned char>('.'), 24},
    {refalrts::icBracketLeftSave, 0, 16, 24},
    // closed e.Source#2 as range 16
    // closed e.Output#2 as range 24(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#2/9 } >/20 Tile{ AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/18 AsIs: e.Source#2/16 AsIs: )/19 AsIs: e.Output#2/24(5) Reuse: '@'/15 HalfReuse: </14 HalfReuse: & StrFromInt/13 HalfReuse: s.Num2 #9/12 HalfReuse: >/8 HalfReuse: '.'/1 }"cpp"/21 )/23 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icAllocString, 0, 0, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icUpdateChar, 0, '@', 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icReinitFunc, 0, 0, 13},
    {refalrts::icReinitSVar, 0, 9, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitChar, 0, '.', 1},
    {refalrts::icLinkBrackets, 7, 23, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icSpliceTile, 7, 1, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (S #OutputE )
    // </0 & lambda_RenameLocations_Aux_0/4 s.Num#2/9 (/7 s.Pos#2/10 # Output/11 e.Output#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 11},
    // closed e.Output#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_RenameLocations_Aux_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#2/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Output/11 AsIs: e.Output#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 8, 0},
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
  //FAST GEN:S (E )
  //GLOBAL GEN:S (S S E )
  // </0 & lambda_RenameLocations_Aux_0/4 s.idx#0/9 (/7 s.idxVB#0/10 s.idxVBV#0/11 e.idxVBVV#0/5 )/8 >/1
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
  // closed e.idxVBVV#0 as range 5
  do {
    refalrts::start_sentence();
    //0 (S #Source(E )E )
    // </0 & lambda_RenameLocations_Aux_0/4 0/9 (/7 s.Pos#2/10 # Source/11 (/14 e.Source#2/12 )/15 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Source<int>::name, context[11] ) )
      continue;
    if( ! refalrts::number_term( 0UL, context[9] ) )
      continue;
    context[24] = context[5];
    context[25] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[24], context[25] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Source#2 as range 12
    // closed e.Output#2 as range 24(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_RenameLocations_Aux_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ Reuse: 1/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/14 AsIs: e.Source#2/12 AsIs: )/15 AsIs: e.Output#2/24(5) AsIs: )/8 } Tile{ ]] }
    refalrts::update_number( context[9], 1UL );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (S #Source(E )E '.''c''p''p')
    // </0 & lambda_RenameLocations_Aux_0/4 s.Num#2/9 (/7 s.Pos#2/10 # Source/11 (/18 e.Source#2/16 )/19 e.Output#2/5 '.'/15 'c'/14 'p'/13 'p'/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Source<int>::name, context[11] ) )
      continue;
    context[24] = context[5];
    context[25] = context[6];
    context[12] = refalrts::char_right( 'p', context[24], context[25] );
    if( ! context[12] )
      continue;
    context[13] = refalrts::char_right( 'p', context[24], context[25] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_right( 'c', context[24], context[25] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_right( '.', context[24], context[25] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[24], context[25] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Source#2 as range 16
    // closed e.Output#2 as range 24(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#2/9 } >/20 Tile{ AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/18 AsIs: e.Source#2/16 AsIs: )/19 AsIs: e.Output#2/24(5) Reuse: '@'/15 HalfReuse: </14 HalfReuse: & StrFromInt/13 HalfReuse: s.Num2 #9/12 HalfReuse: >/8 HalfReuse: '.'/1 }"cpp"/21 )/23 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "cpp", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::update_char( context[15], '@' );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::reinit_svar( context[12], context[9] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_char( context[1], '.' );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S (S #OutputE )
  // </0 & lambda_RenameLocations_Aux_0/4 s.Num#2/9 (/7 s.Pos#2/10 # Output/11 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Output<int>::name, context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_RenameLocations_Aux_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#2/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Output/11 AsIs: e.Output#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult RenameLocations_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_RenameLocations_Aux_0, "lambda_RenameLocations_Aux_0" },
    { MapReduce, "MapReduce" },
    { DelAccumulator, "DelAccumulator" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & RenameLocations_Aux/4 s.InitNumber#1/5 e.Locations#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Locations#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 & DelAccumulator/7 </8 Tile{ HalfReuse: & MapReduce/0 Reuse: & lambda_RenameLocations_Aux_0/4 AsIs: s.InitNumber#1/5 AsIs: e.Locations#1/2 AsIs: >/1 } >/9 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icAllocFunc, 0, 2, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 6, 8, 0},
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
  // </0 & RenameLocations_Aux/4 s.InitNumber#1/5 e.Locations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Locations#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </6 & DelAccumulator/7 </8 Tile{ HalfReuse: & MapReduce/0 Reuse: & lambda_RenameLocations_Aux_0/4 AsIs: s.InitNumber#1/5 AsIs: e.Locations#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], DelAccumulator, "DelAccumulator" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], MapReduce, "MapReduce" );
  refalrts::update_name( context[4], lambda_RenameLocations_Aux_0, "lambda_RenameLocations_Aux_0" );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CompileFiles_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Fails<int>::name,
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:S E 
    // </0 & lambda_CompileFiles_0/4 s.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#SuccessE 
    // </0 & lambda_CompileFiles_0/4 # Success/5 e.OutputName#3/2 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    // closed e.OutputName#3 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_CompileFiles_0/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.OutputName#3/2 HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 5, 1, 0},
    {refalrts::icSetRes, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //#Fails
    // </0 & lambda_CompileFiles_0/4 # Fails/5 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_CompileFiles_0/4 # Fails/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
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
  //FAST GEN:E 
  //GLOBAL GEN:S E 
  // </0 & lambda_CompileFiles_0/4 s.idx#0/5 e.idxV#0/2 >/1
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
    //#SuccessE 
    // </0 & lambda_CompileFiles_0/4 # Success/5 e.OutputName#3/2 >/1
    if( ! refalrts::ident_term(  & ident_Success<int>::name, context[5] ) )
      continue;
    // closed e.OutputName#3 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_CompileFiles_0/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.OutputName#3/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //#Fails
  // </0 & lambda_CompileFiles_0/4 # Fails/5 >/1
  if( ! refalrts::ident_term(  & ident_Fails<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_CompileFiles_0/4 # Fails/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], & ident_Fails<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CompileFiles_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_CompileFiles_0, "lambda_CompileFiles_0" },
    { WriteLine, "WriteLine" },
    { CompileFile, "CompileFile" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Source<int>::name,
    & ident_Output<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"mpiling ", 8},
    {"*C", 2},
    {"inking ", 7}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S S (S S E )
    //GLOBAL GEN:S S (S S E )
    // </0 & lambda_CompileFiles_1/4 s.idx#0/9 s.idxV#0/10 (/7 s.idxVVB#0/11 s.idxVVBV#0/12 e.idxVVBVV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 11, 5},
    {refalrts::icsVarLeft, 0, 12, 5},
    // closed e.idxVVBVV#0 as range 5
    {refalrts::icOnFailGoTo, +20, 0, 0},
    //S S (S #OutputE )
    // </0 & lambda_CompileFiles_1/4 s.GenMode#1/9 s.Opt#1/10 (/7 s.Pos#2/11 # Output/12 e.OutputName#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 12},
    // closed e.OutputName#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE}  s.Pos#2/11 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } '+'/13 Tile{ HalfReuse: 'L'/7 }"inking "/14 e.OutputName#2/5/16 Tile{ AsIs: >/1 } Tile{ HalfReuse: (/12 AsIs: e.OutputName#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icAllocChar, 0, '+', 13},
    {refalrts::icAllocString, 0, 2, 14},
    {refalrts::icCopyEVar, 16, 5, 0},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitChar, 0, 'L', 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icLinkBrackets, 12, 8, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 12, 8, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S S (S #Source(E )E )
    // </0 & lambda_CompileFiles_1/4 s.GenMode#1/9 s.Opt#1/10 (/7 s.Pos#2/11 # Source/12 (/15 e.Source#2/13 )/16 e.OutputName#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 12},
    {refalrts::icBracketLeftSave, 0, 13, 5},
    // closed e.Source#2 as range 13
    // closed e.OutputName#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Opt#1/10 {REMOVED TILE}  s.Pos#2/11 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 }"*C"/17 Tile{ HalfReuse: 'o'/7 }"mpiling "/19 e.Source#2/13/21 ':'/23 >/24 </25 & Fetch/26 </27 & CompileFile/28 Tile{ AsIs: s.GenMode#1/9 } Tile{ HalfReuse: s.Opt1 #10/12 AsIs: (/15 AsIs: e.Source#2/13 AsIs: )/16 AsIs: e.OutputName#2/5 HalfReuse: >/8 HalfReuse: & lambda_CompileFiles_0/1 } >/29 Tile{ ]] }
    {refalrts::icAllocString, 0, 1, 17},
    {refalrts::icAllocString, 0, 0, 19},
    {refalrts::icCopyEVar, 21, 13, 0},
    {refalrts::icAllocChar, 0, ':', 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocFunc, 0, 3, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icAllocFunc, 0, 2, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitChar, 0, 'o', 7},
    {refalrts::icReinitSVar, 0, 10, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitFunc, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 19, 28, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
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
  //FAST GEN:S S (S S E )
  //GLOBAL GEN:S S (S S E )
  // </0 & lambda_CompileFiles_1/4 s.idx#0/9 s.idxV#0/10 (/7 s.idxVVB#0/11 s.idxVVBV#0/12 e.idxVVBVV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVBVV#0 as range 5
  do {
    refalrts::start_sentence();
    //S S (S #OutputE )
    // </0 & lambda_CompileFiles_1/4 s.GenMode#1/9 s.Opt#1/10 (/7 s.Pos#2/11 # Output/12 e.OutputName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Output<int>::name, context[12] ) )
      continue;
    // closed e.OutputName#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE}  s.Pos#2/11 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } '+'/13 Tile{ HalfReuse: 'L'/7 }"inking "/14 e.OutputName#2/5/16 Tile{ AsIs: >/1 } Tile{ HalfReuse: (/12 AsIs: e.OutputName#2/5 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[13], '+' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "inking ", 7 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], WriteLine, "WriteLine" );
    refalrts::reinit_char( context[7], 'L' );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S S (S #Source(E )E )
  // </0 & lambda_CompileFiles_1/4 s.GenMode#1/9 s.Opt#1/10 (/7 s.Pos#2/11 # Source/12 (/15 e.Source#2/13 )/16 e.OutputName#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Source<int>::name, context[12] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Source#2 as range 13
  // closed e.OutputName#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Opt#1/10 {REMOVED TILE}  s.Pos#2/11 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 }"*C"/17 Tile{ HalfReuse: 'o'/7 }"mpiling "/19 e.Source#2/13/21 ':'/23 >/24 </25 & Fetch/26 </27 & CompileFile/28 Tile{ AsIs: s.GenMode#1/9 } Tile{ HalfReuse: s.Opt1 #10/12 AsIs: (/15 AsIs: e.Source#2/13 AsIs: )/16 AsIs: e.OutputName#2/5 HalfReuse: >/8 HalfReuse: & lambda_CompileFiles_0/1 } >/29 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[17], context[18], "*C", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[19], context[20], "mpiling ", 8 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], CompileFile, "CompileFile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::reinit_char( context[7], 'o' );
  refalrts::reinit_svar( context[12], context[10] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_name( context[1], lambda_CompileFiles_0, "lambda_CompileFiles_0" );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[27] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[19], context[28] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CompileFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_CompileFiles_1, "lambda_CompileFiles_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & CompileFiles/4 s.GenMode#1/5 s.Opt#1/6 e.Files#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    // closed e.Files#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </7 & Map/8 </9 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_CompileFiles_1/4 AsIs: s.GenMode#1/5 AsIs: s.Opt#1/6 } >/10 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocFunc, 0, 2, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icSpliceTile, 0, 6, 0},
    {refalrts::icSpliceTile, 7, 9, 0},
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
  // </0 & CompileFiles/4 s.GenMode#1/5 s.Opt#1/6 e.Files#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </7 & Map/8 </9 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_CompileFiles_1/4 AsIs: s.GenMode#1/5 AsIs: s.Opt#1/6 } >/10 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_CompileFiles_1, "lambda_CompileFiles_1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Link_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_Link_0/4 (/7 e.FileName#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.FileName#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '\"'/7 AsIs: e.FileName#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, '\"', 7},
    {refalrts::icReinitChar, 0, '\"', 8},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
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
  // </0 & lambda_Link_0/4 (/7 e.FileName#2/5 )/8 >/1
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
  // closed e.FileName#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '\"'/7 AsIs: e.FileName#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
  refalrts::reinit_char( context[4], ' ' );
  refalrts::reinit_char( context[7], '\"' );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Link(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Link_0, "lambda_Link_0" },
    { Map, "Map" },
    { System, "System" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoCppCompiler<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T E 
    //GLOBAL GEN:T E 
    // </0 & Link/4 t.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +5, 0, 0},
    //#NoCppCompilerE 
    // </0 & Link/4 # NoCppCompiler/5 e.Files#1/2 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    // closed e.Files#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Link/4 # NoCppCompiler/5 e.Files#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )E 
    // </0 & Link/4 (/5 e.CommandLine#1/7 )/6 e.Files#1/2 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    // closed e.CommandLine#1 as range 7
    // closed e.Files#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.CommandLine#1/7 } </9 Tile{ HalfReuse: & Map/5 } Tile{ HalfReuse: & lambda_Link_0/6 AsIs: e.Files#1/2 AsIs: >/1 } >/10 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icReinitFunc, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icSpliceTile, 6, 1, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceEVar, 0, 0, 7},
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
  //FAST GEN:T E 
  //GLOBAL GEN:T E 
  // </0 & Link/4 t.idx#0/5 e.idxV#0/2 >/1
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
    refalrts::start_sentence();
    //#NoCppCompilerE 
    // </0 & Link/4 # NoCppCompiler/5 e.Files#1/2 >/1
    if( ! refalrts::ident_term(  & ident_NoCppCompiler<int>::name, context[5] ) )
      continue;
    // closed e.Files#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Link/4 # NoCppCompiler/5 e.Files#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )E 
  // </0 & Link/4 (/5 e.CommandLine#1/7 )/6 e.Files#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CommandLine#1 as range 7
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.CommandLine#1/7 } </9 Tile{ HalfReuse: & Map/5 } Tile{ HalfReuse: & lambda_Link_0/6 AsIs: e.Files#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], System, "System" );
  refalrts::reinit_name( context[5], Map, "Map" );
  refalrts::reinit_name( context[6], lambda_Link_0, "lambda_Link_0" );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[6], context[1] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GetBaseNameLowerCase(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoGetFileName, "DoGetFileName" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GetBaseNameLowerCase/4 e.FileName#1/2 '.'/8 'c'/7 'p'/6 'p'/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icCharRightSave, 5, static_cast<unsigned char>('p'), 2},
    {refalrts::icCharRightSave, 6, static_cast<unsigned char>('p'), 2},
    {refalrts::icCharRightSave, 7, static_cast<unsigned char>('c'), 2},
    {refalrts::icCharRightSave, 8, static_cast<unsigned char>('.'), 2},
    // closed e.FileName#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  'c'/7 'p'/6 'p'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGetFileName/4 AsIs: e.FileName#1/2 HalfReuse: >/8 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 8},
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
  // </0 & GetBaseNameLowerCase/4 e.FileName#1/2 '.'/8 'c'/7 'p'/6 'p'/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::char_right( 'c', context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  'c'/7 'p'/6 'p'/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGetFileName/4 AsIs: e.FileName#1/2 HalfReuse: >/8 } Tile{ ]] }
  refalrts::update_name( context[4], DoGetFileName, "DoGetFileName" );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Lower, "Lower" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & DoGetFileName/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //E '/'
    // </0 & DoGetFileName/4 e.FileName#1/2 '/'/5 >/1
    {refalrts::icSave, 0, 9, 2},
    {refalrts::icCharRightSave, 5, static_cast<unsigned char>('/'), 9},
    // closed e.FileName#1 as range 9(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DoGetFileName/4 e.FileName#1/9(2) '/'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //E '\\'
    // </0 & DoGetFileName/4 e.FileName#1/2 '\\'/5 >/1
    {refalrts::icSave, 0, 9, 2},
    {refalrts::icCharRightSave, 5, static_cast<unsigned char>('\\'), 9},
    // closed e.FileName#1 as range 9(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DoGetFileName/4 e.FileName#1/9(2) '\\'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //E S 
    // </0 & DoGetFileName/4 e.FileName#1/2 s.Last#1/5 >/1
    {refalrts::icSave, 0, 9, 2},
    {refalrts::icsVarRight, 0, 5, 9},
    // closed e.FileName#1 as range 9(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGetFileName/4 } Tile{ AsIs: e.FileName#1/9(2) } >/6 </7 & Lower/8 Tile{ AsIs: s.Last#1/5 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 5},
    {refalrts::icSpliceTile, 6, 8, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & DoGetFileName/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DoGetFileName/4 >/1 {REMOVED TILE} 
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
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & DoGetFileName/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //E '/'
    // </0 & DoGetFileName/4 e.FileName#1/2 '/'/5 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_right( '/', context[9], context[10] );
    if( ! context[5] )
      continue;
    // closed e.FileName#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoGetFileName/4 e.FileName#1/9(2) '/'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //E '\\'
    // </0 & DoGetFileName/4 e.FileName#1/2 '\\'/5 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_right( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    // closed e.FileName#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoGetFileName/4 e.FileName#1/9(2) '\\'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //E S 
    // </0 & DoGetFileName/4 e.FileName#1/2 s.Last#1/5 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_right( context[5], context[9], context[10] ) )
      continue;
    // closed e.FileName#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGetFileName/4 } Tile{ AsIs: e.FileName#1/9(2) } >/6 </7 & Lower/8 Tile{ AsIs: s.Last#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], Lower, "Lower" ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[6], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & DoGetFileName/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & DoGetFileName/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Lower_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_Lower_0/4 s.Char#1/5 e.UpLo_B#3/6 s.Char#1/8 s.Lower#3/9 e.UpLo_E#3/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEPrepare, 0, 6, 2},
    {refalrts::icEStart, 0, 6, 2},
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icsRepeatLeft, 8, 5, 10},
    {refalrts::icsVarLeft, 0, 9, 10},
    // closed e.UpLo_E#3 as range 10(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_Lower_0/4 s.Char#1/5 e.UpLo_B#3/6 s.Char#1/8 s.Lower#3/9 e.UpLo_E#3/10(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Lower3 #9/1 ]] }
    {refalrts::icReinitSVar, 0, 9, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icFail, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & lambda_Lower_0/4 s.Char#1/5 e.UpLo_B#3/6 s.Char#1/8 s.Lower#3/9 e.UpLo_E#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop();
  do {
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::repeated_stvar_left( context[8], context[5], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[10], context[11] ) )
      continue;
    // closed e.UpLo_E#3 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_Lower_0/4 s.Char#1/5 e.UpLo_B#3/6 s.Char#1/8 s.Lower#3/9 e.UpLo_E#3/10(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Lower3 #9/1 ]] }
    refalrts::reinit_svar( context[1], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Lower_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { lambda_Lower_0, "lambda_Lower_0" },
    { refalrts::create_closure, "refalrts::create_closure" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz", 52}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S E 
    //GLOBAL GEN:S E 
    // </0 & lambda_Lower_1/4 s.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //S E 
    // </0 & lambda_Lower_1/4 s.Char#1/5 e.Uppers_B#2/6 s.Char#1/8 e.Uppers_E#2/2 >/1
    {refalrts::icSave, 0, 15, 2},
    {refalrts::icEPrepare, 0, 6, 15},
    {refalrts::icEStart, 0, 6, 15},
    {refalrts::icSave, 0, 17, 15},
    {refalrts::icsRepeatLeft, 8, 5, 17},
    // closed e.Uppers_E#2 as range 17(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Char#1/5 e.Uppers_B#2/6 {REMOVED TILE}  e.Uppers_E#2/17(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 }"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"/9 </11 & CreateClosure /12 & lambda_Lower_0/13 Tile{ AsIs: s.Char#1/8 } >/14 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 2, 12},
    {refalrts::icAllocFunc, 0, 1, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 9, 13, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S E 
    // </0 & lambda_Lower_1/4 s.Char#1/5 e.Uppers#2/2 >/1
    // closed e.Uppers#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_Lower_1/4 s.Char#1/5 e.Uppers#2/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Char1 #5/1 ]] }
    {refalrts::icReinitSVar, 0, 5, 1},
    {refalrts::icSetRes, 0, 0, 1},
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
  //FAST GEN:S E 
  //GLOBAL GEN:S E 
  // </0 & lambda_Lower_1/4 s.idx#0/5 e.idxV#0/2 >/1
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
    //S E 
    // </0 & lambda_Lower_1/4 s.Char#1/5 e.Uppers_B#2/6 s.Char#1/8 e.Uppers_E#2/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[15];
      context[18] = context[16];
      if( ! refalrts::repeated_stvar_left( context[8], context[5], context[17], context[18] ) )
        continue;
      // closed e.Uppers_E#2 as range 17(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  s.Char#1/5 e.Uppers_B#2/6 {REMOVED TILE}  e.Uppers_E#2/17(2) {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 }"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"/9 </11 & CreateClosure /12 & lambda_Lower_0/13 Tile{ AsIs: s.Char#1/8 } >/14 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( context[9], context[10], "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz", 52 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "refalrts::create_closure" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], lambda_Lower_0, "lambda_Lower_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[14] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], Fetch, "Fetch" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[14] );
      refalrts::push_stack( context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[9], context[13] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[15], context[16] ) );
  } while ( 0 );

  //S E 
  // </0 & lambda_Lower_1/4 s.Char#1/5 e.Uppers#2/2 >/1
  // closed e.Uppers#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_Lower_1/4 s.Char#1/5 e.Uppers#2/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Char1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Lower_1, "lambda_Lower_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & Lower/4 s.Char#1/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 & Fetch/7"ABCDEFGHIJKLMNOPQRSTUVWXYZ"/8 </10 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_Lower_1/4 AsIs: s.Char#1/5 AsIs: >/1 } >/11 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icAllocFunc, 0, 2, 7},
    {refalrts::icAllocString, 0, 0, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 6, 10, 0},
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
  // </0 & Lower/4 s.Char#1/5 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </6 & Fetch/7"ABCDEFGHIJKLMNOPQRSTUVWXYZ"/8 </10 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_Lower_1/4 AsIs: s.Char#1/5 AsIs: >/1 } >/11 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_Lower_1, "lambda_Lower_1" );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
