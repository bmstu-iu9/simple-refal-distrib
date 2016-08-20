// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #Chars
template <typename SREFAL_PARAM_INT>
struct ident_Chars {
  static const char *name() {
    return "Chars";
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

// identifier #Sentence
template <typename SREFAL_PARAM_INT>
struct ident_Sentence {
  static const char *name() {
    return "Sentence";
  }
};

// identifier #Set
template <typename SREFAL_PARAM_INT>
struct ident_Set {
  static const char *name() {
    return "Set";
  }
};

// identifier #TAlternative
template <typename SREFAL_PARAM_INT>
struct ident_TAlternative {
  static const char *name() {
    return "TAlternative";
  }
};

// identifier #TDot
template <typename SREFAL_PARAM_INT>
struct ident_TDot {
  static const char *name() {
    return "TDot";
  }
};

// identifier #TEOF
template <typename SREFAL_PARAM_INT>
struct ident_TEOF {
  static const char *name() {
    return "TEOF";
  }
};

// identifier #TEquals
template <typename SREFAL_PARAM_INT>
struct ident_TEquals {
  static const char *name() {
    return "TEquals";
  }
};

// identifier #TErrorFlush
template <typename SREFAL_PARAM_INT>
struct ident_TErrorFlush {
  static const char *name() {
    return "TErrorFlush";
  }
};

// identifier #TFlush
template <typename SREFAL_PARAM_INT>
struct ident_TFlush {
  static const char *name() {
    return "TFlush";
  }
};

// identifier #TLiteral
template <typename SREFAL_PARAM_INT>
struct ident_TLiteral {
  static const char *name() {
    return "TLiteral";
  }
};

// identifier #TName
template <typename SREFAL_PARAM_INT>
struct ident_TName {
  static const char *name() {
    return "TName";
  }
};

// identifier #TNamedFlush
template <typename SREFAL_PARAM_INT>
struct ident_TNamedFlush {
  static const char *name() {
    return "TNamedFlush";
  }
};

// identifier #TSetName
template <typename SREFAL_PARAM_INT>
struct ident_TSetName {
  static const char *name() {
    return "TSetName";
  }
};

// identifier #Unnamed
template <typename SREFAL_PARAM_INT>
struct ident_Unnamed {
  static const char *name() {
    return "Unnamed";
  }
};

extern refalrts::RefalFunction& ErrorAt;
extern refalrts::RefalFunction& Fetch;
extern refalrts::RefalFunction& Seq;
extern refalrts::RefalFunction& DFA_TextFromToken;
extern refalrts::RefalFunction& DFA_Parse;
namespace /* unnamed */ {
extern refalrts::RefalFunction& ParseElements;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ParseSetDescr_S1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ParseSetDescr;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ExtractSets;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ParseSentence_S1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ParseSentence;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ExtractAlternatives_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ExtractAlternatives_L2;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ExtractAlternatives_L3;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ExtractAlternatives_L4;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ExtractAlternatives_L5;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ExtractAlternatives_L6;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ExtractAlternatives;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ExtractAlternatives_Head;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ExtractAlternatives_Flush;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ExtractAlternatives_NextState;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& UnexpectedToken;
} // unnamed namespace


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DFA_Parse {
    static refalrts::RefalFunction *functions[] = {
      & ParseElements,
      & ErrorAt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TEOF<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"Any", 3},
      {"egal empty descriptio", 21}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 17, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & DFA-Parse/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( # TEOF t.idx )
      // </0 & DFA-Parse/4 (/7 # TEOF/9 t.SrcPos#1/10 )/8 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icBracketLeftSave, 0, 5, 15},
      {refalrts::icIdentLeftSave, 9, 0, 5},
      {refalrts::icEmpty, 0, 0, 15},
      {refalrts::ictVarLeftSave, 0, 10, 5},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/10 } 'I'/12 Tile{ HalfReuse: 'l'/7 HalfReuse: 'l'/9 }"egal empty descriptio"/13 Tile{ HalfReuse: 'n'/8 AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, 'I', 12},
      {refalrts::icAllocString, 0, 1, 13},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'l', 7},
      {refalrts::icReinitChar, 0, 'l', 9},
      {refalrts::icReinitChar, 0, 'n', 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & DFA-Parse/4 e.Tokens#1/2 >/1
      // closed e.Tokens#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & ParseElements/6 (/7 (/8"Any"/9 )/11 )/12 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 0, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icAllocString, 0, 0, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icLinkBrackets, 0, 4, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icLinkBrackets, 8, 11, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DFA_Parse

} // unnamed namespace

refalrts::RASLFunction descr_DFA_Parse(
  "DFA-Parse",
  scope_DFA_Parse::raa,
  scope_DFA_Parse::functions,
  scope_DFA_Parse::idents,
  scope_DFA_Parse::numbers,
  scope_DFA_Parse::strings
);
refalrts::RefalFunction& DFA_Parse = descr_DFA_Parse;

#else
static refalrts::FnResult func_DFA_Parse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & DFA-Parse/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // ( # TEOF t.idx )
    // </0 & DFA-Parse/4 (/7 # TEOF/9 t.SrcPos#1/10 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[15], context[16] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TEOF<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/10 } 'I'/12 Tile{ HalfReuse: 'l'/7 HalfReuse: 'l'/9 }"egal empty descriptio"/13 Tile{ HalfReuse: 'n'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[12], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "egal empty descriptio", 21 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & ErrorAt );
    refalrts::reinit_char( context[7], 'l' );
    refalrts::reinit_char( context[9], 'l' );
    refalrts::reinit_char( context[8], 'n' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // e.idx
  // </0 & DFA-Parse/4 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ParseElements/6 (/7 (/8"Any"/9 )/11 )/12 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & ParseElements ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "Any", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_DFA_Parse(func_DFA_Parse, "DFA-Parse");
refalrts::RefalFunction& DFA_Parse = descr_DFA_Parse;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ParseElements {
    static refalrts::RefalFunction *functions[] = {
      & UnexpectedToken,
      & ParseSentence,
      & ErrorAt,
      & ParseSetDescr
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TEOF<int>::name,
      & ident_TName<int>::name,
      & ident_TSetName<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {" or set name", 12},
      {"clared", 6},
      {" redeclared", 11},
      {"e ", 2}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 7, 0, 0},
      {refalrts::icIssueMemory, 36, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ ) t.$ e.$
      //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ e.$
      // </0 & ParseElements/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 e.idxTTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      {refalrts::ictVarLeftSave, 0, 13, 2},
      // closed e.idxTTV#0 as range 2
      {refalrts::icOnFailGoTo, +36, 0, 0},
      // ( e.idx ) ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
      // </0 & ParseElements/4 (/7 e.SetNames-B#1/20 (/24 e.Name#1/26 )/25 e.SetNames-E#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TSetName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
      {refalrts::icBracketTerm, 0, 15, 13},
      {refalrts::icIdentLeftSave, 17, 2, 15},
      // closed e.RuleNames#1 as range 9
      // closed e.Tail#1 as range 2
      {refalrts::ictVarLeftSave, 0, 18, 15},
      // closed e.Name#1 as range 15
      {refalrts::icSave, 0, 32, 5},
      {refalrts::icEPrepare, 0, 20, 32},
      {refalrts::icEStart, 0, 20, 32},
      {refalrts::icSave, 0, 34, 32},
      {refalrts::icBracketLeftSave, 0, 22, 34},
      {refalrts::iceRepeatLeft, 26, 15, 22},
      {refalrts::icEmpty, 0, 0, 22},
      // closed e.SetNames-E#1 as range 34(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames-B#1/20 {REMOVED TILE} e.SetNames-E#1/34(5) {REMOVED TILE} e.RuleNames#1/9 {REMOVED TILE} {REMOVED TILE} e.Name#1/15 {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/13 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'a'/7 } Tile{ HalfReuse: 'm'/14 }"e "/28 Tile{ HalfReuse: ':'/24 AsIs: e.Name#1/26 HalfReuse: ':'/25 }" redeclared"/30 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 3, 28},
      {refalrts::icAllocString, 0, 2, 30},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitChar, 0, 'S', 8},
      {refalrts::icReinitChar, 0, 'e', 11},
      {refalrts::icReinitChar, 0, 't', 12},
      {refalrts::icReinitChar, 0, ' ', 13},
      {refalrts::icReinitChar, 0, 'n', 17},
      {refalrts::icReinitChar, 0, 'a', 7},
      {refalrts::icReinitChar, 0, 'm', 14},
      {refalrts::icReinitChar, 0, ':', 24},
      {refalrts::icReinitChar, 0, ':', 25},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 30, 31, 0},
      {refalrts::icSpliceTile, 24, 25, 0},
      {refalrts::icSpliceTile, 28, 29, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 12, 17, 0},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceTile, 18, 19, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +24, 0, 0},
      // ( e.idx ) ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
      // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TSetName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
      {refalrts::icBracketTerm, 0, 15, 13},
      {refalrts::icIdentLeftSave, 17, 2, 15},
      // closed e.SetNames#1 as range 5
      // closed e.RuleNames#1 as range 9
      // closed e.Tail#1 as range 2
      {refalrts::ictVarLeftSave, 0, 18, 15},
      // closed e.Name#1 as range 15
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr/4 AsIs: (/7 AsIs: e.SetNames#1/5 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/15 } Tile{ HalfReuse: )/17 } )/20 Tile{ AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ AsIs: (/13 } e.Name#1/15/21 Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
      {refalrts::icCopyEVar, 21, 15, 0},
      {refalrts::icUpdateFunc, 0, 3, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 17},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 20, 0},
      {refalrts::icLinkBrackets, 8, 17, 0},
      {refalrts::icSetRes, 0, 0, 14},
      {refalrts::icSpliceTile, 21, 22, 0},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceTile, 18, 19, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 20, 20, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +36, 0, 0},
      // ( e.idx ) ( e.idx ) ( # TName t.idx e.idx ) e.idx
      // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames-B#1/20 (/24 e.Name#1/26 )/25 e.RuleNames-E#1/9 )/12 (/13 # TName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
      {refalrts::icBracketTerm, 0, 15, 13},
      {refalrts::icIdentLeftSave, 17, 1, 15},
      // closed e.SetNames#1 as range 5
      // closed e.Tail#1 as range 2
      {refalrts::ictVarLeftSave, 0, 18, 15},
      // closed e.Name#1 as range 15
      {refalrts::icSave, 0, 32, 9},
      {refalrts::icEPrepare, 0, 20, 32},
      {refalrts::icEStart, 0, 20, 32},
      {refalrts::icSave, 0, 34, 32},
      {refalrts::icBracketLeftSave, 0, 22, 34},
      {refalrts::iceRepeatLeft, 26, 15, 22},
      {refalrts::icEmpty, 0, 0, 22},
      // closed e.RuleNames-E#1 as range 34(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/5 {REMOVED TILE} e.RuleNames-B#1/20 {REMOVED TILE} e.RuleNames-E#1/34(9) {REMOVED TILE} {REMOVED TILE} e.Name#1/15 {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ HalfReuse: 'N'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'm'/7 } 'e'/28 Tile{ HalfReuse: ' '/24 AsIs: e.Name#1/26 HalfReuse: ' '/25 } Tile{ HalfReuse: 'r'/12 HalfReuse: 'e'/13 HalfReuse: 'd'/17 } Tile{ HalfReuse: 'e'/14 }"clared"/29 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, 'e', 28},
      {refalrts::icAllocString, 0, 1, 29},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitChar, 0, 'N', 8},
      {refalrts::icReinitChar, 0, 'a', 11},
      {refalrts::icReinitChar, 0, 'm', 7},
      {refalrts::icReinitChar, 0, ' ', 24},
      {refalrts::icReinitChar, 0, ' ', 25},
      {refalrts::icReinitChar, 0, 'r', 12},
      {refalrts::icReinitChar, 0, 'e', 13},
      {refalrts::icReinitChar, 0, 'd', 17},
      {refalrts::icReinitChar, 0, 'e', 14},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 29, 30, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 12, 17, 0},
      {refalrts::icSpliceTile, 24, 25, 0},
      {refalrts::icSpliceTile, 28, 28, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceTile, 18, 19, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // ( e.idx ) ( e.idx ) ( # TName t.idx e.idx ) e.idx
      // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
      {refalrts::icBracketTerm, 0, 15, 13},
      {refalrts::icIdentLeftSave, 17, 1, 15},
      // closed e.SetNames#1 as range 5
      // closed e.RuleNames#1 as range 9
      // closed e.Tail#1 as range 2
      {refalrts::ictVarLeftSave, 0, 18, 15},
      // closed e.Name#1 as range 15
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence/4 AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 HalfReuse: (/12 } e.Name#1/15/20 Tile{ HalfReuse: )/13 HalfReuse: )/17 AsIs: t.SrcPos#1/18 } (/22 Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
      {refalrts::icCopyEVar, 20, 15, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 17},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 22, 14, 0},
      {refalrts::icLinkBrackets, 11, 17, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 14},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceTile, 22, 22, 0},
      {refalrts::icSpliceTile, 13, 19, 0},
      {refalrts::icSpliceTile, 20, 21, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +8, 0, 0},
      // ( e.idx ) ( e.idx ) ( # TEOF t.idx ) e.idx
      // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1
      {refalrts::icBracketTerm, 0, 15, 13},
      {refalrts::icIdentLeftSave, 17, 0, 15},
      // closed e.SetNames#1 as range 5
      // closed e.RuleNames#1 as range 9
      // closed e.Tail#1 as range 2
      {refalrts::ictVarLeftSave, 0, 18, 15},
      {refalrts::icEmpty, 0, 0, 15},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( e.idx ) t.idx e.idx
      // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
      // closed e.SetNames#1 as range 5
      // closed e.RuleNames#1 as range 9
      // closed e.Tail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'a'/8 HalfReuse: 'm'/11 } Tile{ HalfReuse: 'e'/12 }" or set name"/15 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 15},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'n', 7},
      {refalrts::icReinitChar, 0, 'a', 8},
      {refalrts::icReinitChar, 0, 'm', 11},
      {refalrts::icReinitChar, 0, 'e', 12},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ParseElements

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ParseElements(
  "ParseElements",
  scope_ParseElements::raa,
  scope_ParseElements::functions,
  scope_ParseElements::idents,
  scope_ParseElements::numbers,
  scope_ParseElements::strings
);
refalrts::RefalFunction& ParseElements = descr_ParseElements;

} // unnamed namespace

#else
static refalrts::FnResult func_ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & ParseElements/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 e.idxTTV#0/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.SetNames-B#1/20 (/24 e.Name#1/26 )/25 e.SetNames-E#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TSetName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TSetName<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.RuleNames#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 15
    context[32] = context[5];
    context[33] = context[6];
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop();
    do {
      context[34] = context[32];
      context[35] = context[33];
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[34], context[35] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::repeated_evar_left( context[26], context[27], context[15], context[16], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      // closed e.SetNames-E#1 as range 34(5)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames-B#1/20 {REMOVED TILE} e.SetNames-E#1/34(5) {REMOVED TILE} e.RuleNames#1/9 {REMOVED TILE} {REMOVED TILE} e.Name#1/15 {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/13 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'a'/7 } Tile{ HalfReuse: 'm'/14 }"e "/28 Tile{ HalfReuse: ':'/24 AsIs: e.Name#1/26 HalfReuse: ':'/25 }" redeclared"/30 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( context[28], context[29], "e ", 2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[30], context[31], " redeclared", 11 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], & ErrorAt );
      refalrts::reinit_char( context[8], 'S' );
      refalrts::reinit_char( context[11], 'e' );
      refalrts::reinit_char( context[12], 't' );
      refalrts::reinit_char( context[13], ' ' );
      refalrts::reinit_char( context[17], 'n' );
      refalrts::reinit_char( context[7], 'a' );
      refalrts::reinit_char( context[14], 'm' );
      refalrts::reinit_char( context[24], ':' );
      refalrts::reinit_char( context[25], ':' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[32], context[33] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TSetName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TSetName<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr/4 AsIs: (/7 AsIs: e.SetNames#1/5 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/15 } Tile{ HalfReuse: )/17 } )/20 Tile{ AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ AsIs: (/13 } e.Name#1/15/21 Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[15], context[16]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & ParseSetDescr );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( # TName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames-B#1/20 (/24 e.Name#1/26 )/25 e.RuleNames-E#1/9 )/12 (/13 # TName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TName<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 15
    context[32] = context[9];
    context[33] = context[10];
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop();
    do {
      context[34] = context[32];
      context[35] = context[33];
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[34], context[35] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::repeated_evar_left( context[26], context[27], context[15], context[16], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      // closed e.RuleNames-E#1 as range 34(9)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/5 {REMOVED TILE} e.RuleNames-B#1/20 {REMOVED TILE} e.RuleNames-E#1/34(9) {REMOVED TILE} {REMOVED TILE} e.Name#1/15 {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ HalfReuse: 'N'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'm'/7 } 'e'/28 Tile{ HalfReuse: ' '/24 AsIs: e.Name#1/26 HalfReuse: ' '/25 } Tile{ HalfReuse: 'r'/12 HalfReuse: 'e'/13 HalfReuse: 'd'/17 } Tile{ HalfReuse: 'e'/14 }"clared"/29 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[28], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[29], context[30], "clared", 6 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], & ErrorAt );
      refalrts::reinit_char( context[8], 'N' );
      refalrts::reinit_char( context[11], 'a' );
      refalrts::reinit_char( context[7], 'm' );
      refalrts::reinit_char( context[24], ' ' );
      refalrts::reinit_char( context[25], ' ' );
      refalrts::reinit_char( context[12], 'r' );
      refalrts::reinit_char( context[13], 'e' );
      refalrts::reinit_char( context[17], 'd' );
      refalrts::reinit_char( context[14], 'e' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[32], context[33] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( # TName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TName<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence/4 AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 HalfReuse: (/12 } e.Name#1/15/20 Tile{ HalfReuse: )/13 HalfReuse: )/17 AsIs: t.SrcPos#1/18 } (/22 Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[20], context[21], context[15], context[16]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & ParseSentence );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[22], context[14] );
    refalrts::link_brackets( context[11], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[13], context[19] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( # TEOF t.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TEOF<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'a'/8 HalfReuse: 'm'/11 } Tile{ HalfReuse: 'e'/12 }" or set name"/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[15], context[16], " or set name", 12 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & UnexpectedToken );
  refalrts::reinit_char( context[7], 'n' );
  refalrts::reinit_char( context[8], 'a' );
  refalrts::reinit_char( context[11], 'm' );
  refalrts::reinit_char( context[12], 'e' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ParseElements(func_ParseElements, "ParseElements");
refalrts::RefalFunction& ParseElements = descr_ParseElements;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ParseSetDescr_S1L1 {
    static refalrts::RefalFunction *functions[] = {
      & UnexpectedToken,
      & ParseElements,
      & ErrorAt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Set<int>::name,
      & ident_TDot<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"nd of set", 9},
      {"have content", 12}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 34, 0, 0},
      //FAST GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
      //GLOBAL GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
      // </0 & ParseSetDescr$1\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 (/17 e.idxTVTB#0/15 )/18 (/21 e.idxTVTTB#0/19 )/22 t.idxTVTTT#0/23 e.idxTVTTTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::ictVarLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 15, 2},
      {refalrts::icBracketLeftSave, 0, 19, 2},
      // closed e.idxTVB#0 as range 11
      // closed e.idxTVTB#0 as range 15
      // closed e.idxTVTTB#0 as range 19
      {refalrts::ictVarLeftSave, 0, 23, 2},
      // closed e.idxTVTTTV#0 as range 2
      {refalrts::icOnFailGoTo, +33, 0, 0},
      // ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( ) ( # TDot t.idx ) e.idx
      // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
      {refalrts::icBracketTerm, 0, 25, 23},
      {refalrts::icIdentLeftSave, 27, 1, 25},
      {refalrts::icSave, 0, 32, 19},
      {refalrts::icEmpty, 0, 0, 32},
      // closed e.Name#1 as range 5
      // closed e.SetNames#1 as range 11
      // closed e.RuleNames#1 as range 15
      // closed e.Tail#2 as range 2
      {refalrts::ictVarLeftSave, 0, 28, 25},
      {refalrts::icEmpty, 0, 0, 25},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#2/28 HalfReuse: 'S'/24 } Tile{ HalfReuse: 'e'/13 } Tile{ HalfReuse: 't'/14 HalfReuse: ' '/17 } Tile{ HalfReuse: ':'/8 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: ':'/18 HalfReuse: ' '/21 HalfReuse: 'n'/22 HalfReuse: 'o'/23 HalfReuse: 't'/27 } Tile{ HalfReuse: ' '/7 }"have content"/30 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 1, 30},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitChar, 0, 'S', 24},
      {refalrts::icReinitChar, 0, 'e', 13},
      {refalrts::icReinitChar, 0, 't', 14},
      {refalrts::icReinitChar, 0, ' ', 17},
      {refalrts::icReinitChar, 0, ':', 8},
      {refalrts::icReinitChar, 0, ':', 18},
      {refalrts::icReinitChar, 0, ' ', 21},
      {refalrts::icReinitChar, 0, 'n', 22},
      {refalrts::icReinitChar, 0, 'o', 23},
      {refalrts::icReinitChar, 0, 't', 27},
      {refalrts::icReinitChar, 0, ' ', 7},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 30, 31, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 18, 27, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 14, 17, 0},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceTile, 28, 24, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TDot t.idx ) e.idx
      // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
      {refalrts::icBracketTerm, 0, 25, 23},
      {refalrts::icIdentLeftSave, 27, 1, 25},
      // closed e.Name#1 as range 5
      // closed e.SetNames#1 as range 11
      // closed e.RuleNames#1 as range 15
      // closed e.Body#2 as range 19
      // closed e.Tail#2 as range 2
      {refalrts::ictVarLeftSave, 0, 28, 25},
      {refalrts::icEmpty, 0, 0, 25},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/28 )/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Set/4 } Tile{ AsIs: t.SetNamePos#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/19 AsIs: )/22 HalfReuse: </23 HalfReuse: & ParseElements/27 } Tile{ AsIs: (/13 AsIs: e.SetNames#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 21},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 23},
      {refalrts::icReinitFunc, 0, 1, 27},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 0, 22, 0},
      {refalrts::icLinkBrackets, 7, 21, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 13, 18, 0},
      {refalrts::icSpliceTile, 21, 27, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
      // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 t.Unexpected#2/23 e.Tail#2/2 >/1
      // closed e.Name#1 as range 5
      // closed e.SetNames#1 as range 11
      // closed e.RuleNames#1 as range 15
      // closed e.Body#2 as range 19
      // closed e.Tail#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name#1/5 {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'd'/14 HalfReuse: 'o'/17 } Tile{ HalfReuse: 't'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'a'/22 } Tile{ HalfReuse: 't'/13 } Tile{ HalfReuse: ' '/8 } Tile{ HalfReuse: 'e'/7 }"nd of set"/25 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 25},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'd', 14},
      {refalrts::icReinitChar, 0, 'o', 17},
      {refalrts::icReinitChar, 0, 't', 18},
      {refalrts::icReinitChar, 0, ' ', 21},
      {refalrts::icReinitChar, 0, 'a', 22},
      {refalrts::icReinitChar, 0, 't', 13},
      {refalrts::icReinitChar, 0, ' ', 8},
      {refalrts::icReinitChar, 0, 'e', 7},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 25, 26, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceTile, 22, 22, 0},
      {refalrts::icSpliceTile, 18, 21, 0},
      {refalrts::icSpliceTile, 14, 17, 0},
      {refalrts::icSpliceTile, 23, 24, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ParseSetDescr_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ParseSetDescr_S1L1(
  "ParseSetDescr$1\\1",
  scope_gen_ParseSetDescr_S1L1::raa,
  scope_gen_ParseSetDescr_S1L1::functions,
  scope_gen_ParseSetDescr_S1L1::idents,
  scope_gen_ParseSetDescr_S1L1::numbers,
  scope_gen_ParseSetDescr_S1L1::strings
);
refalrts::RefalFunction& gen_ParseSetDescr_S1L1 = descr_gen_ParseSetDescr_S1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ParseSetDescr_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  //FAST GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & ParseSetDescr$1\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 (/17 e.idxTVTB#0/15 )/18 (/21 e.idxTVTTB#0/19 )/22 t.idxTVTTT#0/23 e.idxTVTTTV#0/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.idxTVB#0 as range 11
  // closed e.idxTVTB#0 as range 15
  // closed e.idxTVTTB#0 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVTTTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( ) ( # TDot t.idx ) e.idx
    // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
    context[25] = 0;
    context[26] = 0;
    if( ! refalrts::brackets_term( context[25], context[26], context[23] ) )
      continue;
    context[27] = refalrts::ident_left(  & ident_TDot<int>::name, context[25], context[26] );
    if( ! context[27] )
      continue;
    context[32] = context[19];
    context[33] = context[20];
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    // closed e.Name#1 as range 5
    // closed e.SetNames#1 as range 11
    // closed e.RuleNames#1 as range 15
    // closed e.Tail#2 as range 2
    context[29] = refalrts::tvar_left( context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#2/28 HalfReuse: 'S'/24 } Tile{ HalfReuse: 'e'/13 } Tile{ HalfReuse: 't'/14 HalfReuse: ' '/17 } Tile{ HalfReuse: ':'/8 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: ':'/18 HalfReuse: ' '/21 HalfReuse: 'n'/22 HalfReuse: 'o'/23 HalfReuse: 't'/27 } Tile{ HalfReuse: ' '/7 }"have content"/30 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[30], context[31], "have content", 12 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & ErrorAt );
    refalrts::reinit_char( context[24], 'S' );
    refalrts::reinit_char( context[13], 'e' );
    refalrts::reinit_char( context[14], 't' );
    refalrts::reinit_char( context[17], ' ' );
    refalrts::reinit_char( context[8], ':' );
    refalrts::reinit_char( context[18], ':' );
    refalrts::reinit_char( context[21], ' ' );
    refalrts::reinit_char( context[22], 'n' );
    refalrts::reinit_char( context[23], 'o' );
    refalrts::reinit_char( context[27], 't' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[18], context[27] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[28], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TDot t.idx ) e.idx
    // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
    context[25] = 0;
    context[26] = 0;
    if( ! refalrts::brackets_term( context[25], context[26], context[23] ) )
      continue;
    context[27] = refalrts::ident_left(  & ident_TDot<int>::name, context[25], context[26] );
    if( ! context[27] )
      continue;
    // closed e.Name#1 as range 5
    // closed e.SetNames#1 as range 11
    // closed e.RuleNames#1 as range 15
    // closed e.Body#2 as range 19
    // closed e.Tail#2 as range 2
    context[29] = refalrts::tvar_left( context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/28 )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Set/4 } Tile{ AsIs: t.SetNamePos#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/19 AsIs: )/22 HalfReuse: </23 HalfReuse: & ParseElements/27 } Tile{ AsIs: (/13 AsIs: e.SetNames#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Set<int>::name );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_name( context[27], & ParseElements );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[22] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[13], context[18] );
    res = refalrts::splice_evar( res, context[21], context[27] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 t.Unexpected#2/23 e.Tail#2/2 >/1
  // closed e.Name#1 as range 5
  // closed e.SetNames#1 as range 11
  // closed e.RuleNames#1 as range 15
  // closed e.Body#2 as range 19
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name#1/5 {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'd'/14 HalfReuse: 'o'/17 } Tile{ HalfReuse: 't'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'a'/22 } Tile{ HalfReuse: 't'/13 } Tile{ HalfReuse: ' '/8 } Tile{ HalfReuse: 'e'/7 }"nd of set"/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[25], context[26], "nd of set", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & UnexpectedToken );
  refalrts::reinit_char( context[14], 'd' );
  refalrts::reinit_char( context[17], 'o' );
  refalrts::reinit_char( context[18], 't' );
  refalrts::reinit_char( context[21], ' ' );
  refalrts::reinit_char( context[22], 'a' );
  refalrts::reinit_char( context[13], 't' );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_char( context[7], 'e' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_ParseSetDescr_S1L1(func_gen_ParseSetDescr_S1L1, "ParseSetDescr$1\\1");
refalrts::RefalFunction& gen_ParseSetDescr_S1L1 = descr_gen_ParseSetDescr_S1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ParseSetDescr {
    static refalrts::RefalFunction *functions[] = {
      & UnexpectedToken,
      & refalrts::create_closure,
      & Fetch,
      & gen_ParseSetDescr_S1L1,
      & ExtractSets
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TEquals<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 32, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
      //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
      // </0 & ParseSetDescr/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 (/17 e.idxTTVB#0/15 )/18 t.idxTTVT#0/19 e.idxTTVTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      {refalrts::ictVarLeftSave, 0, 13, 2},
      {refalrts::icBracketLeftSave, 0, 15, 2},
      // closed e.idxTTVB#0 as range 15
      {refalrts::ictVarLeftSave, 0, 19, 2},
      // closed e.idxTTVTV#0 as range 2
      {refalrts::icOnFailGoTo, +36, 0, 0},
      // ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( # TEquals t.idx ) e.idx
      // </0 & ParseSetDescr/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 )/18 (/19 # TEquals/23 t.SrcPos#1/24 )/20 e.Tail#1/2 >/1
      {refalrts::icBracketTerm, 0, 21, 19},
      {refalrts::icIdentLeftSave, 23, 0, 21},
      // closed e.SetNames#1 as range 5
      // closed e.RuleNames#1 as range 9
      // closed e.Name#1 as range 15
      // closed e.Tail#1 as range 2
      {refalrts::ictVarLeftSave, 0, 24, 21},
      {refalrts::icEmpty, 0, 0, 21},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </26 & ExtractSets/27 Tile{ AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/2 AsIs: >/1 } </28 Tile{ HalfReuse: & @create_closure@/23 } & ParseSetDescr$1\1/29 Tile{ AsIs: (/17 AsIs: e.Name#1/15 AsIs: )/18 } Tile{ AsIs: t.SetNamePos#1/13 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } >/30 >/31 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
      {refalrts::icAllocFunc, 0, 4, 27},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
      {refalrts::icAllocFunc, 0, 3, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 30},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitFunc, 0, 1, 23},
      {refalrts::icPushStack, 0, 0, 31},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 30},
      {refalrts::icPushStack, 0, 0, 28},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 30, 31, 0},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icSpliceTile, 29, 29, 0},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceTile, 28, 28, 0},
      {refalrts::icSpliceTile, 20, 1, 0},
      {refalrts::icSpliceTile, 19, 19, 0},
      {refalrts::icSpliceTile, 26, 27, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx e.idx
      // </0 & ParseSetDescr/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 )/18 t.Unexpected#1/19 e.Tail#1/2 >/1
      // closed e.SetNames#1 as range 5
      // closed e.RuleNames#1 as range 9
      // closed e.Name#1 as range 15
      // closed e.Tail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, '\"', 8},
      {refalrts::icReinitChar, 0, '=', 11},
      {refalrts::icReinitChar, 0, '\"', 18},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ParseSetDescr

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ParseSetDescr(
  "ParseSetDescr",
  scope_ParseSetDescr::raa,
  scope_ParseSetDescr::functions,
  scope_ParseSetDescr::idents,
  scope_ParseSetDescr::numbers,
  scope_ParseSetDescr::strings
);
refalrts::RefalFunction& ParseSetDescr = descr_ParseSetDescr;

} // unnamed namespace

#else
static refalrts::FnResult func_ParseSetDescr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
  // </0 & ParseSetDescr/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 (/17 e.idxTTVB#0/15 )/18 t.idxTTVT#0/19 e.idxTTVTV#0/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxTTVB#0 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTVTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( # TEquals t.idx ) e.idx
    // </0 & ParseSetDescr/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 )/18 (/19 # TEquals/23 t.SrcPos#1/24 )/20 e.Tail#1/2 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[19] ) )
      continue;
    context[23] = refalrts::ident_left(  & ident_TEquals<int>::name, context[21], context[22] );
    if( ! context[23] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Name#1 as range 15
    // closed e.Tail#1 as range 2
    context[25] = refalrts::tvar_left( context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </26 & ExtractSets/27 Tile{ AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/2 AsIs: >/1 } </28 Tile{ HalfReuse: & @create_closure@/23 } & ParseSetDescr$1\1/29 Tile{ AsIs: (/17 AsIs: e.Name#1/15 AsIs: )/18 } Tile{ AsIs: t.SetNamePos#1/13 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } >/30 >/31 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], & ExtractSets ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], & gen_ParseSetDescr_S1L1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Fetch );
    refalrts::reinit_name( context[23], & refalrts::create_closure );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx e.idx
  // </0 & ParseSetDescr/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 )/18 t.Unexpected#1/19 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Name#1 as range 15
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], & UnexpectedToken );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::reinit_char( context[11], '=' );
  refalrts::reinit_char( context[18], '\"' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ParseSetDescr(func_ParseSetDescr, "ParseSetDescr");
refalrts::RefalFunction& ParseSetDescr = descr_ParseSetDescr;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractSets {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Set<int>::name,
      & ident_TSetName<int>::name,
      & ident_Chars<int>::name,
      & ident_TLiteral<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & ExtractSets/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( e.idx ) ( # TLiteral t.idx e.idx ) e.idx
      // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TLiteral/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 16, 2},
      {refalrts::icBracketLeftSave, 0, 9, 16},
      {refalrts::icIdentLeftSave, 13, 3, 9},
      // closed e.Found#1 as range 5
      // closed e.Tail#1 as range 16(2)
      {refalrts::ictVarLeftSave, 0, 14, 9},
      // closed e.Content#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Chars/11 } Tile{ AsIs: e.Content#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitIdent, 0, 2, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icLinkBrackets, 8, 13, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icTrash, 0, 0, 11},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
      // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TSetName/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 16, 2},
      {refalrts::icBracketLeftSave, 0, 9, 16},
      {refalrts::icIdentLeftSave, 13, 1, 9},
      // closed e.Found#1 as range 5
      // closed e.Tail#1 as range 16(2)
      {refalrts::ictVarLeftSave, 0, 14, 9},
      // closed e.Name#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Set/11 } Tile{ AsIs: t.SrcPos#1/14 } Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitIdent, 0, 0, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icLinkBrackets, 8, 13, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 e.OtherTail#1/2 >/1
      // closed e.Found#1 as range 5
      // closed e.OtherTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractSets/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ AsIs: e.OtherTail#1/2 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractSets

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ExtractSets(
  "ExtractSets",
  scope_ExtractSets::raa,
  scope_ExtractSets::functions,
  scope_ExtractSets::idents,
  scope_ExtractSets::numbers,
  scope_ExtractSets::strings
);
refalrts::RefalFunction& ExtractSets = descr_ExtractSets;

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractSets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & ExtractSets/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ( # TLiteral t.idx e.idx ) e.idx
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TLiteral/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TLiteral<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 16(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Content#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Chars/11 } Tile{ AsIs: e.Content#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], & ident_Chars<int>::name );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TSetName/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TSetName<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 16(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Set/11 } Tile{ AsIs: t.SrcPos#1/14 } Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], & ident_Set<int>::name );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 e.OtherTail#1/2 >/1
  // closed e.Found#1 as range 5
  // closed e.OtherTail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractSets/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ AsIs: e.OtherTail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ExtractSets(func_ExtractSets, "ExtractSets");
refalrts::RefalFunction& ExtractSets = descr_ExtractSets;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ParseSentence_S1L1 {
    static refalrts::RefalFunction *functions[] = {
      & UnexpectedToken,
      & ParseElements
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Sentence<int>::name,
      & ident_TDot<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"entence", 7}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 30, 0, 0},
      //FAST GEN: t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
      //GLOBAL GEN: t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
      // </0 & ParseSentence$1\1/4 t.idx#0/5 (/9 e.idxVB#0/7 )/10 (/13 e.idxVTB#0/11 )/14 (/17 e.idxVTTB#0/15 )/18 (/21 e.idxVTTTB#0/19 )/22 t.idxVTTTT#0/23 e.idxVTTTTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 7, 2},
      {refalrts::icBracketLeftSave, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 15, 2},
      {refalrts::icBracketLeftSave, 0, 19, 2},
      // closed e.idxVB#0 as range 7
      // closed e.idxVTB#0 as range 11
      // closed e.idxVTTB#0 as range 15
      // closed e.idxVTTTB#0 as range 19
      {refalrts::ictVarLeftSave, 0, 23, 2},
      // closed e.idxVTTTTV#0 as range 2
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( # TDot t.idx ) e.idx
      // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
      {refalrts::icBracketTerm, 0, 25, 23},
      {refalrts::icIdentLeftSave, 27, 1, 25},
      // closed e.Name#1 as range 7
      // closed e.SetNames#1 as range 11
      // closed e.RuleNames#1 as range 15
      // closed e.Body#2 as range 19
      // closed e.Tail#2 as range 2
      {refalrts::ictVarLeftSave, 0, 28, 25},
      {refalrts::icEmpty, 0, 0, 25},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TDot/27 t.SrcPos#2/28 )/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Sentence/4 AsIs: t.SentNamePos#1/5 AsIs: (/9 } Tile{ AsIs: e.Name#1/7 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/19 AsIs: )/22 HalfReuse: </23 } Tile{ HalfReuse: & ParseElements/10 AsIs: (/13 AsIs: e.SetNames#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 21},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 23},
      {refalrts::icReinitFunc, 0, 1, 10},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 0, 22, 0},
      {refalrts::icLinkBrackets, 9, 21, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 10, 18, 0},
      {refalrts::icSpliceTile, 21, 23, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icTrash, 0, 0, 9},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
      // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 t.Unexpected#2/23 e.Tail#2/2 >/1
      // closed e.Name#1 as range 7
      // closed e.SetNames#1 as range 11
      // closed e.RuleNames#1 as range 15
      // closed e.Body#2 as range 19
      // closed e.Tail#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} t.SentNamePos#1/5 {REMOVED TILE} e.Name#1/7 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'e'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'd'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'o'/10 HalfReuse: 'f'/13 } Tile{ HalfReuse: ' '/22 } Tile{ HalfReuse: 's'/9 }"entence"/25 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 25},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'e', 14},
      {refalrts::icReinitChar, 0, 'n', 17},
      {refalrts::icReinitChar, 0, 'd', 18},
      {refalrts::icReinitChar, 0, ' ', 21},
      {refalrts::icReinitChar, 0, 'o', 10},
      {refalrts::icReinitChar, 0, 'f', 13},
      {refalrts::icReinitChar, 0, ' ', 22},
      {refalrts::icReinitChar, 0, 's', 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 25, 26, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 22, 22, 0},
      {refalrts::icSpliceTile, 10, 13, 0},
      {refalrts::icSpliceTile, 18, 21, 0},
      {refalrts::icSpliceTile, 14, 17, 0},
      {refalrts::icSpliceTile, 23, 24, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ParseSentence_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ParseSentence_S1L1(
  "ParseSentence$1\\1",
  scope_gen_ParseSentence_S1L1::raa,
  scope_gen_ParseSentence_S1L1::functions,
  scope_gen_ParseSentence_S1L1::idents,
  scope_gen_ParseSentence_S1L1::numbers,
  scope_gen_ParseSentence_S1L1::strings
);
refalrts::RefalFunction& gen_ParseSentence_S1L1 = descr_gen_ParseSentence_S1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ParseSentence_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  //FAST GEN: t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & ParseSentence$1\1/4 t.idx#0/5 (/9 e.idxVB#0/7 )/10 (/13 e.idxVTB#0/11 )/14 (/17 e.idxVTTB#0/15 )/18 (/21 e.idxVTTTB#0/19 )/22 t.idxVTTTT#0/23 e.idxVTTTTV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.idxVB#0 as range 7
  // closed e.idxVTB#0 as range 11
  // closed e.idxVTTB#0 as range 15
  // closed e.idxVTTTB#0 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTTTTV#0 as range 2
  do {
    refalrts::start_sentence();
    // t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( # TDot t.idx ) e.idx
    // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
    context[25] = 0;
    context[26] = 0;
    if( ! refalrts::brackets_term( context[25], context[26], context[23] ) )
      continue;
    context[27] = refalrts::ident_left(  & ident_TDot<int>::name, context[25], context[26] );
    if( ! context[27] )
      continue;
    // closed e.Name#1 as range 7
    // closed e.SetNames#1 as range 11
    // closed e.RuleNames#1 as range 15
    // closed e.Body#2 as range 19
    // closed e.Tail#2 as range 2
    context[29] = refalrts::tvar_left( context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TDot/27 t.SrcPos#2/28 )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Sentence/4 AsIs: t.SentNamePos#1/5 AsIs: (/9 } Tile{ AsIs: e.Name#1/7 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/19 AsIs: )/22 HalfReuse: </23 } Tile{ HalfReuse: & ParseElements/10 AsIs: (/13 AsIs: e.SetNames#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Sentence<int>::name );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_name( context[10], & ParseElements );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[22] );
    refalrts::link_brackets( context[9], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[18] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 t.Unexpected#2/23 e.Tail#2/2 >/1
  // closed e.Name#1 as range 7
  // closed e.SetNames#1 as range 11
  // closed e.RuleNames#1 as range 15
  // closed e.Body#2 as range 19
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} t.SentNamePos#1/5 {REMOVED TILE} e.Name#1/7 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'e'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'd'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'o'/10 HalfReuse: 'f'/13 } Tile{ HalfReuse: ' '/22 } Tile{ HalfReuse: 's'/9 }"entence"/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[25], context[26], "entence", 7 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & UnexpectedToken );
  refalrts::reinit_char( context[14], 'e' );
  refalrts::reinit_char( context[17], 'n' );
  refalrts::reinit_char( context[18], 'd' );
  refalrts::reinit_char( context[21], ' ' );
  refalrts::reinit_char( context[10], 'o' );
  refalrts::reinit_char( context[13], 'f' );
  refalrts::reinit_char( context[22], ' ' );
  refalrts::reinit_char( context[9], 's' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_ParseSentence_S1L1(func_gen_ParseSentence_S1L1, "ParseSentence$1\\1");
refalrts::RefalFunction& gen_ParseSentence_S1L1 = descr_gen_ParseSentence_S1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ParseSentence {
    static refalrts::RefalFunction *functions[] = {
      & UnexpectedToken,
      & refalrts::create_closure,
      & ExtractAlternatives,
      & gen_ParseSentence_S1L1,
      & Fetch
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TEquals<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 32, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
      //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
      // </0 & ParseSentence/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 (/17 e.idxTTVB#0/15 )/18 t.idxTTVT#0/19 e.idxTTVTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      {refalrts::ictVarLeftSave, 0, 13, 2},
      {refalrts::icBracketLeftSave, 0, 15, 2},
      // closed e.idxTTVB#0 as range 15
      {refalrts::ictVarLeftSave, 0, 19, 2},
      // closed e.idxTTVTV#0 as range 2
      {refalrts::icOnFailGoTo, +37, 0, 0},
      // ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( # TEquals t.idx ) e.idx
      // </0 & ParseSentence/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 )/18 (/19 # TEquals/23 t.SrcPos#1/24 )/20 e.Tail#1/2 >/1
      {refalrts::icBracketTerm, 0, 21, 19},
      {refalrts::icIdentLeftSave, 23, 0, 21},
      // closed e.SetNames#1 as range 5
      // closed e.RuleNames#1 as range 9
      // closed e.Name#1 as range 15
      // closed e.Tail#1 as range 2
      {refalrts::ictVarLeftSave, 0, 24, 21},
      {refalrts::icEmpty, 0, 0, 21},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } & Fetch/26 </27 Tile{ HalfReuse: & ExtractAlternatives/18 AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/2 AsIs: >/1 } </28 Tile{ HalfReuse: & @create_closure@/23 } & ParseSentence$1\1/29 Tile{ AsIs: t.SentNamePos#1/13 AsIs: (/17 } Tile{ AsIs: e.Name#1/15 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } >/30 >/31 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 4, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
      {refalrts::icAllocFunc, 0, 3, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 30},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
      {refalrts::icReinitFunc, 0, 2, 18},
      {refalrts::icReinitFunc, 0, 1, 23},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icPushStack, 0, 0, 31},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 30},
      {refalrts::icPushStack, 0, 0, 28},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 17, 4, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 27},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 30, 31, 0},
      {refalrts::icSpliceTile, 4, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceTile, 13, 17, 0},
      {refalrts::icSpliceTile, 29, 29, 0},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceTile, 28, 28, 0},
      {refalrts::icSpliceTile, 20, 1, 0},
      {refalrts::icSpliceTile, 18, 19, 0},
      {refalrts::icSpliceTile, 26, 27, 0},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx e.idx
      // </0 & ParseSentence/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 )/18 t.Unexpected#1/19 e.Tail#1/2 >/1
      // closed e.SetNames#1 as range 5
      // closed e.RuleNames#1 as range 9
      // closed e.Name#1 as range 15
      // closed e.Tail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, '\"', 8},
      {refalrts::icReinitChar, 0, '=', 11},
      {refalrts::icReinitChar, 0, '\"', 18},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ParseSentence

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ParseSentence(
  "ParseSentence",
  scope_ParseSentence::raa,
  scope_ParseSentence::functions,
  scope_ParseSentence::idents,
  scope_ParseSentence::numbers,
  scope_ParseSentence::strings
);
refalrts::RefalFunction& ParseSentence = descr_ParseSentence;

} // unnamed namespace

#else
static refalrts::FnResult func_ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
  // </0 & ParseSentence/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 (/17 e.idxTTVB#0/15 )/18 t.idxTTVT#0/19 e.idxTTVTV#0/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxTTVB#0 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTVTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( # TEquals t.idx ) e.idx
    // </0 & ParseSentence/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 )/18 (/19 # TEquals/23 t.SrcPos#1/24 )/20 e.Tail#1/2 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[19] ) )
      continue;
    context[23] = refalrts::ident_left(  & ident_TEquals<int>::name, context[21], context[22] );
    if( ! context[23] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Name#1 as range 15
    // closed e.Tail#1 as range 2
    context[25] = refalrts::tvar_left( context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & Fetch/26 </27 Tile{ HalfReuse: & ExtractAlternatives/18 AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/2 AsIs: >/1 } </28 Tile{ HalfReuse: & @create_closure@/23 } & ParseSentence$1\1/29 Tile{ AsIs: t.SentNamePos#1/13 AsIs: (/17 } Tile{ AsIs: e.Name#1/15 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } >/30 >/31 Tile{ ]] }
    if( ! refalrts::alloc_name( context[26], & Fetch ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], & gen_ParseSentence_S1L1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[18], & ExtractAlternatives );
    refalrts::reinit_name( context[23], & refalrts::create_closure );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[4] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx e.idx
  // </0 & ParseSentence/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 )/18 t.Unexpected#1/19 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Name#1 as range 15
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], & UnexpectedToken );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::reinit_char( context[11], '=' );
  refalrts::reinit_char( context[18], '\"' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ParseSentence(func_ParseSentence, "ParseSentence");
refalrts::RefalFunction& ParseSentence = descr_ParseSentence;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractAlternatives_L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 14, 0, 0},
      // </0 & ExtractAlternatives\1/4 (/7 s.TokType#2/9 t.SrcPos#2/10 e.Info#2/5 )/8 e.Tail#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Tail#2 as range 2
      {refalrts::icsVarLeft, 0, 9, 5},
      {refalrts::ictVarLeftSave, 0, 10, 5},
      // closed e.Info#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\1/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } t.SrcPos#2/10/12 Tile{ AsIs: (/7 AsIs: s.TokType#2/9 AsIs: t.SrcPos#2/10 AsIs: e.Info#2/5 AsIs: )/8 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
      {refalrts::icCopyEVar, 12, 10, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icSpliceTile, 12, 13, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractAlternatives_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ExtractAlternatives_L1(
  "ExtractAlternatives\\1",
  scope_gen_ExtractAlternatives_L1::raa,
  scope_gen_ExtractAlternatives_L1::functions,
  scope_gen_ExtractAlternatives_L1::idents,
  scope_gen_ExtractAlternatives_L1::numbers,
  scope_gen_ExtractAlternatives_L1::strings
);
refalrts::RefalFunction& gen_ExtractAlternatives_L1 = descr_gen_ExtractAlternatives_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractAlternatives_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ExtractAlternatives\1/4 (/7 s.TokType#2/9 t.SrcPos#2/10 e.Info#2/5 )/8 e.Tail#2/2 >/1
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
  // closed e.Tail#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\1/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } t.SrcPos#2/10/12 Tile{ AsIs: (/7 AsIs: s.TokType#2/9 AsIs: t.SrcPos#2/10 AsIs: e.Info#2/5 AsIs: )/8 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  if (! refalrts::copy_evar(context[12], context[13], context[10], context[11]))
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_ExtractAlternatives_L1(func_gen_ExtractAlternatives_L1, "ExtractAlternatives\\1");
refalrts::RefalFunction& gen_ExtractAlternatives_L1 = descr_gen_ExtractAlternatives_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractAlternatives_L2 {
    static refalrts::RefalFunction *functions[] = {
      & ExtractAlternatives_Head
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 t.NextToken#2/7 e.Tail#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      // closed e.Tail#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-Head/4 } Tile{ AsIs: t.NextToken#2/7 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractAlternatives_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ExtractAlternatives_L2(
  "ExtractAlternatives\\2",
  scope_gen_ExtractAlternatives_L2::raa,
  scope_gen_ExtractAlternatives_L2::functions,
  scope_gen_ExtractAlternatives_L2::idents,
  scope_gen_ExtractAlternatives_L2::numbers,
  scope_gen_ExtractAlternatives_L2::strings
);
refalrts::RefalFunction& gen_ExtractAlternatives_L2 = descr_gen_ExtractAlternatives_L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractAlternatives_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 t.NextToken#2/7 e.Tail#2/2 >/1
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
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-Head/4 } Tile{ AsIs: t.NextToken#2/7 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], & ExtractAlternatives_Head );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_ExtractAlternatives_L2(func_gen_ExtractAlternatives_L2, "ExtractAlternatives\\2");
refalrts::RefalFunction& gen_ExtractAlternatives_L2 = descr_gen_ExtractAlternatives_L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractAlternatives_L3 {
    static refalrts::RefalFunction *functions[] = {
      & ExtractAlternatives_Flush
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 t.NextToken#2/9 e.Tail#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::ictVarLeftSave, 0, 9, 2},
      // closed e.Tail#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 } Tile{ AsIs: t.NextToken#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 5, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractAlternatives_L3

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ExtractAlternatives_L3(
  "ExtractAlternatives\\3",
  scope_gen_ExtractAlternatives_L3::raa,
  scope_gen_ExtractAlternatives_L3::functions,
  scope_gen_ExtractAlternatives_L3::idents,
  scope_gen_ExtractAlternatives_L3::numbers,
  scope_gen_ExtractAlternatives_L3::strings
);
refalrts::RefalFunction& gen_ExtractAlternatives_L3 = descr_gen_ExtractAlternatives_L3;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractAlternatives_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 t.NextToken#2/9 e.Tail#2/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 } Tile{ AsIs: t.NextToken#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], & ExtractAlternatives_Flush );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_ExtractAlternatives_L3(func_gen_ExtractAlternatives_L3, "ExtractAlternatives\\3");
refalrts::RefalFunction& gen_ExtractAlternatives_L3 = descr_gen_ExtractAlternatives_L3;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractAlternatives_L4 {
    static refalrts::RefalFunction *functions[] = {
      & ExtractAlternatives_NextState
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & ExtractAlternatives\4/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextToken#2/11 e.Tail#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::ictVarLeftSave, 0, 9, 2},
      {refalrts::ictVarLeftSave, 0, 11, 2},
      // closed e.Tail#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 } Tile{ AsIs: t.NextToken#2/11 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 5, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractAlternatives_L4

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ExtractAlternatives_L4(
  "ExtractAlternatives\\4",
  scope_gen_ExtractAlternatives_L4::raa,
  scope_gen_ExtractAlternatives_L4::functions,
  scope_gen_ExtractAlternatives_L4::idents,
  scope_gen_ExtractAlternatives_L4::numbers,
  scope_gen_ExtractAlternatives_L4::strings
);
refalrts::RefalFunction& gen_ExtractAlternatives_L4 = descr_gen_ExtractAlternatives_L4;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractAlternatives_L4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractAlternatives\4/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextToken#2/11 e.Tail#2/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 } Tile{ AsIs: t.NextToken#2/11 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], & ExtractAlternatives_NextState );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_ExtractAlternatives_L4(func_gen_ExtractAlternatives_L4, "ExtractAlternatives\\4");
refalrts::RefalFunction& gen_ExtractAlternatives_L4 = descr_gen_ExtractAlternatives_L4;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractAlternatives_L5 {
    static refalrts::RefalFunction *functions[] = {
      & ErrorAt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Finitive<int>::name,
      & ident_None<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {" alternative must have flush", 28}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 16, 0, 0},
      //FAST GEN: t.$ t.$ t.$ t.$ e.$
      //GLOBAL GEN: t.$ t.$ t.$ t.$ e.$
      // </0 & ExtractAlternatives\5/4 t.idx#0/5 t.idxV#0/7 t.idxVV#0/9 t.idxVVV#0/11 e.idxVVVV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::ictVarLeftSave, 0, 9, 2},
      {refalrts::ictVarLeftSave, 0, 11, 2},
      // closed e.idxVVVV#0 as range 2
      {refalrts::icOnFailGoTo, +16, 0, 0},
      // t.idx t.idx # None # Finitive e.idx
      // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 # None/9 # Finitive/11 e.Tail#2/2 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      {refalrts::icIdentTerm, 0, 0, 11},
      // closed e.Tail#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} t.Head#2/7 {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: t.BeginSrcPos#2/5 } 'E'/13 Tile{ HalfReuse: 'O'/9 HalfReuse: 'F'/11 }" alternative must have flush"/14 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, 'E', 13},
      {refalrts::icAllocString, 0, 0, 14},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'O', 9},
      {refalrts::icReinitChar, 0, 'F', 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icSpliceTile, 9, 11, 0},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx t.idx t.idx t.idx e.idx
      // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextState#2/11 e.Tail#2/2 >/1
      // closed e.Tail#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Head#2/7 AsIs: t.Flush#2/9 AsIs: t.NextState#2/11 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractAlternatives_L5

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ExtractAlternatives_L5(
  "ExtractAlternatives\\5",
  scope_gen_ExtractAlternatives_L5::raa,
  scope_gen_ExtractAlternatives_L5::functions,
  scope_gen_ExtractAlternatives_L5::idents,
  scope_gen_ExtractAlternatives_L5::numbers,
  scope_gen_ExtractAlternatives_L5::strings
);
refalrts::RefalFunction& gen_ExtractAlternatives_L5 = descr_gen_ExtractAlternatives_L5;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractAlternatives_L5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: t.$ t.$ t.$ t.$ e.$
  //GLOBAL GEN: t.$ t.$ t.$ t.$ e.$
  // </0 & ExtractAlternatives\5/4 t.idx#0/5 t.idxV#0/7 t.idxVV#0/9 t.idxVVV#0/11 e.idxVVVV#0/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVV#0 as range 2
  do {
    refalrts::start_sentence();
    // t.idx t.idx # None # Finitive e.idx
    // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 # None/9 # Finitive/11 e.Tail#2/2 >/1
    if( ! refalrts::ident_term(  & ident_None<int>::name, context[9] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[11] ) )
      continue;
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Head#2/7 {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: t.BeginSrcPos#2/5 } 'E'/13 Tile{ HalfReuse: 'O'/9 HalfReuse: 'F'/11 }" alternative must have flush"/14 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[13], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " alternative must have flush", 28 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & ErrorAt );
    refalrts::reinit_char( context[9], 'O' );
    refalrts::reinit_char( context[11], 'F' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx t.idx t.idx t.idx e.idx
  // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextState#2/11 e.Tail#2/2 >/1
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Head#2/7 AsIs: t.Flush#2/9 AsIs: t.NextState#2/11 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_ExtractAlternatives_L5(func_gen_ExtractAlternatives_L5, "ExtractAlternatives\\5");
refalrts::RefalFunction& gen_ExtractAlternatives_L5 = descr_gen_ExtractAlternatives_L5;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractAlternatives_L6 {
    static refalrts::RefalFunction *functions[] = {
      & ExtractAlternatives
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TAlternative<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 24, 0, 0},
      //FAST GEN: ( e.$ ) t.$ t.$ t.$ e.$
      //GLOBAL GEN: ( e.$ ) t.$ t.$ t.$ e.$
      // </0 & ExtractAlternatives\6/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 t.idxTVV#0/13 e.idxTVVV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::ictVarLeftSave, 0, 9, 2},
      {refalrts::ictVarLeftSave, 0, 11, 2},
      {refalrts::ictVarLeftSave, 0, 13, 2},
      // closed e.idxTVVV#0 as range 2
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // ( e.idx ) t.idx t.idx t.idx ( # TAlternative t.idx ) e.idx
      // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/5 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 (/17 # TAlternative/19 t.SrcPos#2/20 )/18 e.Tail#2/2 >/1
      {refalrts::icSave, 0, 22, 2},
      {refalrts::icBracketLeftSave, 0, 15, 22},
      {refalrts::icIdentLeftSave, 19, 0, 15},
      // closed e.Found#1 as range 5
      // closed e.Tail#2 as range 22(2)
      {refalrts::ictVarLeftSave, 0, 20, 15},
      {refalrts::icEmpty, 0, 0, 15},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} t.SrcPos#2/20 )/18 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 HalfReuse: )/17 HalfReuse: )/19 } Tile{ AsIs: e.Tail#2/22(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 17},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 19, 0},
      {refalrts::icLinkBrackets, 8, 17, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 22},
      {refalrts::icTrash, 0, 0, 19},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) t.idx t.idx t.idx e.idx
      // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/5 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 e.Tail#2/2 >/1
      // closed e.Found#1 as range 5
      // closed e.Tail#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icLinkBrackets, 7, 4, 0},
      {refalrts::icLinkBrackets, 8, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 7, 14, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractAlternatives_L6

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ExtractAlternatives_L6(
  "ExtractAlternatives\\6",
  scope_gen_ExtractAlternatives_L6::raa,
  scope_gen_ExtractAlternatives_L6::functions,
  scope_gen_ExtractAlternatives_L6::idents,
  scope_gen_ExtractAlternatives_L6::numbers,
  scope_gen_ExtractAlternatives_L6::strings
);
refalrts::RefalFunction& gen_ExtractAlternatives_L6 = descr_gen_ExtractAlternatives_L6;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractAlternatives_L6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: ( e.$ ) t.$ t.$ t.$ e.$
  //GLOBAL GEN: ( e.$ ) t.$ t.$ t.$ e.$
  // </0 & ExtractAlternatives\6/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 t.idxTVV#0/13 e.idxTVVV#0/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVVV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx t.idx t.idx ( # TAlternative t.idx ) e.idx
    // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/5 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 (/17 # TAlternative/19 t.SrcPos#2/20 )/18 e.Tail#2/2 >/1
    context[22] = context[2];
    context[23] = context[3];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[22], context[23] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#2 as range 22(2)
    context[21] = refalrts::tvar_left( context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.SrcPos#2/20 )/18 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 HalfReuse: )/17 HalfReuse: )/19 } Tile{ AsIs: e.Tail#2/22(2) } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], & ExtractAlternatives );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[19] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[19], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) t.idx t.idx t.idx e.idx
  // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/5 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 e.Tail#2/2 >/1
  // closed e.Found#1 as range 5
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::link_brackets( context[8], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_ExtractAlternatives_L6(func_gen_ExtractAlternatives_L6, "ExtractAlternatives\\6");
refalrts::RefalFunction& gen_ExtractAlternatives_L6 = descr_gen_ExtractAlternatives_L6;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractAlternatives {
    static refalrts::RefalFunction *functions[] = {
      & gen_ExtractAlternatives_L6,
      & refalrts::create_closure,
      & gen_ExtractAlternatives_L5,
      & gen_ExtractAlternatives_L4,
      & gen_ExtractAlternatives_L3,
      & gen_ExtractAlternatives_L2,
      & gen_ExtractAlternatives_L1,
      & Seq,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 21, 0, 0},
      // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 e.Tail#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Found#1 as range 5
      // closed e.Tail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Tail#1/2 } </11 & Seq/12 & ExtractAlternatives\1/13 & ExtractAlternatives\2/14 & ExtractAlternatives\3/15 & ExtractAlternatives\4/16 & ExtractAlternatives\5/17 </18 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractAlternatives\6/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } >/19 >/20 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 8, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 7, 12},
      {refalrts::icAllocFunc, 0, 6, 13},
      {refalrts::icAllocFunc, 0, 5, 14},
      {refalrts::icAllocFunc, 0, 4, 15},
      {refalrts::icAllocFunc, 0, 3, 16},
      {refalrts::icAllocFunc, 0, 2, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 11, 18, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractAlternatives

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ExtractAlternatives(
  "ExtractAlternatives",
  scope_ExtractAlternatives::raa,
  scope_ExtractAlternatives::functions,
  scope_ExtractAlternatives::idents,
  scope_ExtractAlternatives::numbers,
  scope_ExtractAlternatives::strings
);
refalrts::RefalFunction& ExtractAlternatives = descr_ExtractAlternatives;

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 e.Tail#1/2 >/1
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
  // closed e.Found#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Tail#1/2 } </11 & Seq/12 & ExtractAlternatives\1/13 & ExtractAlternatives\2/14 & ExtractAlternatives\3/15 & ExtractAlternatives\4/16 & ExtractAlternatives\5/17 </18 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractAlternatives\6/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } >/19 >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], & gen_ExtractAlternatives_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & gen_ExtractAlternatives_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & gen_ExtractAlternatives_L3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & gen_ExtractAlternatives_L4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & gen_ExtractAlternatives_L5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & refalrts::create_closure );
  refalrts::update_name( context[4], & gen_ExtractAlternatives_L6 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ExtractAlternatives(func_ExtractAlternatives, "ExtractAlternatives");
refalrts::RefalFunction& ExtractAlternatives = descr_ExtractAlternatives;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractAlternatives_Head {
    static refalrts::RefalFunction *functions[] = {
      & UnexpectedToken
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Empty<int>::name,
      & ident_TDot<int>::name,
      & ident_TAlternative<int>::name,
      & ident_TName<int>::name,
      & ident_TErrorFlush<int>::name,
      & ident_TNamedFlush<int>::name,
      & ident_TFlush<int>::name,
      & ident_Set<int>::name,
      & ident_TSetName<int>::name,
      & ident_Chars<int>::name,
      & ident_TLiteral<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {" definition of state", 20}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 8, 0, 0},
      {refalrts::icIssueMemory, 14, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & ExtractAlternatives-Head/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // ( # TLiteral t.idx e.idx )
      // </0 & ExtractAlternatives-Head/4 (/5 # TLiteral/9 t.SrcPos#1/10 e.Content#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 10, 7},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icEmpty, 0, 0, 12},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Content#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Chars/9 } Tile{ AsIs: e.Content#1/7 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icUpdateIdent, 0, 9, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 5, 9, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TSetName t.idx e.idx )
      // </0 & ExtractAlternatives-Head/4 (/5 # TSetName/9 t.SrcPos#1/10 e.Content#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 8, 7},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icEmpty, 0, 0, 12},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Content#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Set/9 AsIs: t.SrcPos#1/10 AsIs: e.Content#1/7 AsIs: )/6 } Tile{ ]] }
      {refalrts::icUpdateIdent, 0, 7, 9},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +13, 0, 0},
      // ( # TFlush t.idx )
      // </0 & ExtractAlternatives-Head/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 6, 7},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icEmpty, 0, 0, 12},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TFlush/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TNamedFlush t.idx e.idx )
      // </0 & ExtractAlternatives-Head/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 5, 7},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icEmpty, 0, 0, 12},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Name#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TNamedFlush/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TErrorFlush t.idx e.idx )
      // </0 & ExtractAlternatives-Head/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 4, 7},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icEmpty, 0, 0, 12},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Message#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TErrorFlush/9 AsIs: t.SrcPos#1/10 AsIs: e.Message#1/7 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TName t.idx e.idx )
      // </0 & ExtractAlternatives-Head/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 3, 7},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icEmpty, 0, 0, 12},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Name#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TAlternative t.idx e.idx )
      // </0 & ExtractAlternatives-Head/4 (/5 # TAlternative/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 2, 7},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icEmpty, 0, 0, 12},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Message#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: e.Message#1/7 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +13, 0, 0},
      // ( # TDot t.idx )
      // </0 & ExtractAlternatives-Head/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 1, 7},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icEmpty, 0, 0, 12},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx e.idx
      // </0 & ExtractAlternatives-Head/4 t.Unexpected#1/5 e.Tail#1/2 >/1
      // closed e.Tail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 }" definition of state"/7 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 7},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractAlternatives_Head

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ExtractAlternatives_Head(
  "ExtractAlternatives-Head",
  scope_ExtractAlternatives_Head::raa,
  scope_ExtractAlternatives_Head::functions,
  scope_ExtractAlternatives_Head::idents,
  scope_ExtractAlternatives_Head::numbers,
  scope_ExtractAlternatives_Head::strings
);
refalrts::RefalFunction& ExtractAlternatives_Head = descr_ExtractAlternatives_Head;

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractAlternatives_Head(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & ExtractAlternatives-Head/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // ( # TLiteral t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TLiteral/9 t.SrcPos#1/10 e.Content#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TLiteral<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Content#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Chars/9 } Tile{ AsIs: e.Content#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Chars<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TSetName t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TSetName/9 t.SrcPos#1/10 e.Content#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TSetName<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Content#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Set/9 AsIs: t.SrcPos#1/10 AsIs: e.Content#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_Set<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TFlush t.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TFlush<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TFlush/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_Empty<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TNamedFlush t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TNamedFlush<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TNamedFlush/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_Empty<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TErrorFlush t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TErrorFlush<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Message#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TErrorFlush/9 AsIs: t.SrcPos#1/10 AsIs: e.Message#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_Empty<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TName t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TName<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_Empty<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TAlternative t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TAlternative/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Message#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: e.Message#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_Empty<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TDot t.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TDot<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_Empty<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx e.idx
  // </0 & ExtractAlternatives-Head/4 t.Unexpected#1/5 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 }" definition of state"/7 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[7], context[8], " definition of state", 20 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & UnexpectedToken );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ExtractAlternatives_Head(func_ExtractAlternatives_Head, "ExtractAlternatives-Head");
refalrts::RefalFunction& ExtractAlternatives_Head = descr_ExtractAlternatives_Head;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractAlternatives_Flush {
    static refalrts::RefalFunction *functions[] = {
      & UnexpectedToken
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_None<int>::name,
      & ident_TDot<int>::name,
      & ident_TAlternative<int>::name,
      & ident_TName<int>::name,
      & ident_FlushError<int>::name,
      & ident_TErrorFlush<int>::name,
      & ident_Flush<int>::name,
      & ident_TNamedFlush<int>::name,
      & ident_Unnamed<int>::name,
      & ident_TFlush<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"lush or next state name", 23}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 6, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & ExtractAlternatives-Flush/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( # TFlush t.idx )
      // </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 9, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Unnamed/1 ]] }
      {refalrts::icReinitIdent, 0, 8, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TNamedFlush t.idx e.idx )
      // </0 & ExtractAlternatives-Flush/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 7, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Name#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Flush/9 } Tile{ AsIs: e.Name#1/7 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icUpdateIdent, 0, 6, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 5, 9, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TErrorFlush t.idx e.idx )
      // </0 & ExtractAlternatives-Flush/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 5, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Message#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # FlushError/9 } Tile{ AsIs: e.Message#1/7 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icUpdateIdent, 0, 4, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 5, 9, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( # TName t.idx e.idx )
      // </0 & ExtractAlternatives-Flush/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 3, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Name#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # TAlternative t.idx )
      // </0 & ExtractAlternatives-Flush/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 2, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # TDot t.idx )
      // </0 & ExtractAlternatives-Flush/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 1, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx
      // </0 & ExtractAlternatives-Flush/4 t.Unexpected#1/5 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'f'/1 }"lush or next state name"/7 >/9 Tile{ ]] }
      {refalrts::icAllocString, 0, 0, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'f', 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractAlternatives_Flush

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ExtractAlternatives_Flush(
  "ExtractAlternatives-Flush",
  scope_ExtractAlternatives_Flush::raa,
  scope_ExtractAlternatives_Flush::functions,
  scope_ExtractAlternatives_Flush::idents,
  scope_ExtractAlternatives_Flush::numbers,
  scope_ExtractAlternatives_Flush::strings
);
refalrts::RefalFunction& ExtractAlternatives_Flush = descr_ExtractAlternatives_Flush;

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractAlternatives_Flush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & ExtractAlternatives-Flush/4 t.idx#0/5 >/1
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
    // ( # TFlush t.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TFlush<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Unnamed/1 ]] }
    refalrts::reinit_ident( context[1], & ident_Unnamed<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TNamedFlush t.idx e.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TNamedFlush<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Flush/9 } Tile{ AsIs: e.Name#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Flush<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TErrorFlush t.idx e.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TErrorFlush<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Message#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # FlushError/9 } Tile{ AsIs: e.Message#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_FlushError<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TName t.idx e.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TName<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_None<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TAlternative t.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_None<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TDot t.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TDot<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_None<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx
  // </0 & ExtractAlternatives-Flush/4 t.Unexpected#1/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'f'/1 }"lush or next state name"/7 >/9 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[7], context[8], "lush or next state name", 23 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & UnexpectedToken );
  refalrts::reinit_char( context[1], 'f' );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ExtractAlternatives_Flush(func_ExtractAlternatives_Flush, "ExtractAlternatives-Flush");
refalrts::RefalFunction& ExtractAlternatives_Flush = descr_ExtractAlternatives_Flush;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractAlternatives_NextState {
    static refalrts::RefalFunction *functions[] = {
      & UnexpectedToken
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Finitive<int>::name,
      & ident_TDot<int>::name,
      & ident_TAlternative<int>::name,
      & ident_TName<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"ext state name or next alternative", 34}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & ExtractAlternatives-NextState/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( # TName t.idx e.idx )
      // </0 & ExtractAlternatives-NextState/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 3, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Name#1 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-NextState/4 (/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icLinkBrackets, 9, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 9, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # TAlternative t.idx )
      // </0 & ExtractAlternatives-NextState/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 2, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # TDot t.idx )
      // </0 & ExtractAlternatives-NextState/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 1, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx
      // </0 & ExtractAlternatives-NextState/4 t.Unexpected#1/5 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'n'/1 }"ext state name or next alternative"/7 >/9 Tile{ ]] }
      {refalrts::icAllocString, 0, 0, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'n', 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractAlternatives_NextState

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ExtractAlternatives_NextState(
  "ExtractAlternatives-NextState",
  scope_ExtractAlternatives_NextState::raa,
  scope_ExtractAlternatives_NextState::functions,
  scope_ExtractAlternatives_NextState::idents,
  scope_ExtractAlternatives_NextState::numbers,
  scope_ExtractAlternatives_NextState::strings
);
refalrts::RefalFunction& ExtractAlternatives_NextState = descr_ExtractAlternatives_NextState;

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractAlternatives_NextState(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & ExtractAlternatives-NextState/4 t.idx#0/5 >/1
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
    // ( # TName t.idx e.idx )
    // </0 & ExtractAlternatives-NextState/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TName<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-NextState/4 (/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::link_brackets( context[9], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TAlternative t.idx )
    // </0 & ExtractAlternatives-NextState/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_Finitive<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TDot t.idx )
    // </0 & ExtractAlternatives-NextState/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TDot<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_Finitive<int>::name );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx
  // </0 & ExtractAlternatives-NextState/4 t.Unexpected#1/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'n'/1 }"ext state name or next alternative"/7 >/9 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[7], context[8], "ext state name or next alternative", 34 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & UnexpectedToken );
  refalrts::reinit_char( context[1], 'n' );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ExtractAlternatives_NextState(func_ExtractAlternatives_NextState, "ExtractAlternatives-NextState");
refalrts::RefalFunction& ExtractAlternatives_NextState = descr_ExtractAlternatives_NextState;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_UnexpectedToken {
    static refalrts::RefalFunction *functions[] = {
      & DFA_TextFromToken,
      & ErrorAt
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {" expected", 9},
      {"Unexpected ", 11}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 18, 0, 0},
      // </0 & UnexpectedToken/4 (/7 s.Type#1/9 t.SrcPos#1/10 e.Unexpected#1/5 )/8 e.Message#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Message#1 as range 2
      {refalrts::icsVarLeft, 0, 9, 5},
      {refalrts::ictVarLeftSave, 0, 10, 5},
      // closed e.Unexpected#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/10 }"Unexpected "/12 </14 Tile{ HalfReuse: & DFA-TextFromToken/7 AsIs: s.Type#1/9 } Tile{ AsIs: e.Unexpected#1/5 } >/15" expected"/16 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 1, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icAllocString, 0, 0, 16},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 7},
      {refalrts::icReinitChar, 0, ' ', 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 15, 17, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icSpliceTile, 12, 14, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_UnexpectedToken

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_UnexpectedToken(
  "UnexpectedToken",
  scope_UnexpectedToken::raa,
  scope_UnexpectedToken::functions,
  scope_UnexpectedToken::idents,
  scope_UnexpectedToken::numbers,
  scope_UnexpectedToken::strings
);
refalrts::RefalFunction& UnexpectedToken = descr_UnexpectedToken;

} // unnamed namespace

#else
static refalrts::FnResult func_UnexpectedToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & UnexpectedToken/4 (/7 s.Type#1/9 t.SrcPos#1/10 e.Unexpected#1/5 )/8 e.Message#1/2 >/1
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
  // closed e.Message#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Unexpected#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/10 }"Unexpected "/12 </14 Tile{ HalfReuse: & DFA-TextFromToken/7 AsIs: s.Type#1/9 } Tile{ AsIs: e.Unexpected#1/5 } >/15" expected"/16 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[12], context[13], "Unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], " expected", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ErrorAt );
  refalrts::reinit_name( context[7], & DFA_TextFromToken );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_UnexpectedToken(func_UnexpectedToken, "UnexpectedToken");
refalrts::RefalFunction& UnexpectedToken = descr_UnexpectedToken;

} // unnamed namespace

#endif

//End of file
