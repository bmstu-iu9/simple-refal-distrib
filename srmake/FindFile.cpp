// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #Current
template <typename SREFAL_PARAM_INT>
struct ident_Current {
  static const char *name() {
    return "Current";
  }
};

// identifier #False
template <typename SREFAL_PARAM_INT>
struct ident_False {
  static const char *name() {
    return "False";
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

// identifier #True
template <typename SREFAL_PARAM_INT>
struct ident_True {
  static const char *name() {
    return "True";
  }
};

extern refalrts::RefalFunction& Map_0_0;
#define Map_alias Map_0_0
#define Map_str "Map#0:0"

extern refalrts::RefalFunction& FindFiles_0_0;
#define FindFiles_alias FindFiles_0_0

extern refalrts::RefalFunction& AnalyzeFile_ByFolders_2490140914_439242415;
#define AnalyzeFile_ByFolders_alias AnalyzeFile_ByFolders_2490140914_439242415

extern refalrts::RefalFunction& AnalyzeInFolder_2490140914_439242415;
#define AnalyzeInFolder_alias AnalyzeInFolder_2490140914_439242415

extern refalrts::RefalFunction& AnalyzeFile_CheckNotFound_2490140914_439242415;
#define AnalyzeFile_CheckNotFound_alias AnalyzeFile_CheckNotFound_2490140914_439242415

extern refalrts::RefalFunction& ExistFile_0_0;
#define ExistFile_alias ExistFile_0_0
#define ExistFile_str "ExistFile#0:0"

extern refalrts::RefalFunction& ExistFile_T_2490140914_439242415;
#define ExistFile_T_alias ExistFile_T_2490140914_439242415

extern refalrts::RefalFunction& AnalyzeFile_2490140914_439242415;
#define AnalyzeFile_alias AnalyzeFile_2490140914_439242415

extern refalrts::RefalFunction& AnalyzeSource_CheckExist_2490140914_439242415;
#define AnalyzeSource_CheckExist_alias AnalyzeSource_CheckExist_2490140914_439242415

extern refalrts::RefalFunction& AnalyzeOutput_CheckExist_2490140914_439242415;
#define AnalyzeOutput_CheckExist_alias AnalyzeOutput_CheckExist_2490140914_439242415

extern refalrts::RefalFunction& AnalyzeBoth_CheckExist_2490140914_439242415;
#define AnalyzeBoth_CheckExist_alias AnalyzeBoth_CheckExist_2490140914_439242415


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FindFiles {
    static refalrts::RefalFunction *functions[] = {
      & AnalyzeFile_ByFolders_alias,
      & Map_alias
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Current<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & FindFiles/4 (/7 e.Folders#1/5 )/8 e.Files#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Folders#1 as range 5
      // closed e.Files#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </9 & Map/10 Tile{ HalfReuse: (/0 Reuse: & AnalyzeFile-ByFolders/4 HalfReuse: # Current/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: e.Files#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 1, 10},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitIdent, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FindFiles_0_0

} // unnamed namespace

static refalrts::RASLFunction descr_FindFiles(
  "FindFiles#0:0",
  scope_FindFiles::raa,
  scope_FindFiles::functions,
  scope_FindFiles::idents,
  scope_FindFiles::numbers,
  scope_FindFiles::strings
);
refalrts::RefalFunction& FindFiles_0_0 = descr_FindFiles;

#else
static refalrts::FnResult func_FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & FindFiles/4 (/7 e.Folders#1/5 )/8 e.Files#1/2 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map/10 Tile{ HalfReuse: (/0 Reuse: & AnalyzeFile-ByFolders/4 HalfReuse: # Current/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: e.Files#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & Map_alias ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::update_name( context[4], & AnalyzeFile_ByFolders_alias );
  refalrts::reinit_ident( context[7], & ident_Current<int>::name );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_FindFiles(func_FindFiles, "FindFiles#0:0");
refalrts::RefalFunction& FindFiles_0_0 = descr_FindFiles;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_AnalyzeFile_ByFolders {
    static refalrts::RefalFunction *functions[] = {
      & AnalyzeFile_CheckNotFound_alias,
      & AnalyzeInFolder_alias,
      & Map_alias
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & AnalyzeFile-ByFolders/4 e.Folders#1/2 (/7 e.FileName#1/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      // closed e.Folders#1 as range 2
      // closed e.FileName#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile-CheckNotFound/4 } Tile{ AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 HalfReuse: </1 } & Map/9 (/10 & AnalyzeInFolder/11 e.FileName#1/5/12 )/14 Tile{ AsIs: e.Folders#1/2 } >/15 >/16 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 2, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icAllocFunc, 0, 1, 11},
      {refalrts::icCopyEVar, 12, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icLinkBrackets, 10, 14, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 9, 14, 0},
      {refalrts::icSpliceTile, 7, 1, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_AnalyzeFile_ByFolders_2490140914_439242415

} // unnamed namespace

static refalrts::RASLFunction descr_AnalyzeFile_ByFolders(
  "AnalyzeFile-ByFolders#2490140914:439242415",
  scope_AnalyzeFile_ByFolders::raa,
  scope_AnalyzeFile_ByFolders::functions,
  scope_AnalyzeFile_ByFolders::idents,
  scope_AnalyzeFile_ByFolders::numbers,
  scope_AnalyzeFile_ByFolders::strings
);
refalrts::RefalFunction& AnalyzeFile_ByFolders_2490140914_439242415 = descr_AnalyzeFile_ByFolders;

#else
static refalrts::FnResult func_AnalyzeFile_ByFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & AnalyzeFile-ByFolders/4 e.Folders#1/2 (/7 e.FileName#1/5 )/8 >/1
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
  // closed e.Folders#1 as range 2
  // closed e.FileName#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile-CheckNotFound/4 } Tile{ AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 HalfReuse: </1 } & Map/9 (/10 & AnalyzeInFolder/11 e.FileName#1/5/12 )/14 Tile{ AsIs: e.Folders#1/2 } >/15 >/16 Tile{ ]] }
  if( ! refalrts::alloc_name( context[9], & Map_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], & AnalyzeInFolder_alias ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & AnalyzeFile_CheckNotFound_alias );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[10], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeFile_ByFolders(func_AnalyzeFile_ByFolders, "AnalyzeFile-ByFolders#2490140914:439242415");
refalrts::RefalFunction& AnalyzeFile_ByFolders_2490140914_439242415 = descr_AnalyzeFile_ByFolders;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_AnalyzeInFolder {
    static refalrts::RefalFunction *functions[] = {
      & AnalyzeFile_alias
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Current<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 9, 0, 0},
      //FAST GEN: e.$ t.$
      //GLOBAL GEN: e.$ t.$
      // </0 & AnalyzeInFolder/4 e.idx#0/2 t.idxV#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarRightSave, 0, 5, 2},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // e.idx # Current
      // </0 & AnalyzeInFolder/4 e.FileName#1/2 # Current/5 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      // closed e.FileName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile/4 AsIs: e.FileName#1/2 HalfReuse: >/5 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 5},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 5},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // e.idx ( e.idx )
      // </0 & AnalyzeInFolder/4 e.FileName#1/2 (/5 e.Folder#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      // closed e.FileName#1 as range 2
      // closed e.Folder#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile/4 } Tile{ AsIs: e.Folder#1/7 } Tile{ HalfReuse: '/'/5 } Tile{ AsIs: e.FileName#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, '/', 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_AnalyzeInFolder_2490140914_439242415

} // unnamed namespace

static refalrts::RASLFunction descr_AnalyzeInFolder(
  "AnalyzeInFolder#2490140914:439242415",
  scope_AnalyzeInFolder::raa,
  scope_AnalyzeInFolder::functions,
  scope_AnalyzeInFolder::idents,
  scope_AnalyzeInFolder::numbers,
  scope_AnalyzeInFolder::strings
);
refalrts::RefalFunction& AnalyzeInFolder_2490140914_439242415 = descr_AnalyzeInFolder;

#else
static refalrts::FnResult func_AnalyzeInFolder(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  //FAST GEN: e.$ t.$
  //GLOBAL GEN: e.$ t.$
  // </0 & AnalyzeInFolder/4 e.idx#0/2 t.idxV#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idx#0 as range 2
  do {
    // e.idx # Current
    // </0 & AnalyzeInFolder/4 e.FileName#1/2 # Current/5 >/1
    if( ! refalrts::ident_term(  & ident_Current<int>::name, context[5] ) )
      continue;
    // closed e.FileName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile/4 AsIs: e.FileName#1/2 HalfReuse: >/5 } Tile{ ]] }
    refalrts::update_name( context[4], & AnalyzeFile_alias );
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

  // e.idx ( e.idx )
  // </0 & AnalyzeInFolder/4 e.FileName#1/2 (/5 e.Folder#1/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  // closed e.Folder#1 as range 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile/4 } Tile{ AsIs: e.Folder#1/7 } Tile{ HalfReuse: '/'/5 } Tile{ AsIs: e.FileName#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], & AnalyzeFile_alias );
  refalrts::reinit_char( context[5], '/' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeInFolder(func_AnalyzeInFolder, "AnalyzeInFolder#2490140914:439242415");
refalrts::RefalFunction& AnalyzeInFolder_2490140914_439242415 = descr_AnalyzeInFolder;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_AnalyzeFile_CheckNotFound {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NotFound<int>::name,
      & ident_Output<int>::name,
      & ident_Source<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 20, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( e.idx ) ( # Source ( e.idx ) e.idx ) e.idx
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # Source/13 (/16 e.Source#1/14 )/17 e.Output#1/9 )/12 e.Variants#1/2 >/1
      {refalrts::icSave, 0, 18, 2},
      {refalrts::icBracketLeftSave, 0, 9, 18},
      {refalrts::icIdentLeftSave, 13, 2, 9},
      {refalrts::icBracketLeftSave, 0, 14, 9},
      // closed e.FileName#1 as range 5
      // closed e.Source#1 as range 14
      // closed e.Output#1 as range 9
      // closed e.Variants#1 as range 18(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/18(2) >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Source/13 AsIs: (/16 AsIs: e.Source#1/14 AsIs: )/17 AsIs: e.Output#1/9 AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 16, 17, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) ( # Output e.idx ) e.idx
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # Output/13 e.Output#1/9 )/12 e.Variants#1/2 >/1
      {refalrts::icSave, 0, 18, 2},
      {refalrts::icBracketLeftSave, 0, 9, 18},
      {refalrts::icIdentLeftSave, 13, 1, 9},
      // closed e.FileName#1 as range 5
      // closed e.Output#1 as range 9
      // closed e.Variants#1 as range 18(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/18(2) >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Output/13 AsIs: e.Output#1/9 AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( e.idx ) ( # NotFound e.idx ) e.idx
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # NotFound/13 e.NotFoundPath#1/9 )/12 e.Variants#1/2 >/1
      {refalrts::icSave, 0, 18, 2},
      {refalrts::icBracketLeftSave, 0, 9, 18},
      {refalrts::icIdentLeftSave, 13, 0, 9},
      // closed e.FileName#1 as range 5
      // closed e.NotFoundPath#1 as range 9
      // closed e.Variants#1 as range 18(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/11 # NotFound/13 e.NotFoundPath#1/9 )/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & AnalyzeFile-CheckNotFound/4 AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ AsIs: e.Variants#1/18(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 18},
      {refalrts::icTrash, 0, 0, 8},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx )
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 >/1
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.FileName#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # NotFound/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitIdent, 0, 0, 7},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_AnalyzeFile_CheckNotFound_2490140914_439242415

} // unnamed namespace

static refalrts::RASLFunction descr_AnalyzeFile_CheckNotFound(
  "AnalyzeFile-CheckNotFound#2490140914:439242415",
  scope_AnalyzeFile_CheckNotFound::raa,
  scope_AnalyzeFile_CheckNotFound::functions,
  scope_AnalyzeFile_CheckNotFound::idents,
  scope_AnalyzeFile_CheckNotFound::numbers,
  scope_AnalyzeFile_CheckNotFound::strings
);
refalrts::RefalFunction& AnalyzeFile_CheckNotFound_2490140914_439242415 = descr_AnalyzeFile_CheckNotFound;

#else
static refalrts::FnResult func_AnalyzeFile_CheckNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ( # Source ( e.idx ) e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # Source/13 (/16 e.Source#1/14 )/17 e.Output#1/9 )/12 e.Variants#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[18], context[19] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Source<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.FileName#1 as range 5
    // closed e.Source#1 as range 14
    // closed e.Output#1 as range 9
    // closed e.Variants#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/18(2) >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Source/13 AsIs: (/16 AsIs: e.Source#1/14 AsIs: )/17 AsIs: e.Output#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Output e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # Output/13 e.Output#1/9 )/12 e.Variants#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[18], context[19] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Output<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.Output#1 as range 9
    // closed e.Variants#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/18(2) >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Output/13 AsIs: e.Output#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # NotFound e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # NotFound/13 e.NotFoundPath#1/9 )/12 e.Variants#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[18], context[19] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_NotFound<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.NotFoundPath#1 as range 9
    // closed e.Variants#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/11 # NotFound/13 e.NotFoundPath#1/9 )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AnalyzeFile-CheckNotFound/4 AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ AsIs: e.Variants#1/18(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # NotFound/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_NotFound<int>::name );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeFile_CheckNotFound(func_AnalyzeFile_CheckNotFound, "AnalyzeFile-CheckNotFound#2490140914:439242415");
refalrts::RefalFunction& AnalyzeFile_CheckNotFound_2490140914_439242415 = descr_AnalyzeFile_CheckNotFound;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExistFile_T {
    static refalrts::RefalFunction *functions[] = {
      & ExistFile_alias
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & ExistFile-T/4 e.FileName#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.FileName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } e.FileName#1/2/5 Tile{ ]] }
      {refalrts::icCopyEVar, 5, 2, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExistFile_T_2490140914_439242415

} // unnamed namespace

static refalrts::RASLFunction descr_ExistFile_T(
  "ExistFile-T#2490140914:439242415",
  scope_ExistFile_T::raa,
  scope_ExistFile_T::functions,
  scope_ExistFile_T::idents,
  scope_ExistFile_T::numbers,
  scope_ExistFile_T::strings
);
refalrts::RefalFunction& ExistFile_T_2490140914_439242415 = descr_ExistFile_T;

#else
static refalrts::FnResult func_ExistFile_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & ExistFile-T/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } e.FileName#1/2/5 Tile{ ]] }
  if (! refalrts::copy_evar(context[5], context[6], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ExistFile_alias );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_ExistFile_T(func_ExistFile_T, "ExistFile-T#2490140914:439242415");
refalrts::RefalFunction& ExistFile_T_2490140914_439242415 = descr_ExistFile_T;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_AnalyzeFile {
    static refalrts::RefalFunction *functions[] = {
      & ExistFile_T_alias,
      & AnalyzeBoth_CheckExist_alias,
      & AnalyzeOutput_CheckExist_alias,
      & AnalyzeSource_CheckExist_alias
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {".cpp", 4},
      {"sref", 4}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 22, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & AnalyzeFile/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // e.idx '.sref'
      // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/9 's'/8 'r'/7 'e'/6 'f'/5 >/1
      {refalrts::icSave, 0, 20, 2},
      {refalrts::icCharRightSave, 5, static_cast<unsigned char>('f'), 20},
      {refalrts::icCharRightSave, 6, static_cast<unsigned char>('e'), 20},
      {refalrts::icCharRightSave, 7, static_cast<unsigned char>('r'), 20},
      {refalrts::icCharRightSave, 8, static_cast<unsigned char>('s'), 20},
      {refalrts::icCharRightSave, 9, static_cast<unsigned char>('.'), 20},
      // closed e.FileName#1 as range 20(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </10 & AnalyzeSource-CheckExist/11 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/20(2) AsIs: '.'/9 AsIs: 's'/8 AsIs: 'r'/7 AsIs: 'e'/6 AsIs: 'f'/5 AsIs: >/1 } >/12 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 3, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // e.idx '.cpp'
      // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/8 'c'/7 'p'/6 'p'/5 >/1
      {refalrts::icSave, 0, 20, 2},
      {refalrts::icCharRightSave, 5, static_cast<unsigned char>('p'), 20},
      {refalrts::icCharRightSave, 6, static_cast<unsigned char>('p'), 20},
      {refalrts::icCharRightSave, 7, static_cast<unsigned char>('c'), 20},
      {refalrts::icCharRightSave, 8, static_cast<unsigned char>('.'), 20},
      // closed e.FileName#1 as range 20(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </9 & AnalyzeOutput-CheckExist/10 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/20(2) AsIs: '.'/8 AsIs: 'c'/7 AsIs: 'p'/6 AsIs: 'p'/5 AsIs: >/1 } >/11 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 2, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // e.idx
      // </0 & AnalyzeFile/4 e.FileName#1/2 >/1
      // closed e.FileName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & AnalyzeBoth-CheckExist/6 (/7 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/2 HalfReuse: '.'/1 }"sref"/8 >/10 )/11 </12 & ExistFile-T/13 e.FileName#1/2/14".cpp"/16 >/18 >/19 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 1, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
      {refalrts::icAllocString, 0, 1, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icAllocFunc, 0, 0, 13},
      {refalrts::icCopyEVar, 14, 2, 0},
      {refalrts::icAllocString, 0, 0, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, '.', 1},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 7, 11, 0},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 19, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 5, 7, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_AnalyzeFile_2490140914_439242415

} // unnamed namespace

static refalrts::RASLFunction descr_AnalyzeFile(
  "AnalyzeFile#2490140914:439242415",
  scope_AnalyzeFile::raa,
  scope_AnalyzeFile::functions,
  scope_AnalyzeFile::idents,
  scope_AnalyzeFile::numbers,
  scope_AnalyzeFile::strings
);
refalrts::RefalFunction& AnalyzeFile_2490140914_439242415 = descr_AnalyzeFile;

#else
static refalrts::FnResult func_AnalyzeFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & AnalyzeFile/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx '.sref'
    // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/9 's'/8 'r'/7 'e'/6 'f'/5 >/1
    context[20] = context[2];
    context[21] = context[3];
    context[5] = refalrts::char_right( 'f', context[20], context[21] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'e', context[20], context[21] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'r', context[20], context[21] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 's', context[20], context[21] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( '.', context[20], context[21] );
    if( ! context[9] )
      continue;
    // closed e.FileName#1 as range 20(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & AnalyzeSource-CheckExist/11 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/20(2) AsIs: '.'/9 AsIs: 's'/8 AsIs: 'r'/7 AsIs: 'e'/6 AsIs: 'f'/5 AsIs: >/1 } >/12 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], & AnalyzeSource_CheckExist_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & ExistFile_T_alias );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '.cpp'
    // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/8 'c'/7 'p'/6 'p'/5 >/1
    context[20] = context[2];
    context[21] = context[3];
    context[5] = refalrts::char_right( 'p', context[20], context[21] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'p', context[20], context[21] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'c', context[20], context[21] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( '.', context[20], context[21] );
    if( ! context[8] )
      continue;
    // closed e.FileName#1 as range 20(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & AnalyzeOutput-CheckExist/10 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/20(2) AsIs: '.'/8 AsIs: 'c'/7 AsIs: 'p'/6 AsIs: 'p'/5 AsIs: >/1 } >/11 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], & AnalyzeOutput_CheckExist_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & ExistFile_T_alias );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & AnalyzeFile/4 e.FileName#1/2 >/1
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & AnalyzeBoth-CheckExist/6 (/7 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/2 HalfReuse: '.'/1 }"sref"/8 >/10 )/11 </12 & ExistFile-T/13 e.FileName#1/2/14".cpp"/16 >/18 >/19 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & AnalyzeBoth_CheckExist_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "sref", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], & ExistFile_T_alias ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[14], context[15], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], ".cpp", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ExistFile_T_alias );
  refalrts::reinit_char( context[1], '.' );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[19] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeFile(func_AnalyzeFile, "AnalyzeFile#2490140914:439242415");
refalrts::RefalFunction& AnalyzeFile_2490140914_439242415 = descr_AnalyzeFile;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_AnalyzeSource_CheckExist {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NotFound<int>::name,
      & ident_False<int>::name,
      & ident_Source<int>::name,
      & ident_True<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {".cpp", 4}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: s.$ e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & AnalyzeSource-CheckExist/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // # True e.idx '.sref'
      // </0 & AnalyzeSource-CheckExist/4 # True/5 e.UnitName#1/2 '.'/10 's'/9 'r'/8 'e'/7 'f'/6 >/1
      {refalrts::icIdentTerm, 0, 3, 5},
      {refalrts::icSave, 0, 16, 2},
      {refalrts::icCharRightSave, 6, static_cast<unsigned char>('f'), 16},
      {refalrts::icCharRightSave, 7, static_cast<unsigned char>('e'), 16},
      {refalrts::icCharRightSave, 8, static_cast<unsigned char>('r'), 16},
      {refalrts::icCharRightSave, 9, static_cast<unsigned char>('s'), 16},
      {refalrts::icCharRightSave, 10, static_cast<unsigned char>('.'), 16},
      // closed e.UnitName#1 as range 16(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Source/4 HalfReuse: (/5 AsIs: e.UnitName#1/16(2) AsIs: '.'/10 AsIs: 's'/9 AsIs: 'r'/8 AsIs: 'e'/7 AsIs: 'f'/6 HalfReuse: )/1 } e.UnitName#1/16(2)/11".cpp"/13 )/15 Tile{ ]] }
      {refalrts::icCopyEVar, 11, 16, 0},
      {refalrts::icAllocString, 0, 0, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 2, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 5},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 15, 0},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 13, 15, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // # False e.idx
      // </0 & AnalyzeSource-CheckExist/4 # False/5 e.SourceName#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      // closed e.SourceName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.SourceName#1/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icUpdateIdent, 0, 0, 5},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_AnalyzeSource_CheckExist_2490140914_439242415

} // unnamed namespace

static refalrts::RASLFunction descr_AnalyzeSource_CheckExist(
  "AnalyzeSource-CheckExist#2490140914:439242415",
  scope_AnalyzeSource_CheckExist::raa,
  scope_AnalyzeSource_CheckExist::functions,
  scope_AnalyzeSource_CheckExist::idents,
  scope_AnalyzeSource_CheckExist::numbers,
  scope_AnalyzeSource_CheckExist::strings
);
refalrts::RefalFunction& AnalyzeSource_CheckExist_2490140914_439242415 = descr_AnalyzeSource_CheckExist;

#else
static refalrts::FnResult func_AnalyzeSource_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & AnalyzeSource-CheckExist/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # True e.idx '.sref'
    // </0 & AnalyzeSource-CheckExist/4 # True/5 e.UnitName#1/2 '.'/10 's'/9 'r'/8 'e'/7 'f'/6 >/1
    if( ! refalrts::ident_term(  & ident_True<int>::name, context[5] ) )
      continue;
    context[16] = context[2];
    context[17] = context[3];
    context[6] = refalrts::char_right( 'f', context[16], context[17] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'e', context[16], context[17] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'r', context[16], context[17] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 's', context[16], context[17] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( '.', context[16], context[17] );
    if( ! context[10] )
      continue;
    // closed e.UnitName#1 as range 16(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Source/4 HalfReuse: (/5 AsIs: e.UnitName#1/16(2) AsIs: '.'/10 AsIs: 's'/9 AsIs: 'r'/8 AsIs: 'e'/7 AsIs: 'f'/6 HalfReuse: )/1 } e.UnitName#1/16(2)/11".cpp"/13 )/15 Tile{ ]] }
    if (! refalrts::copy_evar(context[11], context[12], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], ".cpp", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Source<int>::name );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[15] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeSource-CheckExist/4 # False/5 e.SourceName#1/2 >/1
  if( ! refalrts::ident_term(  & ident_False<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.SourceName#1/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::update_ident( context[5], & ident_NotFound<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeSource_CheckExist(func_AnalyzeSource_CheckExist, "AnalyzeSource-CheckExist#2490140914:439242415");
refalrts::RefalFunction& AnalyzeSource_CheckExist_2490140914_439242415 = descr_AnalyzeSource_CheckExist;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_AnalyzeOutput_CheckExist {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NotFound<int>::name,
      & ident_False<int>::name,
      & ident_Output<int>::name,
      & ident_True<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 6, 0, 0},
      //FAST GEN: s.$ e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & AnalyzeOutput-CheckExist/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // # True e.idx
      // </0 & AnalyzeOutput-CheckExist/4 # True/5 e.OutName#1/2 >/1
      {refalrts::icIdentTerm, 0, 3, 5},
      // closed e.OutName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # Output/5 AsIs: e.OutName#1/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icUpdateIdent, 0, 2, 5},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // # False e.idx
      // </0 & AnalyzeOutput-CheckExist/4 # False/5 e.OutName#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      // closed e.OutName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.OutName#1/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icUpdateIdent, 0, 0, 5},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_AnalyzeOutput_CheckExist_2490140914_439242415

} // unnamed namespace

static refalrts::RASLFunction descr_AnalyzeOutput_CheckExist(
  "AnalyzeOutput-CheckExist#2490140914:439242415",
  scope_AnalyzeOutput_CheckExist::raa,
  scope_AnalyzeOutput_CheckExist::functions,
  scope_AnalyzeOutput_CheckExist::idents,
  scope_AnalyzeOutput_CheckExist::numbers,
  scope_AnalyzeOutput_CheckExist::strings
);
refalrts::RefalFunction& AnalyzeOutput_CheckExist_2490140914_439242415 = descr_AnalyzeOutput_CheckExist;

#else
static refalrts::FnResult func_AnalyzeOutput_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & AnalyzeOutput-CheckExist/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # True e.idx
    // </0 & AnalyzeOutput-CheckExist/4 # True/5 e.OutName#1/2 >/1
    if( ! refalrts::ident_term(  & ident_True<int>::name, context[5] ) )
      continue;
    // closed e.OutName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # Output/5 AsIs: e.OutName#1/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::update_ident( context[5], & ident_Output<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeOutput-CheckExist/4 # False/5 e.OutName#1/2 >/1
  if( ! refalrts::ident_term(  & ident_False<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OutName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.OutName#1/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::update_ident( context[5], & ident_NotFound<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeOutput_CheckExist(func_AnalyzeOutput_CheckExist, "AnalyzeOutput-CheckExist#2490140914:439242415");
refalrts::RefalFunction& AnalyzeOutput_CheckExist_2490140914_439242415 = descr_AnalyzeOutput_CheckExist;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_AnalyzeBoth_CheckExist {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NotFound<int>::name,
      & ident_False<int>::name,
      & ident_Output<int>::name,
      & ident_True<int>::name,
      & ident_Source<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 24, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) s.$ e.$
      // </0 & AnalyzeBoth-CheckExist/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      // closed e.idxTV#0 as range 2
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // ( # True e.idx ) s.idx e.idx
      // </0 & AnalyzeBoth-CheckExist/4 (/7 # True/10 e.SourceName#1/5 )/8 s.Res#1/9 e.OutName#1/2 >/1
      {refalrts::icSave, 0, 22, 5},
      {refalrts::icIdentLeftSave, 10, 3, 22},
      // closed e.SourceName#1 as range 22(5)
      // closed e.OutName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.Res#1/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Source/7 HalfReuse: (/10 AsIs: e.SourceName#1/22(5) AsIs: )/8 } Tile{ AsIs: e.OutName#1/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitIdent, 0, 4, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icLinkBrackets, 10, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # False e.idx ) # True e.idx
      // </0 & AnalyzeBoth-CheckExist/4 (/7 # False/10 e.SourceName#1/5 )/8 # True/9 e.OutName#1/2 >/1
      {refalrts::icIdentTerm, 0, 3, 9},
      {refalrts::icSave, 0, 22, 5},
      {refalrts::icIdentLeftSave, 10, 1, 22},
      // closed e.SourceName#1 as range 22(5)
      // closed e.OutName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & AnalyzeBoth-CheckExist/4 (/7 # False/10 e.SourceName#1/22(5) {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 Reuse: # Output/9 AsIs: e.OutName#1/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icUpdateIdent, 0, 2, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 8, 1, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( # False e.idx '.sref' ) # False e.idx '.cpp'
      // </0 & AnalyzeBoth-CheckExist/4 (/7 # False/10 e.UnitName#1/5 '.'/15 's'/14 'r'/13 'e'/12 'f'/11 )/8 # False/9 e.UnitName#1/20 '.'/19 'c'/18 'p'/17 'p'/16 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      {refalrts::icIdentLeftSave, 10, 1, 5},
      {refalrts::icCharRightSave, 11, static_cast<unsigned char>('f'), 5},
      {refalrts::icCharRightSave, 12, static_cast<unsigned char>('e'), 5},
      {refalrts::icCharRightSave, 13, static_cast<unsigned char>('r'), 5},
      {refalrts::icCharRightSave, 14, static_cast<unsigned char>('s'), 5},
      {refalrts::icCharRightSave, 15, static_cast<unsigned char>('.'), 5},
      {refalrts::icCharRightSave, 16, static_cast<unsigned char>('p'), 2},
      {refalrts::icCharRightSave, 17, static_cast<unsigned char>('p'), 2},
      {refalrts::icCharRightSave, 18, static_cast<unsigned char>('c'), 2},
      {refalrts::icCharRightSave, 19, static_cast<unsigned char>('.'), 2},
      // closed e.UnitName#1 as range 5
      {refalrts::iceRepeatLeft, 20, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & AnalyzeBoth-CheckExist/4 {REMOVED TILE} 's'/14 'r'/13 'e'/12 'f'/11 )/8 # False/9 e.UnitName#1/20 '.'/19 'c'/18 'p'/17 'p'/16 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # NotFound/10 AsIs: e.UnitName#1/5 HalfReuse: )/15 } Tile{ ]] }
      {refalrts::icUpdateIdent, 0, 0, 10},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icLinkBrackets, 7, 15, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 15, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_AnalyzeBoth_CheckExist_2490140914_439242415

} // unnamed namespace

static refalrts::RASLFunction descr_AnalyzeBoth_CheckExist(
  "AnalyzeBoth-CheckExist#2490140914:439242415",
  scope_AnalyzeBoth_CheckExist::raa,
  scope_AnalyzeBoth_CheckExist::functions,
  scope_AnalyzeBoth_CheckExist::idents,
  scope_AnalyzeBoth_CheckExist::numbers,
  scope_AnalyzeBoth_CheckExist::strings
);
refalrts::RefalFunction& AnalyzeBoth_CheckExist_2490140914_439242415 = descr_AnalyzeBoth_CheckExist;

#else
static refalrts::FnResult func_AnalyzeBoth_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & AnalyzeBoth-CheckExist/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTV#0 as range 2
  do {
    // ( # True e.idx ) s.idx e.idx
    // </0 & AnalyzeBoth-CheckExist/4 (/7 # True/10 e.SourceName#1/5 )/8 s.Res#1/9 e.OutName#1/2 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[10] = refalrts::ident_left(  & ident_True<int>::name, context[22], context[23] );
    if( ! context[10] )
      continue;
    // closed e.SourceName#1 as range 22(5)
    // closed e.OutName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.Res#1/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Source/7 HalfReuse: (/10 AsIs: e.SourceName#1/22(5) AsIs: )/8 } Tile{ AsIs: e.OutName#1/2 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Source<int>::name );
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::link_brackets( context[10], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # False e.idx ) # True e.idx
    // </0 & AnalyzeBoth-CheckExist/4 (/7 # False/10 e.SourceName#1/5 )/8 # True/9 e.OutName#1/2 >/1
    if( ! refalrts::ident_term(  & ident_True<int>::name, context[9] ) )
      continue;
    context[22] = context[5];
    context[23] = context[6];
    context[10] = refalrts::ident_left(  & ident_False<int>::name, context[22], context[23] );
    if( ! context[10] )
      continue;
    // closed e.SourceName#1 as range 22(5)
    // closed e.OutName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeBoth-CheckExist/4 (/7 # False/10 e.SourceName#1/22(5) {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 Reuse: # Output/9 AsIs: e.OutName#1/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::update_ident( context[9], & ident_Output<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[8], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # False e.idx '.sref' ) # False e.idx '.cpp'
  // </0 & AnalyzeBoth-CheckExist/4 (/7 # False/10 e.UnitName#1/5 '.'/15 's'/14 'r'/13 'e'/12 'f'/11 )/8 # False/9 e.UnitName#1/20 '.'/19 'c'/18 'p'/17 'p'/16 >/1
  if( ! refalrts::ident_term(  & ident_False<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::ident_left(  & ident_False<int>::name, context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::char_right( 'f', context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::char_right( 'e', context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::char_right( 'r', context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::char_right( 's', context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( '.', context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::char_right( 'c', context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.UnitName#1 as range 5
  if( ! refalrts::repeated_evar_left( context[20], context[21], context[5], context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AnalyzeBoth-CheckExist/4 {REMOVED TILE} 's'/14 'r'/13 'e'/12 'f'/11 )/8 # False/9 e.UnitName#1/20 '.'/19 'c'/18 'p'/17 'p'/16 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # NotFound/10 AsIs: e.UnitName#1/5 HalfReuse: )/15 } Tile{ ]] }
  refalrts::update_ident( context[10], & ident_NotFound<int>::name );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeBoth_CheckExist(func_AnalyzeBoth_CheckExist, "AnalyzeBoth-CheckExist#2490140914:439242415");
refalrts::RefalFunction& AnalyzeBoth_CheckExist_2490140914_439242415 = descr_AnalyzeBoth_CheckExist;

#endif

//End of file
