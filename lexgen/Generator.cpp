// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #Any
template <typename SREFAL_PARAM_INT>
struct ident_Any {
  static const char *name() {
    return "Any";
  }
};

// identifier #Empty
template <typename SREFAL_PARAM_INT>
struct ident_Empty {
  static const char *name() {
    return "Empty";
  }
};

// identifier #Finitive
template <typename SREFAL_PARAM_INT>
struct ident_Finitive {
  static const char *name() {
    return "Finitive";
  }
};

// identifier #Flush
template <typename SREFAL_PARAM_INT>
struct ident_Flush {
  static const char *name() {
    return "Flush";
  }
};

// identifier #FlushError
template <typename SREFAL_PARAM_INT>
struct ident_FlushError {
  static const char *name() {
    return "FlushError";
  }
};

// identifier #None
template <typename SREFAL_PARAM_INT>
struct ident_None {
  static const char *name() {
    return "None";
  }
};

// identifier #Unnamed
template <typename SREFAL_PARAM_INT>
struct ident_Unnamed {
  static const char *name() {
    return "Unnamed";
  }
};

extern refalrts::RefalFunction& Map;
extern refalrts::RefalFunction& Fetch;
extern refalrts::RefalFunction& EscapeChar;
#ifdef INTERPRET
extern refalrts::RefalFunction& GenerateFromDFA;
#else
extern refalrts::RefalFunction& GenerateFromDFA;
#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& WriteFunction;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& WriteFunction;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& WriteAlternative;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& WriteAlternative;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_WriteAlternative_Aux_S2L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_WriteAlternative_Aux_S2L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& WriteAlternative_Aux;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& WriteAlternative_Aux;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& Head;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& Head;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& Flush;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& Flush;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& NextState_L;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& NextState_L;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& NextState_R;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& NextState_R;
} // unnamed namespace

#endif

#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_GenerateFromDFA {
    static refalrts::RefalFunction *functions[] = {
      & WriteFunction,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & GenerateFromDFA/4 e.Rules#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Rules#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & WriteFunction/4 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
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
  } // namespace scope_GenerateFromDFA

} // unnamed namespace

refalrts::RASLFunction descr_GenerateFromDFA(
  "GenerateFromDFA",
  scope_GenerateFromDFA::raa,
  scope_GenerateFromDFA::functions,
  scope_GenerateFromDFA::idents,
  scope_GenerateFromDFA::numbers,
  scope_GenerateFromDFA::strings
);
refalrts::RefalFunction& GenerateFromDFA = descr_GenerateFromDFA;

#else
static refalrts::FnResult func_GenerateFromDFA(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GenerateFromDFA/4 e.Rules#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rules#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & WriteFunction/4 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & WriteFunction );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_GenerateFromDFA(func_GenerateFromDFA, "GenerateFromDFA");
refalrts::RefalFunction& GenerateFromDFA = descr_GenerateFromDFA;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_WriteFunction {
    static refalrts::RefalFunction *functions[] = {
      & WriteAlternative,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 19, 0, 0},
      // </0 & WriteFunction/4 (/7 (/11 e.NextRule#1/9 )/12 e.Alternatives#1/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.NextRule#1 as range 9
      // closed e.Alternatives#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: )/7 AsIs: (/11 AsIs: e.NextRule#1/9 HalfReuse: ' '/12 } '{'/13 )/14 Tile{ AsIs: </0 } & Map/15 & WriteAlternative/16 Tile{ AsIs: e.Alternatives#1/5 } >/17 (/18 Tile{ HalfReuse: '}'/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocChar, 0, '{', 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
      {refalrts::icAllocFunc, 0, 1, 15},
      {refalrts::icAllocFunc, 0, 0, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
      {refalrts::icReinitChar, 0, ' ', 12},
      {refalrts::icReinitChar, 0, '}', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 18, 1, 0},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 14, 0},
      {refalrts::icLinkBrackets, 4, 7, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceTile, 4, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_WriteFunction

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_WriteFunction(
  "WriteFunction",
  scope_WriteFunction::raa,
  scope_WriteFunction::functions,
  scope_WriteFunction::idents,
  scope_WriteFunction::numbers,
  scope_WriteFunction::strings
);
refalrts::RefalFunction& WriteFunction = descr_WriteFunction;

} // unnamed namespace

#else
static refalrts::FnResult func_WriteFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & WriteFunction/4 (/7 (/11 e.NextRule#1/9 )/12 e.Alternatives#1/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextRule#1 as range 9
  // closed e.Alternatives#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: )/7 AsIs: (/11 AsIs: e.NextRule#1/9 HalfReuse: ' '/12 } '{'/13 )/14 Tile{ AsIs: </0 } & Map/15 & WriteAlternative/16 Tile{ AsIs: e.Alternatives#1/5 } >/17 (/18 Tile{ HalfReuse: '}'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[13], '{' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & Map ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & WriteAlternative ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_char( context[12], ' ' );
  refalrts::reinit_char( context[8], '}' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[18], context[1] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[4], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_WriteFunction(func_WriteFunction, "WriteFunction");
refalrts::RefalFunction& WriteFunction = descr_WriteFunction;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_WriteAlternative {
    static refalrts::RefalFunction *functions[] = {
      & WriteAlternative_Aux
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"  (e.Accum)", 11}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 12, 0, 0},
      // </0 & WriteAlternative/4 t.Alternative#1/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/7"  (e.Accum)"/8 Tile{ AsIs: </0 Reuse: & WriteAlternative-Aux/4 AsIs: t.Alternative#1/5 AsIs: >/1 } ';'/10 )/11 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
      {refalrts::icAllocString, 0, 0, 8},
      {refalrts::icAllocChar, 0, ';', 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icLinkBrackets, 7, 11, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_WriteAlternative

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_WriteAlternative(
  "WriteAlternative",
  scope_WriteAlternative::raa,
  scope_WriteAlternative::functions,
  scope_WriteAlternative::idents,
  scope_WriteAlternative::numbers,
  scope_WriteAlternative::strings
);
refalrts::RefalFunction& WriteAlternative = descr_WriteAlternative;

} // unnamed namespace

#else
static refalrts::FnResult func_WriteAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & WriteAlternative/4 t.Alternative#1/5 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/7"  (e.Accum)"/8 Tile{ AsIs: </0 Reuse: & WriteAlternative-Aux/4 AsIs: t.Alternative#1/5 AsIs: >/1 } ';'/10 )/11 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "  (e.Accum)", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteAlternative_Aux );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_WriteAlternative(func_WriteAlternative, "WriteAlternative");
refalrts::RefalFunction& WriteAlternative = descr_WriteAlternative;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_WriteAlternative_Aux_S2L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 7, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & WriteAlternative-Aux$2\1/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +7, 0, 0},
      //
      // </0 & WriteAlternative-Aux$2\1/4 >/1
      {refalrts::icSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux$2\1/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 ]] }
      {refalrts::icReinitChar, 0, ' ', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & WriteAlternative-Aux$2\1/4 e.ResultNotEmpty#2/2 >/1
      // closed e.ResultNotEmpty#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux$2\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.ResultNotEmpty#2/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_WriteAlternative_Aux_S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_WriteAlternative_Aux_S2L1(
  "WriteAlternative-Aux$2\\1",
  scope_gen_WriteAlternative_Aux_S2L1::raa,
  scope_gen_WriteAlternative_Aux_S2L1::functions,
  scope_gen_WriteAlternative_Aux_S2L1::idents,
  scope_gen_WriteAlternative_Aux_S2L1::numbers,
  scope_gen_WriteAlternative_Aux_S2L1::strings
);
refalrts::RefalFunction& gen_WriteAlternative_Aux_S2L1 = descr_gen_WriteAlternative_Aux_S2L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_WriteAlternative_Aux_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & WriteAlternative-Aux$2\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //
    // </0 & WriteAlternative-Aux$2\1/4 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux$2\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 ]] }
    refalrts::reinit_char( context[1], ' ' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // e.idx
  // </0 & WriteAlternative-Aux$2\1/4 e.ResultNotEmpty#2/2 >/1
  // closed e.ResultNotEmpty#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux$2\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ResultNotEmpty#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_WriteAlternative_Aux_S2L1(func_gen_WriteAlternative_Aux_S2L1, "WriteAlternative-Aux$2\\1");
refalrts::RefalFunction& gen_WriteAlternative_Aux_S2L1 = descr_gen_WriteAlternative_Aux_S2L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_WriteAlternative_Aux {
    static refalrts::RefalFunction *functions[] = {
      & gen_WriteAlternative_Aux_S2L1,
      & Head,
      & NextState_R,
      & Flush,
      & Fetch,
      & NextState_L
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_None<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"e.Accum", 7}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 28, 0, 0},
      //FAST GEN: ( s.$ t.$ t.$ )
      //GLOBAL GEN: ( s.$ t.$ t.$ )
      // </0 & WriteAlternative-Aux/4 (/7 s.idxB#0/9 t.idxBV#0/10 t.idxBVV#0/12 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      {refalrts::ictVarLeftSave, 0, 10, 5},
      {refalrts::ictVarLeftSave, 0, 12, 5},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icOnFailGoTo, +29, 0, 0},
      // ( s.idx # None t.idx )
      // </0 & WriteAlternative-Aux/4 (/7 s.Head#1/9 # None/10 t.NextState#1/12 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Head/4 HalfReuse: s.Head1 #9/7 } >/14 </15 & NextState-L/16 t.NextState#1/12/17 >/19 </20 Tile{ HalfReuse: & NextState-R/10 AsIs: t.NextState#1/12 }"e.Accum"/21 </23 & Head/24 Tile{ AsIs: s.Head#1/9 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 5, 16},
      {refalrts::icCopyEVar, 17, 12, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
      {refalrts::icAllocString, 0, 0, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
      {refalrts::icAllocFunc, 0, 1, 24},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitSVar, 0, 9, 7},
      {refalrts::icReinitFunc, 0, 2, 10},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 21, 24, 0},
      {refalrts::icSpliceTile, 10, 13, 0},
      {refalrts::icSpliceTile, 14, 20, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( s.idx t.idx t.idx )
      // </0 & WriteAlternative-Aux/4 (/7 s.Head#1/9 t.Flush#1/10 t.NextState#1/12 )/8 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Head/4 HalfReuse: s.Head1 #9/7 } >/14 </15 & NextState-L/16 t.NextState#1/12/17 >/19 </20 & Fetch/21 </22 & Flush/23 Tile{ AsIs: s.Head#1/9 AsIs: t.Flush#1/10 } >/24 </25 & NextState-R/26 Tile{ AsIs: t.NextState#1/12 } >/27 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 5, 16},
      {refalrts::icCopyEVar, 17, 12, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
      {refalrts::icAllocFunc, 0, 4, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
      {refalrts::icAllocFunc, 0, 3, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
      {refalrts::icAllocFunc, 0, 2, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitSVar, 0, 9, 7},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 27},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 27, 27, 0},
      {refalrts::icSpliceTile, 12, 13, 0},
      {refalrts::icSpliceTile, 24, 26, 0},
      {refalrts::icSpliceTile, 9, 11, 0},
      {refalrts::icSpliceTile, 14, 23, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_WriteAlternative_Aux

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_WriteAlternative_Aux(
  "WriteAlternative-Aux",
  scope_WriteAlternative_Aux::raa,
  scope_WriteAlternative_Aux::functions,
  scope_WriteAlternative_Aux::idents,
  scope_WriteAlternative_Aux::numbers,
  scope_WriteAlternative_Aux::strings
);
refalrts::RefalFunction& WriteAlternative_Aux = descr_WriteAlternative_Aux;

} // unnamed namespace

#else
static refalrts::FnResult func_WriteAlternative_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: ( s.$ t.$ t.$ )
  //GLOBAL GEN: ( s.$ t.$ t.$ )
  // </0 & WriteAlternative-Aux/4 (/7 s.idxB#0/9 t.idxBV#0/10 t.idxBVV#0/12 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( s.idx # None t.idx )
    // </0 & WriteAlternative-Aux/4 (/7 s.Head#1/9 # None/10 t.NextState#1/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_None<int>::name, context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Head/4 HalfReuse: s.Head1 #9/7 } >/14 </15 & NextState-L/16 t.NextState#1/12/17 >/19 </20 Tile{ HalfReuse: & NextState-R/10 AsIs: t.NextState#1/12 }"e.Accum"/21 </23 & Head/24 Tile{ AsIs: s.Head#1/9 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], & NextState_L ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[17], context[18], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "e.Accum", 7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], & Head ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Head );
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_name( context[10], & NextState_R );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[14], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( s.idx t.idx t.idx )
  // </0 & WriteAlternative-Aux/4 (/7 s.Head#1/9 t.Flush#1/10 t.NextState#1/12 )/8 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Head/4 HalfReuse: s.Head1 #9/7 } >/14 </15 & NextState-L/16 t.NextState#1/12/17 >/19 </20 & Fetch/21 </22 & Flush/23 Tile{ AsIs: s.Head#1/9 AsIs: t.Flush#1/10 } >/24 </25 & NextState-R/26 Tile{ AsIs: t.NextState#1/12 } >/27 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & NextState_L ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[12], context[13]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], & Flush ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], & NextState_R ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Head );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_name( context[8], & gen_WriteAlternative_Aux_S2L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[14], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_WriteAlternative_Aux(func_WriteAlternative_Aux, "WriteAlternative-Aux");
refalrts::RefalFunction& WriteAlternative_Aux = descr_WriteAlternative_Aux;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Head {
    static refalrts::RefalFunction *functions[] = {
      & EscapeChar
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Any<int>::name,
      & ident_Empty<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {" \'", 2},
      {"ny", 2}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 9, 0, 0},
      //FAST GEN: s.$
      //GLOBAL GEN: s.$
      // </0 & Head/4 s.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +5, 0, 0},
      // # Empty
      // </0 & Head/4 # Empty/5 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Head/4 # Empty/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // # Any
      // </0 & Head/4 # Any/5 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 's'/4 HalfReuse: '.'/5 HalfReuse: 'A'/1 }"ny"/6 Tile{ ]] }
      {refalrts::icAllocString, 0, 1, 6},
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, 's', 4},
      {refalrts::icReinitChar, 0, '.', 5},
      {refalrts::icReinitChar, 0, 'A', 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx
      // </0 & Head/4 s.Other#1/5 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" \'"/6 Tile{ AsIs: </0 Reuse: & EscapeChar/4 AsIs: s.Other#1/5 AsIs: >/1 } '\''/8 Tile{ ]] }
      {refalrts::icAllocString, 0, 0, 6},
      {refalrts::icAllocChar, 0, '\'', 8},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Head

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Head(
  "Head",
  scope_Head::raa,
  scope_Head::functions,
  scope_Head::idents,
  scope_Head::numbers,
  scope_Head::strings
);
refalrts::RefalFunction& Head = descr_Head;

} // unnamed namespace

#else
static refalrts::FnResult func_Head(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & Head/4 s.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // # Empty
    // </0 & Head/4 # Empty/5 >/1
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Head/4 # Empty/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # Any
    // </0 & Head/4 # Any/5 >/1
    if( ! refalrts::ident_term(  & ident_Any<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 's'/4 HalfReuse: '.'/5 HalfReuse: 'A'/1 }"ny"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "ny", 2 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], 's' );
    refalrts::reinit_char( context[5], '.' );
    refalrts::reinit_char( context[1], 'A' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx
  // </0 & Head/4 s.Other#1/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" \'"/6 Tile{ AsIs: </0 Reuse: & EscapeChar/4 AsIs: s.Other#1/5 AsIs: >/1 } '\''/8 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], " \'", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '\'' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & EscapeChar );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_Head(func_Head, "Head");
refalrts::RefalFunction& Head = descr_Head;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Flush {
    static refalrts::RefalFunction *functions[] = {
      & Head
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_FlushError<int>::name,
      & ident_Flush<int>::name,
      & ident_Unnamed<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"#TokenError", 11},
      {" e.Accum", 8}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 13, 0, 0},
      //FAST GEN: s.$ t.$
      //GLOBAL GEN: s.$ t.$
      // </0 & Flush/4 s.idx#0/5 t.idxV#0/6 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 6, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +5, 0, 0},
      // s.idx # Unnamed
      // </0 & Flush/4 s.Head#1/5 # Unnamed/6 >/1
      {refalrts::icIdentTerm, 0, 2, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Flush/4 s.Head#1/5 # Unnamed/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // s.idx ( # Flush e.idx )
      // </0 & Flush/4 s.Head#1/5 (/6 # Flush/10 e.FlushName#1/8 )/7 >/1
      {refalrts::icBracketTerm, 0, 8, 6},
      {refalrts::icIdentLeftSave, 10, 1, 8},
      // closed e.FlushName#1 as range 8
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '('/1 } Tile{ AsIs: e.FlushName#1/8 }" e.Accum"/11 Tile{ AsIs: </0 Reuse: & Head/4 AsIs: s.Head#1/5 HalfReuse: >/6 HalfReuse: ')'/10 } Tile{ ]] }
      {refalrts::icAllocString, 0, 1, 11},
      {refalrts::icReinitChar, 0, ' ', 7},
      {refalrts::icReinitChar, 0, '(', 1},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icReinitChar, 0, ')', 10},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 0, 10, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 8},
      {refalrts::icSpliceTile, 7, 1, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx ( # FlushError e.idx )
      // </0 & Flush/4 s.Head#1/5 (/6 # FlushError/10 e.Message#1/8 )/7 >/1
      {refalrts::icBracketTerm, 0, 8, 6},
      {refalrts::icIdentLeftSave, 10, 0, 8},
      // closed e.Message#1 as range 8
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Head#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 }"#TokenError"/11 Tile{ HalfReuse: ' '/6 HalfReuse: '\''/10 AsIs: e.Message#1/8 HalfReuse: '\''/7 HalfReuse: ')'/1 ]] }
      {refalrts::icAllocString, 0, 0, 11},
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, '(', 4},
      {refalrts::icReinitChar, 0, ' ', 6},
      {refalrts::icReinitChar, 0, '\'', 10},
      {refalrts::icReinitChar, 0, '\'', 7},
      {refalrts::icReinitChar, 0, ')', 1},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Flush

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Flush(
  "Flush",
  scope_Flush::raa,
  scope_Flush::functions,
  scope_Flush::idents,
  scope_Flush::numbers,
  scope_Flush::strings
);
refalrts::RefalFunction& Flush = descr_Flush;

} // unnamed namespace

#else
static refalrts::FnResult func_Flush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: s.$ t.$
  //GLOBAL GEN: s.$ t.$
  // </0 & Flush/4 s.idx#0/5 t.idxV#0/6 >/1
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
    // s.idx # Unnamed
    // </0 & Flush/4 s.Head#1/5 # Unnamed/6 >/1
    if( ! refalrts::ident_term(  & ident_Unnamed<int>::name, context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Flush/4 s.Head#1/5 # Unnamed/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( # Flush e.idx )
    // </0 & Flush/4 s.Head#1/5 (/6 # Flush/10 e.FlushName#1/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  & ident_Flush<int>::name, context[8], context[9] );
    if( ! context[10] )
      continue;
    // closed e.FlushName#1 as range 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '('/1 } Tile{ AsIs: e.FlushName#1/8 }" e.Accum"/11 Tile{ AsIs: </0 Reuse: & Head/4 AsIs: s.Head#1/5 HalfReuse: >/6 HalfReuse: ')'/10 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], " e.Accum", 8 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[1], '(' );
    refalrts::update_name( context[4], & Head );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_char( context[10], ')' );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx ( # FlushError e.idx )
  // </0 & Flush/4 s.Head#1/5 (/6 # FlushError/10 e.Message#1/8 )/7 >/1
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::ident_left(  & ident_FlushError<int>::name, context[8], context[9] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 8

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Head#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 }"#TokenError"/11 Tile{ HalfReuse: ' '/6 HalfReuse: '\''/10 AsIs: e.Message#1/8 HalfReuse: '\''/7 HalfReuse: ')'/1 ]] }
  if( ! refalrts::alloc_chars( context[11], context[12], "#TokenError", 11 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_char( context[4], '(' );
  refalrts::reinit_char( context[6], ' ' );
  refalrts::reinit_char( context[10], '\'' );
  refalrts::reinit_char( context[7], '\'' );
  refalrts::reinit_char( context[1], ')' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_Flush(func_Flush, "Flush");
refalrts::RefalFunction& Flush = descr_Flush;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_NextState_L {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Finitive<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"Text", 4}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & NextState-L/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // # Finitive
      // </0 & NextState-L/4 # Finitive/5 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & NextState-L/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/5 HalfReuse: '='/1 ]] }
      {refalrts::icReinitChar, 0, ' ', 5},
      {refalrts::icReinitChar, 0, '=', 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx )
      // </0 & NextState-L/4 (/5 e.NextStateName#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      // closed e.NextStateName#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.NextStateName#1/7 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'e'/4 HalfReuse: '.'/5 }"Text"/9 Tile{ HalfReuse: ' '/6 HalfReuse: '='/1 ]] }
      {refalrts::icAllocString, 0, 0, 9},
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, 'e', 4},
      {refalrts::icReinitChar, 0, '.', 5},
      {refalrts::icReinitChar, 0, ' ', 6},
      {refalrts::icReinitChar, 0, '=', 1},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icTrash, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_NextState_L

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_NextState_L(
  "NextState-L",
  scope_NextState_L::raa,
  scope_NextState_L::functions,
  scope_NextState_L::idents,
  scope_NextState_L::numbers,
  scope_NextState_L::strings
);
refalrts::RefalFunction& NextState_L = descr_NextState_L;

} // unnamed namespace

#else
static refalrts::FnResult func_NextState_L(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & NextState-L/4 t.idx#0/5 >/1
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
    // # Finitive
    // </0 & NextState-L/4 # Finitive/5 >/1
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NextState-L/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/5 HalfReuse: '='/1 ]] }
    refalrts::reinit_char( context[5], ' ' );
    refalrts::reinit_char( context[1], '=' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx )
  // </0 & NextState-L/4 (/5 e.NextStateName#1/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName#1 as range 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.NextStateName#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'e'/4 HalfReuse: '.'/5 }"Text"/9 Tile{ HalfReuse: ' '/6 HalfReuse: '='/1 ]] }
  if( ! refalrts::alloc_chars( context[9], context[10], "Text", 4 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_char( context[4], 'e' );
  refalrts::reinit_char( context[5], '.' );
  refalrts::reinit_char( context[6], ' ' );
  refalrts::reinit_char( context[1], '=' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_NextState_L(func_NextState_L, "NextState-L");
refalrts::RefalFunction& NextState_L = descr_NextState_L;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_NextState_R {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Finitive<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {" e.Text", 7}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      //FAST GEN: t.$ e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & NextState-R/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +5, 0, 0},
      // # Finitive e.idx
      // </0 & NextState-R/4 # Finitive/5 e.NextStateAccum#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      // closed e.NextStateAccum#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & NextState-R/4 # Finitive/5 e.NextStateAccum#1/2 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & NextState-R/4 (/5 e.NextStateName#1/7 )/6 e.NextStateAccum#1/2 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      // closed e.NextStateName#1 as range 7
      // closed e.NextStateAccum#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '<'/5 AsIs: e.NextStateName#1/7 HalfReuse: ' '/6 } '('/9 Tile{ AsIs: e.NextStateAccum#1/2 } Tile{ HalfReuse: ')'/0 }" e.Text"/10 Tile{ HalfReuse: '>'/1 ]] }
      {refalrts::icAllocChar, 0, '(', 9},
      {refalrts::icAllocString, 0, 0, 10},
      {refalrts::icReinitChar, 0, ' ', 4},
      {refalrts::icReinitChar, 0, '<', 5},
      {refalrts::icReinitChar, 0, ' ', 6},
      {refalrts::icReinitChar, 0, ')', 0},
      {refalrts::icReinitChar, 0, '>', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_NextState_R

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_NextState_R(
  "NextState-R",
  scope_NextState_R::raa,
  scope_NextState_R::functions,
  scope_NextState_R::idents,
  scope_NextState_R::numbers,
  scope_NextState_R::strings
);
refalrts::RefalFunction& NextState_R = descr_NextState_R;

} // unnamed namespace

#else
static refalrts::FnResult func_NextState_R(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & NextState-R/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // # Finitive e.idx
    // </0 & NextState-R/4 # Finitive/5 e.NextStateAccum#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[5] ) )
      continue;
    // closed e.NextStateAccum#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NextState-R/4 # Finitive/5 e.NextStateAccum#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & NextState-R/4 (/5 e.NextStateName#1/7 )/6 e.NextStateAccum#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName#1 as range 7
  // closed e.NextStateAccum#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '<'/5 AsIs: e.NextStateName#1/7 HalfReuse: ' '/6 } '('/9 Tile{ AsIs: e.NextStateAccum#1/2 } Tile{ HalfReuse: ')'/0 }" e.Text"/10 Tile{ HalfReuse: '>'/1 ]] }
  if( ! refalrts::alloc_char( context[9], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], " e.Text", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[4], ' ' );
  refalrts::reinit_char( context[5], '<' );
  refalrts::reinit_char( context[6], ' ' );
  refalrts::reinit_char( context[0], ')' );
  refalrts::reinit_char( context[1], '>' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[4], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_NextState_R(func_NextState_R, "NextState-R");
refalrts::RefalFunction& NextState_R = descr_NextState_R;

} // unnamed namespace

#endif

//End of file
