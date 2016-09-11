// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #BadCommandLine
template <typename SREFAL_PARAM_INT>
struct ident_BadCommandLine {
  static const char *name() {
    return "BadCommandLine";
  }
};

// identifier #From
template <typename SREFAL_PARAM_INT>
struct ident_From {
  static const char *name() {
    return "From";
  }
};

// identifier #InPlace
template <typename SREFAL_PARAM_INT>
struct ident_InPlace {
  static const char *name() {
    return "InPlace";
  }
};

// identifier #TError
template <typename SREFAL_PARAM_INT>
struct ident_TError {
  static const char *name() {
    return "TError";
  }
};

// identifier #To
template <typename SREFAL_PARAM_INT>
struct ident_To {
  static const char *name() {
    return "To";
  }
};

extern refalrts::RefalFunction& ArgList;
extern refalrts::RefalFunction& Fetch;
extern refalrts::RefalFunction& Seq;
extern refalrts::RefalFunction& LoadFile;
extern refalrts::RefalFunction& SaveFile;
extern refalrts::RefalFunction& Map;
extern refalrts::RefalFunction& Inc;
extern refalrts::RefalFunction& MapReduce;
extern refalrts::RefalFunction& ParseCommandLine;
extern refalrts::RefalFunction& DFA_Tokens;
extern refalrts::RefalFunction& DFA_Parse;
extern refalrts::RefalFunction& DFA_Compile;
extern refalrts::RefalFunction& GenerateFromDFA;
extern refalrts::RefalFunction& ErrorAt;
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Go_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Go_L2;
} // unnamed namespace

extern refalrts::RefalFunction& Go;
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Transform_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Transform_L2;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Transform_L3S1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Transform_L3S1L2;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Transform_L3;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Transform;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Length_T_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Length_T;
} // unnamed namespace


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Go_L1 {
    static refalrts::RefalFunction *functions[] = {
      & ParseCommandLine
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & Go\1/4 (/7 e.ProgName#2/5 )/8 e.Options#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.ProgName#2 as range 5
      // closed e.Options#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & Go\1/4 (/7 e.ProgName#2/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Options#2/2 AsIs: >/1 ]] }
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Go_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Go_L1(
  "Go\\1",
  scope_gen_Go_L1::raa,
  scope_gen_Go_L1::functions,
  scope_gen_Go_L1::idents,
  scope_gen_Go_L1::numbers,
  scope_gen_Go_L1::strings
);
refalrts::RefalFunction& gen_Go_L1 = descr_gen_Go_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Go_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Go\1/4 (/7 e.ProgName#2/5 )/8 e.Options#2/2 >/1
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
  // closed e.ProgName#2 as range 5
  // closed e.Options#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & Go\1/4 (/7 e.ProgName#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Options#2/2 AsIs: >/1 ]] }
  refalrts::reinit_name( context[8], & ParseCommandLine );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Go_L1(func_gen_Go_L1, "Go\\1");
refalrts::RefalFunction& gen_Go_L1 = descr_gen_Go_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Go_L2 {
    static refalrts::RefalFunction *functions[] = {
      & LoadFile,
      & Transform,
      & SaveFile
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_BadCommandLine<int>::name,
      & ident_To<int>::name,
      & ident_From<int>::name,
      & ident_InPlace<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"// Edit file \'", 14},
      {"// Automatically generated file, don\'t edit!", 44}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 38, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & Go\2/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +27, 0, 0},
      // # InPlace e.idx
      // </0 & Go\2/4 # InPlace/5 e.FileName#2/2 >/1
      {refalrts::icIdentTerm, 0, 3, 5},
      // closed e.FileName#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 HalfReuse: (/5 AsIs: e.FileName#2/2 HalfReuse: )/1 } </6 & Transform/7 (/8 e.FileName#2/2/9 )/11 </12 & LoadFile/13 e.FileName#2/2/14 >/16 >/17 >/18 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icAllocFunc, 0, 1, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icCopyEVar, 9, 2, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icAllocFunc, 0, 0, 13},
      {refalrts::icCopyEVar, 14, 2, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 5},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 8, 11, 0},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 18, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +50, 0, 0},
      // # From ( e.idx ) # To ( e.idx )
      // </0 & Go\2/4 # From/5 (/8 e.From#2/6 )/9 # To/10 (/13 e.To#2/11 )/14 >/1
      {refalrts::icIdentTerm, 0, 2, 5},
      {refalrts::icSave, 0, 36, 2},
      {refalrts::icBracketLeftSave, 0, 6, 36},
      {refalrts::icIdentLeftSave, 10, 1, 36},
      {refalrts::icBracketLeftSave, 0, 11, 36},
      {refalrts::icEmpty, 0, 0, 36},
      // closed e.From#2 as range 6
      // closed e.To#2 as range 11
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </15 & SaveFile/16 (/17 Tile{ AsIs: e.To#2/11 } )/18 (/19"// Automatically generated file, don\'t edit!"/20 )/22 (/23"// Edit file \'"/24 e.From#2/6/26 '\''/28 )/29 (/30 )/31 (/32 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & Transform/5 AsIs: (/8 AsIs: e.From#2/6 AsIs: )/9 HalfReuse: </10 HalfReuse: & LoadFile/13 } e.From#2/6/33 >/35 Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 2, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
      {refalrts::icAllocString, 0, 1, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 23},
      {refalrts::icAllocString, 0, 0, 24},
      {refalrts::icCopyEVar, 26, 6, 0},
      {refalrts::icAllocChar, 0, '\'', 28},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 31},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 32},
      {refalrts::icCopyEVar, 33, 6, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 1, 5},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icReinitFunc, 0, 0, 13},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 35},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icLinkBrackets, 32, 0, 0},
      {refalrts::icLinkBrackets, 30, 31, 0},
      {refalrts::icLinkBrackets, 23, 29, 0},
      {refalrts::icLinkBrackets, 19, 22, 0},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icSetRes, 0, 0, 14},
      {refalrts::icSpliceTile, 35, 35, 0},
      {refalrts::icSpliceTile, 33, 34, 0},
      {refalrts::icSpliceTile, 0, 13, 0},
      {refalrts::icSpliceTile, 18, 32, 0},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceTile, 15, 17, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // # BadCommandLine
      // </0 & Go\2/4 # BadCommandLine/5 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Go\2/4 # BadCommandLine/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Go_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Go_L2(
  "Go\\2",
  scope_gen_Go_L2::raa,
  scope_gen_Go_L2::functions,
  scope_gen_Go_L2::idents,
  scope_gen_Go_L2::numbers,
  scope_gen_Go_L2::strings
);
refalrts::RefalFunction& gen_Go_L2 = descr_gen_Go_L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Go_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & Go\2/4 s.idx#0/5 e.idxV#0/2 >/1
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
    // # InPlace e.idx
    // </0 & Go\2/4 # InPlace/5 e.FileName#2/2 >/1
    if( ! refalrts::ident_term(  & ident_InPlace<int>::name, context[5] ) )
      continue;
    // closed e.FileName#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 HalfReuse: (/5 AsIs: e.FileName#2/2 HalfReuse: )/1 } </6 & Transform/7 (/8 e.FileName#2/2/9 )/11 </12 & LoadFile/13 e.FileName#2/2/14 >/16 >/17 >/18 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], & Transform ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[9], context[10], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & LoadFile ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[14], context[15], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & SaveFile );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # From ( e.idx ) # To ( e.idx )
    // </0 & Go\2/4 # From/5 (/8 e.From#2/6 )/9 # To/10 (/13 e.To#2/11 )/14 >/1
    if( ! refalrts::ident_term(  & ident_From<int>::name, context[5] ) )
      continue;
    context[36] = context[2];
    context[37] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[36], context[37] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_left(  & ident_To<int>::name, context[36], context[37] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[36], context[37] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    if( ! refalrts::empty_seq( context[36], context[37] ) )
      continue;
    // closed e.From#2 as range 6
    // closed e.To#2 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & SaveFile/16 (/17 Tile{ AsIs: e.To#2/11 } )/18 (/19"// Automatically generated file, don\'t edit!"/20 )/22 (/23"// Edit file \'"/24 e.From#2/6/26 '\''/28 )/29 (/30 )/31 (/32 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & Transform/5 AsIs: (/8 AsIs: e.From#2/6 AsIs: )/9 HalfReuse: </10 HalfReuse: & LoadFile/13 } e.From#2/6/33 >/35 Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], & SaveFile ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[20], context[21], "// Automatically generated file, don\'t edit!", 44 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "// Edit file \'", 14 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[33], context[34], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & Transform );
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[13], & LoadFile );
    refalrts::reinit_close_call( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[10] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[32], context[0] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::link_brackets( context[23], context[29] );
    refalrts::link_brackets( context[19], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[18], context[32] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // # BadCommandLine
  // </0 & Go\2/4 # BadCommandLine/5 >/1
  if( ! refalrts::ident_term(  & ident_BadCommandLine<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Go\2/4 # BadCommandLine/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Go_L2(func_gen_Go_L2, "Go\\2");
refalrts::RefalFunction& gen_Go_L2 = descr_gen_Go_L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Go {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_Go_L2,
      & gen_Go_L1,
      & Seq,
      & ArgList
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & Go/4 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & ArgList/5 >/6 </7 & Seq/8 & Go\1/9 & Go\2/10 >/11 >/12 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 4, 5},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icAllocFunc, 0, 3, 8},
      {refalrts::icAllocFunc, 0, 2, 9},
      {refalrts::icAllocFunc, 0, 1, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Go

} // unnamed namespace

refalrts::RASLFunction descr_Go(
  "Go",
  scope_Go::raa,
  scope_Go::functions,
  scope_Go::idents,
  scope_Go::numbers,
  scope_Go::strings
);
refalrts::RefalFunction& Go = descr_Go;

#else
static refalrts::FnResult func_Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & ArgList/5 >/6 </7 & Seq/8 & Go\1/9 & Go\2/10 >/11 >/12 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], & ArgList ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], & gen_Go_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & gen_Go_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Go(func_Go, "Go");
refalrts::RefalFunction& Go = descr_Go;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Transform_L1 {
    static refalrts::RefalFunction *functions[] = {
      & ErrorAt,
      & Length_T
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"Lexer description not found", 27}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 29, 0, 0},
      //FAST GEN: ( e.$ ) e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & Transform\1/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +33, 0, 0},
      // ( e.idx ) e.idx
      // </0 & Transform\1/4 (/7 e.Source#1/5 )/8 e.LinesBefore#2/9 (/13 '/'/15 '*'/16 'G'/17 'E'/18 'N'/19 ':'/20 e.GenMode#2/11 )/14 e.DescriptionAndTail#2/2 >/1
      // closed e.Source#1 as range 5
      {refalrts::icSave, 0, 25, 2},
      {refalrts::icEPrepare, 0, 9, 25},
      {refalrts::icEStart, 0, 9, 25},
      {refalrts::icSave, 0, 27, 25},
      {refalrts::icBracketLeftSave, 0, 11, 27},
      {refalrts::icCharLeftSave, 15, static_cast<unsigned char>('/'), 11},
      {refalrts::icCharLeftSave, 16, static_cast<unsigned char>('*'), 11},
      {refalrts::icCharLeftSave, 17, static_cast<unsigned char>('G'), 11},
      {refalrts::icCharLeftSave, 18, static_cast<unsigned char>('E'), 11},
      {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('N'), 11},
      {refalrts::icCharLeftSave, 20, static_cast<unsigned char>(':'), 11},
      // closed e.GenMode#2 as range 11
      // closed e.DescriptionAndTail#2 as range 27(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Source#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } Tile{ HalfReuse: & Length-T/8 AsIs: e.LinesBefore#2/9 AsIs: (/13 AsIs: '/'/15 AsIs: '*'/16 AsIs: 'G'/17 AsIs: 'E'/18 AsIs: 'N'/19 AsIs: ':'/20 AsIs: e.GenMode#2/11 AsIs: )/14 } Tile{ AsIs: >/1 } )/21 Tile{ AsIs: (/7 } e.GenMode#2/11/22 )/24 Tile{ AsIs: e.DescriptionAndTail#2/27(2) } Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
      {refalrts::icCopyEVar, 22, 11, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 1, 8},
      {refalrts::icLinkBrackets, 7, 24, 0},
      {refalrts::icLinkBrackets, 0, 21, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 27},
      {refalrts::icSpliceTile, 24, 24, 0},
      {refalrts::icSpliceTile, 22, 23, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 21, 21, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 8, 14, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & Transform\1/4 (/7 e.Source#1/5 )/8 e.Other#2/2 >/1
      // closed e.Source#1 as range 5
      // closed e.Other#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#2/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } 1/9 Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 }"Lexer description not found"/10 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocInt, 0, 1, 9},
      {refalrts::icAllocString, 0, 0, 10},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Transform_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Transform_L1(
  "Transform\\1",
  scope_gen_Transform_L1::raa,
  scope_gen_Transform_L1::functions,
  scope_gen_Transform_L1::idents,
  scope_gen_Transform_L1::numbers,
  scope_gen_Transform_L1::strings
);
refalrts::RefalFunction& gen_Transform_L1 = descr_gen_Transform_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Transform_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Transform\1/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) e.idx
    // </0 & Transform\1/4 (/7 e.Source#1/5 )/8 e.LinesBefore#2/9 (/13 '/'/15 '*'/16 'G'/17 'E'/18 'N'/19 ':'/20 e.GenMode#2/11 )/14 e.DescriptionAndTail#2/2 >/1
    // closed e.Source#1 as range 5
    context[25] = context[2];
    context[26] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[27], context[28] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::char_left( '/', context[11], context[12] );
      if( ! context[15] )
        continue;
      context[16] = refalrts::char_left( '*', context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = refalrts::char_left( 'G', context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::char_left( 'E', context[11], context[12] );
      if( ! context[18] )
        continue;
      context[19] = refalrts::char_left( 'N', context[11], context[12] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_left( ':', context[11], context[12] );
      if( ! context[20] )
        continue;
      // closed e.GenMode#2 as range 11
      // closed e.DescriptionAndTail#2 as range 27(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Source#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } Tile{ HalfReuse: & Length-T/8 AsIs: e.LinesBefore#2/9 AsIs: (/13 AsIs: '/'/15 AsIs: '*'/16 AsIs: 'G'/17 AsIs: 'E'/18 AsIs: 'N'/19 AsIs: ':'/20 AsIs: e.GenMode#2/11 AsIs: )/14 } Tile{ AsIs: >/1 } )/21 Tile{ AsIs: (/7 } e.GenMode#2/11/22 )/24 Tile{ AsIs: e.DescriptionAndTail#2/27(2) } Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[22], context[23], context[11], context[12]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_open_call( context[4] );
      refalrts::reinit_name( context[8], & Length_T );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[0], context[21] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[4] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[25], context[26] ) );
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & Transform\1/4 (/7 e.Source#1/5 )/8 e.Other#2/2 >/1
  // closed e.Source#1 as range 5
  // closed e.Other#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } 1/9 Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 }"Lexer description not found"/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_number( context[9], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "Lexer description not found", 27 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ErrorAt );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Transform_L1(func_gen_Transform_L1, "Transform\\1");
refalrts::RefalFunction& gen_Transform_L1 = descr_gen_Transform_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Transform_L2 {
    static refalrts::RefalFunction *functions[] = {
      & ErrorAt
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"f description not found", 23}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 37, 0, 0},
      //FAST GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
      //GLOBAL GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
      // </0 & Transform\2/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/17 e.idxTBV#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTTB#0 as range 13
      // closed e.idxTTT#0 as range 2
      {refalrts::icsVarLeft, 0, 17, 9},
      // closed e.idxTBV#0 as range 9
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
      // </0 & Transform\2/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.GenMode#2/13 )/16 e.Description#2/18 (/22 'G'/24 'E'/25 'N'/26 ':'/27 'E'/28 'N'/29 'D'/30 '*'/31 '/'/32 )/23 e.Deleted#2/2 >/1
      // closed e.Source#1 as range 5
      // closed e.LinesBefore#2 as range 9
      // closed e.GenMode#2 as range 13
      {refalrts::icSave, 0, 33, 2},
      {refalrts::icEPrepare, 0, 18, 33},
      {refalrts::icEStart, 0, 18, 33},
      {refalrts::icSave, 0, 35, 33},
      {refalrts::icBracketLeftSave, 0, 20, 35},
      {refalrts::icCharLeftSave, 24, static_cast<unsigned char>('G'), 20},
      {refalrts::icCharLeftSave, 25, static_cast<unsigned char>('E'), 20},
      {refalrts::icCharLeftSave, 26, static_cast<unsigned char>('N'), 20},
      {refalrts::icCharLeftSave, 27, static_cast<unsigned char>(':'), 20},
      {refalrts::icCharLeftSave, 28, static_cast<unsigned char>('E'), 20},
      {refalrts::icCharLeftSave, 29, static_cast<unsigned char>('N'), 20},
      {refalrts::icCharLeftSave, 30, static_cast<unsigned char>('D'), 20},
      {refalrts::icCharLeftSave, 31, static_cast<unsigned char>('*'), 20},
      {refalrts::icCharLeftSave, 32, static_cast<unsigned char>('/'), 20},
      {refalrts::icEmpty, 0, 0, 20},
      // closed e.Deleted#2 as range 35(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Transform\2/4 (/7 e.Source#1/5 )/8 {REMOVED TILE} {REMOVED TILE} (/22 'G'/24 'E'/25 'N'/26 ':'/27 'E'/28 'N'/29 'D'/30 '*'/31 '/'/32 )/23 e.Deleted#2/35(2) >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: s.Length#2/17 AsIs: e.LinesBefore#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.GenMode#2/13 AsIs: )/16 } Tile{ AsIs: e.Description#2/18 } Tile{ ]] }
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 18},
      {refalrts::icSpliceTile, 11, 16, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
      // </0 & Transform\2/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.GenMode#2/13 )/16 e.Other#2/2 >/1
      // closed e.Source#1 as range 5
      // closed e.LinesBefore#2 as range 9
      // closed e.GenMode#2 as range 13
      // closed e.Other#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/9 {REMOVED TILE} e.GenMode#2/13 {REMOVED TILE} e.Other#2/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 HalfReuse: 'E'/11 } 'n'/18 Tile{ HalfReuse: 'd'/12 HalfReuse: ' '/15 } Tile{ HalfReuse: 'o'/16 }"f description not found"/19 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, 'n', 18},
      {refalrts::icAllocString, 0, 0, 19},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'E', 11},
      {refalrts::icReinitChar, 0, 'd', 12},
      {refalrts::icReinitChar, 0, ' ', 15},
      {refalrts::icReinitChar, 0, 'o', 16},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceTile, 12, 15, 0},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Transform_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Transform_L2(
  "Transform\\2",
  scope_gen_Transform_L2::raa,
  scope_gen_Transform_L2::functions,
  scope_gen_Transform_L2::idents,
  scope_gen_Transform_L2::numbers,
  scope_gen_Transform_L2::strings
);
refalrts::RefalFunction& gen_Transform_L2 = descr_gen_Transform_L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Transform_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  //FAST GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
  // </0 & Transform\2/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/17 e.idxTBV#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
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
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTT#0 as range 2
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
    // </0 & Transform\2/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.GenMode#2/13 )/16 e.Description#2/18 (/22 'G'/24 'E'/25 'N'/26 ':'/27 'E'/28 'N'/29 'D'/30 '*'/31 '/'/32 )/23 e.Deleted#2/2 >/1
    // closed e.Source#1 as range 5
    // closed e.LinesBefore#2 as range 9
    // closed e.GenMode#2 as range 13
    context[33] = context[2];
    context[34] = context[3];
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[35] = context[33];
      context[36] = context[34];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[35], context[36] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::char_left( 'G', context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_left( 'E', context[20], context[21] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( 'N', context[20], context[21] );
      if( ! context[26] )
        continue;
      context[27] = refalrts::char_left( ':', context[20], context[21] );
      if( ! context[27] )
        continue;
      context[28] = refalrts::char_left( 'E', context[20], context[21] );
      if( ! context[28] )
        continue;
      context[29] = refalrts::char_left( 'N', context[20], context[21] );
      if( ! context[29] )
        continue;
      context[30] = refalrts::char_left( 'D', context[20], context[21] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_left( '*', context[20], context[21] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::char_left( '/', context[20], context[21] );
      if( ! context[32] )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      // closed e.Deleted#2 as range 35(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & Transform\2/4 (/7 e.Source#1/5 )/8 {REMOVED TILE} {REMOVED TILE} (/22 'G'/24 'E'/25 'N'/26 ':'/27 'E'/28 'N'/29 'D'/30 '*'/31 '/'/32 )/23 e.Deleted#2/35(2) >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: s.Length#2/17 AsIs: e.LinesBefore#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.GenMode#2/13 AsIs: )/16 } Tile{ AsIs: e.Description#2/18 } Tile{ ]] }
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[18], context[19], context[33], context[34] ) );
  } while ( 0 );

  // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
  // </0 & Transform\2/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.GenMode#2/13 )/16 e.Other#2/2 >/1
  // closed e.Source#1 as range 5
  // closed e.LinesBefore#2 as range 9
  // closed e.GenMode#2 as range 13
  // closed e.Other#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/9 {REMOVED TILE} e.GenMode#2/13 {REMOVED TILE} e.Other#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 HalfReuse: 'E'/11 } 'n'/18 Tile{ HalfReuse: 'd'/12 HalfReuse: ' '/15 } Tile{ HalfReuse: 'o'/16 }"f description not found"/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[18], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[19], context[20], "f description not found", 23 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ErrorAt );
  refalrts::reinit_char( context[11], 'E' );
  refalrts::reinit_char( context[12], 'd' );
  refalrts::reinit_char( context[15], ' ' );
  refalrts::reinit_char( context[16], 'o' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Transform_L2(func_gen_Transform_L2, "Transform\\2");
refalrts::RefalFunction& gen_Transform_L2 = descr_gen_Transform_L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Transform_L3S1L1 {
    static refalrts::RefalFunction *functions[] = {
      & ErrorAt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TError<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 15, 0, 0},
      //FAST GEN: ( e.$ ) ( s.$ s.$ e.$ )
      //GLOBAL GEN: ( e.$ ) ( s.$ s.$ e.$ )
      // </0 & Transform\3$1\1/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 s.idxTBV#0/14 e.idxTBVV#0/9 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 13, 9},
      {refalrts::icsVarLeft, 0, 14, 9},
      // closed e.idxTBVV#0 as range 9
      {refalrts::icOnFailGoTo, +13, 0, 0},
      // ( e.idx ) ( # TError s.idx e.idx )
      // </0 & Transform\3$1\1/4 (/7 e.Source#1/5 )/8 (/11 # TError/13 s.LineNumber#3/14 e.Text#3/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 0, 13},
      // closed e.Source#1 as range 5
      // closed e.Text#3 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 # TError/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.LineNumber#3/14 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Text#3/9 } Tile{ AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( s.idx s.idx e.idx )
      // </0 & Transform\3$1\1/4 (/7 e.Source#1/5 )/8 (/11 s.TokType#3/13 s.LineNumber#3/14 e.Info#3/9 )/12 >/1
      // closed e.Source#1 as range 5
      // closed e.Info#3 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#3/13 s.LineNumber#3/14 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } Tile{ HalfReuse: s.TokType3 #13/0 HalfReuse: (/4 HalfReuse: s.LineNumber3 #14/7 AsIs: e.Source#1/5 AsIs: )/8 } Tile{ AsIs: e.Info#3/9 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitSVar, 0, 13, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitSVar, 0, 14, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 11, 1, 0},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Transform_L3S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Transform_L3S1L1(
  "Transform\\3$1\\1",
  scope_gen_Transform_L3S1L1::raa,
  scope_gen_Transform_L3S1L1::functions,
  scope_gen_Transform_L3S1L1::idents,
  scope_gen_Transform_L3S1L1::numbers,
  scope_gen_Transform_L3S1L1::strings
);
refalrts::RefalFunction& gen_Transform_L3S1L1 = descr_gen_Transform_L3S1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Transform_L3S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: ( e.$ ) ( s.$ s.$ e.$ )
  //GLOBAL GEN: ( e.$ ) ( s.$ s.$ e.$ )
  // </0 & Transform\3$1\1/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 s.idxTBV#0/14 e.idxTBVV#0/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBVV#0 as range 9
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TError s.idx e.idx )
    // </0 & Transform\3$1\1/4 (/7 e.Source#1/5 )/8 (/11 # TError/13 s.LineNumber#3/14 e.Text#3/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TError<int>::name, context[13] ) )
      continue;
    // closed e.Source#1 as range 5
    // closed e.Text#3 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 # TError/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.LineNumber#3/14 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Text#3/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], & ErrorAt );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) ( s.idx s.idx e.idx )
  // </0 & Transform\3$1\1/4 (/7 e.Source#1/5 )/8 (/11 s.TokType#3/13 s.LineNumber#3/14 e.Info#3/9 )/12 >/1
  // closed e.Source#1 as range 5
  // closed e.Info#3 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#3/13 s.LineNumber#3/14 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } Tile{ HalfReuse: s.TokType3 #13/0 HalfReuse: (/4 HalfReuse: s.LineNumber3 #14/7 AsIs: e.Source#1/5 AsIs: )/8 } Tile{ AsIs: e.Info#3/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[0], context[13] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_svar( context[7], context[14] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Transform_L3S1L1(func_gen_Transform_L3S1L1, "Transform\\3$1\\1");
refalrts::RefalFunction& gen_Transform_L3S1L1 = descr_gen_Transform_L3S1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Transform_L3S1L2 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"*/", 2},
      {"EN", 2}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & Transform\3$1\2/4 (/7 e.LinesBefore#2/5 )/8 (/11 e.Description#2/9 )/12 e.Generated#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.LinesBefore#2 as range 5
      // closed e.Description#2 as range 9
      // closed e.Generated#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/5 } Tile{ AsIs: e.Description#2/9 } Tile{ AsIs: (/11 } Tile{ HalfReuse: 'G'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/7 } Tile{ HalfReuse: ':'/8 }"EN"/13 Tile{ HalfReuse: 'D'/1 }"*/"/15 Tile{ AsIs: )/12 } Tile{ AsIs: e.Generated#3/2 } Tile{ ]] }
      {refalrts::icAllocString, 0, 1, 13},
      {refalrts::icAllocString, 0, 0, 15},
      {refalrts::icReinitChar, 0, 'G', 0},
      {refalrts::icReinitChar, 0, 'E', 4},
      {refalrts::icReinitChar, 0, 'N', 7},
      {refalrts::icReinitChar, 0, ':', 8},
      {refalrts::icReinitChar, 0, 'D', 1},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Transform_L3S1L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Transform_L3S1L2(
  "Transform\\3$1\\2",
  scope_gen_Transform_L3S1L2::raa,
  scope_gen_Transform_L3S1L2::functions,
  scope_gen_Transform_L3S1L2::idents,
  scope_gen_Transform_L3S1L2::numbers,
  scope_gen_Transform_L3S1L2::strings
);
refalrts::RefalFunction& gen_Transform_L3S1L2 = descr_gen_Transform_L3S1L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Transform_L3S1L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Transform\3$1\2/4 (/7 e.LinesBefore#2/5 )/8 (/11 e.Description#2/9 )/12 e.Generated#3/2 >/1
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
  // closed e.LinesBefore#2 as range 5
  // closed e.Description#2 as range 9
  // closed e.Generated#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/5 } Tile{ AsIs: e.Description#2/9 } Tile{ AsIs: (/11 } Tile{ HalfReuse: 'G'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/7 } Tile{ HalfReuse: ':'/8 }"EN"/13 Tile{ HalfReuse: 'D'/1 }"*/"/15 Tile{ AsIs: )/12 } Tile{ AsIs: e.Generated#3/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[13], context[14], "EN", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "*/", 2 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'G' );
  refalrts::reinit_char( context[4], 'E' );
  refalrts::reinit_char( context[7], 'N' );
  refalrts::reinit_char( context[8], ':' );
  refalrts::reinit_char( context[1], 'D' );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Transform_L3S1L2(func_gen_Transform_L3S1L2, "Transform\\3$1\\2");
refalrts::RefalFunction& gen_Transform_L3S1L2 = descr_gen_Transform_L3S1L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Transform_L3 {
    static refalrts::RefalFunction *functions[] = {
      & ErrorAt,
      & gen_Transform_L3S1L2,
      & refalrts::create_closure,
      & GenerateFromDFA,
      & DFA_Compile,
      & DFA_Parse,
      & gen_Transform_L3S1L1,
      & Map,
      & DFA_Tokens,
      & Seq,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"own generation mode ", 20}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 40, 0, 0},
      //FAST GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
      //GLOBAL GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
      // </0 & Transform\3/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/17 e.idxTBV#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTTB#0 as range 13
      // closed e.idxTTT#0 as range 2
      {refalrts::icsVarLeft, 0, 17, 9},
      // closed e.idxTBV#0 as range 9
      {refalrts::icOnFailGoTo, +57, 0, 0},
      // ( e.idx ) ( s.idx e.idx ) ( 'TOKENS' ) e.idx
      // </0 & Transform\3/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 'T'/18 'O'/19 'K'/20 'E'/21 'N'/22 'S'/23 )/16 e.Description#2/2 >/1
      {refalrts::icSave, 0, 38, 13},
      {refalrts::icCharLeftSave, 18, static_cast<unsigned char>('T'), 38},
      {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('O'), 38},
      {refalrts::icCharLeftSave, 20, static_cast<unsigned char>('K'), 38},
      {refalrts::icCharLeftSave, 21, static_cast<unsigned char>('E'), 38},
      {refalrts::icCharLeftSave, 22, static_cast<unsigned char>('N'), 38},
      {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('S'), 38},
      {refalrts::icEmpty, 0, 0, 38},
      // closed e.Source#1 as range 5
      // closed e.LinesBefore#2 as range 9
      // closed e.Description#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </24 & Fetch/25 Tile{ AsIs: s.Length#2/17 } e.Description#2/2/26 </28 & Seq/29 & DFA-Tokens/30 (/31 & Map/32 </33 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Transform\3$1\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: )/12 HalfReuse: & DFA-Parse/15 HalfReuse: & DFA-Compile/18 HalfReuse: & GenerateFromDFA/19 HalfReuse: </20 HalfReuse: & @create_closure@/21 HalfReuse: & Transform\3$1\2/22 HalfReuse: (/23 } Tile{ AsIs: e.LinesBefore#2/9 } Tile{ AsIs: )/16 } (/34 Tile{ AsIs: e.Description#2/2 } )/35 >/36 >/37 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
      {refalrts::icAllocFunc, 0, 10, 25},
      {refalrts::icCopyEVar, 26, 2, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
      {refalrts::icAllocFunc, 0, 9, 29},
      {refalrts::icAllocFunc, 0, 8, 30},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
      {refalrts::icAllocFunc, 0, 7, 32},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 34},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 35},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 36},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 37},
      {refalrts::icReinitFunc, 0, 2, 0},
      {refalrts::icUpdateFunc, 0, 6, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icReinitFunc, 0, 5, 15},
      {refalrts::icReinitFunc, 0, 4, 18},
      {refalrts::icReinitFunc, 0, 3, 19},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 20},
      {refalrts::icReinitFunc, 0, 2, 21},
      {refalrts::icReinitFunc, 0, 1, 22},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 23},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icPushStack, 0, 0, 37},
      {refalrts::icPushStack, 0, 0, 28},
      {refalrts::icPushStack, 0, 0, 36},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icLinkBrackets, 34, 35, 0},
      {refalrts::icLinkBrackets, 23, 16, 0},
      {refalrts::icLinkBrackets, 31, 12, 0},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 33},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 35, 37, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 34, 34, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 12, 23, 0},
      {refalrts::icSpliceTile, 0, 11, 0},
      {refalrts::icSpliceTile, 28, 33, 0},
      {refalrts::icSpliceTile, 26, 27, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceTile, 24, 25, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
      // </0 & Transform\3/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.OtherGenMode#2/13 )/16 e.Description#2/2 >/1
      // closed e.Source#1 as range 5
      // closed e.LinesBefore#2 as range 9
      // closed e.OtherGenMode#2 as range 13
      // closed e.Description#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Description#2/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 HalfReuse: 'U'/11 } Tile{ HalfReuse: 'n'/12 HalfReuse: 'k'/15 } Tile{ HalfReuse: 'n'/16 }"own generation mode "/18 Tile{ AsIs: e.OtherGenMode#2/13 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 18},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'U', 11},
      {refalrts::icReinitChar, 0, 'n', 12},
      {refalrts::icReinitChar, 0, 'k', 15},
      {refalrts::icReinitChar, 0, 'n', 16},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 18, 19, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceTile, 12, 15, 0},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Transform_L3

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Transform_L3(
  "Transform\\3",
  scope_gen_Transform_L3::raa,
  scope_gen_Transform_L3::functions,
  scope_gen_Transform_L3::idents,
  scope_gen_Transform_L3::numbers,
  scope_gen_Transform_L3::strings
);
refalrts::RefalFunction& gen_Transform_L3 = descr_gen_Transform_L3;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Transform_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  //FAST GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
  // </0 & Transform\3/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/17 e.idxTBV#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
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
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTT#0 as range 2
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( s.idx e.idx ) ( 'TOKENS' ) e.idx
    // </0 & Transform\3/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 'T'/18 'O'/19 'K'/20 'E'/21 'N'/22 'S'/23 )/16 e.Description#2/2 >/1
    context[38] = context[13];
    context[39] = context[14];
    context[18] = refalrts::char_left( 'T', context[38], context[39] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( 'O', context[38], context[39] );
    if( ! context[19] )
      continue;
    context[20] = refalrts::char_left( 'K', context[38], context[39] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'E', context[38], context[39] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_left( 'N', context[38], context[39] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( 'S', context[38], context[39] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[38], context[39] ) )
      continue;
    // closed e.Source#1 as range 5
    // closed e.LinesBefore#2 as range 9
    // closed e.Description#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </24 & Fetch/25 Tile{ AsIs: s.Length#2/17 } e.Description#2/2/26 </28 & Seq/29 & DFA-Tokens/30 (/31 & Map/32 </33 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Transform\3$1\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: )/12 HalfReuse: & DFA-Parse/15 HalfReuse: & DFA-Compile/18 HalfReuse: & GenerateFromDFA/19 HalfReuse: </20 HalfReuse: & @create_closure@/21 HalfReuse: & Transform\3$1\2/22 HalfReuse: (/23 } Tile{ AsIs: e.LinesBefore#2/9 } Tile{ AsIs: )/16 } (/34 Tile{ AsIs: e.Description#2/2 } )/35 >/36 >/37 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], & Fetch ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], & Seq ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], & DFA_Tokens ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], & Map ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], & refalrts::create_closure );
    refalrts::update_name( context[4], & gen_Transform_L3S1L1 );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_name( context[15], & DFA_Parse );
    refalrts::reinit_name( context[18], & DFA_Compile );
    refalrts::reinit_name( context[19], & GenerateFromDFA );
    refalrts::reinit_open_call( context[20] );
    refalrts::reinit_name( context[21], & refalrts::create_closure );
    refalrts::reinit_name( context[22], & gen_Transform_L3S1L2 );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[34], context[35] );
    refalrts::link_brackets( context[23], context[16] );
    refalrts::link_brackets( context[31], context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[33] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[23] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[28], context[33] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
  // </0 & Transform\3/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.OtherGenMode#2/13 )/16 e.Description#2/2 >/1
  // closed e.Source#1 as range 5
  // closed e.LinesBefore#2 as range 9
  // closed e.OtherGenMode#2 as range 13
  // closed e.Description#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Description#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 HalfReuse: 'U'/11 } Tile{ HalfReuse: 'n'/12 HalfReuse: 'k'/15 } Tile{ HalfReuse: 'n'/16 }"own generation mode "/18 Tile{ AsIs: e.OtherGenMode#2/13 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[18], context[19], "own generation mode ", 20 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ErrorAt );
  refalrts::reinit_char( context[11], 'U' );
  refalrts::reinit_char( context[12], 'n' );
  refalrts::reinit_char( context[15], 'k' );
  refalrts::reinit_char( context[16], 'n' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Transform_L3(func_gen_Transform_L3, "Transform\\3");
refalrts::RefalFunction& gen_Transform_L3 = descr_gen_Transform_L3;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Transform {
    static refalrts::RefalFunction *functions[] = {
      & gen_Transform_L1,
      & refalrts::create_closure,
      & gen_Transform_L3,
      & gen_Transform_L2,
      & Seq,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 32, 0, 0},
      // </0 & Transform/4 (/7 e.Source#1/5 )/8 e.Lines#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Source#1 as range 5
      // closed e.Lines#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Lines#1/2 } </11 & Seq/12 </13 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Transform\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 } >/14 </15 & @create_closure@/16 & Transform\2/17 (/18 e.Source#1/5/19 )/21 >/22 </23 & @create_closure@/24 & Transform\3/25 (/26 e.Source#1/5/27 )/29 >/30 >/31 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 5, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 4, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 1, 16},
      {refalrts::icAllocFunc, 0, 3, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
      {refalrts::icCopyEVar, 19, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
      {refalrts::icAllocFunc, 0, 1, 24},
      {refalrts::icAllocFunc, 0, 2, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
      {refalrts::icCopyEVar, 27, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 30},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 31},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 30},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icLinkBrackets, 26, 29, 0},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icLinkBrackets, 18, 21, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 14, 31, 0},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 11, 13, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Transform

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Transform(
  "Transform",
  scope_Transform::raa,
  scope_Transform::functions,
  scope_Transform::idents,
  scope_Transform::numbers,
  scope_Transform::strings
);
refalrts::RefalFunction& Transform = descr_Transform;

} // unnamed namespace

#else
static refalrts::FnResult func_Transform(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Transform/4 (/7 e.Source#1/5 )/8 e.Lines#1/2 >/1
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
  // closed e.Source#1 as range 5
  // closed e.Lines#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Lines#1/2 } </11 & Seq/12 </13 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Transform\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 } >/14 </15 & @create_closure@/16 & Transform\2/17 (/18 e.Source#1/5/19 )/21 >/22 </23 & @create_closure@/24 & Transform\3/25 (/26 e.Source#1/5/27 )/29 >/30 >/31 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & gen_Transform_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], & gen_Transform_L3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & refalrts::create_closure );
  refalrts::update_name( context[4], & gen_Transform_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[26], context[29] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[31] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Transform(func_Transform, "Transform");
refalrts::RefalFunction& Transform = descr_Transform;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Length_T_L1 {
    static refalrts::RefalFunction *functions[] = {
      & Inc
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 10, 0, 0},
      // </0 & Length-T\1/4 s.Next#2/9 (/7 e.Line#2/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      // closed e.Line#2 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#2/9 HalfReuse: >/7 } Tile{ HalfReuse: (/8 } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 8, 1, 0},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Length_T_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Length_T_L1(
  "Length-T\\1",
  scope_gen_Length_T_L1::raa,
  scope_gen_Length_T_L1::functions,
  scope_gen_Length_T_L1::idents,
  scope_gen_Length_T_L1::numbers,
  scope_gen_Length_T_L1::strings
);
refalrts::RefalFunction& gen_Length_T_L1 = descr_gen_Length_T_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Length_T_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Length-T\1/4 s.Next#2/9 (/7 e.Line#2/5 )/8 >/1
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
  // closed e.Line#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#2/9 HalfReuse: >/7 } Tile{ HalfReuse: (/8 } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], & Inc );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Length_T_L1(func_gen_Length_T_L1, "Length-T\\1");
refalrts::RefalFunction& gen_Length_T_L1 = descr_gen_Length_T_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Length_T {
    static refalrts::RefalFunction *functions[] = {
      & gen_Length_T_L1,
      & MapReduce
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & Length-T/4 e.Lines#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Lines#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & MapReduce/6 Tile{ HalfReuse: & Length-T\1/0 HalfReuse: 0/4 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 1, 6},
      {refalrts::icReinitFunc, 0, 0, 0},
      {refalrts::icReinitInt, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Length_T

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Length_T(
  "Length-T",
  scope_Length_T::raa,
  scope_Length_T::functions,
  scope_Length_T::idents,
  scope_Length_T::numbers,
  scope_Length_T::strings
);
refalrts::RefalFunction& Length_T = descr_Length_T;

} // unnamed namespace

#else
static refalrts::FnResult func_Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Length-T/4 e.Lines#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Lines#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & MapReduce/6 Tile{ HalfReuse: & Length-T\1/0 HalfReuse: 0/4 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & MapReduce ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & gen_Length_T_L1 );
  refalrts::reinit_number( context[4], 0UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Length_T(func_Length_T, "Length-T");
refalrts::RefalFunction& Length_T = descr_Length_T;

} // unnamed namespace

#endif

//End of file
