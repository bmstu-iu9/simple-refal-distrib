// Automatically generated file. Don't edit!
#include "refalrts.h"


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

extern refalrts::RefalFunction LoadFile;
extern refalrts::RefalFunction Map;
extern refalrts::RefalFunction Trim;
extern refalrts::RefalFunction FindFiles;
#ifdef INTERPRET
extern refalrts::RASLFunction CreateFileList;
#else
extern refalrts::RefalFunction CreateFileList;
#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction DoCreateFileList;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction DoCreateFileList;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction FindImports;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction FindImports;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction LoadList;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction LoadList;
} // unnamed namespace

#endif

#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CreateFileList {
    static refalrts::RefalFunction *functions[] = {
      & DoCreateFileList,
      & FindFiles
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 20, 0, 0},
      // </0 & CreateFileList/4 (/7 e.Folders#1/5 )/8 e.Unit#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Folders#1 as range 5
      // closed e.Unit#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 } (/9 )/10 </11 & FindFiles/12 (/13 e.Folders#1/5/14 )/16 (/17 Tile{ AsIs: e.Unit#1/2 } )/18 >/19 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 1, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
      {refalrts::icCopyEVar, 14, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 13, 16, 0},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 18, 19, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 9, 17, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CreateFileList

} // unnamed namespace

refalrts::RASLFunction CreateFileList(
  "CreateFileList",
  scope_CreateFileList::raa,
  scope_CreateFileList::functions,
  scope_CreateFileList::idents,
  scope_CreateFileList::numbers,
  scope_CreateFileList::strings
);

#else
static refalrts::FnResult func_CreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & CreateFileList/4 (/7 e.Folders#1/5 )/8 e.Unit#1/2 >/1
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
  // closed e.Unit#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 } (/9 )/10 </11 & FindFiles/12 (/13 e.Folders#1/5/14 )/16 (/17 Tile{ AsIs: e.Unit#1/2 } )/18 >/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & FindFiles ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & DoCreateFileList );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction CreateFileList(func_CreateFileList, "CreateFileList");

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DoCreateFileList {
    static refalrts::RefalFunction *functions[] = {
      & LoadList
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 32, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
      // </0 & DoCreateFileList/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      // closed e.idxTT#0 as range 2
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( e.idx ) ( e.idx )
      // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules#1/9 )/12 >/1
      {refalrts::icSave, 0, 26, 2},
      {refalrts::icEmpty, 0, 0, 26},
      // closed e.Folders#1 as range 5
      // closed e.Modules#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Modules#1/9 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
      // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules-B#1/17 (/21 e.NextModule#1/23 )/22 e.Modules-E#1/9 )/12 (/15 e.NextModule#1/13 )/16 e.NotScanned#1/2 >/1
      {refalrts::icSave, 0, 26, 2},
      {refalrts::icBracketLeftSave, 0, 13, 26},
      // closed e.Folders#1 as range 5
      // closed e.NextModule#1 as range 13
      // closed e.NotScanned#1 as range 26(2)
      {refalrts::icSave, 0, 28, 9},
      {refalrts::icEPrepare, 0, 17, 28},
      {refalrts::icEStart, 0, 17, 28},
      {refalrts::icSave, 0, 30, 28},
      {refalrts::icBracketLeftSave, 0, 19, 30},
      {refalrts::iceRepeatLeft, 23, 13, 19},
      {refalrts::icEmpty, 0, 0, 19},
      // closed e.Modules-E#1 as range 30(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/15 e.NextModule#1/13 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Modules-B#1/17 AsIs: (/21 AsIs: e.NextModule#1/23 AsIs: )/22 AsIs: e.Modules-E#1/30(9) AsIs: )/12 } Tile{ AsIs: e.NotScanned#1/26(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 21, 22, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 26},
      {refalrts::icTrash, 0, 0, 12},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
      // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules#1/9 )/12 (/15 e.NextModule#1/13 )/16 e.NotScanned#1/2 >/1
      {refalrts::icBracketLeftSave, 0, 13, 2},
      // closed e.Folders#1 as range 5
      // closed e.Modules#1 as range 9
      // closed e.NextModule#1 as range 13
      // closed e.NotScanned#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Modules#1/9 HalfReuse: (/12 } e.NextModule#1/13/17 )/19 )/20 </21 & LoadList/22 (/23 e.Folders#1/5/24 Tile{ HalfReuse: )/15 AsIs: e.NextModule#1/13 HalfReuse: >/16 AsIs: e.NotScanned#1/2 AsIs: >/1 ]] }
      {refalrts::icCopyEVar, 17, 13, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
      {refalrts::icAllocFunc, 0, 0, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 23},
      {refalrts::icCopyEVar, 24, 5, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icLinkBrackets, 23, 15, 0},
      {refalrts::icLinkBrackets, 11, 20, 0},
      {refalrts::icLinkBrackets, 12, 19, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 15},
      {refalrts::icSpliceTile, 24, 25, 0},
      {refalrts::icSpliceTile, 19, 23, 0},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DoCreateFileList

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction DoCreateFileList(
  "DoCreateFileList",
  scope_DoCreateFileList::raa,
  scope_DoCreateFileList::functions,
  scope_DoCreateFileList::idents,
  scope_DoCreateFileList::numbers,
  scope_DoCreateFileList::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_DoCreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
  // </0 & DoCreateFileList/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
  // closed e.idxTT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx )
    // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules#1/9 )/12 >/1
    context[26] = context[2];
    context[27] = context[3];
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    // closed e.Folders#1 as range 5
    // closed e.Modules#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Modules#1/9 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
    // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules-B#1/17 (/21 e.NextModule#1/23 )/22 e.Modules-E#1/9 )/12 (/15 e.NextModule#1/13 )/16 e.NotScanned#1/2 >/1
    context[26] = context[2];
    context[27] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[26], context[27] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Folders#1 as range 5
    // closed e.NextModule#1 as range 13
    // closed e.NotScanned#1 as range 26(2)
    context[28] = context[9];
    context[29] = context[10];
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[30] = context[28];
      context[31] = context[29];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[30], context[31] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      if( ! refalrts::repeated_evar_left( context[23], context[24], context[13], context[14], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Modules-E#1 as range 30(9)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} (/15 e.NextModule#1/13 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Modules-B#1/17 AsIs: (/21 AsIs: e.NextModule#1/23 AsIs: )/22 AsIs: e.Modules-E#1/30(9) AsIs: )/12 } Tile{ AsIs: e.NotScanned#1/26(2) } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[12], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[17], context[18], context[28], context[29] ) );
  } while ( 0 );

  // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
  // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules#1/9 )/12 (/15 e.NextModule#1/13 )/16 e.NotScanned#1/2 >/1
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Folders#1 as range 5
  // closed e.Modules#1 as range 9
  // closed e.NextModule#1 as range 13
  // closed e.NotScanned#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Modules#1/9 HalfReuse: (/12 } e.NextModule#1/13/17 )/19 )/20 </21 & LoadList/22 (/23 e.Folders#1/5/24 Tile{ HalfReuse: )/15 AsIs: e.NextModule#1/13 HalfReuse: >/16 AsIs: e.NotScanned#1/2 AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[17], context[18], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], & LoadList ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[24], context[25], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::reinit_close_call( context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[21] );
  refalrts::link_brackets( context[23], context[15] );
  refalrts::link_brackets( context[11], context[20] );
  refalrts::link_brackets( context[12], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction DoCreateFileList(func_DoCreateFileList, "DoCreateFileList");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FindImports {
    static refalrts::RefalFunction *functions[] = {
      & Trim,
      & FindFiles
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & FindImports/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +31, 0, 0},
      // e.idx ( '//FROM ' e.idx )
      // </0 & FindImports/4 e.Folders#1/2 (/7 '/'/9 '/'/10 'F'/11 'R'/12 'O'/13 'M'/14 ' '/15 e.Name#1/5 )/8 >/1
      {refalrts::icSave, 0, 16, 2},
      {refalrts::icBracketRightSave, 0, 5, 16},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('/'), 5},
      {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('/'), 5},
      {refalrts::icCharLeftSave, 11, static_cast<unsigned char>('F'), 5},
      {refalrts::icCharLeftSave, 12, static_cast<unsigned char>('R'), 5},
      {refalrts::icCharLeftSave, 13, static_cast<unsigned char>('O'), 5},
      {refalrts::icCharLeftSave, 14, static_cast<unsigned char>('M'), 5},
      {refalrts::icCharLeftSave, 15, static_cast<unsigned char>(' '), 5},
      // closed e.Folders#1 as range 16(2)
      // closed e.Name#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} '/'/9 '/'/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindFiles/4 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Folders#1/16(2) } Tile{ HalfReuse: )/12 HalfReuse: (/13 HalfReuse: </14 HalfReuse: & Trim/15 AsIs: e.Name#1/5 HalfReuse: >/8 HalfReuse: )/1 } Tile{ HalfReuse: >/11 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 13},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icReinitFunc, 0, 0, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 13, 1, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceTile, 12, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 16},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & FindImports/4 e.OtherLine#1/2 >/1
      // closed e.OtherLine#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FindImports/4 e.OtherLine#1/2 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FindImports

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction FindImports(
  "FindImports",
  scope_FindImports::raa,
  scope_FindImports::functions,
  scope_FindImports::idents,
  scope_FindImports::numbers,
  scope_FindImports::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_FindImports(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & FindImports/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx ( '//FROM ' e.idx )
    // </0 & FindImports/4 e.Folders#1/2 (/7 '/'/9 '/'/10 'F'/11 'R'/12 'O'/13 'M'/14 ' '/15 e.Name#1/5 )/8 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[16], context[17] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '/', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( '/', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( 'F', context[5], context[6] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'R', context[5], context[6] );
    if( ! context[12] )
      continue;
    context[13] = refalrts::char_left( 'O', context[5], context[6] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'M', context[5], context[6] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( ' ', context[5], context[6] );
    if( ! context[15] )
      continue;
    // closed e.Folders#1 as range 16(2)
    // closed e.Name#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} '/'/9 '/'/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindFiles/4 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Folders#1/16(2) } Tile{ HalfReuse: )/12 HalfReuse: (/13 HalfReuse: </14 HalfReuse: & Trim/15 AsIs: e.Name#1/5 HalfReuse: >/8 HalfReuse: )/1 } Tile{ HalfReuse: >/11 } Tile{ ]] }
    refalrts::update_name( context[4], & FindFiles );
    refalrts::reinit_close_bracket( context[12] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_name( context[15], & Trim );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[11] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // e.idx
  // </0 & FindImports/4 e.OtherLine#1/2 >/1
  // closed e.OtherLine#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FindImports/4 e.OtherLine#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction FindImports(func_FindImports, "FindImports");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_LoadList {
    static refalrts::RefalFunction *functions[] = {
      & LoadFile,
      & Map,
      & FindImports
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NotFound<int>::name,
      & ident_Output<int>::name,
      & ident_Source<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 17, 0, 0},
      //FAST GEN: ( e.$ ) s.$ e.$
      //GLOBAL GEN: ( e.$ ) s.$ e.$
      // </0 & LoadList/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      // closed e.idxTV#0 as range 2
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( e.idx ) # Source ( e.idx ) e.idx
      // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # Source/9 (/12 e.NextModule#1/10 )/13 e.Output#1/2 >/1
      {refalrts::icIdentTerm, 0, 2, 9},
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icBracketLeftSave, 0, 10, 15},
      // closed e.Folders#1 as range 5
      // closed e.NextModule#1 as range 10
      // closed e.Output#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Output#1/15(2) {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: (/4 HalfReuse: & FindImports/7 AsIs: e.Folders#1/5 AsIs: )/8 HalfReuse: </9 HalfReuse: & LoadFile/12 AsIs: e.NextModule#1/10 HalfReuse: >/13 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitFunc, 0, 2, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icReinitFunc, 0, 0, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 0, 13, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // ( e.idx ) # Output e.idx
      // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # Output/9 e.Output#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      // closed e.Folders#1 as range 5
      // closed e.Output#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 AsIs: (/7 } & FindImports/10 Tile{ AsIs: e.Folders#1/5 } )/11 Tile{ HalfReuse: </8 HalfReuse: & LoadFile/9 AsIs: e.Output#1/2 AsIs: >/1 } >/12 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 2, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icLinkBrackets, 7, 11, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 8, 1, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) # NotFound e.idx
      // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # NotFound/9 e.Unit#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 9},
      // closed e.Folders#1 as range 5
      // closed e.Unit#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # NotFound/9 e.Unit#1/2 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_LoadList

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction LoadList(
  "LoadList",
  scope_LoadList::raa,
  scope_LoadList::functions,
  scope_LoadList::idents,
  scope_LoadList::numbers,
  scope_LoadList::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_LoadList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & LoadList/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
    refalrts::start_sentence();
    // ( e.idx ) # Source ( e.idx ) e.idx
    // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # Source/9 (/12 e.NextModule#1/10 )/13 e.Output#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Source<int>::name, context[9] ) )
      continue;
    context[15] = context[2];
    context[16] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[15], context[16] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Folders#1 as range 5
    // closed e.NextModule#1 as range 10
    // closed e.Output#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Output#1/15(2) {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: (/4 HalfReuse: & FindImports/7 AsIs: e.Folders#1/5 AsIs: )/8 HalfReuse: </9 HalfReuse: & LoadFile/12 AsIs: e.NextModule#1/10 HalfReuse: >/13 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], & Map );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_name( context[7], & FindImports );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[12], & LoadFile );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[9] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) # Output e.idx
    // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # Output/9 e.Output#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Output<int>::name, context[9] ) )
      continue;
    // closed e.Folders#1 as range 5
    // closed e.Output#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 AsIs: (/7 } & FindImports/10 Tile{ AsIs: e.Folders#1/5 } )/11 Tile{ HalfReuse: </8 HalfReuse: & LoadFile/9 AsIs: e.Output#1/2 AsIs: >/1 } >/12 Tile{ ]] }
    if( ! refalrts::alloc_name( context[10], & FindImports ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Map );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[9], & LoadFile );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) # NotFound e.idx
  // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # NotFound/9 e.Unit#1/2 >/1
  if( ! refalrts::ident_term(  & ident_NotFound<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#1 as range 5
  // closed e.Unit#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # NotFound/9 e.Unit#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction LoadList(func_LoadList, "LoadList");

} // unnamed namespace

#endif

//End of file
