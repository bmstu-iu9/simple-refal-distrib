// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #Any
template <typename SREFAL_PARAM_INT>
struct ident_Any {
  static const char *name() {
    return "Any";
  }
};

// identifier #Changed
template <typename SREFAL_PARAM_INT>
struct ident_Changed {
  static const char *name() {
    return "Changed";
  }
};

// identifier #Chars
template <typename SREFAL_PARAM_INT>
struct ident_Chars {
  static const char *name() {
    return "Chars";
  }
};

// identifier #EOF-Catched
template <typename SREFAL_PARAM_INT>
struct ident_EOF_Catched {
  static const char *name() {
    return "EOF-Catched";
  }
};

// identifier #EOF-NotCatched
template <typename SREFAL_PARAM_INT>
struct ident_EOF_NotCatched {
  static const char *name() {
    return "EOF-NotCatched";
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

// identifier #NotChanged
template <typename SREFAL_PARAM_INT>
struct ident_NotChanged {
  static const char *name() {
    return "NotChanged";
  }
};

// identifier #NotUsed
template <typename SREFAL_PARAM_INT>
struct ident_NotUsed {
  static const char *name() {
    return "NotUsed";
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

// identifier #Used
template <typename SREFAL_PARAM_INT>
struct ident_Used {
  static const char *name() {
    return "Used";
  }
};

extern refalrts::RefalFunction& Fetch;
extern refalrts::RefalFunction& Seq;
extern refalrts::RefalFunction& MapReduce;
extern refalrts::RefalFunction& Map;
extern refalrts::RefalFunction& Reduce;
extern refalrts::RefalFunction& ErrorAt;
extern refalrts::RefalFunction& WarningAt;
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_DFA_Compile_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_DFA_Compile_L2;
} // unnamed namespace

extern refalrts::RefalFunction& DFA_Compile;
namespace /* unnamed */ {
extern refalrts::RefalFunction& UniqueSet;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ResolvingSets_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ResolvingSets_L2;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ResolvingSets;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& NormalizeContent;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& SetCheckRecursion;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& SetSubstitute;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& SubstituteSetsToRules;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& SetDiff;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& NormalizeAlternative;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& SplitAlternatives;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_NormalizeRule_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_NormalizeRule_L2;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& NormalizeRule;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& WarningIfUncatched;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& DefaultCatchAnyChar;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& DefaultCatchEOF;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& PrepareFunctions;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ExtractExpected;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_DoPrepareFunctions_S2L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_DoPrepareFunctions_S4L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& DoPrepareFunctions;
} // unnamed namespace


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_DFA_Compile_L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Sentence<int>::name,
      & ident_NotUsed<int>::name,
      & ident_Set<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 28, 0, 0},
      //FAST GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ t.$ ( e.$ ) e.$ )
      //GLOBAL GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ t.$ ( e.$ ) e.$ )
      // </0 & DFA-Compile\1/4 (/7 (/11 e.idxBB#0/9 )/12 (/15 e.idxBTB#0/13 )/16 )/8 (/19 s.idxTB#0/21 t.idxTBV#0/22 (/26 e.idxTBVVB#0/24 )/27 e.idxTBVVT#0/17 )/20 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 13, 5},
      {refalrts::icBracketLeftSave, 0, 17, 2},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxBB#0 as range 9
      // closed e.idxBTB#0 as range 13
      {refalrts::icsVarLeft, 0, 21, 17},
      {refalrts::ictVarLeftSave, 0, 22, 17},
      {refalrts::icBracketLeftSave, 0, 24, 17},
      // closed e.idxTBVVB#0 as range 24
      // closed e.idxTBVVT#0 as range 17
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( ( e.idx ) ( e.idx ) ) ( # Set t.idx ( e.idx ) e.idx )
      // </0 & DFA-Compile\1/4 (/7 (/11 e.Sets#2/9 )/12 (/15 e.Rules#2/13 )/16 )/8 (/19 # Set/21 t.SrcPos#2/22 (/26 e.Name#2/24 )/27 e.Content#2/17 )/20 >/1
      {refalrts::icIdentTerm, 0, 2, 21},
      // closed e.Sets#2 as range 9
      // closed e.Rules#2 as range 13
      // closed e.Name#2 as range 24
      // closed e.Content#2 as range 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DFA-Compile\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Sets#2/9 } Tile{ HalfReuse: (/21 AsIs: t.SrcPos#2/22 AsIs: (/26 AsIs: e.Name#2/24 AsIs: )/27 } Tile{ HalfReuse: # NotUsed/19 } Tile{ AsIs: e.Content#2/17 } Tile{ AsIs: )/20 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules#2/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 21},
      {refalrts::icReinitIdent, 0, 1, 19},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 21, 20, 0},
      {refalrts::icLinkBrackets, 26, 27, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 8, 0},
      {refalrts::icSpliceTile, 20, 20, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 19, 19, 0},
      {refalrts::icSpliceTile, 21, 27, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 7, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( ( e.idx ) ( e.idx ) ) ( # Sentence t.idx ( e.idx ) e.idx )
      // </0 & DFA-Compile\1/4 (/7 (/11 e.Sets#2/9 )/12 (/15 e.Rules#2/13 )/16 )/8 (/19 # Sentence/21 t.SrcPos#2/22 (/26 e.Name#2/24 )/27 e.Content#2/17 )/20 >/1
      {refalrts::icIdentTerm, 0, 0, 21},
      // closed e.Sets#2 as range 9
      // closed e.Rules#2 as range 13
      // closed e.Name#2 as range 24
      // closed e.Content#2 as range 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DFA-Compile\1/4 {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Sets#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Rules#2/13 } Tile{ HalfReuse: (/21 AsIs: t.SrcPos#2/22 AsIs: (/26 AsIs: e.Name#2/24 AsIs: )/27 AsIs: e.Content#2/17 AsIs: )/20 HalfReuse: )/1 } Tile{ AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 21},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 15, 1, 0},
      {refalrts::icLinkBrackets, 21, 20, 0},
      {refalrts::icLinkBrackets, 26, 27, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 21, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 7, 15, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_DFA_Compile_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_DFA_Compile_L1(
  "DFA-Compile\\1",
  scope_gen_DFA_Compile_L1::raa,
  scope_gen_DFA_Compile_L1::functions,
  scope_gen_DFA_Compile_L1::idents,
  scope_gen_DFA_Compile_L1::numbers,
  scope_gen_DFA_Compile_L1::strings
);
refalrts::RefalFunction& gen_DFA_Compile_L1 = descr_gen_DFA_Compile_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_DFA_Compile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ t.$ ( e.$ ) e.$ )
  //GLOBAL GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ t.$ ( e.$ ) e.$ )
  // </0 & DFA-Compile\1/4 (/7 (/11 e.idxBB#0/9 )/12 (/15 e.idxBTB#0/13 )/16 )/8 (/19 s.idxTB#0/21 t.idxTBV#0/22 (/26 e.idxTBVVB#0/24 )/27 e.idxTBVVT#0/17 )/20 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBB#0 as range 9
  // closed e.idxBTB#0 as range 13
  if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[17], context[18] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.idxTBVVB#0 as range 24
  // closed e.idxTBVVT#0 as range 17
  do {
    refalrts::start_sentence();
    // ( ( e.idx ) ( e.idx ) ) ( # Set t.idx ( e.idx ) e.idx )
    // </0 & DFA-Compile\1/4 (/7 (/11 e.Sets#2/9 )/12 (/15 e.Rules#2/13 )/16 )/8 (/19 # Set/21 t.SrcPos#2/22 (/26 e.Name#2/24 )/27 e.Content#2/17 )/20 >/1
    if( ! refalrts::ident_term(  & ident_Set<int>::name, context[21] ) )
      continue;
    // closed e.Sets#2 as range 9
    // closed e.Rules#2 as range 13
    // closed e.Name#2 as range 24
    // closed e.Content#2 as range 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DFA-Compile\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Sets#2/9 } Tile{ HalfReuse: (/21 AsIs: t.SrcPos#2/22 AsIs: (/26 AsIs: e.Name#2/24 AsIs: )/27 } Tile{ HalfReuse: # NotUsed/19 } Tile{ AsIs: e.Content#2/17 } Tile{ AsIs: )/20 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules#2/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[21] );
    refalrts::reinit_ident( context[19], & ident_NotUsed<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[20] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[21], context[27] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( ( e.idx ) ( e.idx ) ) ( # Sentence t.idx ( e.idx ) e.idx )
  // </0 & DFA-Compile\1/4 (/7 (/11 e.Sets#2/9 )/12 (/15 e.Rules#2/13 )/16 )/8 (/19 # Sentence/21 t.SrcPos#2/22 (/26 e.Name#2/24 )/27 e.Content#2/17 )/20 >/1
  if( ! refalrts::ident_term(  & ident_Sentence<int>::name, context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#2 as range 9
  // closed e.Rules#2 as range 13
  // closed e.Name#2 as range 24
  // closed e.Content#2 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DFA-Compile\1/4 {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Sets#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Rules#2/13 } Tile{ HalfReuse: (/21 AsIs: t.SrcPos#2/22 AsIs: (/26 AsIs: e.Name#2/24 AsIs: )/27 AsIs: e.Content#2/17 AsIs: )/20 HalfReuse: )/1 } Tile{ AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[21] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[21], context[20] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[21], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_DFA_Compile_L1(func_gen_DFA_Compile_L1, "DFA-Compile\\1");
refalrts::RefalFunction& gen_DFA_Compile_L1 = descr_gen_DFA_Compile_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_DFA_Compile_L2 {
    static refalrts::RefalFunction *functions[] = {
      & ResolvingSets
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & DFA-Compile\2/4 (/7 (/11 e.Sets#2/9 )/12 (/15 e.Rules#2/13 )/16 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 13, 5},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Sets#2 as range 9
      // closed e.Rules#2 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ResolvingSets/7 } Tile{ AsIs: e.Sets#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules#2/13 AsIs: )/16 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 7},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 0, 12, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 16, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_DFA_Compile_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_DFA_Compile_L2(
  "DFA-Compile\\2",
  scope_gen_DFA_Compile_L2::raa,
  scope_gen_DFA_Compile_L2::functions,
  scope_gen_DFA_Compile_L2::idents,
  scope_gen_DFA_Compile_L2::numbers,
  scope_gen_DFA_Compile_L2::strings
);
refalrts::RefalFunction& gen_DFA_Compile_L2 = descr_gen_DFA_Compile_L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_DFA_Compile_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DFA-Compile\2/4 (/7 (/11 e.Sets#2/9 )/12 (/15 e.Rules#2/13 )/16 )/8 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#2 as range 9
  // closed e.Rules#2 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ResolvingSets/7 } Tile{ AsIs: e.Sets#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules#2/13 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], & ResolvingSets );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_DFA_Compile_L2(func_gen_DFA_Compile_L2, "DFA-Compile\\2");
refalrts::RefalFunction& gen_DFA_Compile_L2 = descr_gen_DFA_Compile_L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DFA_Compile {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & PrepareFunctions,
      & NormalizeRule,
      & Map,
      & SubstituteSetsToRules,
      & gen_DFA_Compile_L2,
      & gen_DFA_Compile_L1,
      & Reduce,
      & Seq
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 25, 0, 0},
      // </0 & DFA-Compile/4 e.Elements#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Elements#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Elements#1/2 HalfReuse: </1 } & Seq/5 (/6 & Reduce/7 & DFA-Compile\1/8 (/9 (/10 )/11 (/12 )/13 )/14 )/15 & DFA-Compile\2/16 & SubstituteSetsToRules/17 (/18 & Map/19 & NormalizeRule/20 )/21 & PrepareFunctions/22 >/23 >/24 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 8, 5},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
      {refalrts::icAllocFunc, 0, 7, 7},
      {refalrts::icAllocFunc, 0, 6, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icAllocFunc, 0, 5, 16},
      {refalrts::icAllocFunc, 0, 4, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
      {refalrts::icAllocFunc, 0, 3, 19},
      {refalrts::icAllocFunc, 0, 2, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
      {refalrts::icAllocFunc, 0, 1, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icLinkBrackets, 18, 21, 0},
      {refalrts::icLinkBrackets, 6, 15, 0},
      {refalrts::icLinkBrackets, 9, 14, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icLinkBrackets, 10, 11, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 24, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DFA_Compile

} // unnamed namespace

refalrts::RASLFunction descr_DFA_Compile(
  "DFA-Compile",
  scope_DFA_Compile::raa,
  scope_DFA_Compile::functions,
  scope_DFA_Compile::idents,
  scope_DFA_Compile::numbers,
  scope_DFA_Compile::strings
);
refalrts::RefalFunction& DFA_Compile = descr_DFA_Compile;

#else
static refalrts::FnResult func_DFA_Compile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DFA-Compile/4 e.Elements#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Elements#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Elements#1/2 HalfReuse: </1 } & Seq/5 (/6 & Reduce/7 & DFA-Compile\1/8 (/9 (/10 )/11 (/12 )/13 )/14 )/15 & DFA-Compile\2/16 & SubstituteSetsToRules/17 (/18 & Map/19 & NormalizeRule/20 )/21 & PrepareFunctions/22 >/23 >/24 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & Reduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], & gen_DFA_Compile_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & gen_DFA_Compile_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & SubstituteSetsToRules ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], & Map ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & NormalizeRule ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], & PrepareFunctions ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[6], context[15] );
  refalrts::link_brackets( context[9], context[14] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_DFA_Compile(func_DFA_Compile, "DFA-Compile");
refalrts::RefalFunction& DFA_Compile = descr_DFA_Compile;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_UniqueSet {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 17, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & UniqueSet/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // e.idx
      // </0 & UniqueSet/4 e.Set-B#1/5 s.Repeated#1/7 e.Set-M#1/8 s.Repeated#1/10 e.Set-E#1/2 >/1
      {refalrts::icSave, 0, 11, 2},
      {refalrts::icEPrepare, 0, 5, 11},
      {refalrts::icEStart, 0, 5, 11},
      {refalrts::icSave, 0, 13, 11},
      {refalrts::icsVarLeft, 0, 7, 13},
      {refalrts::icEPrepare, 0, 8, 13},
      {refalrts::icEStart, 0, 8, 13},
      {refalrts::icSave, 0, 15, 13},
      {refalrts::icsRepeatLeft, 10, 7, 15},
      // closed e.Set-E#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Repeated#1/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Set-B#1/5 } Tile{ AsIs: </0 AsIs: & UniqueSet/4 } Tile{ AsIs: s.Repeated#1/7 } Tile{ AsIs: e.Set-M#1/8 } Tile{ AsIs: e.Set-E#1/15(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceEVar, 0, 0, 8},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & UniqueSet/4 e.Set#1/2 >/1
      // closed e.Set#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & UniqueSet/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Set#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_UniqueSet

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_UniqueSet(
  "UniqueSet",
  scope_UniqueSet::raa,
  scope_UniqueSet::functions,
  scope_UniqueSet::idents,
  scope_UniqueSet::numbers,
  scope_UniqueSet::strings
);
refalrts::RefalFunction& UniqueSet = descr_UniqueSet;

} // unnamed namespace

#else
static refalrts::FnResult func_UniqueSet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & UniqueSet/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & UniqueSet/4 e.Set-B#1/5 s.Repeated#1/7 e.Set-M#1/8 s.Repeated#1/10 e.Set-E#1/2 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::svar_left( context[7], context[13], context[14] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[15] = context[13];
        context[16] = context[14];
        if( ! refalrts::repeated_stvar_left( context[10], context[7], context[15], context[16] ) )
          continue;
        // closed e.Set-E#1 as range 15(2)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Repeated#1/10 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Set-B#1/5 } Tile{ AsIs: </0 AsIs: & UniqueSet/4 } Tile{ AsIs: s.Repeated#1/7 } Tile{ AsIs: e.Set-M#1/8 } Tile{ AsIs: e.Set-E#1/15(2) } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[8], context[9] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[8], context[9], context[13], context[14] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[11], context[12] ) );
  } while ( 0 );

  // e.idx
  // </0 & UniqueSet/4 e.Set#1/2 >/1
  // closed e.Set#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & UniqueSet/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Set#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_UniqueSet(func_UniqueSet, "UniqueSet");
refalrts::RefalFunction& UniqueSet = descr_UniqueSet;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ResolvingSets_L1 {
    static refalrts::RefalFunction *functions[] = {
      & NormalizeContent
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Any<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 20, 0, 0},
      //FAST GEN: ( t.$ ( e.$ ) s.$ e.$ )
      //GLOBAL GEN: ( t.$ ( e.$ ) s.$ e.$ )
      // </0 & ResolvingSets\1/4 (/7 t.idxB#0/9 (/13 e.idxBVB#0/11 )/14 s.idxBVT#0/15 e.idxBVTV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::ictVarLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 11, 5},
      // closed e.idxBVB#0 as range 11
      {refalrts::icsVarLeft, 0, 15, 5},
      // closed e.idxBVTV#0 as range 5
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( t.idx ( e.idx ) s.idx # Any )
      // </0 & ResolvingSets\1/4 (/7 t.SrcPos#2/9 (/13 e.Name#2/11 )/14 s.Used#2/15 # Any/16 )/8 >/1
      {refalrts::icSave, 0, 18, 5},
      {refalrts::icIdentLeftSave, 16, 0, 18},
      {refalrts::icEmpty, 0, 0, 18},
      // closed e.Name#2 as range 11
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ResolvingSets\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos#2/9 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: s.Used#2/15 AsIs: # Any/16 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( t.idx ( e.idx ) s.idx e.idx )
      // </0 & ResolvingSets\1/4 (/7 t.SrcPos#2/9 (/13 e.Name#2/11 )/14 s.Used#2/15 e.Content#2/5 )/8 >/1
      // closed e.Name#2 as range 11
      // closed e.Content#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos#2/9 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: s.Used#2/15 } Tile{ AsIs: </0 Reuse: & NormalizeContent/4 } (/16 )/17 Tile{ AsIs: e.Content#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 16, 17, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 16, 17, 0},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 7, 15, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ResolvingSets_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ResolvingSets_L1(
  "ResolvingSets\\1",
  scope_gen_ResolvingSets_L1::raa,
  scope_gen_ResolvingSets_L1::functions,
  scope_gen_ResolvingSets_L1::idents,
  scope_gen_ResolvingSets_L1::numbers,
  scope_gen_ResolvingSets_L1::strings
);
refalrts::RefalFunction& gen_ResolvingSets_L1 = descr_gen_ResolvingSets_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ResolvingSets_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: ( t.$ ( e.$ ) s.$ e.$ )
  //GLOBAL GEN: ( t.$ ( e.$ ) s.$ e.$ )
  // </0 & ResolvingSets\1/4 (/7 t.idxB#0/9 (/13 e.idxBVB#0/11 )/14 s.idxBVT#0/15 e.idxBVTV#0/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.idxBVB#0 as range 11
  if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBVTV#0 as range 5
  do {
    refalrts::start_sentence();
    // ( t.idx ( e.idx ) s.idx # Any )
    // </0 & ResolvingSets\1/4 (/7 t.SrcPos#2/9 (/13 e.Name#2/11 )/14 s.Used#2/15 # Any/16 )/8 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[16] = refalrts::ident_left(  & ident_Any<int>::name, context[18], context[19] );
    if( ! context[16] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Name#2 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ResolvingSets\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos#2/9 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: s.Used#2/15 AsIs: # Any/16 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( t.idx ( e.idx ) s.idx e.idx )
  // </0 & ResolvingSets\1/4 (/7 t.SrcPos#2/9 (/13 e.Name#2/11 )/14 s.Used#2/15 e.Content#2/5 )/8 >/1
  // closed e.Name#2 as range 11
  // closed e.Content#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos#2/9 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: s.Used#2/15 } Tile{ AsIs: </0 Reuse: & NormalizeContent/4 } (/16 )/17 Tile{ AsIs: e.Content#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & NormalizeContent );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_ResolvingSets_L1(func_gen_ResolvingSets_L1, "ResolvingSets\\1");
refalrts::RefalFunction& gen_ResolvingSets_L1 = descr_gen_ResolvingSets_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ResolvingSets_L2 {
    static refalrts::RefalFunction *functions[] = {
      & ResolvingSets
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NotChanged<int>::name,
      & ident_Changed<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 6, 0, 0},
      //FAST GEN: s.$ e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & ResolvingSets\2/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // # Changed e.idx
      // </0 & ResolvingSets\2/4 # Changed/5 e.Sets#2/2 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      // closed e.Sets#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & ResolvingSets/5 AsIs: e.Sets#2/2 AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // # NotChanged e.idx
      // </0 & ResolvingSets\2/4 # NotChanged/5 e.Sets#2/2 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      // closed e.Sets#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ResolvingSets\2/4 # NotChanged/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#2/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ResolvingSets_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ResolvingSets_L2(
  "ResolvingSets\\2",
  scope_gen_ResolvingSets_L2::raa,
  scope_gen_ResolvingSets_L2::functions,
  scope_gen_ResolvingSets_L2::idents,
  scope_gen_ResolvingSets_L2::numbers,
  scope_gen_ResolvingSets_L2::strings
);
refalrts::RefalFunction& gen_ResolvingSets_L2 = descr_gen_ResolvingSets_L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ResolvingSets_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & ResolvingSets\2/4 s.idx#0/5 e.idxV#0/2 >/1
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
    // # Changed e.idx
    // </0 & ResolvingSets\2/4 # Changed/5 e.Sets#2/2 >/1
    if( ! refalrts::ident_term(  & ident_Changed<int>::name, context[5] ) )
      continue;
    // closed e.Sets#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & ResolvingSets/5 AsIs: e.Sets#2/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & ResolvingSets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // # NotChanged e.idx
  // </0 & ResolvingSets\2/4 # NotChanged/5 e.Sets#2/2 >/1
  if( ! refalrts::ident_term(  & ident_NotChanged<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ResolvingSets\2/4 # NotChanged/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_ResolvingSets_L2(func_gen_ResolvingSets_L2, "ResolvingSets\\2");
refalrts::RefalFunction& gen_ResolvingSets_L2 = descr_gen_ResolvingSets_L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ResolvingSets {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_ResolvingSets_L2,
      & SetSubstitute,
      & SetCheckRecursion,
      & gen_ResolvingSets_L1,
      & Map,
      & Seq
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 15, 0, 0},
      // </0 & ResolvingSets/4 e.Sets#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Sets#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Sets#1/2 HalfReuse: </1 } & Seq/5 (/6 & Map/7 & ResolvingSets\1/8 )/9 & SetCheckRecursion/10 & SetSubstitute/11 & ResolvingSets\2/12 >/13 >/14 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 6, 5},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
      {refalrts::icAllocFunc, 0, 5, 7},
      {refalrts::icAllocFunc, 0, 4, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icAllocFunc, 0, 3, 10},
      {refalrts::icAllocFunc, 0, 2, 11},
      {refalrts::icAllocFunc, 0, 1, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icLinkBrackets, 6, 9, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ResolvingSets

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ResolvingSets(
  "ResolvingSets",
  scope_ResolvingSets::raa,
  scope_ResolvingSets::functions,
  scope_ResolvingSets::idents,
  scope_ResolvingSets::numbers,
  scope_ResolvingSets::strings
);
refalrts::RefalFunction& ResolvingSets = descr_ResolvingSets;

} // unnamed namespace

#else
static refalrts::FnResult func_ResolvingSets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ResolvingSets/4 e.Sets#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Sets#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Sets#1/2 HalfReuse: </1 } & Seq/5 (/6 & Map/7 & ResolvingSets\1/8 )/9 & SetCheckRecursion/10 & SetSubstitute/11 & ResolvingSets\2/12 >/13 >/14 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & Map ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], & gen_ResolvingSets_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & SetCheckRecursion ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], & SetSubstitute ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & gen_ResolvingSets_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ResolvingSets(func_ResolvingSets, "ResolvingSets");
refalrts::RefalFunction& ResolvingSets = descr_ResolvingSets;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_NormalizeContent {
    static refalrts::RefalFunction *functions[] = {
      & UniqueSet
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Chars<int>::name,
      & ident_Any<int>::name,
      & ident_Set<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & NormalizeContent/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // ( e.idx ) ( # Chars e.idx ) e.idx
      // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Chars/13 e.Symbols#1/9 )/12 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 16, 2},
      {refalrts::icBracketLeftSave, 0, 9, 16},
      {refalrts::icIdentLeftSave, 13, 0, 9},
      // closed e.Chars#1 as range 5
      // closed e.Symbols#1 as range 9
      // closed e.Tail#1 as range 16(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 } Tile{ HalfReuse: </11 HalfReuse: & UniqueSet/13 } Tile{ AsIs: e.Chars#1/5 } Tile{ AsIs: e.Symbols#1/9 } Tile{ HalfReuse: >/8 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icReinitFunc, 0, 0, 13},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 11, 13, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // ( e.idx ) ( # Set t.idx e.idx ) e.idx
      // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Set/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 16, 2},
      {refalrts::icBracketLeftSave, 0, 9, 16},
      {refalrts::icIdentLeftSave, 13, 2, 9},
      // closed e.Chars#1 as range 5
      // closed e.Tail#1 as range 16(2)
      {refalrts::ictVarLeftSave, 0, 14, 9},
      // closed e.Name#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Set/13 AsIs: t.SrcPos#1/14 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/16(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 16},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( e.idx ) # Any e.idx
      // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 # Any/9 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 16, 2},
      {refalrts::icIdentLeftSave, 9, 1, 16},
      // closed e.Chars#1 as range 5
      // closed e.Tail#1 as range 16(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 # Any/9 e.Tail#1/16(2) {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Any/1 ]] }
      {refalrts::icReinitIdent, 0, 1, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx )
      // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 >/1
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Chars#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Chars/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitIdent, 0, 0, 7},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_NormalizeContent

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_NormalizeContent(
  "NormalizeContent",
  scope_NormalizeContent::raa,
  scope_NormalizeContent::functions,
  scope_NormalizeContent::idents,
  scope_NormalizeContent::numbers,
  scope_NormalizeContent::strings
);
refalrts::RefalFunction& NormalizeContent = descr_NormalizeContent;

} // unnamed namespace

#else
static refalrts::FnResult func_NormalizeContent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & NormalizeContent/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ( # Chars e.idx ) e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Chars/13 e.Symbols#1/9 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Chars<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Symbols#1 as range 9
    // closed e.Tail#1 as range 16(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 } Tile{ HalfReuse: </11 HalfReuse: & UniqueSet/13 } Tile{ AsIs: e.Chars#1/5 } Tile{ AsIs: e.Symbols#1/9 } Tile{ HalfReuse: >/8 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], & UniqueSet );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Set t.idx e.idx ) e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Set/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Set<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 16(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Set/13 AsIs: t.SrcPos#1/14 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/16(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) # Any e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 # Any/9 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = refalrts::ident_left(  & ident_Any<int>::name, context[16], context[17] );
    if( ! context[9] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 16(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 # Any/9 e.Tail#1/16(2) {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Any/1 ]] }
    refalrts::reinit_ident( context[1], & ident_Any<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx )
  // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Chars/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_Chars<int>::name );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_NormalizeContent(func_NormalizeContent, "NormalizeContent");
refalrts::RefalFunction& NormalizeContent = descr_NormalizeContent;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_SetCheckRecursion {
    static refalrts::RefalFunction *functions[] = {
      & WarningAt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Set<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"sive depended set ", 18},
      {"Recu", 4}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 40, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & SetCheckRecursion/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +40, 0, 0},
      // e.idx
      // </0 & SetCheckRecursion/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.Used#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/27 e.Name#1/25 )/23 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
      {refalrts::icSave, 0, 34, 2},
      {refalrts::icEPrepare, 0, 5, 34},
      {refalrts::icEStart, 0, 5, 34},
      {refalrts::icSave, 0, 36, 34},
      {refalrts::icBracketLeftSave, 0, 7, 36},
      // closed e.Sets-E#1 as range 36(2)
      {refalrts::ictVarLeftSave, 0, 11, 7},
      {refalrts::icBracketLeftSave, 0, 13, 7},
      // closed e.Name#1 as range 13
      {refalrts::icsVarLeft, 0, 17, 7},
      {refalrts::icEPrepare, 0, 18, 7},
      {refalrts::icEStart, 0, 18, 7},
      {refalrts::icSave, 0, 38, 7},
      {refalrts::icBracketLeftSave, 0, 20, 38},
      {refalrts::icIdentLeftSave, 24, 0, 20},
      {refalrts::iceRepeatRight, 25, 13, 20},
      // closed e.Content-E#1 as range 38(7)
      {refalrts::ictVarLeftSave, 0, 27, 20},
      {refalrts::icEmpty, 0, 0, 20},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </22 HalfReuse: & WarningAt/24 AsIs: t.SrcPos#1/27 }"Recu"/29 Tile{ HalfReuse: 'r'/23 }"sive depended set "/31 Tile{ AsIs: e.Name#1/25 } >/33 Tile{ AsIs: </0 AsIs: & SetCheckRecursion/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.SetNamePos#1/11 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 AsIs: s.Used#1/17 } Tile{ AsIs: e.Content-B#1/18 } Tile{ AsIs: e.Content-E#1/38(7) } Tile{ AsIs: )/10 AsIs: e.Sets-E#1/36(2) AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 1, 29},
      {refalrts::icAllocString, 0, 0, 31},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 33},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 22},
      {refalrts::icReinitFunc, 0, 0, 24},
      {refalrts::icReinitChar, 0, 'r', 23},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icPushStack, 0, 0, 33},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icSetRes, 0, 0, 10},
      {refalrts::icSpliceEVar, 0, 0, 38},
      {refalrts::icSpliceEVar, 0, 0, 18},
      {refalrts::icSpliceTile, 0, 17, 0},
      {refalrts::icSpliceTile, 33, 33, 0},
      {refalrts::icSpliceEVar, 0, 0, 25},
      {refalrts::icSpliceTile, 31, 32, 0},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceTile, 29, 30, 0},
      {refalrts::icSpliceTile, 22, 28, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & SetCheckRecursion/4 e.Sets#1/2 >/1
      // closed e.Sets#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SetCheckRecursion/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_SetCheckRecursion

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_SetCheckRecursion(
  "SetCheckRecursion",
  scope_SetCheckRecursion::raa,
  scope_SetCheckRecursion::functions,
  scope_SetCheckRecursion::idents,
  scope_SetCheckRecursion::numbers,
  scope_SetCheckRecursion::strings
);
refalrts::RefalFunction& SetCheckRecursion = descr_SetCheckRecursion;

} // unnamed namespace

#else
static refalrts::FnResult func_SetCheckRecursion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & SetCheckRecursion/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & SetCheckRecursion/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.Used#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/27 e.Name#1/25 )/23 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    context[34] = context[2];
    context[35] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[34];
      context[37] = context[35];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[36], context[37] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      // closed e.Sets-E#1 as range 36(2)
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.Name#1 as range 13
      if( ! refalrts::svar_left( context[17], context[7], context[8] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop();
      do {
        context[38] = context[7];
        context[39] = context[8];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[38], context[39] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left(  & ident_Set<int>::name, context[20], context[21] );
        if( ! context[24] )
          continue;
        if( ! refalrts::repeated_evar_right( context[25], context[26], context[13], context[14], context[20], context[21] ) )
          continue;
        // closed e.Content-E#1 as range 38(7)
        context[28] = refalrts::tvar_left( context[27], context[20], context[21] );
        if( ! context[28] )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </22 HalfReuse: & WarningAt/24 AsIs: t.SrcPos#1/27 }"Recu"/29 Tile{ HalfReuse: 'r'/23 }"sive depended set "/31 Tile{ AsIs: e.Name#1/25 } >/33 Tile{ AsIs: </0 AsIs: & SetCheckRecursion/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.SetNamePos#1/11 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 AsIs: s.Used#1/17 } Tile{ AsIs: e.Content-B#1/18 } Tile{ AsIs: e.Content-E#1/38(7) } Tile{ AsIs: )/10 AsIs: e.Sets-E#1/36(2) AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[29], context[30], "Recu", 4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[31], context[32], "sive depended set ", 18 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[33] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_call( context[22] );
        refalrts::reinit_name( context[24], & WarningAt );
        refalrts::reinit_char( context[23], 'r' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::push_stack( context[33] );
        refalrts::push_stack( context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[0], context[17] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[22], context[28] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[34], context[35] ) );
  } while ( 0 );

  // e.idx
  // </0 & SetCheckRecursion/4 e.Sets#1/2 >/1
  // closed e.Sets#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetCheckRecursion/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_SetCheckRecursion(func_SetCheckRecursion, "SetCheckRecursion");
refalrts::RefalFunction& SetCheckRecursion = descr_SetCheckRecursion;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_SetSubstitute {
    static refalrts::RefalFunction *functions[] = {
      & ErrorAt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NotChanged<int>::name,
      & ident_Set<int>::name,
      & ident_Used<int>::name,
      & ident_Changed<int>::name,
      & ident_Any<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"t defined", 9}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 14, 0, 0},
      {refalrts::icIssueMemory, 54, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & SetSubstitute/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +29, 0, 0},
      // e.idx
      // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.Used#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/28 'A'/27 'n'/26 'y'/25 )/23 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
      {refalrts::icSave, 0, 44, 2},
      {refalrts::icEPrepare, 0, 5, 44},
      {refalrts::icEStart, 0, 5, 44},
      {refalrts::icSave, 0, 46, 44},
      {refalrts::icBracketLeftSave, 0, 7, 46},
      // closed e.Sets-E#1 as range 46(2)
      {refalrts::ictVarLeftSave, 0, 11, 7},
      {refalrts::icBracketLeftSave, 0, 13, 7},
      // closed e.Name#1 as range 13
      {refalrts::icsVarLeft, 0, 17, 7},
      {refalrts::icEPrepare, 0, 18, 7},
      {refalrts::icEStart, 0, 18, 7},
      {refalrts::icSave, 0, 48, 7},
      {refalrts::icBracketLeftSave, 0, 20, 48},
      {refalrts::icIdentLeftSave, 24, 1, 20},
      {refalrts::icCharRightSave, 25, static_cast<unsigned char>('y'), 20},
      {refalrts::icCharRightSave, 26, static_cast<unsigned char>('n'), 20},
      {refalrts::icCharRightSave, 27, static_cast<unsigned char>('A'), 20},
      // closed e.Content-E#1 as range 48(7)
      {refalrts::ictVarLeftSave, 0, 28, 20},
      {refalrts::icEmpty, 0, 0, 20},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/28 'A'/27 'n'/26 {REMOVED TILE} e.Content-E#1/48(7) )/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.SetNamePos#1/11 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 AsIs: s.Used#1/17 } Tile{ HalfReuse: # Any/25 AsIs: )/23 } Tile{ AsIs: e.Sets-E#1/46(2) } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 3, 4},
      {refalrts::icReinitIdent, 0, 4, 25},
      {refalrts::icLinkBrackets, 9, 23, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 46},
      {refalrts::icSpliceTile, 25, 23, 0},
      {refalrts::icSpliceTile, 4, 17, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +44, 0, 0},
      // e.idx
      // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.UsedOuter#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/25 e.IncName#1/20 )/23 e.Content-E#1/7 )/10 e.Sets-M#1/27 (/31 t.IncNamePos#1/33 (/37 e.IncName#1/39 )/38 s.UsedInner#1/41 e.IncContent#1/29 )/32 e.Sets-E#1/2 >/1
      {refalrts::icSave, 0, 44, 2},
      {refalrts::icEPrepare, 0, 5, 44},
      {refalrts::icEStart, 0, 5, 44},
      {refalrts::icSave, 0, 46, 44},
      {refalrts::icBracketLeftSave, 0, 7, 46},
      {refalrts::ictVarLeftSave, 0, 11, 7},
      {refalrts::icBracketLeftSave, 0, 13, 7},
      // closed e.Name#1 as range 13
      {refalrts::icsVarLeft, 0, 17, 7},
      {refalrts::icEPrepare, 0, 18, 7},
      {refalrts::icEStart, 0, 18, 7},
      {refalrts::icSave, 0, 48, 7},
      {refalrts::icBracketLeftSave, 0, 20, 48},
      {refalrts::icIdentLeftSave, 24, 1, 20},
      // closed e.Content-E#1 as range 48(7)
      {refalrts::ictVarLeftSave, 0, 25, 20},
      // closed e.IncName#1 as range 20
      {refalrts::icSave, 0, 50, 46},
      {refalrts::icEPrepare, 0, 27, 50},
      {refalrts::icEStart, 0, 27, 50},
      {refalrts::icSave, 0, 52, 50},
      {refalrts::icBracketLeftSave, 0, 29, 52},
      // closed e.Sets-E#1 as range 52(2)
      {refalrts::ictVarLeftSave, 0, 33, 29},
      {refalrts::icBracketLeftSave, 0, 35, 29},
      {refalrts::iceRepeatLeft, 39, 20, 35},
      {refalrts::icEmpty, 0, 0, 35},
      {refalrts::icsVarLeft, 0, 41, 29},
      // closed e.IncContent#1 as range 29
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} (/22 {REMOVED TILE} t.SrcPos#1/25 e.IncName#1/20 )/23 {REMOVED TILE} {REMOVED TILE} s.UsedInner#1/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.SetNamePos#1/11 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 AsIs: s.UsedOuter#1/17 } Tile{ AsIs: e.Content-B#1/18 } e.IncContent#1/29/42 Tile{ AsIs: e.Content-E#1/48(7) } Tile{ AsIs: )/10 AsIs: e.Sets-M#1/27 AsIs: (/31 AsIs: t.IncNamePos#1/33 AsIs: (/37 AsIs: e.IncName#1/39 AsIs: )/38 } Tile{ Reuse: # Used/24 } Tile{ AsIs: e.IncContent#1/29 } Tile{ AsIs: )/32 } Tile{ AsIs: e.Sets-E#1/52(2) } Tile{ ]] }
      {refalrts::icCopyEVar, 42, 29, 0},
      {refalrts::icReinitIdent, 0, 3, 4},
      {refalrts::icUpdateIdent, 0, 2, 24},
      {refalrts::icLinkBrackets, 31, 32, 0},
      {refalrts::icLinkBrackets, 37, 38, 0},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 52},
      {refalrts::icSpliceTile, 32, 32, 0},
      {refalrts::icSpliceEVar, 0, 0, 29},
      {refalrts::icSpliceTile, 24, 24, 0},
      {refalrts::icSpliceTile, 10, 38, 0},
      {refalrts::icSpliceEVar, 0, 0, 48},
      {refalrts::icSpliceTile, 42, 43, 0},
      {refalrts::icSpliceEVar, 0, 0, 18},
      {refalrts::icSpliceTile, 4, 17, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +43, 0, 0},
      // e.idx
      // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.IncNamePos#1/11 (/15 e.IncName#1/13 )/16 s.UsedInner#1/17 e.IncContent#1/7 )/10 e.Sets-M#1/18 (/22 t.SetNamePos#1/24 (/28 e.Name#1/26 )/29 s.UsedOuter#1/30 e.Content-B#1/31 (/35 # Set/37 t.SrcPos#1/40 e.IncName#1/38 )/36 e.Content-E#1/20 )/23 e.Sets-E#1/2 >/1
      {refalrts::icSave, 0, 44, 2},
      {refalrts::icEPrepare, 0, 5, 44},
      {refalrts::icEStart, 0, 5, 44},
      {refalrts::icSave, 0, 46, 44},
      {refalrts::icBracketLeftSave, 0, 7, 46},
      {refalrts::ictVarLeftSave, 0, 11, 7},
      {refalrts::icBracketLeftSave, 0, 13, 7},
      // closed e.IncName#1 as range 13
      {refalrts::icsVarLeft, 0, 17, 7},
      // closed e.IncContent#1 as range 7
      {refalrts::icEPrepare, 0, 18, 46},
      {refalrts::icEStart, 0, 18, 46},
      {refalrts::icSave, 0, 48, 46},
      {refalrts::icBracketLeftSave, 0, 20, 48},
      // closed e.Sets-E#1 as range 48(2)
      {refalrts::ictVarLeftSave, 0, 24, 20},
      {refalrts::icBracketLeftSave, 0, 26, 20},
      // closed e.Name#1 as range 26
      {refalrts::icsVarLeft, 0, 30, 20},
      {refalrts::icEPrepare, 0, 31, 20},
      {refalrts::icEStart, 0, 31, 20},
      {refalrts::icSave, 0, 50, 20},
      {refalrts::icBracketLeftSave, 0, 33, 50},
      {refalrts::icIdentLeftSave, 37, 1, 33},
      {refalrts::iceRepeatRight, 38, 13, 33},
      // closed e.Content-E#1 as range 50(20)
      {refalrts::ictVarLeftSave, 0, 40, 33},
      {refalrts::icEmpty, 0, 0, 33},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.UsedInner#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/35 {REMOVED TILE} t.SrcPos#1/40 e.IncName#1/38 )/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.IncNamePos#1/11 AsIs: (/15 AsIs: e.IncName#1/13 AsIs: )/16 } Tile{ Reuse: # Used/37 } Tile{ AsIs: e.IncContent#1/7 } Tile{ AsIs: )/10 AsIs: e.Sets-M#1/18 AsIs: (/22 AsIs: t.SetNamePos#1/24 AsIs: (/28 AsIs: e.Name#1/26 AsIs: )/29 AsIs: s.UsedOuter#1/30 } Tile{ AsIs: e.Content-B#1/31 } e.IncContent#1/7/42 Tile{ AsIs: e.Content-E#1/50(20) } Tile{ AsIs: )/23 } Tile{ AsIs: e.Sets-E#1/48(2) } Tile{ ]] }
      {refalrts::icCopyEVar, 42, 7, 0},
      {refalrts::icReinitIdent, 0, 3, 4},
      {refalrts::icUpdateIdent, 0, 2, 37},
      {refalrts::icLinkBrackets, 22, 23, 0},
      {refalrts::icLinkBrackets, 28, 29, 0},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 48},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceEVar, 0, 0, 50},
      {refalrts::icSpliceTile, 42, 43, 0},
      {refalrts::icSpliceEVar, 0, 0, 31},
      {refalrts::icSpliceTile, 10, 30, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 37, 37, 0},
      {refalrts::icSpliceTile, 4, 16, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +38, 0, 0},
      // e.idx
      // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.Used#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/25 e.IncName#1/20 )/23 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
      {refalrts::icSave, 0, 44, 2},
      {refalrts::icEPrepare, 0, 5, 44},
      {refalrts::icEStart, 0, 5, 44},
      {refalrts::icSave, 0, 46, 44},
      {refalrts::icBracketLeftSave, 0, 7, 46},
      // closed e.Sets-E#1 as range 46(2)
      {refalrts::ictVarLeftSave, 0, 11, 7},
      {refalrts::icBracketLeftSave, 0, 13, 7},
      // closed e.Name#1 as range 13
      {refalrts::icsVarLeft, 0, 17, 7},
      {refalrts::icEPrepare, 0, 18, 7},
      {refalrts::icEStart, 0, 18, 7},
      {refalrts::icSave, 0, 48, 7},
      {refalrts::icBracketLeftSave, 0, 20, 48},
      {refalrts::icIdentLeftSave, 24, 1, 20},
      // closed e.Content-E#1 as range 48(7)
      {refalrts::ictVarLeftSave, 0, 25, 20},
      // closed e.IncName#1 as range 20
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.Sets-B#1/5 {REMOVED TILE} t.SetNamePos#1/11 {REMOVED TILE} e.Name#1/13 {REMOVED TILE} s.Used#1/17 e.Content-B#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content-E#1/48(7) {REMOVED TILE} e.Sets-E#1/46(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/25 } Tile{ HalfReuse: 's'/16 } Tile{ HalfReuse: 'e'/23 } Tile{ HalfReuse: 't'/22 HalfReuse: ' '/24 } Tile{ AsIs: e.IncName#1/20 } Tile{ HalfReuse: ' '/10 } Tile{ HalfReuse: 'n'/15 } Tile{ HalfReuse: 'o'/9 }"t defined"/27 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 27},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 's', 16},
      {refalrts::icReinitChar, 0, 'e', 23},
      {refalrts::icReinitChar, 0, 't', 22},
      {refalrts::icReinitChar, 0, ' ', 24},
      {refalrts::icReinitChar, 0, ' ', 10},
      {refalrts::icReinitChar, 0, 'n', 15},
      {refalrts::icReinitChar, 0, 'o', 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 27, 28, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 20},
      {refalrts::icSpliceTile, 22, 24, 0},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceTile, 25, 26, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & SetSubstitute/4 e.Sets#1/2 >/1
      // closed e.Sets#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & SetSubstitute/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: # NotChanged/0 } Tile{ AsIs: e.Sets#1/2 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_SetSubstitute

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_SetSubstitute(
  "SetSubstitute",
  scope_SetSubstitute::raa,
  scope_SetSubstitute::functions,
  scope_SetSubstitute::idents,
  scope_SetSubstitute::numbers,
  scope_SetSubstitute::strings
);
refalrts::RefalFunction& SetSubstitute = descr_SetSubstitute;

} // unnamed namespace

#else
static refalrts::FnResult func_SetSubstitute(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & SetSubstitute/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.Used#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/28 'A'/27 'n'/26 'y'/25 )/23 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[46] = context[44];
      context[47] = context[45];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[46], context[47] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      // closed e.Sets-E#1 as range 46(2)
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.Name#1 as range 13
      if( ! refalrts::svar_left( context[17], context[7], context[8] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[7];
        context[49] = context[8];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[48], context[49] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left(  & ident_Set<int>::name, context[20], context[21] );
        if( ! context[24] )
          continue;
        context[25] = refalrts::char_right( 'y', context[20], context[21] );
        if( ! context[25] )
          continue;
        context[26] = refalrts::char_right( 'n', context[20], context[21] );
        if( ! context[26] )
          continue;
        context[27] = refalrts::char_right( 'A', context[20], context[21] );
        if( ! context[27] )
          continue;
        // closed e.Content-E#1 as range 48(7)
        context[29] = refalrts::tvar_left( context[28], context[20], context[21] );
        if( ! context[29] )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/28 'A'/27 'n'/26 {REMOVED TILE} e.Content-E#1/48(7) )/10 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.SetNamePos#1/11 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 AsIs: s.Used#1/17 } Tile{ HalfReuse: # Any/25 AsIs: )/23 } Tile{ AsIs: e.Sets-E#1/46(2) } Tile{ ]] }
        refalrts::reinit_ident( context[4], & ident_Changed<int>::name );
        refalrts::reinit_ident( context[25], & ident_Any<int>::name );
        refalrts::link_brackets( context[9], context[23] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[25], context[23] );
        res = refalrts::splice_evar( res, context[4], context[17] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[44], context[45] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.UsedOuter#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/25 e.IncName#1/20 )/23 e.Content-E#1/7 )/10 e.Sets-M#1/27 (/31 t.IncNamePos#1/33 (/37 e.IncName#1/39 )/38 s.UsedInner#1/41 e.IncContent#1/29 )/32 e.Sets-E#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[46] = context[44];
      context[47] = context[45];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[46], context[47] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.Name#1 as range 13
      if( ! refalrts::svar_left( context[17], context[7], context[8] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[7];
        context[49] = context[8];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[48], context[49] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left(  & ident_Set<int>::name, context[20], context[21] );
        if( ! context[24] )
          continue;
        // closed e.Content-E#1 as range 48(7)
        context[26] = refalrts::tvar_left( context[25], context[20], context[21] );
        if( ! context[26] )
          continue;
        // closed e.IncName#1 as range 20
        context[50] = context[46];
        context[51] = context[47];
        context[27] = 0;
        context[28] = 0;
        refalrts::start_e_loop();
        do {
          context[52] = context[50];
          context[53] = context[51];
          context[29] = 0;
          context[30] = 0;
          context[31] = refalrts::brackets_left( context[29], context[30], context[52], context[53] );
          if( ! context[31] )
            continue;
          refalrts::bracket_pointers(context[31], context[32]);
          // closed e.Sets-E#1 as range 52(2)
          context[34] = refalrts::tvar_left( context[33], context[29], context[30] );
          if( ! context[34] )
            continue;
          context[35] = 0;
          context[36] = 0;
          context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
          if( ! context[37] )
            continue;
          refalrts::bracket_pointers(context[37], context[38]);
          if( ! refalrts::repeated_evar_left( context[39], context[40], context[20], context[21], context[35], context[36] ) )
            continue;
          if( ! refalrts::empty_seq( context[35], context[36] ) )
            continue;
          if( ! refalrts::svar_left( context[41], context[29], context[30] ) )
            continue;
          // closed e.IncContent#1 as range 29

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} (/22 {REMOVED TILE} t.SrcPos#1/25 e.IncName#1/20 )/23 {REMOVED TILE} {REMOVED TILE} s.UsedInner#1/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.SetNamePos#1/11 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 AsIs: s.UsedOuter#1/17 } Tile{ AsIs: e.Content-B#1/18 } e.IncContent#1/29/42 Tile{ AsIs: e.Content-E#1/48(7) } Tile{ AsIs: )/10 AsIs: e.Sets-M#1/27 AsIs: (/31 AsIs: t.IncNamePos#1/33 AsIs: (/37 AsIs: e.IncName#1/39 AsIs: )/38 } Tile{ Reuse: # Used/24 } Tile{ AsIs: e.IncContent#1/29 } Tile{ AsIs: )/32 } Tile{ AsIs: e.Sets-E#1/52(2) } Tile{ ]] }
          if (! refalrts::copy_evar(context[42], context[43], context[29], context[30]))
            return refalrts::cNoMemory;
          refalrts::reinit_ident( context[4], & ident_Changed<int>::name );
          refalrts::update_ident( context[24], & ident_Used<int>::name );
          refalrts::link_brackets( context[31], context[32] );
          refalrts::link_brackets( context[37], context[38] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[52], context[53] );
          res = refalrts::splice_evar( res, context[32], context[32] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[24], context[24] );
          res = refalrts::splice_evar( res, context[10], context[38] );
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[18], context[19] );
          res = refalrts::splice_evar( res, context[4], context[17] );
          refalrts::use( res );
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[27], context[28], context[50], context[51] ) );
      } while ( refalrts::open_evar_advance( context[18], context[19], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[44], context[45] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.IncNamePos#1/11 (/15 e.IncName#1/13 )/16 s.UsedInner#1/17 e.IncContent#1/7 )/10 e.Sets-M#1/18 (/22 t.SetNamePos#1/24 (/28 e.Name#1/26 )/29 s.UsedOuter#1/30 e.Content-B#1/31 (/35 # Set/37 t.SrcPos#1/40 e.IncName#1/38 )/36 e.Content-E#1/20 )/23 e.Sets-E#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[46] = context[44];
      context[47] = context[45];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[46], context[47] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.IncName#1 as range 13
      if( ! refalrts::svar_left( context[17], context[7], context[8] ) )
        continue;
      // closed e.IncContent#1 as range 7
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[46];
        context[49] = context[47];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[48], context[49] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        // closed e.Sets-E#1 as range 48(2)
        context[25] = refalrts::tvar_left( context[24], context[20], context[21] );
        if( ! context[25] )
          continue;
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[20], context[21] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        // closed e.Name#1 as range 26
        if( ! refalrts::svar_left( context[30], context[20], context[21] ) )
          continue;
        context[31] = 0;
        context[32] = 0;
        refalrts::start_e_loop();
        do {
          context[50] = context[20];
          context[51] = context[21];
          context[33] = 0;
          context[34] = 0;
          context[35] = refalrts::brackets_left( context[33], context[34], context[50], context[51] );
          if( ! context[35] )
            continue;
          refalrts::bracket_pointers(context[35], context[36]);
          context[37] = refalrts::ident_left(  & ident_Set<int>::name, context[33], context[34] );
          if( ! context[37] )
            continue;
          if( ! refalrts::repeated_evar_right( context[38], context[39], context[13], context[14], context[33], context[34] ) )
            continue;
          // closed e.Content-E#1 as range 50(20)
          context[41] = refalrts::tvar_left( context[40], context[33], context[34] );
          if( ! context[41] )
            continue;
          if( ! refalrts::empty_seq( context[33], context[34] ) )
            continue;

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.UsedInner#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/35 {REMOVED TILE} t.SrcPos#1/40 e.IncName#1/38 )/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.IncNamePos#1/11 AsIs: (/15 AsIs: e.IncName#1/13 AsIs: )/16 } Tile{ Reuse: # Used/37 } Tile{ AsIs: e.IncContent#1/7 } Tile{ AsIs: )/10 AsIs: e.Sets-M#1/18 AsIs: (/22 AsIs: t.SetNamePos#1/24 AsIs: (/28 AsIs: e.Name#1/26 AsIs: )/29 AsIs: s.UsedOuter#1/30 } Tile{ AsIs: e.Content-B#1/31 } e.IncContent#1/7/42 Tile{ AsIs: e.Content-E#1/50(20) } Tile{ AsIs: )/23 } Tile{ AsIs: e.Sets-E#1/48(2) } Tile{ ]] }
          if (! refalrts::copy_evar(context[42], context[43], context[7], context[8]))
            return refalrts::cNoMemory;
          refalrts::reinit_ident( context[4], & ident_Changed<int>::name );
          refalrts::update_ident( context[37], & ident_Used<int>::name );
          refalrts::link_brackets( context[22], context[23] );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[23], context[23] );
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[31], context[32] );
          res = refalrts::splice_evar( res, context[10], context[30] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          res = refalrts::splice_evar( res, context[37], context[37] );
          res = refalrts::splice_evar( res, context[4], context[16] );
          refalrts::use( res );
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[31], context[32], context[20], context[21] ) );
      } while ( refalrts::open_evar_advance( context[18], context[19], context[46], context[47] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[44], context[45] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.Used#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/25 e.IncName#1/20 )/23 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[46] = context[44];
      context[47] = context[45];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[46], context[47] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      // closed e.Sets-E#1 as range 46(2)
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.Name#1 as range 13
      if( ! refalrts::svar_left( context[17], context[7], context[8] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[7];
        context[49] = context[8];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[48], context[49] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left(  & ident_Set<int>::name, context[20], context[21] );
        if( ! context[24] )
          continue;
        // closed e.Content-E#1 as range 48(7)
        context[26] = refalrts::tvar_left( context[25], context[20], context[21] );
        if( ! context[26] )
          continue;
        // closed e.IncName#1 as range 20

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} e.Sets-B#1/5 {REMOVED TILE} t.SetNamePos#1/11 {REMOVED TILE} e.Name#1/13 {REMOVED TILE} s.Used#1/17 e.Content-B#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content-E#1/48(7) {REMOVED TILE} e.Sets-E#1/46(2) {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/25 } Tile{ HalfReuse: 's'/16 } Tile{ HalfReuse: 'e'/23 } Tile{ HalfReuse: 't'/22 HalfReuse: ' '/24 } Tile{ AsIs: e.IncName#1/20 } Tile{ HalfReuse: ' '/10 } Tile{ HalfReuse: 'n'/15 } Tile{ HalfReuse: 'o'/9 }"t defined"/27 Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[27], context[28], "t defined", 9 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], & ErrorAt );
        refalrts::reinit_char( context[16], 's' );
        refalrts::reinit_char( context[23], 'e' );
        refalrts::reinit_char( context[22], 't' );
        refalrts::reinit_char( context[24], ' ' );
        refalrts::reinit_char( context[10], ' ' );
        refalrts::reinit_char( context[15], 'n' );
        refalrts::reinit_char( context[9], 'o' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[10], context[10] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[22], context[24] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[44], context[45] ) );
  } while ( 0 );

  // e.idx
  // </0 & SetSubstitute/4 e.Sets#1/2 >/1
  // closed e.Sets#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & SetSubstitute/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # NotChanged/0 } Tile{ AsIs: e.Sets#1/2 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_NotChanged<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_SetSubstitute(func_SetSubstitute, "SetSubstitute");
refalrts::RefalFunction& SetSubstitute = descr_SetSubstitute;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_SubstituteSetsToRules {
    static refalrts::RefalFunction *functions[] = {
      & ErrorAt,
      & WarningAt,
      & SubstituteSetsToRules
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Set<int>::name,
      & ident_Any<int>::name,
      & ident_Used<int>::name,
      & ident_NotUsed<int>::name,
      & ident_Chars<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"t ", 2},
      {"is not used", 11}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 14, 0, 0},
      {refalrts::icIssueMemory, 71, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ )
      //GLOBAL GEN: ( e.$ ) ( e.$ )
      // </0 & SubstituteSetsToRules/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      {refalrts::icOnFailGoTo, +48, 0, 0},
      // ( ( t.idx ( e.idx ) s.idx ( # Chars e.idx ) ) e.idx ) ( e.idx )
      // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/22 (/26 e.Name#1/24 )/27 s.Used#1/28 (/19 # Chars/21 e.Content#1/17 )/20 )/16 e.Sets#1/5 )/8 (/11 e.Rules-B#1/29 (/33 t.SentNamePos#1/35 (/39 e.RuleName#1/37 )/40 e.Alternatives-B#1/41 (/45 (/49 # Set/51 t.SrcPos#1/54 e.Name#1/52 )/50 t.Flush#1/56 t.NextState#1/58 )/46 e.Alternatives-E#1/31 )/34 e.Rules-E#1/9 )/12 >/1
      {refalrts::icSave, 0, 63, 5},
      {refalrts::icBracketLeftSave, 0, 13, 63},
      {refalrts::icBracketRightSave, 0, 17, 13},
      {refalrts::icIdentLeftSave, 21, 4, 17},
      // closed e.Content#1 as range 17
      // closed e.Sets#1 as range 63(5)
      {refalrts::ictVarLeftSave, 0, 22, 13},
      {refalrts::icBracketLeftSave, 0, 24, 13},
      // closed e.Name#1 as range 24
      {refalrts::icsVarLeft, 0, 28, 13},
      {refalrts::icEmpty, 0, 0, 13},
      {refalrts::icSave, 0, 65, 9},
      {refalrts::icEPrepare, 0, 29, 65},
      {refalrts::icEStart, 0, 29, 65},
      {refalrts::icSave, 0, 67, 65},
      {refalrts::icBracketLeftSave, 0, 31, 67},
      // closed e.Rules-E#1 as range 67(9)
      {refalrts::ictVarLeftSave, 0, 35, 31},
      {refalrts::icBracketLeftSave, 0, 37, 31},
      // closed e.RuleName#1 as range 37
      {refalrts::icEPrepare, 0, 41, 31},
      {refalrts::icEStart, 0, 41, 31},
      {refalrts::icSave, 0, 69, 31},
      {refalrts::icBracketLeftSave, 0, 43, 69},
      {refalrts::icBracketLeftSave, 0, 47, 43},
      {refalrts::icIdentLeftSave, 51, 0, 47},
      {refalrts::iceRepeatRight, 52, 24, 47},
      // closed e.Alternatives-E#1 as range 69(31)
      {refalrts::ictVarLeftSave, 0, 54, 47},
      {refalrts::icEmpty, 0, 0, 47},
      {refalrts::ictVarLeftSave, 0, 56, 43},
      {refalrts::ictVarLeftSave, 0, 58, 43},
      {refalrts::icEmpty, 0, 0, 43},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Used#1/28 {REMOVED TILE} t.SrcPos#1/54 e.Name#1/52 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/15 AsIs: t.SetNamePos#1/22 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 } # Used/60 Tile{ AsIs: (/19 AsIs: # Chars/21 AsIs: e.Content#1/17 AsIs: )/20 AsIs: )/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/29 AsIs: (/33 AsIs: t.SentNamePos#1/35 AsIs: (/39 AsIs: e.RuleName#1/37 AsIs: )/40 AsIs: e.Alternatives-B#1/41 AsIs: (/45 AsIs: (/49 Reuse: # Chars/51 } e.Content#1/17/61 Tile{ AsIs: )/50 AsIs: t.Flush#1/56 AsIs: t.NextState#1/58 AsIs: )/46 AsIs: e.Alternatives-E#1/69(31) AsIs: )/34 AsIs: e.Rules-E#1/67(9) AsIs: )/12 AsIs: >/1 ]] }
      {refalrts::icAllocIdent, 0, 2, 60},
      {refalrts::icCopyEVar, 61, 17, 0},
      {refalrts::icUpdateIdent, 0, 4, 51},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 33, 34, 0},
      {refalrts::icLinkBrackets, 45, 46, 0},
      {refalrts::icLinkBrackets, 49, 50, 0},
      {refalrts::icLinkBrackets, 39, 40, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icLinkBrackets, 26, 27, 0},
      {refalrts::icSetRes, 0, 0, 50},
      {refalrts::icSpliceTile, 61, 62, 0},
      {refalrts::icSpliceTile, 19, 51, 0},
      {refalrts::icSpliceTile, 60, 60, 0},
      {refalrts::icTrash, 0, 0, 27},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +43, 0, 0},
      // ( ( t.idx ( e.idx ) s.idx # Any ) e.idx ) ( e.idx )
      // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/18 (/22 e.Name#1/20 )/23 s.Used#1/24 # Any/17 )/16 e.Sets#1/5 )/8 (/11 e.Rules-B#1/25 (/29 t.SentNamePos#1/31 (/35 e.RuleName#1/33 )/36 e.Alternatives-B#1/37 (/41 (/45 # Set/47 t.SrcPos#1/50 e.Name#1/48 )/46 t.Flush#1/52 t.NextState#1/54 )/42 e.Alternatives-E#1/27 )/30 e.Rules-E#1/9 )/12 >/1
      {refalrts::icSave, 0, 63, 5},
      {refalrts::icBracketLeftSave, 0, 13, 63},
      {refalrts::icIdentRightSave, 17, 1, 13},
      // closed e.Sets#1 as range 63(5)
      {refalrts::ictVarLeftSave, 0, 18, 13},
      {refalrts::icBracketLeftSave, 0, 20, 13},
      // closed e.Name#1 as range 20
      {refalrts::icsVarLeft, 0, 24, 13},
      {refalrts::icEmpty, 0, 0, 13},
      {refalrts::icSave, 0, 65, 9},
      {refalrts::icEPrepare, 0, 25, 65},
      {refalrts::icEStart, 0, 25, 65},
      {refalrts::icSave, 0, 67, 65},
      {refalrts::icBracketLeftSave, 0, 27, 67},
      // closed e.Rules-E#1 as range 67(9)
      {refalrts::ictVarLeftSave, 0, 31, 27},
      {refalrts::icBracketLeftSave, 0, 33, 27},
      // closed e.RuleName#1 as range 33
      {refalrts::icEPrepare, 0, 37, 27},
      {refalrts::icEStart, 0, 37, 27},
      {refalrts::icSave, 0, 69, 27},
      {refalrts::icBracketLeftSave, 0, 39, 69},
      {refalrts::icBracketLeftSave, 0, 43, 39},
      {refalrts::icIdentLeftSave, 47, 0, 43},
      {refalrts::iceRepeatRight, 48, 20, 43},
      // closed e.Alternatives-E#1 as range 69(27)
      {refalrts::ictVarLeftSave, 0, 50, 43},
      {refalrts::icEmpty, 0, 0, 43},
      {refalrts::ictVarLeftSave, 0, 52, 39},
      {refalrts::ictVarLeftSave, 0, 54, 39},
      {refalrts::icEmpty, 0, 0, 39},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Used#1/24 {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/50 e.Name#1/48 )/46 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/15 AsIs: t.SetNamePos#1/18 AsIs: (/22 AsIs: e.Name#1/20 AsIs: )/23 } Tile{ Reuse: # Used/47 } Tile{ AsIs: # Any/17 AsIs: )/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/25 AsIs: (/29 AsIs: t.SentNamePos#1/31 AsIs: (/35 AsIs: e.RuleName#1/33 AsIs: )/36 AsIs: e.Alternatives-B#1/37 AsIs: (/41 HalfReuse: # Any/45 } Tile{ AsIs: t.Flush#1/52 AsIs: t.NextState#1/54 AsIs: )/42 AsIs: e.Alternatives-E#1/69(27) AsIs: )/30 AsIs: e.Rules-E#1/67(9) AsIs: )/12 AsIs: >/1 ]] }
      {refalrts::icUpdateIdent, 0, 2, 47},
      {refalrts::icReinitIdent, 0, 1, 45},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 29, 30, 0},
      {refalrts::icLinkBrackets, 41, 42, 0},
      {refalrts::icLinkBrackets, 35, 36, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 22, 23, 0},
      {refalrts::icSetRes, 0, 0, 52},
      {refalrts::icSpliceTile, 17, 45, 0},
      {refalrts::icSpliceTile, 47, 47, 0},
      {refalrts::icTrash, 0, 0, 23},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +34, 0, 0},
      // ( ( t.idx ( e.idx ) # NotUsed e.idx ) e.idx ) ( e.idx )
      // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/17 (/21 e.Name#1/19 )/22 # NotUsed/23 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
      {refalrts::icSave, 0, 63, 5},
      {refalrts::icBracketLeftSave, 0, 13, 63},
      // closed e.Sets#1 as range 63(5)
      // closed e.Rules#1 as range 9
      {refalrts::ictVarLeftSave, 0, 17, 13},
      {refalrts::icBracketLeftSave, 0, 19, 13},
      {refalrts::icIdentLeftSave, 23, 3, 13},
      // closed e.Name#1 as range 19
      // closed e.Content#1 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content#1/13 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 } Tile{ AsIs: t.SetNamePos#1/17 } 'S'/24 Tile{ HalfReuse: 'e'/7 HalfReuse: 't'/15 } ' '/25 Tile{ HalfReuse: ':'/21 AsIs: e.Name#1/19 HalfReuse: ':'/22 HalfReuse: ' '/23 }"is not used"/26 >/28 </29 & SubstituteSetsToRules/30 Tile{ HalfReuse: (/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, 'S', 24},
      {refalrts::icAllocChar, 0, ' ', 25},
      {refalrts::icAllocString, 0, 1, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 28},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
      {refalrts::icAllocFunc, 0, 2, 30},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'e', 7},
      {refalrts::icReinitChar, 0, 't', 15},
      {refalrts::icReinitChar, 0, ':', 21},
      {refalrts::icReinitChar, 0, ':', 22},
      {refalrts::icReinitChar, 0, ' ', 23},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 29},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 16, 8, 0},
      {refalrts::icPushStack, 0, 0, 28},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 16},
      {refalrts::icSpliceTile, 26, 30, 0},
      {refalrts::icSpliceTile, 21, 23, 0},
      {refalrts::icSpliceTile, 25, 25, 0},
      {refalrts::icSpliceTile, 7, 15, 0},
      {refalrts::icSpliceTile, 24, 24, 0},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // ( ( t.idx ( e.idx ) # Used e.idx ) e.idx ) ( e.idx )
      // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/17 (/21 e.Name#1/19 )/22 # Used/23 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
      {refalrts::icSave, 0, 63, 5},
      {refalrts::icBracketLeftSave, 0, 13, 63},
      // closed e.Sets#1 as range 63(5)
      // closed e.Rules#1 as range 9
      {refalrts::ictVarLeftSave, 0, 17, 13},
      {refalrts::icBracketLeftSave, 0, 19, 13},
      {refalrts::icIdentLeftSave, 23, 2, 13},
      // closed e.Name#1 as range 19
      // closed e.Content#1 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 (/15 t.SetNamePos#1/17 (/21 e.Name#1/19 )/22 # Used/23 e.Content#1/13 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 16, 8, 0},
      {refalrts::icSetRes, 0, 0, 16},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +35, 0, 0},
      // ( ) ( e.idx )
      // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/13 (/17 t.SentNamePos#1/19 (/23 e.RuleName#1/21 )/24 e.Alternatives-B#1/25 (/29 (/33 # Set/35 t.SrcPos#1/39 'A'/38 'n'/37 'y'/36 )/34 t.Flush#1/41 t.NextState#1/43 )/30 e.Alternatives-E#1/15 )/18 e.Rules-E#1/9 )/12 >/1
      {refalrts::icSave, 0, 63, 5},
      {refalrts::icEmpty, 0, 0, 63},
      {refalrts::icSave, 0, 65, 9},
      {refalrts::icEPrepare, 0, 13, 65},
      {refalrts::icEStart, 0, 13, 65},
      {refalrts::icSave, 0, 67, 65},
      {refalrts::icBracketLeftSave, 0, 15, 67},
      // closed e.Rules-E#1 as range 67(9)
      {refalrts::ictVarLeftSave, 0, 19, 15},
      {refalrts::icBracketLeftSave, 0, 21, 15},
      // closed e.RuleName#1 as range 21
      {refalrts::icEPrepare, 0, 25, 15},
      {refalrts::icEStart, 0, 25, 15},
      {refalrts::icSave, 0, 69, 15},
      {refalrts::icBracketLeftSave, 0, 27, 69},
      {refalrts::icBracketLeftSave, 0, 31, 27},
      {refalrts::icIdentLeftSave, 35, 0, 31},
      {refalrts::icCharRightSave, 36, static_cast<unsigned char>('y'), 31},
      {refalrts::icCharRightSave, 37, static_cast<unsigned char>('n'), 31},
      {refalrts::icCharRightSave, 38, static_cast<unsigned char>('A'), 31},
      // closed e.Alternatives-E#1 as range 69(15)
      {refalrts::ictVarLeftSave, 0, 39, 31},
      {refalrts::icEmpty, 0, 0, 31},
      {refalrts::ictVarLeftSave, 0, 41, 27},
      {refalrts::ictVarLeftSave, 0, 43, 27},
      {refalrts::icEmpty, 0, 0, 27},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} # Set/35 t.SrcPos#1/39 'A'/38 'n'/37 'y'/36 )/34 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/13 AsIs: (/17 AsIs: t.SentNamePos#1/19 AsIs: (/23 AsIs: e.RuleName#1/21 AsIs: )/24 AsIs: e.Alternatives-B#1/25 AsIs: (/29 HalfReuse: # Any/33 } Tile{ AsIs: t.Flush#1/41 AsIs: t.NextState#1/43 AsIs: )/30 AsIs: e.Alternatives-E#1/69(15) AsIs: )/18 AsIs: e.Rules-E#1/67(9) AsIs: )/12 AsIs: >/1 ]] }
      {refalrts::icReinitIdent, 0, 1, 33},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 29, 30, 0},
      {refalrts::icLinkBrackets, 23, 24, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 41},
      {refalrts::icTrash, 0, 0, 33},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +52, 0, 0},
      // ( ) ( e.idx )
      // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/13 (/17 t.SentNamePos#1/19 (/23 e.RuleName#1/21 )/24 e.Alternatives-B#1/25 (/29 (/33 # Set/35 t.SrcPos#1/36 e.Name#1/31 )/34 t.Flush#1/38 t.NextState#1/40 )/30 e.Alternatives-E#1/15 )/18 e.Rules-E#1/9 )/12 >/1
      {refalrts::icSave, 0, 63, 5},
      {refalrts::icEmpty, 0, 0, 63},
      {refalrts::icSave, 0, 65, 9},
      {refalrts::icEPrepare, 0, 13, 65},
      {refalrts::icEStart, 0, 13, 65},
      {refalrts::icSave, 0, 67, 65},
      {refalrts::icBracketLeftSave, 0, 15, 67},
      // closed e.Rules-E#1 as range 67(9)
      {refalrts::ictVarLeftSave, 0, 19, 15},
      {refalrts::icBracketLeftSave, 0, 21, 15},
      // closed e.RuleName#1 as range 21
      {refalrts::icEPrepare, 0, 25, 15},
      {refalrts::icEStart, 0, 25, 15},
      {refalrts::icSave, 0, 69, 15},
      {refalrts::icBracketLeftSave, 0, 27, 69},
      {refalrts::icBracketLeftSave, 0, 31, 27},
      {refalrts::icIdentLeftSave, 35, 0, 31},
      // closed e.Alternatives-E#1 as range 69(15)
      {refalrts::ictVarLeftSave, 0, 36, 31},
      // closed e.Name#1 as range 31
      {refalrts::ictVarLeftSave, 0, 38, 27},
      {refalrts::ictVarLeftSave, 0, 40, 27},
      {refalrts::icEmpty, 0, 0, 27},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Rules-B#1/13 {REMOVED TILE} t.SentNamePos#1/19 {REMOVED TILE} e.RuleName#1/21 {REMOVED TILE} e.Alternatives-B#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush#1/38 t.NextState#1/40 {REMOVED TILE} e.Alternatives-E#1/69(15) {REMOVED TILE} e.Rules-E#1/67(9) {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/36 } Tile{ HalfReuse: 'U'/34 } Tile{ HalfReuse: 'n'/29 HalfReuse: 'd'/33 HalfReuse: 'e'/35 } Tile{ HalfReuse: 'c'/7 HalfReuse: 'l'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'r'/12 } Tile{ HalfReuse: 'e'/18 } Tile{ HalfReuse: 'd'/30 } Tile{ HalfReuse: ' '/24 } Tile{ HalfReuse: 's'/23 } Tile{ HalfReuse: 'e'/17 }"t "/42 Tile{ AsIs: e.Name#1/31 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 42},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'U', 34},
      {refalrts::icReinitChar, 0, 'n', 29},
      {refalrts::icReinitChar, 0, 'd', 33},
      {refalrts::icReinitChar, 0, 'e', 35},
      {refalrts::icReinitChar, 0, 'c', 7},
      {refalrts::icReinitChar, 0, 'l', 8},
      {refalrts::icReinitChar, 0, 'a', 11},
      {refalrts::icReinitChar, 0, 'r', 12},
      {refalrts::icReinitChar, 0, 'e', 18},
      {refalrts::icReinitChar, 0, 'd', 30},
      {refalrts::icReinitChar, 0, ' ', 24},
      {refalrts::icReinitChar, 0, 's', 23},
      {refalrts::icReinitChar, 0, 'e', 17},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 31},
      {refalrts::icSpliceTile, 42, 43, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceTile, 24, 24, 0},
      {refalrts::icSpliceTile, 30, 30, 0},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 7, 11, 0},
      {refalrts::icSpliceTile, 29, 35, 0},
      {refalrts::icSpliceTile, 34, 34, 0},
      {refalrts::icSpliceTile, 36, 37, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( ) ( e.idx )
      // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules#1/9 )/12 >/1
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.Rules#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Rules#1/9 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_SubstituteSetsToRules

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_SubstituteSetsToRules(
  "SubstituteSetsToRules",
  scope_SubstituteSetsToRules::raa,
  scope_SubstituteSetsToRules::functions,
  scope_SubstituteSetsToRules::idents,
  scope_SubstituteSetsToRules::numbers,
  scope_SubstituteSetsToRules::strings
);
refalrts::RefalFunction& SubstituteSetsToRules = descr_SubstituteSetsToRules;

} // unnamed namespace

#else
static refalrts::FnResult func_SubstituteSetsToRules(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 71 elems
  refalrts::Iter context[71];
  refalrts::zeros( context, 71 );
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ )
  // </0 & SubstituteSetsToRules/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
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
  // closed e.idxTB#0 as range 9
  do {
    refalrts::start_sentence();
    // ( ( t.idx ( e.idx ) s.idx ( # Chars e.idx ) ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/22 (/26 e.Name#1/24 )/27 s.Used#1/28 (/19 # Chars/21 e.Content#1/17 )/20 )/16 e.Sets#1/5 )/8 (/11 e.Rules-B#1/29 (/33 t.SentNamePos#1/35 (/39 e.RuleName#1/37 )/40 e.Alternatives-B#1/41 (/45 (/49 # Set/51 t.SrcPos#1/54 e.Name#1/52 )/50 t.Flush#1/56 t.NextState#1/58 )/46 e.Alternatives-E#1/31 )/34 e.Rules-E#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[63], context[64] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_Chars<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.Content#1 as range 17
    // closed e.Sets#1 as range 63(5)
    context[23] = refalrts::tvar_left( context[22], context[13], context[14] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[13], context[14] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.Name#1 as range 24
    if( ! refalrts::svar_left( context[28], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    context[65] = context[9];
    context[66] = context[10];
    context[29] = 0;
    context[30] = 0;
    refalrts::start_e_loop();
    do {
      context[67] = context[65];
      context[68] = context[66];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[67], context[68] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      // closed e.Rules-E#1 as range 67(9)
      context[36] = refalrts::tvar_left( context[35], context[31], context[32] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[31], context[32] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      // closed e.RuleName#1 as range 37
      context[41] = 0;
      context[42] = 0;
      refalrts::start_e_loop();
      do {
        context[69] = context[31];
        context[70] = context[32];
        context[43] = 0;
        context[44] = 0;
        context[45] = refalrts::brackets_left( context[43], context[44], context[69], context[70] );
        if( ! context[45] )
          continue;
        refalrts::bracket_pointers(context[45], context[46]);
        context[47] = 0;
        context[48] = 0;
        context[49] = refalrts::brackets_left( context[47], context[48], context[43], context[44] );
        if( ! context[49] )
          continue;
        refalrts::bracket_pointers(context[49], context[50]);
        context[51] = refalrts::ident_left(  & ident_Set<int>::name, context[47], context[48] );
        if( ! context[51] )
          continue;
        if( ! refalrts::repeated_evar_right( context[52], context[53], context[24], context[25], context[47], context[48] ) )
          continue;
        // closed e.Alternatives-E#1 as range 69(31)
        context[55] = refalrts::tvar_left( context[54], context[47], context[48] );
        if( ! context[55] )
          continue;
        if( ! refalrts::empty_seq( context[47], context[48] ) )
          continue;
        context[57] = refalrts::tvar_left( context[56], context[43], context[44] );
        if( ! context[57] )
          continue;
        context[59] = refalrts::tvar_left( context[58], context[43], context[44] );
        if( ! context[59] )
          continue;
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Used#1/28 {REMOVED TILE} t.SrcPos#1/54 e.Name#1/52 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/15 AsIs: t.SetNamePos#1/22 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 } # Used/60 Tile{ AsIs: (/19 AsIs: # Chars/21 AsIs: e.Content#1/17 AsIs: )/20 AsIs: )/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/29 AsIs: (/33 AsIs: t.SentNamePos#1/35 AsIs: (/39 AsIs: e.RuleName#1/37 AsIs: )/40 AsIs: e.Alternatives-B#1/41 AsIs: (/45 AsIs: (/49 Reuse: # Chars/51 } e.Content#1/17/61 Tile{ AsIs: )/50 AsIs: t.Flush#1/56 AsIs: t.NextState#1/58 AsIs: )/46 AsIs: e.Alternatives-E#1/69(31) AsIs: )/34 AsIs: e.Rules-E#1/67(9) AsIs: )/12 AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( context[60], & ident_Used<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(context[61], context[62], context[17], context[18]))
          return refalrts::cNoMemory;
        refalrts::update_ident( context[51], & ident_Chars<int>::name );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::link_brackets( context[45], context[46] );
        refalrts::link_brackets( context[49], context[50] );
        refalrts::link_brackets( context[39], context[40] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[50];
        res = refalrts::splice_evar( res, context[61], context[62] );
        res = refalrts::splice_evar( res, context[19], context[51] );
        res = refalrts::splice_evar( res, context[60], context[60] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[27], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[41], context[42], context[31], context[32] ) );
    } while ( refalrts::open_evar_advance( context[29], context[30], context[65], context[66] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ( t.idx ( e.idx ) s.idx # Any ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/18 (/22 e.Name#1/20 )/23 s.Used#1/24 # Any/17 )/16 e.Sets#1/5 )/8 (/11 e.Rules-B#1/25 (/29 t.SentNamePos#1/31 (/35 e.RuleName#1/33 )/36 e.Alternatives-B#1/37 (/41 (/45 # Set/47 t.SrcPos#1/50 e.Name#1/48 )/46 t.Flush#1/52 t.NextState#1/54 )/42 e.Alternatives-E#1/27 )/30 e.Rules-E#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[63], context[64] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_right(  & ident_Any<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Sets#1 as range 63(5)
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[13], context[14] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Name#1 as range 20
    if( ! refalrts::svar_left( context[24], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    context[65] = context[9];
    context[66] = context[10];
    context[25] = 0;
    context[26] = 0;
    refalrts::start_e_loop();
    do {
      context[67] = context[65];
      context[68] = context[66];
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[67], context[68] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      // closed e.Rules-E#1 as range 67(9)
      context[32] = refalrts::tvar_left( context[31], context[27], context[28] );
      if( ! context[32] )
        continue;
      context[33] = 0;
      context[34] = 0;
      context[35] = refalrts::brackets_left( context[33], context[34], context[27], context[28] );
      if( ! context[35] )
        continue;
      refalrts::bracket_pointers(context[35], context[36]);
      // closed e.RuleName#1 as range 33
      context[37] = 0;
      context[38] = 0;
      refalrts::start_e_loop();
      do {
        context[69] = context[27];
        context[70] = context[28];
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[69], context[70] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = 0;
        context[44] = 0;
        context[45] = refalrts::brackets_left( context[43], context[44], context[39], context[40] );
        if( ! context[45] )
          continue;
        refalrts::bracket_pointers(context[45], context[46]);
        context[47] = refalrts::ident_left(  & ident_Set<int>::name, context[43], context[44] );
        if( ! context[47] )
          continue;
        if( ! refalrts::repeated_evar_right( context[48], context[49], context[20], context[21], context[43], context[44] ) )
          continue;
        // closed e.Alternatives-E#1 as range 69(27)
        context[51] = refalrts::tvar_left( context[50], context[43], context[44] );
        if( ! context[51] )
          continue;
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;
        context[53] = refalrts::tvar_left( context[52], context[39], context[40] );
        if( ! context[53] )
          continue;
        context[55] = refalrts::tvar_left( context[54], context[39], context[40] );
        if( ! context[55] )
          continue;
        if( ! refalrts::empty_seq( context[39], context[40] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Used#1/24 {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/50 e.Name#1/48 )/46 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/15 AsIs: t.SetNamePos#1/18 AsIs: (/22 AsIs: e.Name#1/20 AsIs: )/23 } Tile{ Reuse: # Used/47 } Tile{ AsIs: # Any/17 AsIs: )/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/25 AsIs: (/29 AsIs: t.SentNamePos#1/31 AsIs: (/35 AsIs: e.RuleName#1/33 AsIs: )/36 AsIs: e.Alternatives-B#1/37 AsIs: (/41 HalfReuse: # Any/45 } Tile{ AsIs: t.Flush#1/52 AsIs: t.NextState#1/54 AsIs: )/42 AsIs: e.Alternatives-E#1/69(27) AsIs: )/30 AsIs: e.Rules-E#1/67(9) AsIs: )/12 AsIs: >/1 ]] }
        refalrts::update_ident( context[47], & ident_Used<int>::name );
        refalrts::reinit_ident( context[45], & ident_Any<int>::name );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[41], context[42] );
        refalrts::link_brackets( context[35], context[36] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[52];
        res = refalrts::splice_evar( res, context[17], context[45] );
        res = refalrts::splice_evar( res, context[47], context[47] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[23], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[37], context[38], context[27], context[28] ) );
    } while ( refalrts::open_evar_advance( context[25], context[26], context[65], context[66] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ( t.idx ( e.idx ) # NotUsed e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/17 (/21 e.Name#1/19 )/22 # NotUsed/23 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[63], context[64] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Sets#1 as range 63(5)
    // closed e.Rules#1 as range 9
    context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[13], context[14] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_NotUsed<int>::name, context[13], context[14] );
    if( ! context[23] )
      continue;
    // closed e.Name#1 as range 19
    // closed e.Content#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 } Tile{ AsIs: t.SetNamePos#1/17 } 'S'/24 Tile{ HalfReuse: 'e'/7 HalfReuse: 't'/15 } ' '/25 Tile{ HalfReuse: ':'/21 AsIs: e.Name#1/19 HalfReuse: ':'/22 HalfReuse: ' '/23 }"is not used"/26 >/28 </29 & SubstituteSetsToRules/30 Tile{ HalfReuse: (/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[24], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], "is not used", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], & SubstituteSetsToRules ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & WarningAt );
    refalrts::reinit_char( context[7], 'e' );
    refalrts::reinit_char( context[15], 't' );
    refalrts::reinit_char( context[21], ':' );
    refalrts::reinit_char( context[22], ':' );
    refalrts::reinit_char( context[23], ' ' );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[26], context[30] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ( t.idx ( e.idx ) # Used e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/17 (/21 e.Name#1/19 )/22 # Used/23 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[63], context[64] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Sets#1 as range 63(5)
    // closed e.Rules#1 as range 9
    context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[13], context[14] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_Used<int>::name, context[13], context[14] );
    if( ! context[23] )
      continue;
    // closed e.Name#1 as range 19
    // closed e.Content#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 (/15 t.SetNamePos#1/17 (/21 e.Name#1/19 )/22 # Used/23 e.Content#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/13 (/17 t.SentNamePos#1/19 (/23 e.RuleName#1/21 )/24 e.Alternatives-B#1/25 (/29 (/33 # Set/35 t.SrcPos#1/39 'A'/38 'n'/37 'y'/36 )/34 t.Flush#1/41 t.NextState#1/43 )/30 e.Alternatives-E#1/15 )/18 e.Rules-E#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    if( ! refalrts::empty_seq( context[63], context[64] ) )
      continue;
    context[65] = context[9];
    context[66] = context[10];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[67] = context[65];
      context[68] = context[66];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[67], context[68] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Rules-E#1 as range 67(9)
      context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[15], context[16] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.RuleName#1 as range 21
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop();
      do {
        context[69] = context[15];
        context[70] = context[16];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[69], context[70] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[27], context[28] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        context[35] = refalrts::ident_left(  & ident_Set<int>::name, context[31], context[32] );
        if( ! context[35] )
          continue;
        context[36] = refalrts::char_right( 'y', context[31], context[32] );
        if( ! context[36] )
          continue;
        context[37] = refalrts::char_right( 'n', context[31], context[32] );
        if( ! context[37] )
          continue;
        context[38] = refalrts::char_right( 'A', context[31], context[32] );
        if( ! context[38] )
          continue;
        // closed e.Alternatives-E#1 as range 69(15)
        context[40] = refalrts::tvar_left( context[39], context[31], context[32] );
        if( ! context[40] )
          continue;
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;
        context[42] = refalrts::tvar_left( context[41], context[27], context[28] );
        if( ! context[42] )
          continue;
        context[44] = refalrts::tvar_left( context[43], context[27], context[28] );
        if( ! context[44] )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} # Set/35 t.SrcPos#1/39 'A'/38 'n'/37 'y'/36 )/34 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/13 AsIs: (/17 AsIs: t.SentNamePos#1/19 AsIs: (/23 AsIs: e.RuleName#1/21 AsIs: )/24 AsIs: e.Alternatives-B#1/25 AsIs: (/29 HalfReuse: # Any/33 } Tile{ AsIs: t.Flush#1/41 AsIs: t.NextState#1/43 AsIs: )/30 AsIs: e.Alternatives-E#1/69(15) AsIs: )/18 AsIs: e.Rules-E#1/67(9) AsIs: )/12 AsIs: >/1 ]] }
        refalrts::reinit_ident( context[33], & ident_Any<int>::name );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[41];
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[33], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[25], context[26], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[65], context[66] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/13 (/17 t.SentNamePos#1/19 (/23 e.RuleName#1/21 )/24 e.Alternatives-B#1/25 (/29 (/33 # Set/35 t.SrcPos#1/36 e.Name#1/31 )/34 t.Flush#1/38 t.NextState#1/40 )/30 e.Alternatives-E#1/15 )/18 e.Rules-E#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    if( ! refalrts::empty_seq( context[63], context[64] ) )
      continue;
    context[65] = context[9];
    context[66] = context[10];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[67] = context[65];
      context[68] = context[66];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[67], context[68] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Rules-E#1 as range 67(9)
      context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[15], context[16] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.RuleName#1 as range 21
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop();
      do {
        context[69] = context[15];
        context[70] = context[16];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[69], context[70] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[27], context[28] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        context[35] = refalrts::ident_left(  & ident_Set<int>::name, context[31], context[32] );
        if( ! context[35] )
          continue;
        // closed e.Alternatives-E#1 as range 69(15)
        context[37] = refalrts::tvar_left( context[36], context[31], context[32] );
        if( ! context[37] )
          continue;
        // closed e.Name#1 as range 31
        context[39] = refalrts::tvar_left( context[38], context[27], context[28] );
        if( ! context[39] )
          continue;
        context[41] = refalrts::tvar_left( context[40], context[27], context[28] );
        if( ! context[41] )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} e.Rules-B#1/13 {REMOVED TILE} t.SentNamePos#1/19 {REMOVED TILE} e.RuleName#1/21 {REMOVED TILE} e.Alternatives-B#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush#1/38 t.NextState#1/40 {REMOVED TILE} e.Alternatives-E#1/69(15) {REMOVED TILE} e.Rules-E#1/67(9) {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/36 } Tile{ HalfReuse: 'U'/34 } Tile{ HalfReuse: 'n'/29 HalfReuse: 'd'/33 HalfReuse: 'e'/35 } Tile{ HalfReuse: 'c'/7 HalfReuse: 'l'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'r'/12 } Tile{ HalfReuse: 'e'/18 } Tile{ HalfReuse: 'd'/30 } Tile{ HalfReuse: ' '/24 } Tile{ HalfReuse: 's'/23 } Tile{ HalfReuse: 'e'/17 }"t "/42 Tile{ AsIs: e.Name#1/31 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[42], context[43], "t ", 2 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], & ErrorAt );
        refalrts::reinit_char( context[34], 'U' );
        refalrts::reinit_char( context[29], 'n' );
        refalrts::reinit_char( context[33], 'd' );
        refalrts::reinit_char( context[35], 'e' );
        refalrts::reinit_char( context[7], 'c' );
        refalrts::reinit_char( context[8], 'l' );
        refalrts::reinit_char( context[11], 'a' );
        refalrts::reinit_char( context[12], 'r' );
        refalrts::reinit_char( context[18], 'e' );
        refalrts::reinit_char( context[30], 'd' );
        refalrts::reinit_char( context[24], ' ' );
        refalrts::reinit_char( context[23], 's' );
        refalrts::reinit_char( context[17], 'e' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[17], context[17] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        res = refalrts::splice_evar( res, context[29], context[35] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[25], context[26], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[65], context[66] ) );
  } while ( 0 );

  // ( ) ( e.idx )
  // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Rules#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Rules#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_SubstituteSetsToRules(func_SubstituteSetsToRules, "SubstituteSetsToRules");
refalrts::RefalFunction& SubstituteSetsToRules = descr_SubstituteSetsToRules;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_SetDiff {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Any<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 27, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ )
      //GLOBAL GEN: ( e.$ ) ( e.$ )
      // </0 & SetDiff/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( e.idx ) ( # Any )
      // </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1
      {refalrts::icSave, 0, 19, 9},
      {refalrts::icIdentLeftSave, 13, 0, 19},
      {refalrts::icEmpty, 0, 0, 19},
      // closed e.Set#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( e.idx ) ( e.idx )
      // </0 & SetDiff/4 (/7 e.Set1-B#1/13 s.Common#1/15 e.Set1-E#1/5 )/8 (/11 e.Set2-B#1/16 s.Common#1/18 e.Set2-E#1/9 )/12 >/1
      {refalrts::icSave, 0, 19, 5},
      {refalrts::icEPrepare, 0, 13, 19},
      {refalrts::icEStart, 0, 13, 19},
      {refalrts::icSave, 0, 21, 19},
      {refalrts::icsVarLeft, 0, 15, 21},
      // closed e.Set1-E#1 as range 21(5)
      {refalrts::icSave, 0, 23, 9},
      {refalrts::icEPrepare, 0, 16, 23},
      {refalrts::icEStart, 0, 16, 23},
      {refalrts::icSave, 0, 25, 23},
      {refalrts::icsRepeatLeft, 18, 15, 25},
      // closed e.Set2-E#1 as range 25(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Common#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Common#1/18 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetDiff/4 AsIs: (/7 } Tile{ AsIs: e.Set1-B#1/13 } Tile{ AsIs: e.Set1-E#1/21(5) } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Set2-B#1/16 } Tile{ AsIs: e.Set2-E#1/25(9) } Tile{ AsIs: )/12 AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceEVar, 0, 0, 25},
      {refalrts::icSpliceEVar, 0, 0, 16},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 21},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( e.idx )
      // </0 & SetDiff/4 (/7 e.SetDiff#1/5 )/8 (/11 e.Set2#1/9 )/12 >/1
      // closed e.SetDiff#1 as range 5
      // closed e.Set2#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 {REMOVED TILE} )/8 (/11 e.Set2#1/9 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.SetDiff#1/5 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_SetDiff

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_SetDiff(
  "SetDiff",
  scope_SetDiff::raa,
  scope_SetDiff::functions,
  scope_SetDiff::idents,
  scope_SetDiff::numbers,
  scope_SetDiff::strings
);
refalrts::RefalFunction& SetDiff = descr_SetDiff;

} // unnamed namespace

#else
static refalrts::FnResult func_SetDiff(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ )
  // </0 & SetDiff/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
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
  // closed e.idxTB#0 as range 9
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Any )
    // </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[13] = refalrts::ident_left(  & ident_Any<int>::name, context[19], context[20] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.Set#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1 {REMOVED TILE}
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
    // ( e.idx ) ( e.idx )
    // </0 & SetDiff/4 (/7 e.Set1-B#1/13 s.Common#1/15 e.Set1-E#1/5 )/8 (/11 e.Set2-B#1/16 s.Common#1/18 e.Set2-E#1/9 )/12 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::svar_left( context[15], context[21], context[22] ) )
        continue;
      // closed e.Set1-E#1 as range 21(5)
      context[23] = context[9];
      context[24] = context[10];
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop();
      do {
        context[25] = context[23];
        context[26] = context[24];
        if( ! refalrts::repeated_stvar_left( context[18], context[15], context[25], context[26] ) )
          continue;
        // closed e.Set2-E#1 as range 25(9)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Common#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Common#1/18 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetDiff/4 AsIs: (/7 } Tile{ AsIs: e.Set1-B#1/13 } Tile{ AsIs: e.Set1-E#1/21(5) } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Set2-B#1/16 } Tile{ AsIs: e.Set2-E#1/25(9) } Tile{ AsIs: )/12 AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[8], context[11] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[16], context[17], context[23], context[24] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[19], context[20] ) );
  } while ( 0 );

  // ( e.idx ) ( e.idx )
  // </0 & SetDiff/4 (/7 e.SetDiff#1/5 )/8 (/11 e.Set2#1/9 )/12 >/1
  // closed e.SetDiff#1 as range 5
  // closed e.Set2#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 {REMOVED TILE} )/8 (/11 e.Set2#1/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.SetDiff#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_SetDiff(func_SetDiff, "SetDiff");
refalrts::RefalFunction& SetDiff = descr_SetDiff;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_NormalizeAlternative {
    static refalrts::RefalFunction *functions[] = {
      & UniqueSet,
      & SetDiff
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Any<int>::name,
      & ident_EOF_Catched<int>::name,
      & ident_Empty<int>::name,
      & ident_Finitive<int>::name,
      & ident_Chars<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 33, 0, 0},
      //FAST GEN: ( s.$ e.$ ) ( t.$ t.$ t.$ )
      //GLOBAL GEN: ( s.$ e.$ ) ( t.$ t.$ t.$ )
      // </0 & NormalizeAlternative/4 (/7 s.idxB#0/13 e.idxBV#0/5 )/8 (/11 t.idxTB#0/14 t.idxTBV#0/16 t.idxTBVV#0/18 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 13, 5},
      // closed e.idxBV#0 as range 5
      {refalrts::ictVarLeftSave, 0, 14, 9},
      {refalrts::ictVarLeftSave, 0, 16, 9},
      {refalrts::ictVarLeftSave, 0, 18, 9},
      {refalrts::icEmpty, 0, 0, 9},
      {refalrts::icOnFailGoTo, +32, 0, 0},
      // ( s.idx e.idx ) ( ( # Chars e.idx ) t.idx t.idx )
      // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 (/14 # Chars/22 e.Alternative#1/20 )/15 t.Flush#1/16 t.Next#1/18 )/12 >/1
      {refalrts::icBracketTerm, 0, 20, 14},
      {refalrts::icIdentLeftSave, 22, 4, 20},
      // closed e.CatchedChars#1 as range 5
      // closed e.Alternative#1 as range 20
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.CatchedEOF#1/13 } Tile{ AsIs: </0 Reuse: & UniqueSet/4 } Tile{ AsIs: e.CatchedChars#1/5 } Tile{ AsIs: e.Alternative#1/20 } Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: (/14 HalfReuse: </22 } & SetDiff/23 (/24 e.Alternative#1/20/25 )/27 (/28 e.CatchedChars#1/5/29 )/31 >/32 Tile{ AsIs: )/15 AsIs: t.Flush#1/16 AsIs: t.Next#1/18 AsIs: )/12 } Tile{ ]] }
      {refalrts::icAllocFunc, 0, 1, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
      {refalrts::icCopyEVar, 25, 20, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 28},
      {refalrts::icCopyEVar, 29, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 31},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 22},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 14, 15, 0},
      {refalrts::icPushStack, 0, 0, 32},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icLinkBrackets, 28, 31, 0},
      {refalrts::icLinkBrackets, 24, 27, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 15, 12, 0},
      {refalrts::icSpliceTile, 23, 32, 0},
      {refalrts::icSpliceTile, 8, 22, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 20},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 7, 13, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( s.idx e.idx ) ( # Any t.idx t.idx )
      // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Any/14 t.Flush#1/16 t.Next#1/18 )/12 >/1
      {refalrts::icIdentTerm, 0, 0, 14},
      // closed e.CatchedChars#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & NormalizeAlternative/4 {REMOVED TILE} e.CatchedChars#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.CatchedEOF#1/13 } Tile{ HalfReuse: # Any/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Any/14 AsIs: t.Flush#1/16 AsIs: t.Next#1/18 AsIs: )/12 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 1},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 12, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 7, 13, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( s.idx e.idx ) ( # Empty t.idx # Finitive )
      // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Empty/14 t.Flush#1/16 # Finitive/18 )/12 >/1
      {refalrts::icIdentTerm, 0, 2, 14},
      {refalrts::icIdentTerm, 0, 3, 18},
      // closed e.CatchedChars#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 s.CatchedEOF#1/13 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # EOF-Catched/4 } Tile{ AsIs: e.CatchedChars#1/5 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Empty/14 AsIs: t.Flush#1/16 AsIs: # Finitive/18 AsIs: )/12 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 1, 4},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( s.idx e.idx ) ( # Empty t.idx t.idx )
      // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Empty/14 t.Flush#1/16 t.NextRule#1/18 )/12 >/1
      {refalrts::icIdentTerm, 0, 2, 14},
      // closed e.CatchedChars#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.CatchedEOF#1/13 e.CatchedChars#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # EOF-Catched/4 HalfReuse: # Any/7 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Empty/14 AsIs: t.Flush#1/16 AsIs: t.NextRule#1/18 AsIs: )/12 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 1, 4},
      {refalrts::icReinitIdent, 0, 0, 7},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 12, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_NormalizeAlternative

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_NormalizeAlternative(
  "NormalizeAlternative",
  scope_NormalizeAlternative::raa,
  scope_NormalizeAlternative::functions,
  scope_NormalizeAlternative::idents,
  scope_NormalizeAlternative::numbers,
  scope_NormalizeAlternative::strings
);
refalrts::RefalFunction& NormalizeAlternative = descr_NormalizeAlternative;

} // unnamed namespace

#else
static refalrts::FnResult func_NormalizeAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  //FAST GEN: ( s.$ e.$ ) ( t.$ t.$ t.$ )
  //GLOBAL GEN: ( s.$ e.$ ) ( t.$ t.$ t.$ )
  // </0 & NormalizeAlternative/4 (/7 s.idxB#0/13 e.idxBV#0/5 )/8 (/11 t.idxTB#0/14 t.idxTBV#0/16 t.idxTBVV#0/18 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::tvar_left( context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( s.idx e.idx ) ( ( # Chars e.idx ) t.idx t.idx )
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 (/14 # Chars/22 e.Alternative#1/20 )/15 t.Flush#1/16 t.Next#1/18 )/12 >/1
    context[20] = 0;
    context[21] = 0;
    if( ! refalrts::brackets_term( context[20], context[21], context[14] ) )
      continue;
    context[22] = refalrts::ident_left(  & ident_Chars<int>::name, context[20], context[21] );
    if( ! context[22] )
      continue;
    // closed e.CatchedChars#1 as range 5
    // closed e.Alternative#1 as range 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.CatchedEOF#1/13 } Tile{ AsIs: </0 Reuse: & UniqueSet/4 } Tile{ AsIs: e.CatchedChars#1/5 } Tile{ AsIs: e.Alternative#1/20 } Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: (/14 HalfReuse: </22 } & SetDiff/23 (/24 e.Alternative#1/20/25 )/27 (/28 e.CatchedChars#1/5/29 )/31 >/32 Tile{ AsIs: )/15 AsIs: t.Flush#1/16 AsIs: t.Next#1/18 AsIs: )/12 } Tile{ ]] }
    if( ! refalrts::alloc_name( context[23], & SetDiff ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[20], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[29], context[30], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & UniqueSet );
    refalrts::reinit_open_call( context[22] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[28], context[31] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[12] );
    res = refalrts::splice_evar( res, context[23], context[32] );
    res = refalrts::splice_evar( res, context[8], context[22] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx ) ( # Any t.idx t.idx )
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Any/14 t.Flush#1/16 t.Next#1/18 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Any<int>::name, context[14] ) )
      continue;
    // closed e.CatchedChars#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NormalizeAlternative/4 {REMOVED TILE} e.CatchedChars#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.CatchedEOF#1/13 } Tile{ HalfReuse: # Any/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Any/14 AsIs: t.Flush#1/16 AsIs: t.Next#1/18 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_ident( context[1], & ident_Any<int>::name );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx e.idx ) ( # Empty t.idx # Finitive )
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Empty/14 t.Flush#1/16 # Finitive/18 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[14] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[18] ) )
      continue;
    // closed e.CatchedChars#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 s.CatchedEOF#1/13 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # EOF-Catched/4 } Tile{ AsIs: e.CatchedChars#1/5 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Empty/14 AsIs: t.Flush#1/16 AsIs: # Finitive/18 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_EOF_Catched<int>::name );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( s.idx e.idx ) ( # Empty t.idx t.idx )
  // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Empty/14 t.Flush#1/16 t.NextRule#1/18 )/12 >/1
  if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CatchedChars#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.CatchedEOF#1/13 e.CatchedChars#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # EOF-Catched/4 HalfReuse: # Any/7 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Empty/14 AsIs: t.Flush#1/16 AsIs: t.NextRule#1/18 AsIs: )/12 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_EOF_Catched<int>::name );
  refalrts::reinit_ident( context[7], & ident_Any<int>::name );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_NormalizeAlternative(func_NormalizeAlternative, "NormalizeAlternative");
refalrts::RefalFunction& NormalizeAlternative = descr_NormalizeAlternative;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_SplitAlternatives {
    static refalrts::RefalFunction *functions[] = {
      & WarningAt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Any<int>::name,
      & ident_Empty<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {" unreached alternative", 22},
      {"ule ", 4}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 30, 0, 0},
      //FAST GEN: t.$ ( e.$ ) ( t.$ t.$ t.$ )
      //GLOBAL GEN: t.$ ( e.$ ) ( t.$ t.$ t.$ )
      // </0 & SplitAlternatives/4 t.idx#0/13 (/11 e.idxVB#0/9 )/12 (/7 t.idxVTB#0/15 t.idxVTBV#0/17 t.idxVTBVV#0/19 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      {refalrts::icBracketRightSave, 0, 9, 2},
      // closed e.idxVB#0 as range 9
      {refalrts::ictVarLeftSave, 0, 13, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::ictVarLeftSave, 0, 15, 5},
      {refalrts::ictVarLeftSave, 0, 17, 5},
      {refalrts::ictVarLeftSave, 0, 19, 5},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // t.idx ( e.idx ) ( # Empty t.idx t.idx )
      // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 # Empty/15 t.Flush#1/17 t.Next#1/19 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 15},
      // closed e.Name#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Empty/15 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // t.idx ( e.idx ) ( # Any t.idx t.idx )
      // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 # Any/15 t.Flush#1/17 t.Next#1/19 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 15},
      // closed e.Name#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Any/15 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // t.idx ( e.idx ) ( ( ) t.idx t.idx )
      // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
      {refalrts::icBracketTerm, 0, 21, 15},
      {refalrts::icEmpty, 0, 0, 21},
      // closed e.Name#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush#1/17 t.Next#1/19 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/13 HalfReuse: 'R'/11 }"ule "/23 Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: ' '/12 HalfReuse: 'h'/7 HalfReuse: 'a'/15 HalfReuse: 's'/16 }" unreached alternative"/25 Tile{ HalfReuse: 's'/8 AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 1, 23},
      {refalrts::icAllocString, 0, 0, 25},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'R', 11},
      {refalrts::icReinitChar, 0, ' ', 12},
      {refalrts::icReinitChar, 0, 'h', 7},
      {refalrts::icReinitChar, 0, 'a', 15},
      {refalrts::icReinitChar, 0, 's', 16},
      {refalrts::icReinitChar, 0, 's', 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 25, 26, 0},
      {refalrts::icSpliceTile, 12, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 23, 24, 0},
      {refalrts::icTrash, 0, 0, 11},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // t.idx ( e.idx ) ( ( s.idx ) t.idx t.idx )
      // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
      {refalrts::icBracketTerm, 0, 21, 15},
      // closed e.Name#1 as range 9
      {refalrts::icsVarLeft, 0, 23, 21},
      {refalrts::icEmpty, 0, 0, 21},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Char1 #23/16 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitSVar, 0, 23, 16},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 16, 8, 0},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx ( e.idx ) ( ( s.idx e.idx ) t.idx t.idx )
      // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 e.Tail#1/21 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
      {refalrts::icBracketTerm, 0, 21, 15},
      // closed e.Name#1 as range 9
      {refalrts::icsVarLeft, 0, 23, 21},
      // closed e.Tail#1 as range 21
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/24 Tile{ AsIs: s.Char#1/23 } t.Flush#1/17/25 t.Next#1/19/27 )/29 Tile{ AsIs: </0 AsIs: & SplitAlternatives/4 AsIs: t.SentNamePos#1/13 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: (/7 AsIs: (/15 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: )/16 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
      {refalrts::icCopyEVar, 25, 17, 0},
      {refalrts::icCopyEVar, 27, 19, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 24, 29, 0},
      {refalrts::icSetRes, 0, 0, 16},
      {refalrts::icSpliceEVar, 0, 0, 21},
      {refalrts::icSpliceTile, 0, 15, 0},
      {refalrts::icSpliceTile, 25, 29, 0},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceTile, 24, 24, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_SplitAlternatives

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_SplitAlternatives(
  "SplitAlternatives",
  scope_SplitAlternatives::raa,
  scope_SplitAlternatives::functions,
  scope_SplitAlternatives::idents,
  scope_SplitAlternatives::numbers,
  scope_SplitAlternatives::strings
);
refalrts::RefalFunction& SplitAlternatives = descr_SplitAlternatives;

} // unnamed namespace

#else
static refalrts::FnResult func_SplitAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  //FAST GEN: t.$ ( e.$ ) ( t.$ t.$ t.$ )
  //GLOBAL GEN: t.$ ( e.$ ) ( t.$ t.$ t.$ )
  // </0 & SplitAlternatives/4 t.idx#0/13 (/11 e.idxVB#0/9 )/12 (/7 t.idxVTB#0/15 t.idxVTBV#0/17 t.idxVTBVV#0/19 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVB#0 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // t.idx ( e.idx ) ( # Empty t.idx t.idx )
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 # Empty/15 t.Flush#1/17 t.Next#1/19 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[15] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Empty/15 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // t.idx ( e.idx ) ( # Any t.idx t.idx )
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 # Any/15 t.Flush#1/17 t.Next#1/19 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Any<int>::name, context[15] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Any/15 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // t.idx ( e.idx ) ( ( ) t.idx t.idx )
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush#1/17 t.Next#1/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/13 HalfReuse: 'R'/11 }"ule "/23 Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: ' '/12 HalfReuse: 'h'/7 HalfReuse: 'a'/15 HalfReuse: 's'/16 }" unreached alternative"/25 Tile{ HalfReuse: 's'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[23], context[24], "ule ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], " unreached alternative", 22 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & WarningAt );
    refalrts::reinit_char( context[11], 'R' );
    refalrts::reinit_char( context[12], ' ' );
    refalrts::reinit_char( context[7], 'h' );
    refalrts::reinit_char( context[15], 'a' );
    refalrts::reinit_char( context[16], 's' );
    refalrts::reinit_char( context[8], 's' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // t.idx ( e.idx ) ( ( s.idx ) t.idx t.idx )
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
      continue;
    // closed e.Name#1 as range 9
    if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Char1 #23/16 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[16], context[23] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx ( e.idx ) ( ( s.idx e.idx ) t.idx t.idx )
  // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 e.Tail#1/21 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
  context[21] = 0;
  context[22] = 0;
  if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 9
  if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/24 Tile{ AsIs: s.Char#1/23 } t.Flush#1/17/25 t.Next#1/19/27 )/29 Tile{ AsIs: </0 AsIs: & SplitAlternatives/4 AsIs: t.SentNamePos#1/13 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: (/7 AsIs: (/15 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: )/16 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[17], context[18]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[19], context[20]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[24], context[29] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_SplitAlternatives(func_SplitAlternatives, "SplitAlternatives");
refalrts::RefalFunction& SplitAlternatives = descr_SplitAlternatives;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_NormalizeRule_L1 {
    static refalrts::RefalFunction *functions[] = {
      & DefaultCatchAnyChar,
      & WarningIfUncatched,
      & DefaultCatchEOF
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 23, 0, 0},
      // </0 & NormalizeRule\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 s.CatchedEOF#2/15 e.CatchedChars#2/11 )/14 e.Alternatives#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 7, 2},
      {refalrts::icBracketLeftSave, 0, 11, 2},
      // closed e.Name#1 as range 7
      // closed e.Alternatives#2 as range 2
      {refalrts::icsVarLeft, 0, 15, 11},
      // closed e.CatchedChars#2 as range 11
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningIfUncatched/4 AsIs: t.SentNamePos#1/5 } Tile{ AsIs: e.Name#1/7 } Tile{ AsIs: s.CatchedEOF#2/15 AsIs: e.CatchedChars#2/11 HalfReuse: >/14 AsIs: e.Alternatives#2/2 HalfReuse: </1 } Tile{ HalfReuse: & DefaultCatchAnyChar/9 } t.SentNamePos#1/5/16 e.CatchedChars#2/11/18 Tile{ HalfReuse: >/10 HalfReuse: </13 } & DefaultCatchEOF/20 s.CatchedEOF#2/15/21 >/22 Tile{ ]] }
      {refalrts::icCopyEVar, 16, 5, 0},
      {refalrts::icCopyEVar, 18, 11, 0},
      {refalrts::icAllocFunc, 0, 2, 20},
      {refalrts::icCopySTVar, 21, 15, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 20, 22, 0},
      {refalrts::icSpliceTile, 10, 13, 0},
      {refalrts::icSpliceTile, 18, 19, 0},
      {refalrts::icSpliceTile, 16, 17, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 15, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_NormalizeRule_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_NormalizeRule_L1(
  "NormalizeRule\\1",
  scope_gen_NormalizeRule_L1::raa,
  scope_gen_NormalizeRule_L1::functions,
  scope_gen_NormalizeRule_L1::idents,
  scope_gen_NormalizeRule_L1::numbers,
  scope_gen_NormalizeRule_L1::strings
);
refalrts::RefalFunction& gen_NormalizeRule_L1 = descr_gen_NormalizeRule_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_NormalizeRule_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & NormalizeRule\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 s.CatchedEOF#2/15 e.CatchedChars#2/11 )/14 e.Alternatives#2/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.Alternatives#2 as range 2
  if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CatchedChars#2 as range 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningIfUncatched/4 AsIs: t.SentNamePos#1/5 } Tile{ AsIs: e.Name#1/7 } Tile{ AsIs: s.CatchedEOF#2/15 AsIs: e.CatchedChars#2/11 HalfReuse: >/14 AsIs: e.Alternatives#2/2 HalfReuse: </1 } Tile{ HalfReuse: & DefaultCatchAnyChar/9 } t.SentNamePos#1/5/16 e.CatchedChars#2/11/18 Tile{ HalfReuse: >/10 HalfReuse: </13 } & DefaultCatchEOF/20 s.CatchedEOF#2/15/21 >/22 Tile{ ]] }
  if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & DefaultCatchEOF ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[21], context[15]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WarningIfUncatched );
  refalrts::reinit_close_call( context[14] );
  refalrts::reinit_open_call( context[1] );
  refalrts::reinit_name( context[9], & DefaultCatchAnyChar );
  refalrts::reinit_close_call( context[10] );
  refalrts::reinit_open_call( context[13] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_NormalizeRule_L1(func_gen_NormalizeRule_L1, "NormalizeRule\\1");
refalrts::RefalFunction& gen_NormalizeRule_L1 = descr_gen_NormalizeRule_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_NormalizeRule_L2 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & NormalizeRule\2/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 e.Alternatives#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 7, 2},
      // closed e.Name#1 as range 7
      // closed e.Alternatives#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: t.SentNamePos#1/5 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 AsIs: e.Alternatives#2/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_NormalizeRule_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_NormalizeRule_L2(
  "NormalizeRule\\2",
  scope_gen_NormalizeRule_L2::raa,
  scope_gen_NormalizeRule_L2::functions,
  scope_gen_NormalizeRule_L2::idents,
  scope_gen_NormalizeRule_L2::numbers,
  scope_gen_NormalizeRule_L2::strings
);
refalrts::RefalFunction& gen_NormalizeRule_L2 = descr_gen_NormalizeRule_L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_NormalizeRule_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & NormalizeRule\2/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 e.Alternatives#2/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.Alternatives#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: t.SentNamePos#1/5 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 AsIs: e.Alternatives#2/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_NormalizeRule_L2(func_gen_NormalizeRule_L2, "NormalizeRule\\2");
refalrts::RefalFunction& gen_NormalizeRule_L2 = descr_gen_NormalizeRule_L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_NormalizeRule {
    static refalrts::RefalFunction *functions[] = {
      & gen_NormalizeRule_L1,
      & refalrts::create_closure,
      & gen_NormalizeRule_L2,
      & SplitAlternatives,
      & Map,
      & NormalizeAlternative,
      & MapReduce,
      & Seq,
      & Fetch
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_EOF_NotCatched<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 49, 0, 0},
      // </0 & NormalizeRule/4 (/7 t.SentNamePos#1/9 (/13 e.Name#1/11 )/14 e.Alternatives#1/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::ictVarLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 11, 5},
      // closed e.Name#1 as range 11
      // closed e.Alternatives#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </15 & Fetch/16 Tile{ AsIs: e.Alternatives#1/5 } </17 & Seq/18 (/19 & MapReduce/20 & NormalizeAlternative/21 (/22 # EOF-NotCatched/23 )/24 )/25 Tile{ AsIs: </0 Reuse: & @create_closure@/4 HalfReuse: & NormalizeRule\1/7 AsIs: t.SentNamePos#1/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } >/26 (/27 & Map/28 (/29 & SplitAlternatives/30 t.SentNamePos#1/9/31 (/33 e.Name#1/11/34 )/36 )/37 )/38 </39 & @create_closure@/40 & NormalizeRule\2/41 t.SentNamePos#1/9/42 (/44 e.Name#1/11/45 )/47 >/48 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 8, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icAllocFunc, 0, 7, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
      {refalrts::icAllocFunc, 0, 6, 20},
      {refalrts::icAllocFunc, 0, 5, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
      {refalrts::icAllocIdent, 0, 0, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
      {refalrts::icAllocFunc, 0, 4, 28},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 29},
      {refalrts::icAllocFunc, 0, 3, 30},
      {refalrts::icCopyEVar, 31, 9, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
      {refalrts::icCopyEVar, 34, 11, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 39},
      {refalrts::icAllocFunc, 0, 1, 40},
      {refalrts::icAllocFunc, 0, 2, 41},
      {refalrts::icCopyEVar, 42, 9, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 44},
      {refalrts::icCopyEVar, 45, 11, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 47},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 48},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 48},
      {refalrts::icPushStack, 0, 0, 39},
      {refalrts::icLinkBrackets, 44, 47, 0},
      {refalrts::icLinkBrackets, 27, 38, 0},
      {refalrts::icLinkBrackets, 29, 37, 0},
      {refalrts::icLinkBrackets, 33, 36, 0},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 19, 25, 0},
      {refalrts::icLinkBrackets, 22, 24, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 26, 48, 0},
      {refalrts::icSpliceTile, 0, 14, 0},
      {refalrts::icSpliceTile, 17, 25, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_NormalizeRule

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_NormalizeRule(
  "NormalizeRule",
  scope_NormalizeRule::raa,
  scope_NormalizeRule::functions,
  scope_NormalizeRule::idents,
  scope_NormalizeRule::numbers,
  scope_NormalizeRule::strings
);
refalrts::RefalFunction& NormalizeRule = descr_NormalizeRule;

} // unnamed namespace

#else
static refalrts::FnResult func_NormalizeRule(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  // </0 & NormalizeRule/4 (/7 t.SentNamePos#1/9 (/13 e.Name#1/11 )/14 e.Alternatives#1/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Name#1 as range 11
  // closed e.Alternatives#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 & Fetch/16 Tile{ AsIs: e.Alternatives#1/5 } </17 & Seq/18 (/19 & MapReduce/20 & NormalizeAlternative/21 (/22 # EOF-NotCatched/23 )/24 )/25 Tile{ AsIs: </0 Reuse: & @create_closure@/4 HalfReuse: & NormalizeRule\1/7 AsIs: t.SentNamePos#1/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } >/26 (/27 & Map/28 (/29 & SplitAlternatives/30 t.SentNamePos#1/9/31 (/33 e.Name#1/11/34 )/36 )/37 )/38 </39 & @create_closure@/40 & NormalizeRule\2/41 t.SentNamePos#1/9/42 (/44 e.Name#1/11/45 )/47 >/48 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & MapReduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], & NormalizeAlternative ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[23], & ident_EOF_NotCatched<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], & Map ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], & SplitAlternatives ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[31], context[32], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[34], context[35], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[40], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[41], & gen_NormalizeRule_L2 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[42], context[43], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[44] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[45], context[46], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[48] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & refalrts::create_closure );
  refalrts::reinit_name( context[7], & gen_NormalizeRule_L1 );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[48] );
  refalrts::push_stack( context[39] );
  refalrts::link_brackets( context[44], context[47] );
  refalrts::link_brackets( context[27], context[38] );
  refalrts::link_brackets( context[29], context[37] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[19], context[25] );
  refalrts::link_brackets( context[22], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[26], context[48] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[17], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_NormalizeRule(func_NormalizeRule, "NormalizeRule");
refalrts::RefalFunction& NormalizeRule = descr_NormalizeRule;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_WarningIfUncatched {
    static refalrts::RefalFunction *functions[] = {
      & WarningAt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_EOF_NotCatched<int>::name,
      & ident_Any<int>::name,
      & ident_EOF_Catched<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {" some chars and EOF not catched, default alternatives added", 59},
      {" rule ", 6},
      {" EOF not catched, default alternative add", 41},
      {"In rule ", 8},
      {" some chars not catched, default alternative added", 50}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 5, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & WarningIfUncatched/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // t.idx e.idx # EOF-Catched # Any
      // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/2 # EOF-Catched/8 # Any/7 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icIdentRightSave, 7, 1, 15},
      {refalrts::icIdentRightSave, 8, 2, 15},
      // closed e.Name#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/15(2) # EOF-Catched/8 # Any/7 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // t.idx e.idx
      // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/7 # EOF-Catched/9 e.CharSet#1/2 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icEPrepare, 0, 7, 15},
      {refalrts::icEStart, 0, 7, 15},
      {refalrts::icSave, 0, 17, 15},
      {refalrts::icIdentLeftSave, 9, 2, 17},
      // closed e.CharSet#1 as range 17(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet#1/17(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 } 'I'/10 Tile{ HalfReuse: 'n'/9 }" rule "/11 Tile{ AsIs: e.Name#1/7 }" some chars not catched, default alternative added"/13 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, 'I', 10},
      {refalrts::icAllocString, 0, 1, 11},
      {refalrts::icAllocString, 0, 4, 13},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'n', 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +16, 0, 0},
      // t.idx e.idx # EOF-NotCatched # Any
      // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/2 # EOF-NotCatched/8 # Any/7 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icIdentRightSave, 7, 1, 15},
      {refalrts::icIdentRightSave, 8, 0, 15},
      // closed e.Name#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 }"In rule "/9 Tile{ AsIs: e.Name#1/15(2) }" EOF not catched, default alternative add"/11 Tile{ HalfReuse: 'e'/8 HalfReuse: 'd'/7 AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 3, 9},
      {refalrts::icAllocString, 0, 2, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'e', 8},
      {refalrts::icReinitChar, 0, 'd', 7},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx e.idx
      // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/7 # EOF-NotCatched/9 e.CharSet#1/2 >/1
      {refalrts::icEPrepare, 0, 7, 2},
      {refalrts::icEStart, 0, 7, 2},
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icIdentLeftSave, 9, 0, 15},
      // closed e.CharSet#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet#1/15(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 } 'I'/10 Tile{ HalfReuse: 'n'/9 }" rule "/11 Tile{ AsIs: e.Name#1/7 }" some chars and EOF not catched, default alternatives added"/13 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, 'I', 10},
      {refalrts::icAllocString, 0, 1, 11},
      {refalrts::icAllocString, 0, 0, 13},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'n', 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icFail, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_WarningIfUncatched

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_WarningIfUncatched(
  "WarningIfUncatched",
  scope_WarningIfUncatched::raa,
  scope_WarningIfUncatched::functions,
  scope_WarningIfUncatched::idents,
  scope_WarningIfUncatched::numbers,
  scope_WarningIfUncatched::strings
);
refalrts::RefalFunction& WarningIfUncatched = descr_WarningIfUncatched;

} // unnamed namespace

#else
static refalrts::FnResult func_WarningIfUncatched(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & WarningIfUncatched/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // t.idx e.idx # EOF-Catched # Any
    // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/2 # EOF-Catched/8 # Any/7 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[7] = refalrts::ident_right(  & ident_Any<int>::name, context[15], context[16] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::ident_right(  & ident_EOF_Catched<int>::name, context[15], context[16] );
    if( ! context[8] )
      continue;
    // closed e.Name#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/15(2) # EOF-Catched/8 # Any/7 >/1 {REMOVED TILE}
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
    // t.idx e.idx
    // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/7 # EOF-Catched/9 e.CharSet#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[15];
      context[18] = context[16];
      context[9] = refalrts::ident_left(  & ident_EOF_Catched<int>::name, context[17], context[18] );
      if( ! context[9] )
        continue;
      // closed e.CharSet#1 as range 17(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet#1/17(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 } 'I'/10 Tile{ HalfReuse: 'n'/9 }" rule "/11 Tile{ AsIs: e.Name#1/7 }" some chars not catched, default alternative added"/13 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[10], 'I' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[11], context[12], " rule ", 6 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[13], context[14], " some chars not catched, default alternative added", 50 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], & WarningAt );
      refalrts::reinit_char( context[9], 'n' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[15], context[16] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // t.idx e.idx # EOF-NotCatched # Any
    // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/2 # EOF-NotCatched/8 # Any/7 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[7] = refalrts::ident_right(  & ident_Any<int>::name, context[15], context[16] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::ident_right(  & ident_EOF_NotCatched<int>::name, context[15], context[16] );
    if( ! context[8] )
      continue;
    // closed e.Name#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 }"In rule "/9 Tile{ AsIs: e.Name#1/15(2) }" EOF not catched, default alternative add"/11 Tile{ HalfReuse: 'e'/8 HalfReuse: 'd'/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "In rule ", 8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], " EOF not catched, default alternative add", 41 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & WarningAt );
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_char( context[7], 'd' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx e.idx
  // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/7 # EOF-NotCatched/9 e.CharSet#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  refalrts::start_e_loop();
  do {
    context[15] = context[2];
    context[16] = context[3];
    context[9] = refalrts::ident_left(  & ident_EOF_NotCatched<int>::name, context[15], context[16] );
    if( ! context[9] )
      continue;
    // closed e.CharSet#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet#1/15(2) {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 } 'I'/10 Tile{ HalfReuse: 'n'/9 }" rule "/11 Tile{ AsIs: e.Name#1/7 }" some chars and EOF not catched, default alternatives added"/13 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], " rule ", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " some chars and EOF not catched, default alternatives added", 59 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & WarningAt );
    refalrts::reinit_char( context[9], 'n' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_WarningIfUncatched(func_WarningIfUncatched, "WarningIfUncatched");
refalrts::RefalFunction& WarningIfUncatched = descr_WarningIfUncatched;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DefaultCatchAnyChar {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Any<int>::name,
      & ident_Flush<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"Root", 4},
      {"#TokenLexerInternalError-Unexpected", 35}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: t.$ e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & DefaultCatchAnyChar/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // t.idx # Any
      // </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 # Any/7 >/1
      {refalrts::icSave, 0, 16, 2},
      {refalrts::icIdentLeftSave, 7, 0, 16},
      {refalrts::icEmpty, 0, 0, 16},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 # Any/7 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx e.idx
      // </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 e.CatchedChars#1/2 >/1
      // closed e.CatchedChars#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.CatchedChars#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Any/4 } (/7 # Flush/8"#TokenLexerInternalError-Unexpected"/9 )/11 (/12 Tile{ AsIs: t.SentNamePos#1/5 }"Root"/13 )/15 Tile{ HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
      {refalrts::icAllocIdent, 0, 1, 8},
      {refalrts::icAllocString, 0, 1, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 12},
      {refalrts::icAllocString, 0, 0, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 12, 15, 0},
      {refalrts::icLinkBrackets, 7, 11, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 13, 15, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DefaultCatchAnyChar

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_DefaultCatchAnyChar(
  "DefaultCatchAnyChar",
  scope_DefaultCatchAnyChar::raa,
  scope_DefaultCatchAnyChar::functions,
  scope_DefaultCatchAnyChar::idents,
  scope_DefaultCatchAnyChar::numbers,
  scope_DefaultCatchAnyChar::strings
);
refalrts::RefalFunction& DefaultCatchAnyChar = descr_DefaultCatchAnyChar;

} // unnamed namespace

#else
static refalrts::FnResult func_DefaultCatchAnyChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & DefaultCatchAnyChar/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // t.idx # Any
    // </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 # Any/7 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[7] = refalrts::ident_left(  & ident_Any<int>::name, context[16], context[17] );
    if( ! context[7] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 # Any/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx e.idx
  // </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 e.CatchedChars#1/2 >/1
  // closed e.CatchedChars#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.CatchedChars#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Any/4 } (/7 # Flush/8"#TokenLexerInternalError-Unexpected"/9 )/11 (/12 Tile{ AsIs: t.SentNamePos#1/5 }"Root"/13 )/15 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], & ident_Flush<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "#TokenLexerInternalError-Unexpected", 35 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "Root", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_Any<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_DefaultCatchAnyChar(func_DefaultCatchAnyChar, "DefaultCatchAnyChar");
refalrts::RefalFunction& DefaultCatchAnyChar = descr_DefaultCatchAnyChar;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DefaultCatchEOF {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Finitive<int>::name,
      & ident_Flush<int>::name,
      & ident_Empty<int>::name,
      & ident_EOF_NotCatched<int>::name,
      & ident_EOF_Catched<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"#TokenLexerInternalError-UnexpectedEO", 37}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      //FAST GEN: s.$
      //GLOBAL GEN: s.$
      // </0 & DefaultCatchEOF/4 s.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +5, 0, 0},
      // # EOF-Catched
      // </0 & DefaultCatchEOF/4 # EOF-Catched/5 >/1
      {refalrts::icIdentTerm, 0, 4, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DefaultCatchEOF/4 # EOF-Catched/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // # EOF-NotCatched
      // </0 & DefaultCatchEOF/4 # EOF-NotCatched/5 >/1
      {refalrts::icIdentTerm, 0, 3, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/6 # Empty/7 (/8 # Flush/9"#TokenLexerInternalError-UnexpectedEO"/10 Tile{ HalfReuse: 'F'/0 HalfReuse: )/4 Reuse: # Finitive/5 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
      {refalrts::icAllocIdent, 0, 2, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icAllocIdent, 0, 1, 9},
      {refalrts::icAllocString, 0, 0, 10},
      {refalrts::icReinitChar, 0, 'F', 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icUpdateIdent, 0, 0, 5},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 6, 1, 0},
      {refalrts::icLinkBrackets, 8, 4, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DefaultCatchEOF

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_DefaultCatchEOF(
  "DefaultCatchEOF",
  scope_DefaultCatchEOF::raa,
  scope_DefaultCatchEOF::functions,
  scope_DefaultCatchEOF::idents,
  scope_DefaultCatchEOF::numbers,
  scope_DefaultCatchEOF::strings
);
refalrts::RefalFunction& DefaultCatchEOF = descr_DefaultCatchEOF;

} // unnamed namespace

#else
static refalrts::FnResult func_DefaultCatchEOF(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & DefaultCatchEOF/4 s.idx#0/5 >/1
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
    // # EOF-Catched
    // </0 & DefaultCatchEOF/4 # EOF-Catched/5 >/1
    if( ! refalrts::ident_term(  & ident_EOF_Catched<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DefaultCatchEOF/4 # EOF-Catched/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // # EOF-NotCatched
  // </0 & DefaultCatchEOF/4 # EOF-NotCatched/5 >/1
  if( ! refalrts::ident_term(  & ident_EOF_NotCatched<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/6 # Empty/7 (/8 # Flush/9"#TokenLexerInternalError-UnexpectedEO"/10 Tile{ HalfReuse: 'F'/0 HalfReuse: )/4 Reuse: # Finitive/5 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], & ident_Empty<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_Flush<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "#TokenLexerInternalError-UnexpectedEO", 37 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'F' );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::update_ident( context[5], & ident_Finitive<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[6], context[1] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_DefaultCatchEOF(func_DefaultCatchEOF, "DefaultCatchEOF");
refalrts::RefalFunction& DefaultCatchEOF = descr_DefaultCatchEOF;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_PrepareFunctions {
    static refalrts::RefalFunction *functions[] = {
      & DoPrepareFunctions
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"Root", 4},
      {"runtime", 7}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 18, 0, 0},
      // </0 & PrepareFunctions/4 e.Rules#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Rules#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & DoPrepareFunctions/6 (/7 )/8 (/9 (/10 (/11 0/12"runtime"/13 )/15"Root"/16 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 0, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
      {refalrts::icAllocInt, 0, 0, 12},
      {refalrts::icAllocString, 0, 1, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icAllocString, 0, 0, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icLinkBrackets, 9, 4, 0},
      {refalrts::icLinkBrackets, 10, 0, 0},
      {refalrts::icLinkBrackets, 11, 15, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 17, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_PrepareFunctions

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_PrepareFunctions(
  "PrepareFunctions",
  scope_PrepareFunctions::raa,
  scope_PrepareFunctions::functions,
  scope_PrepareFunctions::idents,
  scope_PrepareFunctions::numbers,
  scope_PrepareFunctions::strings
);
refalrts::RefalFunction& PrepareFunctions = descr_PrepareFunctions;

} // unnamed namespace

#else
static refalrts::FnResult func_PrepareFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & PrepareFunctions/4 e.Rules#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rules#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoPrepareFunctions/6 (/7 )/8 (/9 (/10 (/11 0/12"runtime"/13 )/15"Root"/16 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & DoPrepareFunctions ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[12], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "runtime", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], "Root", 4 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[9], context[4] );
  refalrts::link_brackets( context[10], context[0] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_PrepareFunctions(func_PrepareFunctions, "PrepareFunctions");
refalrts::RefalFunction& PrepareFunctions = descr_PrepareFunctions;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractExpected {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Finitive<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: ( t.$ t.$ t.$ )
      //GLOBAL GEN: ( t.$ t.$ t.$ )
      // </0 & ExtractExpected/4 (/7 t.idxB#0/9 t.idxBV#0/11 t.idxBVV#0/13 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::ictVarLeftSave, 0, 9, 5},
      {refalrts::ictVarLeftSave, 0, 11, 5},
      {refalrts::ictVarLeftSave, 0, 13, 5},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icOnFailGoTo, +5, 0, 0},
      // ( t.idx t.idx # Finitive )
      // </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 # Finitive/13 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 13},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 # Finitive/13 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( t.idx t.idx ( t.idx e.idx ) )
      // </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 (/13 t.SrcPos#1/17 e.NextName#1/15 )/14 )/8 >/1
      {refalrts::icBracketTerm, 0, 15, 13},
      {refalrts::ictVarLeftSave, 0, 17, 15},
      // closed e.NextName#1 as range 15
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: t.SrcPos#1/17 AsIs: e.NextName#1/15 AsIs: )/14 } Tile{ ]] }
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractExpected

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ExtractExpected(
  "ExtractExpected",
  scope_ExtractExpected::raa,
  scope_ExtractExpected::functions,
  scope_ExtractExpected::idents,
  scope_ExtractExpected::numbers,
  scope_ExtractExpected::strings
);
refalrts::RefalFunction& ExtractExpected = descr_ExtractExpected;

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractExpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: ( t.$ t.$ t.$ )
  //GLOBAL GEN: ( t.$ t.$ t.$ )
  // </0 & ExtractExpected/4 (/7 t.idxB#0/9 t.idxBV#0/11 t.idxBVV#0/13 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( t.idx t.idx # Finitive )
    // </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 # Finitive/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[13] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 # Finitive/13 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( t.idx t.idx ( t.idx e.idx ) )
  // </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 (/13 t.SrcPos#1/17 e.NextName#1/15 )/14 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextName#1 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: t.SrcPos#1/17 AsIs: e.NextName#1/15 AsIs: )/14 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ExtractExpected(func_ExtractExpected, "ExtractExpected");
refalrts::RefalFunction& ExtractExpected = descr_ExtractExpected;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_DoPrepareFunctions_S2L1 {
    static refalrts::RefalFunction *functions[] = {
      & WarningAt
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"d unused rule ", 14}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & DoPrepareFunctions$2\1/4 (/7 t.SentNamePos#2/9 (/13 e.Name#2/11 )/14 e.Content#2/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::ictVarLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 11, 5},
      // closed e.Name#2 as range 11
      // closed e.Content#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content#2/5 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 } Tile{ AsIs: t.SentNamePos#2/9 HalfReuse: 'F'/13 } Tile{ HalfReuse: 'o'/14 } Tile{ HalfReuse: 'u'/7 } Tile{ HalfReuse: 'n'/8 }"d unused rule "/15 Tile{ AsIs: e.Name#2/11 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 15},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'F', 13},
      {refalrts::icReinitChar, 0, 'o', 14},
      {refalrts::icReinitChar, 0, 'u', 7},
      {refalrts::icReinitChar, 0, 'n', 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 9, 13, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_DoPrepareFunctions_S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_DoPrepareFunctions_S2L1(
  "DoPrepareFunctions$2\\1",
  scope_gen_DoPrepareFunctions_S2L1::raa,
  scope_gen_DoPrepareFunctions_S2L1::functions,
  scope_gen_DoPrepareFunctions_S2L1::idents,
  scope_gen_DoPrepareFunctions_S2L1::numbers,
  scope_gen_DoPrepareFunctions_S2L1::strings
);
refalrts::RefalFunction& gen_DoPrepareFunctions_S2L1 = descr_gen_DoPrepareFunctions_S2L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_DoPrepareFunctions_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoPrepareFunctions$2\1/4 (/7 t.SentNamePos#2/9 (/13 e.Name#2/11 )/14 e.Content#2/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Name#2 as range 11
  // closed e.Content#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 } Tile{ AsIs: t.SentNamePos#2/9 HalfReuse: 'F'/13 } Tile{ HalfReuse: 'o'/14 } Tile{ HalfReuse: 'u'/7 } Tile{ HalfReuse: 'n'/8 }"d unused rule "/15 Tile{ AsIs: e.Name#2/11 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[15], context[16], "d unused rule ", 14 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WarningAt );
  refalrts::reinit_char( context[13], 'F' );
  refalrts::reinit_char( context[14], 'o' );
  refalrts::reinit_char( context[7], 'u' );
  refalrts::reinit_char( context[8], 'n' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_DoPrepareFunctions_S2L1(func_gen_DoPrepareFunctions_S2L1, "DoPrepareFunctions$2\\1");
refalrts::RefalFunction& gen_DoPrepareFunctions_S2L1 = descr_gen_DoPrepareFunctions_S2L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_DoPrepareFunctions_S4L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Finitive<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: ( t.$ t.$ t.$ )
      //GLOBAL GEN: ( t.$ t.$ t.$ )
      // </0 & DoPrepareFunctions$4\1/4 (/7 t.idxB#0/9 t.idxBV#0/11 t.idxBVV#0/13 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::ictVarLeftSave, 0, 9, 5},
      {refalrts::ictVarLeftSave, 0, 11, 5},
      {refalrts::ictVarLeftSave, 0, 13, 5},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( t.idx t.idx # Finitive )
      // </0 & DoPrepareFunctions$4\1/4 (/7 t.Head#2/9 t.Flush#2/11 # Finitive/13 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 13},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions$4\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: # Finitive/13 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( t.idx t.idx ( t.idx e.idx ) )
      // </0 & DoPrepareFunctions$4\1/4 (/7 t.Head#2/9 t.Flush#2/11 (/13 t.GotoPos#2/17 e.NextName#2/15 )/14 )/8 >/1
      {refalrts::icBracketTerm, 0, 15, 13},
      {refalrts::ictVarLeftSave, 0, 17, 15},
      // closed e.NextName#2 as range 15
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions$4\1/4 {REMOVED TILE} t.GotoPos#2/17 {REMOVED TILE} )/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: (/13 } Tile{ AsIs: e.NextName#2/15 } Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icLinkBrackets, 13, 8, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceTile, 7, 13, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_DoPrepareFunctions_S4L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_DoPrepareFunctions_S4L1(
  "DoPrepareFunctions$4\\1",
  scope_gen_DoPrepareFunctions_S4L1::raa,
  scope_gen_DoPrepareFunctions_S4L1::functions,
  scope_gen_DoPrepareFunctions_S4L1::idents,
  scope_gen_DoPrepareFunctions_S4L1::numbers,
  scope_gen_DoPrepareFunctions_S4L1::strings
);
refalrts::RefalFunction& gen_DoPrepareFunctions_S4L1 = descr_gen_DoPrepareFunctions_S4L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_DoPrepareFunctions_S4L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: ( t.$ t.$ t.$ )
  //GLOBAL GEN: ( t.$ t.$ t.$ )
  // </0 & DoPrepareFunctions$4\1/4 (/7 t.idxB#0/9 t.idxBV#0/11 t.idxBVV#0/13 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( t.idx t.idx # Finitive )
    // </0 & DoPrepareFunctions$4\1/4 (/7 t.Head#2/9 t.Flush#2/11 # Finitive/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[13] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions$4\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: # Finitive/13 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( t.idx t.idx ( t.idx e.idx ) )
  // </0 & DoPrepareFunctions$4\1/4 (/7 t.Head#2/9 t.Flush#2/11 (/13 t.GotoPos#2/17 e.NextName#2/15 )/14 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextName#2 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions$4\1/4 {REMOVED TILE} t.GotoPos#2/17 {REMOVED TILE} )/14 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: (/13 } Tile{ AsIs: e.NextName#2/15 } Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[13], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_DoPrepareFunctions_S4L1(func_gen_DoPrepareFunctions_S4L1, "DoPrepareFunctions$4\\1");
refalrts::RefalFunction& gen_DoPrepareFunctions_S4L1 = descr_gen_DoPrepareFunctions_S4L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DoPrepareFunctions {
    static refalrts::RefalFunction *functions[] = {
      & ErrorAt,
      & ExtractExpected,
      & Map,
      & gen_DoPrepareFunctions_S4L1,
      & gen_DoPrepareFunctions_S2L1
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"not found", 9}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 6, 0, 0},
      {refalrts::icIssueMemory, 49, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
      // </0 & DoPrepareFunctions/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      // closed e.idxTT#0 as range 2
      {refalrts::icOnFailGoTo, +8, 0, 0},
      // ( e.idx ) ( )
      // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1
      {refalrts::icSave, 0, 43, 9},
      {refalrts::icEmpty, 0, 0, 43},
      {refalrts::icSave, 0, 45, 2},
      {refalrts::icEmpty, 0, 0, 45},
      // closed e.Written#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( e.idx ) ( ) e.idx
      // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 e.Rules#1/2 >/1
      {refalrts::icSave, 0, 43, 9},
      {refalrts::icEmpty, 0, 0, 43},
      // closed e.Written#1 as range 5
      // closed e.Rules#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 HalfReuse: & Map/11 HalfReuse: & DoPrepareFunctions$2\1/12 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icReinitFunc, 0, 2, 11},
      {refalrts::icReinitFunc, 0, 4, 12},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
      // </0 & DoPrepareFunctions/4 (/7 e.Written-B#1/19 (/23 e.Next#1/25 )/24 e.Written-E#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.Next#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
      {refalrts::icSave, 0, 43, 9},
      {refalrts::icBracketLeftSave, 0, 13, 43},
      // closed e.Expected#1 as range 43(9)
      // closed e.Rules#1 as range 2
      {refalrts::ictVarLeftSave, 0, 17, 13},
      // closed e.Next#1 as range 13
      {refalrts::icSave, 0, 45, 5},
      {refalrts::icEPrepare, 0, 19, 45},
      {refalrts::icEStart, 0, 19, 45},
      {refalrts::icSave, 0, 47, 45},
      {refalrts::icBracketLeftSave, 0, 21, 47},
      {refalrts::iceRepeatLeft, 25, 13, 21},
      {refalrts::icEmpty, 0, 0, 21},
      // closed e.Written-E#1 as range 47(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/15 t.SrcPos#1/17 e.Next#1/13 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written-B#1/19 AsIs: (/23 AsIs: e.Next#1/25 AsIs: )/24 AsIs: e.Written-E#1/47(5) AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Expected#1/43(9) } Tile{ AsIs: )/12 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 23, 24, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceEVar, 0, 0, 43},
      {refalrts::icTrash, 0, 0, 11},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +56, 0, 0},
      // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
      // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules-B#1/19 (/23 t.SentNamePos#1/25 (/29 e.NextRule#1/31 )/30 e.Alternatives#1/21 )/24 e.Rules-E#1/2 >/1
      {refalrts::icSave, 0, 43, 9},
      {refalrts::icBracketLeftSave, 0, 13, 43},
      // closed e.Written#1 as range 5
      // closed e.Expected#1 as range 43(9)
      {refalrts::ictVarLeftSave, 0, 17, 13},
      // closed e.NextRule#1 as range 13
      {refalrts::icSave, 0, 45, 2},
      {refalrts::icEPrepare, 0, 19, 45},
      {refalrts::icEStart, 0, 19, 45},
      {refalrts::icSave, 0, 47, 45},
      {refalrts::icBracketLeftSave, 0, 21, 47},
      // closed e.Rules-E#1 as range 47(2)
      {refalrts::ictVarLeftSave, 0, 25, 21},
      {refalrts::icBracketLeftSave, 0, 27, 21},
      {refalrts::iceRepeatLeft, 31, 13, 27},
      {refalrts::icEmpty, 0, 0, 27},
      // closed e.Alternatives#1 as range 21
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SentNamePos#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: (/29 AsIs: e.NextRule#1/31 AsIs: )/30 } Tile{ HalfReuse: </11 } & Map/33 & DoPrepareFunctions$4\1/34 Tile{ AsIs: e.Alternatives#1/21 } >/35 Tile{ HalfReuse: )/23 } Tile{ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written#1/5 HalfReuse: (/8 } Tile{ AsIs: e.NextRule#1/13 } Tile{ AsIs: )/24 } )/36 Tile{ HalfReuse: (/16 AsIs: e.Expected#1/43(9) HalfReuse: </12 } & Map/37 & ExtractExpected/38 e.Alternatives#1/21/39 >/41 )/42 Tile{ AsIs: e.Rules-B#1/19 } Tile{ AsIs: e.Rules-E#1/47(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocFunc, 0, 2, 33},
      {refalrts::icAllocFunc, 0, 3, 34},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
      {refalrts::icAllocFunc, 0, 2, 37},
      {refalrts::icAllocFunc, 0, 1, 38},
      {refalrts::icCopyEVar, 39, 21, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 41},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 42},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 23},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 16, 42, 0},
      {refalrts::icPushStack, 0, 0, 41},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 7, 36, 0},
      {refalrts::icLinkBrackets, 8, 24, 0},
      {refalrts::icLinkBrackets, 15, 23, 0},
      {refalrts::icPushStack, 0, 0, 35},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icLinkBrackets, 29, 30, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 47},
      {refalrts::icSpliceEVar, 0, 0, 19},
      {refalrts::icSpliceTile, 37, 42, 0},
      {refalrts::icSpliceTile, 16, 12, 0},
      {refalrts::icSpliceTile, 36, 36, 0},
      {refalrts::icSpliceTile, 24, 24, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceTile, 35, 35, 0},
      {refalrts::icSpliceEVar, 0, 0, 21},
      {refalrts::icSpliceTile, 33, 34, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceTile, 29, 30, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
      // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
      {refalrts::icBracketLeftSave, 0, 13, 9},
      // closed e.Written#1 as range 5
      // closed e.Expected#1 as range 9
      // closed e.Rules#1 as range 2
      {refalrts::ictVarLeftSave, 0, 17, 13},
      // closed e.NextRule#1 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Written#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Expected#1/9 {REMOVED TILE} e.Rules#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/17 } Tile{ HalfReuse: 'R'/16 } Tile{ HalfReuse: 'u'/8 HalfReuse: 'l'/11 HalfReuse: 'e'/15 } Tile{ HalfReuse: ' '/12 } Tile{ AsIs: e.NextRule#1/13 } Tile{ HalfReuse: ' '/7 }"not found"/19 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 19},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'R', 16},
      {refalrts::icReinitChar, 0, 'u', 8},
      {refalrts::icReinitChar, 0, 'l', 11},
      {refalrts::icReinitChar, 0, 'e', 15},
      {refalrts::icReinitChar, 0, ' ', 12},
      {refalrts::icReinitChar, 0, ' ', 7},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 8, 15, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DoPrepareFunctions

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_DoPrepareFunctions(
  "DoPrepareFunctions",
  scope_DoPrepareFunctions::raa,
  scope_DoPrepareFunctions::functions,
  scope_DoPrepareFunctions::idents,
  scope_DoPrepareFunctions::numbers,
  scope_DoPrepareFunctions::strings
);
refalrts::RefalFunction& DoPrepareFunctions = descr_DoPrepareFunctions;

} // unnamed namespace

#else
static refalrts::FnResult func_DoPrepareFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
  // </0 & DoPrepareFunctions/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
    // ( e.idx ) ( )
    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1
    context[43] = context[9];
    context[44] = context[10];
    if( ! refalrts::empty_seq( context[43], context[44] ) )
      continue;
    context[45] = context[2];
    context[46] = context[3];
    if( ! refalrts::empty_seq( context[45], context[46] ) )
      continue;
    // closed e.Written#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1 {REMOVED TILE}
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
    // ( e.idx ) ( ) e.idx
    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 e.Rules#1/2 >/1
    context[43] = context[9];
    context[44] = context[10];
    if( ! refalrts::empty_seq( context[43], context[44] ) )
      continue;
    // closed e.Written#1 as range 5
    // closed e.Rules#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 HalfReuse: & Map/11 HalfReuse: & DoPrepareFunctions$2\1/12 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], & Map );
    refalrts::reinit_name( context[12], & gen_DoPrepareFunctions_S2L1 );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
    // </0 & DoPrepareFunctions/4 (/7 e.Written-B#1/19 (/23 e.Next#1/25 )/24 e.Written-E#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.Next#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
    context[43] = context[9];
    context[44] = context[10];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[43], context[44] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Expected#1 as range 43(9)
    // closed e.Rules#1 as range 2
    context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    // closed e.Next#1 as range 13
    context[45] = context[5];
    context[46] = context[6];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[47] = context[45];
      context[48] = context[46];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[47], context[48] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      if( ! refalrts::repeated_evar_left( context[25], context[26], context[13], context[14], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.Written-E#1 as range 47(5)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} (/15 t.SrcPos#1/17 e.Next#1/13 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written-B#1/19 AsIs: (/23 AsIs: e.Next#1/25 AsIs: )/24 AsIs: e.Written-E#1/47(5) AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Expected#1/43(9) } Tile{ AsIs: )/12 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[43], context[44] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[11], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[45], context[46] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules-B#1/19 (/23 t.SentNamePos#1/25 (/29 e.NextRule#1/31 )/30 e.Alternatives#1/21 )/24 e.Rules-E#1/2 >/1
    context[43] = context[9];
    context[44] = context[10];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[43], context[44] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Written#1 as range 5
    // closed e.Expected#1 as range 43(9)
    context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    // closed e.NextRule#1 as range 13
    context[45] = context[2];
    context[46] = context[3];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[47] = context[45];
      context[48] = context[46];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[47], context[48] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.Rules-E#1 as range 47(2)
      context[26] = refalrts::tvar_left( context[25], context[21], context[22] );
      if( ! context[26] )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      if( ! refalrts::repeated_evar_left( context[31], context[32], context[13], context[14], context[27], context[28] ) )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;
      // closed e.Alternatives#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SentNamePos#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: (/29 AsIs: e.NextRule#1/31 AsIs: )/30 } Tile{ HalfReuse: </11 } & Map/33 & DoPrepareFunctions$4\1/34 Tile{ AsIs: e.Alternatives#1/21 } >/35 Tile{ HalfReuse: )/23 } Tile{ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written#1/5 HalfReuse: (/8 } Tile{ AsIs: e.NextRule#1/13 } Tile{ AsIs: )/24 } )/36 Tile{ HalfReuse: (/16 AsIs: e.Expected#1/43(9) HalfReuse: </12 } & Map/37 & ExtractExpected/38 e.Alternatives#1/21/39 >/41 )/42 Tile{ AsIs: e.Rules-B#1/19 } Tile{ AsIs: e.Rules-E#1/47(2) } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_name( context[33], & Map ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], & gen_DoPrepareFunctions_S4L1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], & Map ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], & ExtractExpected ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[39], context[40], context[21], context[22]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_call( context[11] );
      refalrts::reinit_close_bracket( context[23] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_open_bracket( context[16] );
      refalrts::reinit_open_call( context[12] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[16], context[42] );
      refalrts::push_stack( context[41] );
      refalrts::push_stack( context[12] );
      refalrts::link_brackets( context[7], context[36] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[15], context[23] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[11] );
      refalrts::link_brackets( context[29], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[37], context[42] );
      res = refalrts::splice_evar( res, context[16], context[12] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[45], context[46] ) );
  } while ( 0 );

  // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
  // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Written#1 as range 5
  // closed e.Expected#1 as range 9
  // closed e.Rules#1 as range 2
  context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextRule#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Written#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Expected#1/9 {REMOVED TILE} e.Rules#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/17 } Tile{ HalfReuse: 'R'/16 } Tile{ HalfReuse: 'u'/8 HalfReuse: 'l'/11 HalfReuse: 'e'/15 } Tile{ HalfReuse: ' '/12 } Tile{ AsIs: e.NextRule#1/13 } Tile{ HalfReuse: ' '/7 }"not found"/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[19], context[20], "not found", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ErrorAt );
  refalrts::reinit_char( context[16], 'R' );
  refalrts::reinit_char( context[8], 'u' );
  refalrts::reinit_char( context[11], 'l' );
  refalrts::reinit_char( context[15], 'e' );
  refalrts::reinit_char( context[12], ' ' );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_DoPrepareFunctions(func_DoPrepareFunctions, "DoPrepareFunctions");
refalrts::RefalFunction& DoPrepareFunctions = descr_DoPrepareFunctions;

} // unnamed namespace

#endif

//End of file
