// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::RefalFunction& Fetch;
extern refalrts::RefalFunction& Seq;
extern refalrts::RefalFunction& Flex_Desugar;
namespace /* unnamed */ {
extern refalrts::RefalFunction& Pass_RemoveRange;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Pass_RemoveOpt;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Pass_RemoveOneMany;
} // unnamed namespace


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Flex_Desugar {
    static const char *filename = "Flex-Desugar.cpp";
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & Pass_RemoveOneMany,
      & Pass_RemoveOpt,
      & Pass_RemoveRange,
      & Seq
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & Flex-Desugar/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      //DEBUG: e.AST#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.AST#1/2 HalfReuse: </1 } & Seq/5 & Pass-RemoveRange/6 & Pass-RemoveOpt/7 & Pass-RemoveOneMany/8 >/9 >/10 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 4, 5},
      {refalrts::icAllocFunc, 0, 3, 6},
      {refalrts::icAllocFunc, 0, 2, 7},
      {refalrts::icAllocFunc, 0, 1, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 10, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Flex_Desugar

} // unnamed namespace

refalrts::RASLFunction descr_Flex_Desugar(
  "Flex-Desugar",
  scope_Flex_Desugar::raa,
  scope_Flex_Desugar::functions,
  scope_Flex_Desugar::idents,
  scope_Flex_Desugar::numbers,
  scope_Flex_Desugar::strings,
  scope_Flex_Desugar::filename
);
refalrts::RefalFunction& Flex_Desugar = descr_Flex_Desugar;

#else
static refalrts::FnResult func_Flex_Desugar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Flex-Desugar/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.AST#1/2 HalfReuse: </1 } & Seq/5 & Pass-RemoveRange/6 & Pass-RemoveOpt/7 & Pass-RemoveOneMany/8 >/9 >/10 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & Pass_RemoveRange ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & Pass_RemoveOpt ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], & Pass_RemoveOneMany ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Flex_Desugar(func_Flex_Desugar, "Flex-Desugar");
refalrts::RefalFunction& Flex_Desugar = descr_Flex_Desugar;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Pass_RemoveRange {
    static const char *filename = "Flex-Desugar.cpp";
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 5, 0, 0},
      // </0 & Pass-RemoveRange/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      //DEBUG: e.AST#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-RemoveRange/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Pass_RemoveRange

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Pass_RemoveRange(
  "Pass-RemoveRange",
  scope_Pass_RemoveRange::raa,
  scope_Pass_RemoveRange::functions,
  scope_Pass_RemoveRange::idents,
  scope_Pass_RemoveRange::numbers,
  scope_Pass_RemoveRange::strings,
  scope_Pass_RemoveRange::filename
);
refalrts::RefalFunction& Pass_RemoveRange = descr_Pass_RemoveRange;

} // unnamed namespace

#else
static refalrts::FnResult func_Pass_RemoveRange(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-RemoveRange/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveRange/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Pass_RemoveRange(func_Pass_RemoveRange, "Pass-RemoveRange");
refalrts::RefalFunction& Pass_RemoveRange = descr_Pass_RemoveRange;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Pass_RemoveOpt {
    static const char *filename = "Flex-Desugar.cpp";
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 5, 0, 0},
      // </0 & Pass-RemoveOpt/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      //DEBUG: e.AST#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-RemoveOpt/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Pass_RemoveOpt

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Pass_RemoveOpt(
  "Pass-RemoveOpt",
  scope_Pass_RemoveOpt::raa,
  scope_Pass_RemoveOpt::functions,
  scope_Pass_RemoveOpt::idents,
  scope_Pass_RemoveOpt::numbers,
  scope_Pass_RemoveOpt::strings,
  scope_Pass_RemoveOpt::filename
);
refalrts::RefalFunction& Pass_RemoveOpt = descr_Pass_RemoveOpt;

} // unnamed namespace

#else
static refalrts::FnResult func_Pass_RemoveOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-RemoveOpt/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveOpt/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Pass_RemoveOpt(func_Pass_RemoveOpt, "Pass-RemoveOpt");
refalrts::RefalFunction& Pass_RemoveOpt = descr_Pass_RemoveOpt;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Pass_RemoveOneMany {
    static const char *filename = "Flex-Desugar.cpp";
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 5, 0, 0},
      // </0 & Pass-RemoveOneMany/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      //DEBUG: e.AST#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-RemoveOneMany/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Pass_RemoveOneMany

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Pass_RemoveOneMany(
  "Pass-RemoveOneMany",
  scope_Pass_RemoveOneMany::raa,
  scope_Pass_RemoveOneMany::functions,
  scope_Pass_RemoveOneMany::idents,
  scope_Pass_RemoveOneMany::numbers,
  scope_Pass_RemoveOneMany::strings,
  scope_Pass_RemoveOneMany::filename
);
refalrts::RefalFunction& Pass_RemoveOneMany = descr_Pass_RemoveOneMany;

} // unnamed namespace

#else
static refalrts::FnResult func_Pass_RemoveOneMany(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-RemoveOneMany/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveOneMany/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Pass_RemoveOneMany(func_Pass_RemoveOneMany, "Pass-RemoveOneMany");
refalrts::RefalFunction& Pass_RemoveOneMany = descr_Pass_RemoveOneMany;

} // unnamed namespace

#endif

//End of file
