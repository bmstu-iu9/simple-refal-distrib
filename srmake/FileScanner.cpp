// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Trim(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoCreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FindImports(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LoadList(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

refalrts::FnResult CreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FindFiles, "FindFiles" },
    { DoCreateFileList, "DoCreateFileList" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Folders#1/2 ) e.Unit#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Folders#1 as range 2
    // closed e.Unit#1 as range 0
    //0: e.Unit#1
    //2: e.Folders#1
    //13: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icCopyEVar, 13, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Folders#1/2 ) e.Unit#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#1 as range 2
  // closed e.Unit#1 as range 0
  //0: e.Unit#1
  //2: e.Folders#1
  //13: e.Folders#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], DoCreateFileList, "DoCreateFileList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], FindFiles, "FindFiles" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[13], context[14], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[16], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[12], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoCreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoadList, "LoadList" },
    { DoCreateFileList, "DoCreateFileList" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Folders#1/2 ) ( e.Modules#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Folders#1 as range 2
    // closed e.Modules#1 as range 4
    //2: e.Folders#1
    //4: e.Modules#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +40, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Folders#1/2 ) ( e.Modules_B#1/8 ( e.NextModule#1/12 ) e.Modules_E#1/14 ) ( e.NextModule#1/6 ) e.NotScanned#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Folders#1 as range 2
    // closed e.NextModule#1 as range 6
    // closed e.NotScanned#1 as range 0
    {refalrts::icEPrepare, 0, 8, 4},
    {refalrts::icEStart, 0, 8, 4},
    {refalrts::icSave, 0, 14, 4},
    {refalrts::icBracketLeft, 0, 10, 14},
    {refalrts::iceRepeatLeft, 12, 6, 10},
    {refalrts::icEmpty, 0, 0, 10},
    // closed e.Modules_E#1 as range 4
    //0: e.NotScanned#1
    //2: e.Folders#1
    //6: e.NextModule#1
    //8: e.Modules_B#1
    //12: e.NextModule#1
    //14: e.Modules_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 1, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Folders#1/2 ) ( e.Modules#1/4 ) ( e.NextModule#1/6 ) e.NotScanned#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Folders#1 as range 2
    // closed e.Modules#1 as range 4
    // closed e.NextModule#1 as range 6
    // closed e.NotScanned#1 as range 0
    //0: e.NotScanned#1
    //2: e.Folders#1
    //4: e.Modules#1
    //6: e.NextModule#1
    //19: e.Folders#1
    //22: e.NextModule#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icCopyEVar, 19, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icCopyEVar, 22, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Folders#1/2 ) ( e.Modules#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Folders#1 as range 2
    // closed e.Modules#1 as range 4
    //2: e.Folders#1
    //4: e.Modules#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[4], context[5] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Folders#1/2 ) ( e.Modules_B#1/8 ( e.NextModule#1/12 ) e.Modules_E#1/14 ) ( e.NextModule#1/6 ) e.NotScanned#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    // closed e.Folders#1 as range 2
    // closed e.NextModule#1 as range 6
    // closed e.NotScanned#1 as range 0
    context[8] = 0;
    context[9] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[4];
      context[15] = context[5];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[12], context[13], context[6], context[7], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      // closed e.Modules_E#1 as range 4
      //0: e.NotScanned#1
      //2: e.Folders#1
      //6: e.NextModule#1
      //8: e.Modules_B#1
      //12: e.NextModule#1
      //14: e.Modules_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], DoCreateFileList, "DoCreateFileList" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[20], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[8], context[9], context[4], context[5] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Folders#1/2 ) ( e.Modules#1/4 ) ( e.NextModule#1/6 ) e.NotScanned#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#1 as range 2
  // closed e.Modules#1 as range 4
  // closed e.NextModule#1 as range 6
  // closed e.NotScanned#1 as range 0
  //0: e.NotScanned#1
  //2: e.Folders#1
  //4: e.Modules#1
  //6: e.NextModule#1
  //19: e.Folders#1
  //22: e.NextModule#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], DoCreateFileList, "DoCreateFileList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], LoadList, "LoadList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[6], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[16] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::link_brackets( context[18], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[12], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FindImports(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Trim, "Trim" },
    { FindFiles, "FindFiles" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +39, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Folders#1/0 ( '//FROM ' e.Name#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('/'), 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('/'), 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('F'), 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('R'), 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('O'), 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('M'), 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>(' '), 2},
    // closed e.Folders#1 as range 0
    // closed e.Name#1 as range 2
    //0: e.Folders#1
    //2: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.OtherLine#1/0
    // closed e.OtherLine#1 as range 0
    //0: e.OtherLine#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // e.Folders#1/0 ( '//FROM ' e.Name#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '/', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( '/', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'F', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'R', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'O', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'M', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( ' ', context[2], context[3] ) )
      continue;
    // closed e.Folders#1 as range 0
    // closed e.Name#1 as range 2
    //0: e.Folders#1
    //2: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], FindFiles, "FindFiles" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Trim, "Trim" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[8], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.OtherLine#1/0
  // closed e.OtherLine#1 as range 0
  //0: e.OtherLine#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult LoadList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoadFile, "LoadFile" },
    { FindImports, "FindImports" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name,
    & ident_Output<int>::name,
    & ident_Source<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Folders#1/2 ) # Source ( e.NextModule#1/4 ) e.Output#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Folders#1 as range 2
    // closed e.NextModule#1 as range 4
    // closed e.Output#1 as range 0
    //0: e.Output#1
    //2: e.Folders#1
    //4: e.NextModule#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 2, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Folders#1/2 ) # Output e.Output#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 0},
    // closed e.Folders#1 as range 2
    // closed e.Output#1 as range 0
    //0: e.Output#1
    //2: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Folders#1/2 ) # NotFound e.Unit#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 0},
    // closed e.Folders#1 as range 2
    // closed e.Unit#1 as range 0
    //0: e.Unit#1
    //2: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Folders#1/2 ) # Source ( e.NextModule#1/4 ) e.Output#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Source<int>::name, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Folders#1 as range 2
    // closed e.NextModule#1 as range 4
    // closed e.Output#1 as range 0
    //0: e.Output#1
    //2: e.Folders#1
    //4: e.NextModule#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], FindImports, "FindImports" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], LoadFile, "LoadFile" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[8], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Folders#1/2 ) # Output e.Output#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Output<int>::name, context[0], context[1] ) )
      continue;
    // closed e.Folders#1 as range 2
    // closed e.Output#1 as range 0
    //0: e.Output#1
    //2: e.Folders#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], FindImports, "FindImports" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], LoadFile, "LoadFile" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Folders#1/2 ) # NotFound e.Unit#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_NotFound<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#1 as range 2
  // closed e.Unit#1 as range 0
  //0: e.Unit#1
  //2: e.Folders#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
