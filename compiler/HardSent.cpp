// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #ADT-Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT-Brackets";
  }
};

// identifier #Atom
template <typename SREFAL_PARAM_INT>
struct ident_Atom {
  static const char *name() {
    return "Atom";
  }
};

// identifier #Brackets
template <typename SREFAL_PARAM_INT>
struct ident_Brackets {
  static const char *name() {
    return "Brackets";
  }
};

// identifier #E
template <typename SREFAL_PARAM_INT>
struct ident_E {
  static const char *name() {
    return "E";
  }
};

// identifier #S
template <typename SREFAL_PARAM_INT>
struct ident_S {
  static const char *name() {
    return "S";
  }
};

// identifier #T
template <typename SREFAL_PARAM_INT>
struct ident_T {
  static const char *name() {
    return "T";
  }
};

// identifier #TkChar
template <typename SREFAL_PARAM_INT>
struct ident_TkChar {
  static const char *name() {
    return "TkChar";
  }
};

// identifier #TkIdentifier
template <typename SREFAL_PARAM_INT>
struct ident_TkIdentifier {
  static const char *name() {
    return "TkIdentifier";
  }
};

// identifier #TkName
template <typename SREFAL_PARAM_INT>
struct ident_TkName {
  static const char *name() {
    return "TkName";
  }
};

// identifier #TkNumber
template <typename SREFAL_PARAM_INT>
struct ident_TkNumber {
  static const char *name() {
    return "TkNumber";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

extern refalrts::RefalFunction& Map;
extern refalrts::RefalFunction& Fetch;
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_PreparePatternHardSent_L1S5L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_PreparePatternHardSent_L1S5L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_PreparePatternHardSent_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_PreparePatternHardSent_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& PreparePatternHardSent;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& PreparePatternHardSent;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& CreateHardPattern_Aux;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& CreateHardPattern_Aux;
} // unnamed namespace

#endif
#ifdef INTERPRET
extern refalrts::RefalFunction& CreateHardPattern;
#else
extern refalrts::RefalFunction& CreateHardPattern;
#endif

#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_PreparePatternHardSent_L1S5L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_S<int>::name,
      & ident_T<int>::name,
      & ident_E<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 6, 0, 0},
      //FAST GEN: s.$
      //GLOBAL GEN: s.$
      // </0 & PreparePatternHardSent\1$5\1/4 s.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // 'e'
      // </0 & PreparePatternHardSent\1$5\1/4 'e'/5 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('e'), 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 'e'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # E/1 ]] }
      {refalrts::icReinitIdent, 0, 2, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // 't'
      // </0 & PreparePatternHardSent\1$5\1/4 't'/5 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('t'), 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 't'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # T/1 ]] }
      {refalrts::icReinitIdent, 0, 1, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // 's'
      // </0 & PreparePatternHardSent\1$5\1/4 's'/5 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('s'), 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 's'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # S/1 ]] }
      {refalrts::icReinitIdent, 0, 0, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_PreparePatternHardSent_L1S5L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_PreparePatternHardSent_L1S5L1(
  "PreparePatternHardSent\\1$5\\1",
  scope_gen_PreparePatternHardSent_L1S5L1::raa,
  scope_gen_PreparePatternHardSent_L1S5L1::functions,
  scope_gen_PreparePatternHardSent_L1S5L1::idents,
  scope_gen_PreparePatternHardSent_L1S5L1::numbers,
  scope_gen_PreparePatternHardSent_L1S5L1::strings
);
refalrts::RefalFunction& gen_PreparePatternHardSent_L1S5L1 = descr_gen_PreparePatternHardSent_L1S5L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_PreparePatternHardSent_L1S5L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & PreparePatternHardSent\1$5\1/4 s.idx#0/5 >/1
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
    // 'e'
    // </0 & PreparePatternHardSent\1$5\1/4 'e'/5 >/1
    if( ! refalrts::char_term( 'e', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 'e'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # E/1 ]] }
    refalrts::reinit_ident( context[1], & ident_E<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // 't'
    // </0 & PreparePatternHardSent\1$5\1/4 't'/5 >/1
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 't'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # T/1 ]] }
    refalrts::reinit_ident( context[1], & ident_T<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // 's'
  // </0 & PreparePatternHardSent\1$5\1/4 's'/5 >/1
  if( ! refalrts::char_term( 's', context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 's'/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # S/1 ]] }
  refalrts::reinit_ident( context[1], & ident_S<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_PreparePatternHardSent_L1S5L1(func_gen_PreparePatternHardSent_L1S5L1, "PreparePatternHardSent\\1$5\\1");
refalrts::RefalFunction& gen_PreparePatternHardSent_L1S5L1 = descr_gen_PreparePatternHardSent_L1S5L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_PreparePatternHardSent_L1 {
    static refalrts::RefalFunction *functions[] = {
      & PreparePatternHardSent,
      & Fetch,
      & gen_PreparePatternHardSent_L1S5L1
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_ADT_Brackets<int>::name,
      & ident_Brackets<int>::name,
      & ident_TkVariable<int>::name,
      & ident_Atom<int>::name,
      & ident_TkIdentifier<int>::name,
      & ident_TkName<int>::name,
      & ident_TkNumber<int>::name,
      & ident_TkChar<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 6, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: ( e.$ )
      //GLOBAL GEN: ( s.$ e.$ )
      // </0 & PreparePatternHardSent\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      // closed e.idxBV#0 as range 5
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TkChar s.idx )
      // </0 & PreparePatternHardSent\1/4 (/7 # TkChar/9 s.char#2/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 7, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icsVarLeft, 0, 10, 16},
      {refalrts::icEmpty, 0, 0, 16},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkChar/9 AsIs: s.char#2/10 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitIdent, 0, 3, 7},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TkNumber s.idx )
      // </0 & PreparePatternHardSent\1/4 (/7 # TkNumber/9 s.value#2/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 6, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icsVarLeft, 0, 10, 16},
      {refalrts::icEmpty, 0, 0, 16},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkNumber/9 AsIs: s.value#2/10 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitIdent, 0, 3, 7},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( # TkName e.idx )
      // </0 & PreparePatternHardSent\1/4 (/7 # TkName/9 e.name#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 5, 9},
      // closed e.name#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkName/9 AsIs: e.name#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitIdent, 0, 3, 7},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( # TkIdentifier e.idx )
      // </0 & PreparePatternHardSent\1/4 (/7 # TkIdentifier/9 e.ident#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 4, 9},
      // closed e.ident#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkIdentifier/9 AsIs: e.ident#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitIdent, 0, 3, 7},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // ( # TkVariable s.idx e.idx )
      // </0 & PreparePatternHardSent\1/4 (/7 # TkVariable/9 s.Mode#2/10 e.Index#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 2, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icsVarLeft, 0, 10, 16},
      // closed e.Index#2 as range 16(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Mode#2/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Fetch/7 HalfReuse: s.Mode2 #10/9 } & PreparePatternHardSent\1$5\1/11 >/12 (/13 Tile{ AsIs: e.Index#2/16(5) } )/14 (/15 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocFunc, 0, 2, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 1, 7},
      {refalrts::icReinitSVar, 0, 10, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 15, 8, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 16},
      {refalrts::icSpliceTile, 11, 13, 0},
      {refalrts::icTrash, 0, 0, 9},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # Brackets e.idx )
      // </0 & PreparePatternHardSent\1/4 (/7 # Brackets/9 e.inBrackets#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      // closed e.inBrackets#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & PreparePatternHardSent/9 AsIs: e.inBrackets#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( # ADT-Brackets ( e.idx ) e.idx )
      // </0 & PreparePatternHardSent\1/4 (/7 # ADT-Brackets/9 (/12 e.Name#2/10 )/13 e.inBrackets#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 9},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      // closed e.Name#2 as range 10
      // closed e.inBrackets#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & PreparePatternHardSent/4 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 7, 13, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_PreparePatternHardSent_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_PreparePatternHardSent_L1(
  "PreparePatternHardSent\\1",
  scope_gen_PreparePatternHardSent_L1::raa,
  scope_gen_PreparePatternHardSent_L1::functions,
  scope_gen_PreparePatternHardSent_L1::idents,
  scope_gen_PreparePatternHardSent_L1::numbers,
  scope_gen_PreparePatternHardSent_L1::strings
);
refalrts::RefalFunction& gen_PreparePatternHardSent_L1 = descr_gen_PreparePatternHardSent_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_PreparePatternHardSent_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & PreparePatternHardSent\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    // ( # TkChar s.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkChar/9 s.char#2/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkChar<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[10], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkChar/9 AsIs: s.char#2/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkNumber s.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkNumber/9 s.value#2/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkNumber<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[10], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkNumber/9 AsIs: s.value#2/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkName e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkName/9 e.name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkName<int>::name, context[9] ) )
      continue;
    // closed e.name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkName/9 AsIs: e.name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkIdentifier e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkIdentifier/9 e.ident#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkIdentifier<int>::name, context[9] ) )
      continue;
    // closed e.ident#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkIdentifier/9 AsIs: e.ident#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkVariable s.idx e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkVariable/9 s.Mode#2/10 e.Index#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkVariable<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[10], context[16], context[17] ) )
      continue;
    // closed e.Index#2 as range 16(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#2/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Fetch/7 HalfReuse: s.Mode2 #10/9 } & PreparePatternHardSent\1$5\1/11 >/12 (/13 Tile{ AsIs: e.Index#2/16(5) } )/14 (/15 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_name( context[11], & gen_PreparePatternHardSent_L1S5L1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], & Fetch );
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[15], context[8] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Brackets e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # Brackets/9 e.inBrackets#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Brackets<int>::name, context[9] ) )
      continue;
    // closed e.inBrackets#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & PreparePatternHardSent/9 AsIs: e.inBrackets#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], & PreparePatternHardSent );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( # ADT-Brackets ( e.idx ) e.idx )
  // </0 & PreparePatternHardSent\1/4 (/7 # ADT-Brackets/9 (/12 e.Name#2/10 )/13 e.inBrackets#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_ADT_Brackets<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Name#2 as range 10
  // closed e.inBrackets#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & PreparePatternHardSent/4 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], & PreparePatternHardSent );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_PreparePatternHardSent_L1(func_gen_PreparePatternHardSent_L1, "PreparePatternHardSent\\1");
refalrts::RefalFunction& gen_PreparePatternHardSent_L1 = descr_gen_PreparePatternHardSent_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_PreparePatternHardSent {
    static refalrts::RefalFunction *functions[] = {
      & gen_PreparePatternHardSent_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & PreparePatternHardSent/4 e.Pattern#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Pattern#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & PreparePatternHardSent\1/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
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
  } // namespace scope_PreparePatternHardSent

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_PreparePatternHardSent(
  "PreparePatternHardSent",
  scope_PreparePatternHardSent::raa,
  scope_PreparePatternHardSent::functions,
  scope_PreparePatternHardSent::idents,
  scope_PreparePatternHardSent::numbers,
  scope_PreparePatternHardSent::strings
);
refalrts::RefalFunction& PreparePatternHardSent = descr_PreparePatternHardSent;

} // unnamed namespace

#else
static refalrts::FnResult func_PreparePatternHardSent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PreparePatternHardSent/4 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & PreparePatternHardSent\1/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_PreparePatternHardSent_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_PreparePatternHardSent(func_PreparePatternHardSent, "PreparePatternHardSent");
refalrts::RefalFunction& PreparePatternHardSent = descr_PreparePatternHardSent;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CreateHardPattern_Aux {
    static refalrts::RefalFunction *functions[] = {
      & CreateHardPattern_Aux
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_E<int>::name,
      & ident_Atom<int>::name,
      & ident_T<int>::name,
      & ident_S<int>::name,
      & ident_Brackets<int>::name,
      & ident_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"idx", 3}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 13, 0, 0},
      {refalrts::icIssueMemory, 29, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & CreateHardPattern-Aux/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( # ADT-Brackets ( e.idx ) e.idx )
      // </0 & CreateHardPattern-Aux/4 (/7 # ADT-Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketLeftSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 5, 5},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      {refalrts::icEmpty, 0, 0, 27},
      // closed e.Name#1 as range 10
      // closed e.body#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.body#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 7, 13, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( # ADT-Brackets ( e.idx ) e.idx ) e.idx
      // </0 & CreateHardPattern-Aux/4 (/7 # ADT-Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 e.smth#1/2 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketLeftSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 5, 5},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      // closed e.Name#1 as range 10
      // closed e.body#1 as range 5
      // closed e.smth#1 as range 27(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.body#1/5 } >/14 )/15 </16 Tile{ HalfReuse: & CreateHardPattern-Aux/8 AsIs: e.smth#1/27(2) AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icLinkBrackets, 7, 15, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 14, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 7, 13, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // e.idx ( # ADT-Brackets ( e.idx ) e.idx )
      // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # ADT-Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketRightSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 5, 5},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      // closed e.smth#1 as range 27(2)
      // closed e.Name#1 as range 10
      // closed e.body#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/27(2) HalfReuse: >/7 HalfReuse: (/9 HalfReuse: # ADT-Brackets/12 } (/14 Tile{ AsIs: e.Name#1/10 } )/15 </16 Tile{ HalfReuse: & CreateHardPattern-Aux/13 AsIs: e.body#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icReinitIdent, 0, 5, 12},
      {refalrts::icReinitFunc, 0, 0, 13},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 9, 1, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icLinkBrackets, 14, 15, 0},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 13},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 10},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( # Brackets e.idx )
      // </0 & CreateHardPattern-Aux/4 (/7 # Brackets/9 e.body#1/5 )/8 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketLeftSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 4, 5},
      {refalrts::icEmpty, 0, 0, 27},
      // closed e.body#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CreateHardPattern-Aux/9 AsIs: e.body#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 4, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( # Brackets e.idx ) e.idx
      // </0 & CreateHardPattern-Aux/4 (/7 # Brackets/9 e.body#1/5 )/8 e.smth#1/2 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketLeftSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 4, 5},
      // closed e.body#1 as range 5
      // closed e.smth#1 as range 27(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CreateHardPattern-Aux/9 AsIs: e.body#1/5 HalfReuse: >/8 } )/10 </11 & CreateHardPattern-Aux/12 Tile{ AsIs: e.smth#1/27(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 0, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 4, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icLinkBrackets, 0, 10, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 27},
      {refalrts::icSpliceTile, 10, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // e.idx ( # Brackets e.idx )
      // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # Brackets/9 e.body#1/5 )/8 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketRightSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 4, 5},
      // closed e.smth#1 as range 27(2)
      // closed e.body#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/27(2) HalfReuse: >/7 HalfReuse: (/9 } # Brackets/10 </11 & CreateHardPattern-Aux/12 Tile{ AsIs: e.body#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocIdent, 0, 4, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 0, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 9, 1, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 10, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +34, 0, 0},
      // ( # S ( e.idx ) ( e.idx ) ) e.idx
      // </0 & CreateHardPattern-Aux/4 (/7 # S/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 e.smth#1/2 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketLeftSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 3, 5},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      {refalrts::icBracketLeftSave, 0, 14, 5},
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.name#1 as range 10
      // closed e.pattern#1 as range 14
      // closed e.smth#1 as range 27(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } (/18 # S/19 (/20"idx"/21 )/23 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 AsIs: # S/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } )/24 )/25 )/26 Tile{ HalfReuse: </17 HalfReuse: & CreateHardPattern-Aux/8 AsIs: e.smth#1/27(2) AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
      {refalrts::icAllocIdent, 0, 3, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
      {refalrts::icAllocString, 0, 0, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icLinkBrackets, 18, 26, 0},
      {refalrts::icLinkBrackets, 0, 25, 0},
      {refalrts::icLinkBrackets, 4, 24, 0},
      {refalrts::icLinkBrackets, 7, 16, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icLinkBrackets, 20, 23, 0},
      {refalrts::icSetRes, 0, 0, 17},
      {refalrts::icSpliceTile, 24, 26, 0},
      {refalrts::icSpliceTile, 0, 16, 0},
      {refalrts::icSpliceTile, 18, 23, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +31, 0, 0},
      // e.idx ( # S ( e.idx ) ( e.idx ) )
      // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # S/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketRightSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 3, 5},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      {refalrts::icBracketLeftSave, 0, 14, 5},
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.smth#1 as range 27(2)
      // closed e.name#1 as range 10
      // closed e.pattern#1 as range 14
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/27(2) } >/18 (/19 # S/20 (/21"idx"/22 )/24 (/25 (/26 Tile{ AsIs: (/7 AsIs: # S/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } Tile{ AsIs: )/17 AsIs: )/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
      {refalrts::icAllocIdent, 0, 3, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 21},
      {refalrts::icAllocString, 0, 0, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 19, 1, 0},
      {refalrts::icLinkBrackets, 25, 8, 0},
      {refalrts::icLinkBrackets, 26, 17, 0},
      {refalrts::icLinkBrackets, 7, 16, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icLinkBrackets, 21, 24, 0},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 17},
      {refalrts::icSpliceTile, 7, 16, 0},
      {refalrts::icSpliceTile, 18, 26, 0},
      {refalrts::icSpliceEVar, 0, 0, 27},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +34, 0, 0},
      // ( # T ( e.idx ) ( e.idx ) ) e.idx
      // </0 & CreateHardPattern-Aux/4 (/7 # T/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 e.smth#1/2 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketLeftSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 2, 5},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      {refalrts::icBracketLeftSave, 0, 14, 5},
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.name#1 as range 10
      // closed e.pattern#1 as range 14
      // closed e.smth#1 as range 27(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } (/18 # T/19 (/20"idx"/21 )/23 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 AsIs: # T/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } )/24 )/25 )/26 Tile{ HalfReuse: </17 HalfReuse: & CreateHardPattern-Aux/8 AsIs: e.smth#1/27(2) AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
      {refalrts::icAllocIdent, 0, 2, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
      {refalrts::icAllocString, 0, 0, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icLinkBrackets, 18, 26, 0},
      {refalrts::icLinkBrackets, 0, 25, 0},
      {refalrts::icLinkBrackets, 4, 24, 0},
      {refalrts::icLinkBrackets, 7, 16, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icLinkBrackets, 20, 23, 0},
      {refalrts::icSetRes, 0, 0, 17},
      {refalrts::icSpliceTile, 24, 26, 0},
      {refalrts::icSpliceTile, 0, 16, 0},
      {refalrts::icSpliceTile, 18, 23, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +31, 0, 0},
      // e.idx ( # T ( e.idx ) ( e.idx ) )
      // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # T/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketRightSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 2, 5},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      {refalrts::icBracketLeftSave, 0, 14, 5},
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.smth#1 as range 27(2)
      // closed e.name#1 as range 10
      // closed e.pattern#1 as range 14
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/27(2) } >/18 (/19 # T/20 (/21"idx"/22 )/24 (/25 (/26 Tile{ AsIs: (/7 AsIs: # T/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } Tile{ AsIs: )/17 AsIs: )/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
      {refalrts::icAllocIdent, 0, 2, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 21},
      {refalrts::icAllocString, 0, 0, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 19, 1, 0},
      {refalrts::icLinkBrackets, 25, 8, 0},
      {refalrts::icLinkBrackets, 26, 17, 0},
      {refalrts::icLinkBrackets, 7, 16, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icLinkBrackets, 21, 24, 0},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 17},
      {refalrts::icSpliceTile, 7, 16, 0},
      {refalrts::icSpliceTile, 18, 26, 0},
      {refalrts::icSpliceEVar, 0, 0, 27},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # Atom e.idx ) e.idx
      // </0 & CreateHardPattern-Aux/4 (/7 # Atom/9 e.attr#1/5 )/8 e.smth#1/2 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketLeftSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 1, 5},
      // closed e.attr#1 as range 5
      // closed e.smth#1 as range 27(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Atom/9 AsIs: e.attr#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/27(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 27},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // e.idx ( # Atom e.idx )
      // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # Atom/9 e.attr#1/5 )/8 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icBracketRightSave, 0, 5, 27},
      {refalrts::icIdentLeftSave, 9, 1, 5},
      // closed e.smth#1 as range 27(2)
      // closed e.attr#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/27(2) HalfReuse: >/7 HalfReuse: (/9 } Tile{ HalfReuse: # Atom/8 } Tile{ AsIs: e.attr#1/5 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icReinitIdent, 0, 1, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 9, 1, 0},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      //
      // </0 & CreateHardPattern-Aux/4 >/1
      {refalrts::icSave, 0, 27, 2},
      {refalrts::icEmpty, 0, 0, 27},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CreateHardPattern-Aux/4 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & CreateHardPattern-Aux/4 e.smth#1/2 >/1
      // closed e.smth#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/5 # E/6 (/7"idx"/8 )/10 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: e.smth#1/2 HalfReuse: )/1 } )/11 )/12 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 5},
      {refalrts::icAllocIdent, 0, 0, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
      {refalrts::icAllocString, 0, 0, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 5, 12, 0},
      {refalrts::icLinkBrackets, 0, 11, 0},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icLinkBrackets, 7, 10, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 5, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CreateHardPattern_Aux

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_CreateHardPattern_Aux(
  "CreateHardPattern-Aux",
  scope_CreateHardPattern_Aux::raa,
  scope_CreateHardPattern_Aux::functions,
  scope_CreateHardPattern_Aux::idents,
  scope_CreateHardPattern_Aux::numbers,
  scope_CreateHardPattern_Aux::strings
);
refalrts::RefalFunction& CreateHardPattern_Aux = descr_CreateHardPattern_Aux;

} // unnamed namespace

#else
static refalrts::FnResult func_CreateHardPattern_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & CreateHardPattern-Aux/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & CreateHardPattern-Aux/4 (/7 # ADT-Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    // closed e.Name#1 as range 10
    // closed e.body#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.body#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # ADT-Brackets ( e.idx ) e.idx ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/7 # ADT-Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 e.smth#1/2 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.body#1 as range 5
    // closed e.smth#1 as range 27(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.body#1/5 } >/14 )/15 </16 Tile{ HalfReuse: & CreateHardPattern-Aux/8 AsIs: e.smth#1/27(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], & CreateHardPattern_Aux );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # ADT-Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.smth#1 as range 27(2)
    // closed e.Name#1 as range 10
    // closed e.body#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/27(2) HalfReuse: >/7 HalfReuse: (/9 HalfReuse: # ADT-Brackets/12 } (/14 Tile{ AsIs: e.Name#1/10 } )/15 </16 Tile{ HalfReuse: & CreateHardPattern-Aux/13 AsIs: e.body#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_ident( context[12], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_name( context[13], & CreateHardPattern_Aux );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Brackets e.idx )
    // </0 & CreateHardPattern-Aux/4 (/7 # Brackets/9 e.body#1/5 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    // closed e.body#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CreateHardPattern-Aux/9 AsIs: e.body#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], & CreateHardPattern_Aux );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Brackets e.idx ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/7 # Brackets/9 e.body#1/5 )/8 e.smth#1/2 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.body#1 as range 5
    // closed e.smth#1 as range 27(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CreateHardPattern-Aux/9 AsIs: e.body#1/5 HalfReuse: >/8 } )/10 </11 & CreateHardPattern-Aux/12 Tile{ AsIs: e.smth#1/27(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & CreateHardPattern_Aux ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], & CreateHardPattern_Aux );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx ( # Brackets e.idx )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # Brackets/9 e.body#1/5 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.smth#1 as range 27(2)
    // closed e.body#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/27(2) HalfReuse: >/7 HalfReuse: (/9 } # Brackets/10 </11 & CreateHardPattern-Aux/12 Tile{ AsIs: e.body#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & CreateHardPattern_Aux ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # S ( e.idx ) ( e.idx ) ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/7 # S/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 e.smth#1/2 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_S<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.name#1 as range 10
    // closed e.pattern#1 as range 14
    // closed e.smth#1 as range 27(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/18 # S/19 (/20"idx"/21 )/23 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 AsIs: # S/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } )/24 )/25 )/26 Tile{ HalfReuse: </17 HalfReuse: & CreateHardPattern-Aux/8 AsIs: e.smth#1/27(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_S<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_name( context[8], & CreateHardPattern_Aux );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[18], context[26] );
    refalrts::link_brackets( context[0], context[25] );
    refalrts::link_brackets( context[4], context[24] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[20], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx ( # S ( e.idx ) ( e.idx ) )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # S/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_S<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.smth#1 as range 27(2)
    // closed e.name#1 as range 10
    // closed e.pattern#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/27(2) } >/18 (/19 # S/20 (/21"idx"/22 )/24 (/25 (/26 Tile{ AsIs: (/7 AsIs: # S/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } Tile{ AsIs: )/17 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[20], & ident_S<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[26], context[17] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[7], context[16] );
    res = refalrts::splice_evar( res, context[18], context[26] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # T ( e.idx ) ( e.idx ) ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/7 # T/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 e.smth#1/2 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_T<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.name#1 as range 10
    // closed e.pattern#1 as range 14
    // closed e.smth#1 as range 27(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/18 # T/19 (/20"idx"/21 )/23 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 AsIs: # T/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } )/24 )/25 )/26 Tile{ HalfReuse: </17 HalfReuse: & CreateHardPattern-Aux/8 AsIs: e.smth#1/27(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_T<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_name( context[8], & CreateHardPattern_Aux );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[18], context[26] );
    refalrts::link_brackets( context[0], context[25] );
    refalrts::link_brackets( context[4], context[24] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[20], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx ( # T ( e.idx ) ( e.idx ) )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # T/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_T<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.smth#1 as range 27(2)
    // closed e.name#1 as range 10
    // closed e.pattern#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/27(2) } >/18 (/19 # T/20 (/21"idx"/22 )/24 (/25 (/26 Tile{ AsIs: (/7 AsIs: # T/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } Tile{ AsIs: )/17 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[20], & ident_T<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[26], context[17] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[7], context[16] );
    res = refalrts::splice_evar( res, context[18], context[26] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Atom e.idx ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/7 # Atom/9 e.attr#1/5 )/8 e.smth#1/2 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.attr#1 as range 5
    // closed e.smth#1 as range 27(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Atom/9 AsIs: e.attr#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/27(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx ( # Atom e.idx )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # Atom/9 e.attr#1/5 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.smth#1 as range 27(2)
    // closed e.attr#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/27(2) HalfReuse: >/7 HalfReuse: (/9 } Tile{ HalfReuse: # Atom/8 } Tile{ AsIs: e.attr#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_ident( context[8], & ident_Atom<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //
    // </0 & CreateHardPattern-Aux/4 >/1
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & CreateHardPattern-Aux/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // e.idx
  // </0 & CreateHardPattern-Aux/4 e.smth#1/2 >/1
  // closed e.smth#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/5 # E/6 (/7"idx"/8 )/10 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: e.smth#1/2 HalfReuse: )/1 } )/11 )/12 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_E<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "idx", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[5], context[12] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_CreateHardPattern_Aux(func_CreateHardPattern_Aux, "CreateHardPattern-Aux");
refalrts::RefalFunction& CreateHardPattern_Aux = descr_CreateHardPattern_Aux;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CreateHardPattern {
    static refalrts::RefalFunction *functions[] = {
      & PreparePatternHardSent,
      & CreateHardPattern_Aux
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 8, 0, 0},
      // </0 & CreateHardPattern/4 e.pattern#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.pattern#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & CreateHardPattern-Aux/6 Tile{ AsIs: </0 Reuse: & PreparePatternHardSent/4 AsIs: e.pattern#1/2 AsIs: >/1 } >/7 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 1, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CreateHardPattern

} // unnamed namespace

refalrts::RASLFunction descr_CreateHardPattern(
  "CreateHardPattern",
  scope_CreateHardPattern::raa,
  scope_CreateHardPattern::functions,
  scope_CreateHardPattern::idents,
  scope_CreateHardPattern::numbers,
  scope_CreateHardPattern::strings
);
refalrts::RefalFunction& CreateHardPattern = descr_CreateHardPattern;

#else
static refalrts::FnResult func_CreateHardPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CreateHardPattern/4 e.pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CreateHardPattern-Aux/6 Tile{ AsIs: </0 Reuse: & PreparePatternHardSent/4 AsIs: e.pattern#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & CreateHardPattern_Aux ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & PreparePatternHardSent );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_CreateHardPattern(func_CreateHardPattern, "CreateHardPattern");
refalrts::RefalFunction& CreateHardPattern = descr_CreateHardPattern;

#endif

//End of file
