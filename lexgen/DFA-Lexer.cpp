// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #EOF
template <typename SREFAL_PARAM_INT>
struct ident_EOF {
  static const char *name() {
    return "EOF";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
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

// identifier #TError
template <typename SREFAL_PARAM_INT>
struct ident_TError {
  static const char *name() {
    return "TError";
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

// identifier #TNewLine
template <typename SREFAL_PARAM_INT>
struct ident_TNewLine {
  static const char *name() {
    return "TNewLine";
  }
};

// identifier #TPunctuation
template <typename SREFAL_PARAM_INT>
struct ident_TPunctuation {
  static const char *name() {
    return "TPunctuation";
  }
};

// identifier #TSetName
template <typename SREFAL_PARAM_INT>
struct ident_TSetName {
  static const char *name() {
    return "TSetName";
  }
};

// identifier #TUnexpectedChar
template <typename SREFAL_PARAM_INT>
struct ident_TUnexpectedChar {
  static const char *name() {
    return "TUnexpectedChar";
  }
};

// identifier #TokenError
template <typename SREFAL_PARAM_INT>
struct ident_TokenError {
  static const char *name() {
    return "TokenError";
  }
};

extern refalrts::RefalFunction& EscapeString;
extern refalrts::RefalFunction& Fetch;
extern refalrts::RefalFunction& Seq;
extern refalrts::RefalFunction& Map;
extern refalrts::RefalFunction& MapReduce;
extern refalrts::RefalFunction& Inc;
extern refalrts::RefalFunction& IntFromStr;
extern refalrts::RefalFunction& Chr;
extern refalrts::RefalFunction& DFA_TextFromToken;
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_DFA_Tokens_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_DFA_Tokens_L2;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_DFA_Tokens_L3;
} // unnamed namespace

extern refalrts::RefalFunction& DFA_Tokens;
namespace /* unnamed */ {
extern refalrts::RefalFunction& LoTokens;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_FilterTokens_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& FilterTokens;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Unescape_S6L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Unescape;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Root;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& SetName;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Flush;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Literal;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Name;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ErrorFlush;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& FlushName;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Literal_Escape;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Literal_Quote;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& FlushNameTail;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Literal_DecCode;
} // unnamed namespace


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DFA_TextFromToken {
    static refalrts::RefalFunction *functions[] = {
      & EscapeString
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TEOF<int>::name,
      & ident_TErrorFlush<int>::name,
      & ident_TFlush<int>::name,
      & ident_TAlternative<int>::name,
      & ident_TDot<int>::name,
      & ident_TEquals<int>::name,
      & ident_TNamedFlush<int>::name,
      & ident_TName<int>::name,
      & ident_TLiteral<int>::name,
      & ident_TSetName<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"of file", 7},
      {"error flus", 10},
      {"flush ", 6},
      {"ed", 2},
      {"literal ", 8},
      {"me ", 3},
      {" n", 2}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 9, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & DFA-TextFromToken/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // # TSetName e.idx
      // </0 & DFA-TextFromToken/4 # TSetName/5 e.Name#1/2 >/1
      {refalrts::icIdentTerm, 0, 9, 5},
      // closed e.Name#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'e'/4 HalfReuse: 't'/5 }" n"/6 Tile{ HalfReuse: 'a'/1 }"me "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
      {refalrts::icAllocString, 0, 6, 6},
      {refalrts::icAllocString, 0, 5, 8},
      {refalrts::icReinitChar, 0, 's', 0},
      {refalrts::icReinitChar, 0, 'e', 4},
      {refalrts::icReinitChar, 0, 't', 5},
      {refalrts::icReinitChar, 0, 'a', 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // # TLiteral e.idx
      // </0 & DFA-TextFromToken/4 # TLiteral/5 e.Text#1/2 >/1
      {refalrts::icIdentTerm, 0, 8, 5},
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }"literal "/6 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeString/5 AsIs: e.Text#1/2 AsIs: >/1 } '\''/8 Tile{ ]] }
      {refalrts::icAllocString, 0, 4, 6},
      {refalrts::icAllocChar, 0, '\'', 8},
      {refalrts::icReinitChar, 0, '\'', 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // # TName e.idx
      // </0 & DFA-TextFromToken/4 # TName/5 e.Name#1/2 >/1
      {refalrts::icIdentTerm, 0, 7, 5},
      // closed e.Name#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 } Tile{ HalfReuse: 'e'/1 } ' '/6 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
      {refalrts::icAllocChar, 0, ' ', 6},
      {refalrts::icReinitChar, 0, 'n', 0},
      {refalrts::icReinitChar, 0, 'a', 4},
      {refalrts::icReinitChar, 0, 'm', 5},
      {refalrts::icReinitChar, 0, 'e', 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // # TNamedFlush e.idx
      // </0 & DFA-TextFromToken/4 # TNamedFlush/5 e.Name#1/2 >/1
      {refalrts::icIdentTerm, 0, 6, 5},
      // closed e.Name#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 }"ed"/6 Tile{ HalfReuse: ' '/1 }"flush "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
      {refalrts::icAllocString, 0, 3, 6},
      {refalrts::icAllocString, 0, 2, 8},
      {refalrts::icReinitChar, 0, 'n', 0},
      {refalrts::icReinitChar, 0, 'a', 4},
      {refalrts::icReinitChar, 0, 'm', 5},
      {refalrts::icReinitChar, 0, ' ', 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // # TEquals
      // </0 & DFA-TextFromToken/4 # TEquals/5 >/1
      {refalrts::icIdentTerm, 0, 5, 5},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '='/5 HalfReuse: '\"'/1 ]] }
      {refalrts::icReinitChar, 0, '\"', 4},
      {refalrts::icReinitChar, 0, '=', 5},
      {refalrts::icReinitChar, 0, '\"', 1},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // # TDot
      // </0 & DFA-TextFromToken/4 # TDot/5 >/1
      {refalrts::icIdentTerm, 0, 4, 5},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '.'/5 HalfReuse: '\"'/1 ]] }
      {refalrts::icReinitChar, 0, '\"', 4},
      {refalrts::icReinitChar, 0, '.', 5},
      {refalrts::icReinitChar, 0, '\"', 1},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // # TAlternative
      // </0 & DFA-TextFromToken/4 # TAlternative/5 >/1
      {refalrts::icIdentTerm, 0, 3, 5},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '|'/5 HalfReuse: '\"'/1 ]] }
      {refalrts::icReinitChar, 0, '\"', 4},
      {refalrts::icReinitChar, 0, '|', 5},
      {refalrts::icReinitChar, 0, '\"', 1},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // # TFlush
      // </0 & DFA-TextFromToken/4 # TFlush/5 >/1
      {refalrts::icIdentTerm, 0, 2, 5},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'f'/0 HalfReuse: 'l'/4 HalfReuse: 'u'/5 HalfReuse: 's'/1 } 'h'/6 Tile{ ]] }
      {refalrts::icAllocChar, 0, 'h', 6},
      {refalrts::icReinitChar, 0, 'f', 0},
      {refalrts::icReinitChar, 0, 'l', 4},
      {refalrts::icReinitChar, 0, 'u', 5},
      {refalrts::icReinitChar, 0, 's', 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // # TErrorFlush e.idx
      // </0 & DFA-TextFromToken/4 # TErrorFlush/5 e.Text#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }"error flus"/6 Tile{ HalfReuse: 'h'/0 HalfReuse: ' '/4 HalfReuse: '\"'/5 AsIs: e.Text#1/2 HalfReuse: '\"'/1 ]] }
      {refalrts::icAllocString, 0, 1, 6},
      {refalrts::icReinitChar, 0, 'h', 0},
      {refalrts::icReinitChar, 0, ' ', 4},
      {refalrts::icReinitChar, 0, '\"', 5},
      {refalrts::icReinitChar, 0, '\"', 1},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // # TEOF
      // </0 & DFA-TextFromToken/4 # TEOF/5 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 }"of file"/6 Tile{ ]] }
      {refalrts::icAllocString, 0, 0, 6},
      {refalrts::icReinitChar, 0, 'e', 0},
      {refalrts::icReinitChar, 0, 'n', 4},
      {refalrts::icReinitChar, 0, 'd', 5},
      {refalrts::icReinitChar, 0, ' ', 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DFA_TextFromToken

} // unnamed namespace

refalrts::RASLFunction descr_DFA_TextFromToken(
  "DFA-TextFromToken",
  scope_DFA_TextFromToken::raa,
  scope_DFA_TextFromToken::functions,
  scope_DFA_TextFromToken::idents,
  scope_DFA_TextFromToken::numbers,
  scope_DFA_TextFromToken::strings
);
refalrts::RefalFunction& DFA_TextFromToken = descr_DFA_TextFromToken;

#else
static refalrts::FnResult func_DFA_TextFromToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & DFA-TextFromToken/4 s.idx#0/5 e.idxV#0/2 >/1
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
    // # TSetName e.idx
    // </0 & DFA-TextFromToken/4 # TSetName/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TSetName<int>::name, context[5] ) )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'e'/4 HalfReuse: 't'/5 }" n"/6 Tile{ HalfReuse: 'a'/1 }"me "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], " n", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "me ", 3 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TLiteral e.idx
    // </0 & DFA-TextFromToken/4 # TLiteral/5 e.Text#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TLiteral<int>::name, context[5] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"literal "/6 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeString/5 AsIs: e.Text#1/2 AsIs: >/1 } '\''/8 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "literal ", 8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], '\'' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\'' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & EscapeString );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TName e.idx
    // </0 & DFA-TextFromToken/4 # TName/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TName<int>::name, context[5] ) )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 } Tile{ HalfReuse: 'e'/1 } ' '/6 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TNamedFlush e.idx
    // </0 & DFA-TextFromToken/4 # TNamedFlush/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TNamedFlush<int>::name, context[5] ) )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 }"ed"/6 Tile{ HalfReuse: ' '/1 }"flush "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "ed", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "flush ", 6 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TEquals
    // </0 & DFA-TextFromToken/4 # TEquals/5 >/1
    if( ! refalrts::ident_term(  & ident_TEquals<int>::name, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '='/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_char( context[5], '=' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TDot
    // </0 & DFA-TextFromToken/4 # TDot/5 >/1
    if( ! refalrts::ident_term(  & ident_TDot<int>::name, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '.'/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_char( context[5], '.' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TAlternative
    // </0 & DFA-TextFromToken/4 # TAlternative/5 >/1
    if( ! refalrts::ident_term(  & ident_TAlternative<int>::name, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '|'/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_char( context[5], '|' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TFlush
    // </0 & DFA-TextFromToken/4 # TFlush/5 >/1
    if( ! refalrts::ident_term(  & ident_TFlush<int>::name, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'f'/0 HalfReuse: 'l'/4 HalfReuse: 'u'/5 HalfReuse: 's'/1 } 'h'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'h' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'f' );
    refalrts::reinit_char( context[4], 'l' );
    refalrts::reinit_char( context[5], 'u' );
    refalrts::reinit_char( context[1], 's' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TErrorFlush e.idx
    // </0 & DFA-TextFromToken/4 # TErrorFlush/5 e.Text#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TErrorFlush<int>::name, context[5] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"error flus"/6 Tile{ HalfReuse: 'h'/0 HalfReuse: ' '/4 HalfReuse: '\"'/5 AsIs: e.Text#1/2 HalfReuse: '\"'/1 ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "error flus", 10 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'h' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[5], '\"' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // # TEOF
  // </0 & DFA-TextFromToken/4 # TEOF/5 >/1
  if( ! refalrts::ident_term(  & ident_TEOF<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 }"of file"/6 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "of file", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], 'n' );
  refalrts::reinit_char( context[5], 'd' );
  refalrts::reinit_char( context[1], ' ' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_DFA_TextFromToken(func_DFA_TextFromToken, "DFA-TextFromToken");
refalrts::RefalFunction& DFA_TextFromToken = descr_DFA_TextFromToken;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_DFA_Tokens_L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & DFA-Tokens\1/4 (/7 e.Line#2/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Line#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DFA-Tokens\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: '\n'/1 ]] }
      {refalrts::icReinitChar, 0, '\n', 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_DFA_Tokens_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_DFA_Tokens_L1(
  "DFA-Tokens\\1",
  scope_gen_DFA_Tokens_L1::raa,
  scope_gen_DFA_Tokens_L1::functions,
  scope_gen_DFA_Tokens_L1::idents,
  scope_gen_DFA_Tokens_L1::numbers,
  scope_gen_DFA_Tokens_L1::strings
);
refalrts::RefalFunction& gen_DFA_Tokens_L1 = descr_gen_DFA_Tokens_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_DFA_Tokens_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & DFA-Tokens\1/4 (/7 e.Line#2/5 )/8 >/1
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
  // closed e.Line#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DFA-Tokens\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char( context[1], '\n' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_DFA_Tokens_L1(func_gen_DFA_Tokens_L1, "DFA-Tokens\\1");
refalrts::RefalFunction& gen_DFA_Tokens_L1 = descr_gen_DFA_Tokens_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_DFA_Tokens_L2 {
    static refalrts::RefalFunction *functions[] = {
      & Inc
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TNewLine<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 13, 0, 0},
      //FAST GEN: s.$ ( e.$ )
      //GLOBAL GEN: s.$ ( s.$ e.$ )
      // </0 & DFA-Tokens\2/4 s.idx#0/9 (/7 s.idxVB#0/10 e.idxVBV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 10, 5},
      // closed e.idxVBV#0 as range 5
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // s.idx ( # TNewLine )
      // </0 & DFA-Tokens\2/4 s.LineNumber#2/9 (/7 # TNewLine/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 10},
      {refalrts::icSave, 0, 11, 5},
      {refalrts::icEmpty, 0, 0, 11},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} # TNewLine/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNumber#2/9 HalfReuse: >/7 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx ( s.idx e.idx )
      // </0 & DFA-Tokens\2/4 s.LineNumber#2/9 (/7 s.TokName#2/10 e.Content#2/5 )/8 >/1
      // closed e.Content#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DFA-Tokens\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber#2/9 AsIs: (/7 AsIs: s.TokName#2/10 } Tile{ HalfReuse: s.LineNumber2 #9/8 } Tile{ AsIs: e.Content#2/5 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitSVar, 0, 9, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_DFA_Tokens_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_DFA_Tokens_L2(
  "DFA-Tokens\\2",
  scope_gen_DFA_Tokens_L2::raa,
  scope_gen_DFA_Tokens_L2::functions,
  scope_gen_DFA_Tokens_L2::idents,
  scope_gen_DFA_Tokens_L2::numbers,
  scope_gen_DFA_Tokens_L2::strings
);
refalrts::RefalFunction& gen_DFA_Tokens_L2 = descr_gen_DFA_Tokens_L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_DFA_Tokens_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: s.$ ( e.$ )
  //GLOBAL GEN: s.$ ( s.$ e.$ )
  // </0 & DFA-Tokens\2/4 s.idx#0/9 (/7 s.idxVB#0/10 e.idxVBV#0/5 )/8 >/1
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
  // closed e.idxVBV#0 as range 5
  do {
    refalrts::start_sentence();
    // s.idx ( # TNewLine )
    // </0 & DFA-Tokens\2/4 s.LineNumber#2/9 (/7 # TNewLine/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TNewLine<int>::name, context[10] ) )
      continue;
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # TNewLine/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNumber#2/9 HalfReuse: >/7 } Tile{ ]] }
    refalrts::update_name( context[4], & Inc );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx ( s.idx e.idx )
  // </0 & DFA-Tokens\2/4 s.LineNumber#2/9 (/7 s.TokName#2/10 e.Content#2/5 )/8 >/1
  // closed e.Content#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DFA-Tokens\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber#2/9 AsIs: (/7 AsIs: s.TokName#2/10 } Tile{ HalfReuse: s.LineNumber2 #9/8 } Tile{ AsIs: e.Content#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_DFA_Tokens_L2(func_gen_DFA_Tokens_L2, "DFA-Tokens\\2");
refalrts::RefalFunction& gen_DFA_Tokens_L2 = descr_gen_DFA_Tokens_L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_DFA_Tokens_L3 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TEOF<int>::name,
      & ident_EOF<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 14, 0, 0},
      //FAST GEN: s.$ e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & DFA-Tokens\3/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +13, 0, 0},
      // s.idx e.idx ( # EOF s.idx )
      // </0 & DFA-Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/2 (/8 # EOF/10 s.EOFLineNumber#2/11 )/9 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icBracketRightSave, 0, 6, 12},
      {refalrts::icIdentLeftSave, 10, 1, 6},
      // closed e.Tokens#2 as range 12(2)
      {refalrts::icsVarLeft, 0, 11, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DFA-Tokens\3/4 s.LineNumber#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/12(2) } Tile{ AsIs: (/8 Reuse: # TEOF/10 AsIs: s.EOFLineNumber#2/11 AsIs: )/9 } Tile{ ]] }
      {refalrts::icUpdateIdent, 0, 0, 10},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icSpliceEVar, 0, 0, 12},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx e.idx
      // </0 & DFA-Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/2 >/1
      // closed e.Tokens#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/2 } Tile{ HalfReuse: (/0 HalfReuse: # TEOF/4 AsIs: s.LineNumber#2/5 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 0, 5, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_DFA_Tokens_L3

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_DFA_Tokens_L3(
  "DFA-Tokens\\3",
  scope_gen_DFA_Tokens_L3::raa,
  scope_gen_DFA_Tokens_L3::functions,
  scope_gen_DFA_Tokens_L3::idents,
  scope_gen_DFA_Tokens_L3::numbers,
  scope_gen_DFA_Tokens_L3::strings
);
refalrts::RefalFunction& gen_DFA_Tokens_L3 = descr_gen_DFA_Tokens_L3;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_DFA_Tokens_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & DFA-Tokens\3/4 s.idx#0/5 e.idxV#0/2 >/1
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
    // s.idx e.idx ( # EOF s.idx )
    // </0 & DFA-Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/2 (/8 # EOF/10 s.EOFLineNumber#2/11 )/9 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_right( context[6], context[7], context[12], context[13] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_left(  & ident_EOF<int>::name, context[6], context[7] );
    if( ! context[10] )
      continue;
    // closed e.Tokens#2 as range 12(2)
    if( ! refalrts::svar_left( context[11], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DFA-Tokens\3/4 s.LineNumber#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/12(2) } Tile{ AsIs: (/8 Reuse: # TEOF/10 AsIs: s.EOFLineNumber#2/11 AsIs: )/9 } Tile{ ]] }
    refalrts::update_ident( context[10], & ident_TEOF<int>::name );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx e.idx
  // </0 & DFA-Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/2 >/1
  // closed e.Tokens#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/2 } Tile{ HalfReuse: (/0 HalfReuse: # TEOF/4 AsIs: s.LineNumber#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TEOF<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_DFA_Tokens_L3(func_gen_DFA_Tokens_L3, "DFA-Tokens\\3");
refalrts::RefalFunction& gen_DFA_Tokens_L3 = descr_gen_DFA_Tokens_L3;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DFA_Tokens {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_DFA_Tokens_L3,
      & Inc,
      & gen_DFA_Tokens_L2,
      & MapReduce,
      & LoTokens,
      & gen_DFA_Tokens_L1,
      & Map,
      & Seq
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 22, 0, 0},
      // </0 & DFA-Tokens/4 s.FirstLineNumber#1/5 e.Lines#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.Lines#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Lines#1/2 } </6 & Seq/7 (/8 & Map/9 & DFA-Tokens\1/10 )/11 & LoTokens/12 (/13 & MapReduce/14 & DFA-Tokens\2/15 </16 & Inc/17 Tile{ AsIs: s.FirstLineNumber#1/5 } >/18 )/19 & DFA-Tokens\3/20 >/21 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icAllocFunc, 0, 8, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icAllocFunc, 0, 7, 9},
      {refalrts::icAllocFunc, 0, 6, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icAllocFunc, 0, 5, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
      {refalrts::icAllocFunc, 0, 4, 14},
      {refalrts::icAllocFunc, 0, 3, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
      {refalrts::icAllocFunc, 0, 2, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icAllocFunc, 0, 1, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icLinkBrackets, 13, 19, 0},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icLinkBrackets, 8, 11, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 18, 21, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icSpliceTile, 6, 17, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DFA_Tokens

} // unnamed namespace

refalrts::RASLFunction descr_DFA_Tokens(
  "DFA-Tokens",
  scope_DFA_Tokens::raa,
  scope_DFA_Tokens::functions,
  scope_DFA_Tokens::idents,
  scope_DFA_Tokens::numbers,
  scope_DFA_Tokens::strings
);
refalrts::RefalFunction& DFA_Tokens = descr_DFA_Tokens;

#else
static refalrts::FnResult func_DFA_Tokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DFA-Tokens/4 s.FirstLineNumber#1/5 e.Lines#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Lines#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Lines#1/2 } </6 & Seq/7 (/8 & Map/9 & DFA-Tokens\1/10 )/11 & LoTokens/12 (/13 & MapReduce/14 & DFA-Tokens\2/15 </16 & Inc/17 Tile{ AsIs: s.FirstLineNumber#1/5 } >/18 )/19 & DFA-Tokens\3/20 >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], & Map ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & gen_DFA_Tokens_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & LoTokens ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & MapReduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & gen_DFA_Tokens_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & Inc ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & gen_DFA_Tokens_L3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[6] );
  refalrts::link_brackets( context[13], context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_DFA_Tokens(func_DFA_Tokens, "DFA-Tokens");
refalrts::RefalFunction& DFA_Tokens = descr_DFA_Tokens;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_LoTokens {
    static refalrts::RefalFunction *functions[] = {
      & FilterTokens,
      & Root
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 10, 0, 0},
      // </0 & LoTokens/4 e.Text#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FilterTokens/4 } </5 & Root/6 (/7 )/8 Tile{ AsIs: e.Text#1/2 } >/9 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 1, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 5, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_LoTokens

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_LoTokens(
  "LoTokens",
  scope_LoTokens::raa,
  scope_LoTokens::functions,
  scope_LoTokens::idents,
  scope_LoTokens::numbers,
  scope_LoTokens::strings
);
refalrts::RefalFunction& LoTokens = descr_LoTokens;

} // unnamed namespace

#else
static refalrts::FnResult func_LoTokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & LoTokens/4 e.Text#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FilterTokens/4 } </5 & Root/6 (/7 )/8 Tile{ AsIs: e.Text#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & Root ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & FilterTokens );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_LoTokens(func_LoTokens, "LoTokens");
refalrts::RefalFunction& LoTokens = descr_LoTokens;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_FilterTokens_L1 {
    static refalrts::RefalFunction *functions[] = {
      & Unescape
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TEOF<int>::name,
      & ident_TError<int>::name,
      & ident_TUnexpectedChar<int>::name,
      & ident_TName<int>::name,
      & ident_TAlternative<int>::name,
      & ident_TPunctuation<int>::name,
      & ident_TDot<int>::name,
      & ident_TEquals<int>::name,
      & ident_TokenError<int>::name,
      & ident_TLiteral<int>::name,
      & ident_TNamedFlush<int>::name,
      & ident_TErrorFlush<int>::name,
      & ident_TFlush<int>::name,
      & ident_TSetName<int>::name,
      & ident_TNewLine<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"expected charac", 15}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 12, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: ( e.$ )
      //GLOBAL GEN: ( s.$ e.$ )
      // </0 & FilterTokens\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      // closed e.idxBV#0 as range 5
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # TNewLine '\n' )
      // </0 & FilterTokens\1/4 (/7 # TNewLine/9 '\n'/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 14, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('\n'), 16},
      {refalrts::icEmpty, 0, 0, 16},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNewLine/9 HalfReuse: )/10 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icLinkBrackets, 7, 10, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 10, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( # TSetName e.idx ':' )
      // </0 & FilterTokens\1/4 (/7 # TSetName/9 e.SetName#2/5 ':'/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 13, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icCharRightSave, 10, static_cast<unsigned char>(':'), 16},
      // closed e.SetName#2 as range 16(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TSetName/9 AsIs: e.SetName#2/16(5) HalfReuse: )/10 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icLinkBrackets, 7, 10, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 10, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # TFlush '-' )
      // </0 & FilterTokens\1/4 (/7 # TFlush/9 '-'/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 12, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('-'), 16},
      {refalrts::icEmpty, 0, 0, 16},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TFlush/9 HalfReuse: )/10 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icLinkBrackets, 7, 10, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 10, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( # TErrorFlush e.idx '\"' )
      // </0 & FilterTokens\1/4 (/7 # TErrorFlush/9 e.Message#2/5 '\"'/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 11, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icCharRightSave, 10, static_cast<unsigned char>('\"'), 16},
      // closed e.Message#2 as range 16(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TErrorFlush/9 AsIs: e.Message#2/16(5) HalfReuse: )/10 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icLinkBrackets, 7, 10, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 10, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( # TNamedFlush e.idx )
      // </0 & FilterTokens\1/4 (/7 # TNamedFlush/9 e.FlushName#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 10, 9},
      // closed e.FlushName#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNamedFlush/9 AsIs: e.FlushName#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( # TLiteral e.idx '\'' )
      // </0 & FilterTokens\1/4 (/7 # TLiteral/9 e.Content#2/5 '\''/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 9, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icCharRightSave, 10, static_cast<unsigned char>('\''), 16},
      // closed e.Content#2 as range 16(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TLiteral/4 HalfReuse: </7 HalfReuse: & Unescape/9 AsIs: e.Content#2/16(5) HalfReuse: >/10 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 9, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 8},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +8, 0, 0},
      // ( # TokenError e.idx )
      // </0 & FilterTokens\1/4 (/7 # TokenError/9 e.Message#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 8, 9},
      // closed e.Message#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TError/9 AsIs: e.Message#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icUpdateIdent, 0, 1, 9},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TPunctuation '=' )
      // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '='/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 5, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('='), 16},
      {refalrts::icEmpty, 0, 0, 16},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 HalfReuse: # TEquals/8 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icReinitIdent, 0, 7, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 10, 1, 0},
      {refalrts::icSetRes, 0, 0, 10},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TPunctuation '.' )
      // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '.'/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 5, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('.'), 16},
      {refalrts::icEmpty, 0, 0, 16},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 HalfReuse: # TDot/8 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icReinitIdent, 0, 6, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 10, 1, 0},
      {refalrts::icSetRes, 0, 0, 10},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( # TPunctuation '|' )
      // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '|'/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 5, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('|'), 16},
      {refalrts::icEmpty, 0, 0, 16},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 HalfReuse: # TAlternative/8 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icReinitIdent, 0, 4, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 10, 1, 0},
      {refalrts::icSetRes, 0, 0, 10},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( # TName e.idx )
      // </0 & FilterTokens\1/4 (/7 # TName/9 e.Name#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 3, 9},
      // closed e.Name#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TName/9 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( # TUnexpectedChar s.idx )
      // </0 & FilterTokens\1/4 (/7 # TUnexpectedChar/9 s.Char#2/10 )/8 >/1
      {refalrts::icIdentTerm, 0, 2, 9},
      {refalrts::icSave, 0, 16, 5},
      {refalrts::icsVarLeft, 0, 10, 16},
      {refalrts::icEmpty, 0, 0, 16},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/11 # TError/12 'U'/13 Tile{ HalfReuse: 'n'/1 }"expected charac"/14 Tile{ HalfReuse: 't'/0 HalfReuse: 'e'/4 HalfReuse: 'r'/7 HalfReuse: ' '/9 AsIs: s.Char#2/10 AsIs: )/8 } Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
      {refalrts::icAllocIdent, 0, 1, 12},
      {refalrts::icAllocChar, 0, 'U', 13},
      {refalrts::icAllocString, 0, 0, 14},
      {refalrts::icReinitChar, 0, 'n', 1},
      {refalrts::icReinitChar, 0, 't', 0},
      {refalrts::icReinitChar, 0, 'e', 4},
      {refalrts::icReinitChar, 0, 'r', 7},
      {refalrts::icReinitChar, 0, ' ', 9},
      {refalrts::icLinkBrackets, 11, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 11, 13, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( # TEOF )
      // </0 & FilterTokens\1/4 (/7 # TEOF/9 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 9},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TEOF/9 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_FilterTokens_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_FilterTokens_L1(
  "FilterTokens\\1",
  scope_gen_FilterTokens_L1::raa,
  scope_gen_FilterTokens_L1::functions,
  scope_gen_FilterTokens_L1::idents,
  scope_gen_FilterTokens_L1::numbers,
  scope_gen_FilterTokens_L1::strings
);
refalrts::RefalFunction& gen_FilterTokens_L1 = descr_gen_FilterTokens_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_FilterTokens_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & FilterTokens\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    // ( # TNewLine '\n' )
    // </0 & FilterTokens\1/4 (/7 # TNewLine/9 '\n'/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TNewLine<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_left( '\n', context[16], context[17] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNewLine/9 HalfReuse: )/10 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[10] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TSetName e.idx ':' )
    // </0 & FilterTokens\1/4 (/7 # TSetName/9 e.SetName#2/5 ':'/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TSetName<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_right( ':', context[16], context[17] );
    if( ! context[10] )
      continue;
    // closed e.SetName#2 as range 16(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TSetName/9 AsIs: e.SetName#2/16(5) HalfReuse: )/10 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[10] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TFlush '-' )
    // </0 & FilterTokens\1/4 (/7 # TFlush/9 '-'/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TFlush<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_left( '-', context[16], context[17] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TFlush/9 HalfReuse: )/10 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[10] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TErrorFlush e.idx '\"' )
    // </0 & FilterTokens\1/4 (/7 # TErrorFlush/9 e.Message#2/5 '\"'/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TErrorFlush<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_right( '\"', context[16], context[17] );
    if( ! context[10] )
      continue;
    // closed e.Message#2 as range 16(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TErrorFlush/9 AsIs: e.Message#2/16(5) HalfReuse: )/10 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[10] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TNamedFlush e.idx )
    // </0 & FilterTokens\1/4 (/7 # TNamedFlush/9 e.FlushName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TNamedFlush<int>::name, context[9] ) )
      continue;
    // closed e.FlushName#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNamedFlush/9 AsIs: e.FlushName#2/5 AsIs: )/8 } Tile{ ]] }
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
    // ( # TLiteral e.idx '\'' )
    // </0 & FilterTokens\1/4 (/7 # TLiteral/9 e.Content#2/5 '\''/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TLiteral<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_right( '\'', context[16], context[17] );
    if( ! context[10] )
      continue;
    // closed e.Content#2 as range 16(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TLiteral/4 HalfReuse: </7 HalfReuse: & Unescape/9 AsIs: e.Content#2/16(5) HalfReuse: >/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TLiteral<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], & Unescape );
    refalrts::reinit_close_call( context[10] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TokenError e.idx )
    // </0 & FilterTokens\1/4 (/7 # TokenError/9 e.Message#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TokenError<int>::name, context[9] ) )
      continue;
    // closed e.Message#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TError/9 AsIs: e.Message#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_TError<int>::name );
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
    // ( # TPunctuation '=' )
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '='/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TPunctuation<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_left( '=', context[16], context[17] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 HalfReuse: # TEquals/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[8], & ident_TEquals<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TPunctuation '.' )
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '.'/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TPunctuation<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_left( '.', context[16], context[17] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 HalfReuse: # TDot/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[8], & ident_TDot<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TPunctuation '|' )
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '|'/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TPunctuation<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[10] = refalrts::char_left( '|', context[16], context[17] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 HalfReuse: # TAlternative/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[8], & ident_TAlternative<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TName e.idx )
    // </0 & FilterTokens\1/4 (/7 # TName/9 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TName<int>::name, context[9] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TName/9 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
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
    // ( # TUnexpectedChar s.idx )
    // </0 & FilterTokens\1/4 (/7 # TUnexpectedChar/9 s.Char#2/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TUnexpectedChar<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[10], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/11 # TError/12 'U'/13 Tile{ HalfReuse: 'n'/1 }"expected charac"/14 Tile{ HalfReuse: 't'/0 HalfReuse: 'e'/4 HalfReuse: 'r'/7 HalfReuse: ' '/9 AsIs: s.Char#2/10 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_TError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "expected charac", 15 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[1], 'n' );
    refalrts::reinit_char( context[0], 't' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[7], 'r' );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( # TEOF )
  // </0 & FilterTokens\1/4 (/7 # TEOF/9 )/8 >/1
  if( ! refalrts::ident_term(  & ident_TEOF<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TEOF/9 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_FilterTokens_L1(func_gen_FilterTokens_L1, "FilterTokens\\1");
refalrts::RefalFunction& gen_FilterTokens_L1 = descr_gen_FilterTokens_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FilterTokens {
    static refalrts::RefalFunction *functions[] = {
      & gen_FilterTokens_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & FilterTokens/4 e.Tokens#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Tokens#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FilterTokens\1/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
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
  } // namespace scope_FilterTokens

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_FilterTokens(
  "FilterTokens",
  scope_FilterTokens::raa,
  scope_FilterTokens::functions,
  scope_FilterTokens::idents,
  scope_FilterTokens::numbers,
  scope_FilterTokens::strings
);
refalrts::RefalFunction& FilterTokens = descr_FilterTokens;

} // unnamed namespace

#else
static refalrts::FnResult func_FilterTokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FilterTokens/4 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FilterTokens\1/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_FilterTokens_L1 );
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
refalrts::RefalNativeFunction descr_FilterTokens(func_FilterTokens, "FilterTokens");
refalrts::RefalFunction& FilterTokens = descr_FilterTokens;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Unescape_S6L1 {
    static refalrts::RefalFunction *functions[] = {
      & Chr,
      & Unescape
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Success<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 10, 0, 0},
      // </0 & Unescape$6\1/4 # Success/5 s.Number#2/6 e.Tail#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icIdentLeftSave, 5, 0, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      // closed e.Tail#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Number#2/6 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chr/4 HalfReuse: s.Number2 #6/5 } >/7 </8 & Unescape/9 Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icAllocFunc, 0, 1, 9},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 6, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icTrash, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Unescape_S6L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Unescape_S6L1(
  "Unescape$6\\1",
  scope_gen_Unescape_S6L1::raa,
  scope_gen_Unescape_S6L1::functions,
  scope_gen_Unescape_S6L1::idents,
  scope_gen_Unescape_S6L1::numbers,
  scope_gen_Unescape_S6L1::strings
);
refalrts::RefalFunction& gen_Unescape_S6L1 = descr_gen_Unescape_S6L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Unescape_S6L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Unescape$6\1/4 # Success/5 s.Number#2/6 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Success<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Number#2/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chr/4 HalfReuse: s.Number2 #6/5 } >/7 </8 & Unescape/9 Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], & Unescape ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Chr );
  refalrts::reinit_svar( context[5], context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Unescape_S6L1(func_gen_Unescape_S6L1, "Unescape$6\\1");
refalrts::RefalFunction& gen_Unescape_S6L1 = descr_gen_Unescape_S6L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Unescape {
    static refalrts::RefalFunction *functions[] = {
      & Unescape,
      & IntFromStr,
      & Fetch,
      & gen_Unescape_S6L1
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 8, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & Unescape/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // '\\n' e.idx
      // </0 & Unescape/4 '\\'/5 'n'/6 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\\'), 9},
      {refalrts::icCharLeftSave, 6, static_cast<unsigned char>('n'), 9},
      // closed e.Tail#1 as range 9(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\n'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '\n', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // '\\r' e.idx
      // </0 & Unescape/4 '\\'/5 'r'/6 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\\'), 9},
      {refalrts::icCharLeftSave, 6, static_cast<unsigned char>('r'), 9},
      // closed e.Tail#1 as range 9(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\r'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '\r', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // '\\\\' e.idx
      // </0 & Unescape/4 '\\'/5 '\\'/6 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\\'), 9},
      {refalrts::icCharLeftSave, 6, static_cast<unsigned char>('\\'), 9},
      // closed e.Tail#1 as range 9(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\\'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '\\', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // '\\t' e.idx
      // </0 & Unescape/4 '\\'/5 't'/6 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\\'), 9},
      {refalrts::icCharLeftSave, 6, static_cast<unsigned char>('t'), 9},
      // closed e.Tail#1 as range 9(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\t'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '\t', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // '\\\'' e.idx
      // </0 & Unescape/4 '\\'/5 '\''/6 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\\'), 9},
      {refalrts::icCharLeftSave, 6, static_cast<unsigned char>('\''), 9},
      // closed e.Tail#1 as range 9(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '\'', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +16, 0, 0},
      // '\\d' e.idx
      // </0 & Unescape/4 '\\'/5 'd'/6 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\\'), 9},
      {refalrts::icCharLeftSave, 6, static_cast<unsigned char>('d'), 9},
      // closed e.Tail#1 as range 9(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & IntFromStr/6 AsIs: e.Tail#1/9(2) AsIs: >/1 } & Unescape$6\1/7 >/8 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 3, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 6},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // '\'\'' e.idx
      // </0 & Unescape/4 '\''/5 '\''/6 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\''), 9},
      {refalrts::icCharLeftSave, 6, static_cast<unsigned char>('\''), 9},
      // closed e.Tail#1 as range 9(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '\'', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // s.idx e.idx
      // </0 & Unescape/4 s.Other#1/5 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icsVarLeft, 0, 5, 9},
      // closed e.Tail#1 as range 9(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Other#1/5 } Tile{ AsIs: </0 AsIs: & Unescape/4 } Tile{ AsIs: e.Tail#1/9(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      //
      // </0 & Unescape/4 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Unescape/4 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Unescape

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Unescape(
  "Unescape",
  scope_Unescape::raa,
  scope_Unescape::functions,
  scope_Unescape::idents,
  scope_Unescape::numbers,
  scope_Unescape::strings
);
refalrts::RefalFunction& Unescape = descr_Unescape;

} // unnamed namespace

#else
static refalrts::FnResult func_Unescape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Unescape/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // '\\n' e.idx
    // </0 & Unescape/4 '\\'/5 'n'/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'n', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\n'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\n' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], & Unescape );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\\r' e.idx
    // </0 & Unescape/4 '\\'/5 'r'/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'r', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\r'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\r' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], & Unescape );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\\\\' e.idx
    // </0 & Unescape/4 '\\'/5 '\\'/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\\'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\\' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], & Unescape );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\\t' e.idx
    // </0 & Unescape/4 '\\'/5 't'/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 't', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\t'/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\t' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], & Unescape );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\\\'' e.idx
    // </0 & Unescape/4 '\\'/5 '\''/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( '\'', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], & Unescape );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\\d' e.idx
    // </0 & Unescape/4 '\\'/5 'd'/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( 'd', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & IntFromStr/6 AsIs: e.Tail#1/9(2) AsIs: >/1 } & Unescape$6\1/7 >/8 Tile{ ]] }
    if( ! refalrts::alloc_name( context[7], & gen_Unescape_S6L1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Fetch );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], & IntFromStr );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\'\'' e.idx
    // </0 & Unescape/4 '\''/5 '\''/6 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_left( '\'', context[9], context[10] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( '\'', context[9], context[10] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </5 HalfReuse: & Unescape/6 AsIs: e.Tail#1/9(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[6], & Unescape );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx e.idx
    // </0 & Unescape/4 s.Other#1/5 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_left( context[5], context[9], context[10] ) )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Other#1/5 } Tile{ AsIs: </0 AsIs: & Unescape/4 } Tile{ AsIs: e.Tail#1/9(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  //
  // </0 & Unescape/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Unescape/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Unescape(func_Unescape, "Unescape");
refalrts::RefalFunction& Unescape = descr_Unescape;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Root {
    static refalrts::RefalFunction *functions[] = {
      & Name,
      & Literal,
      & Flush,
      & SetName
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TEOF<int>::name,
      & ident_TUnexpectedChar<int>::name,
      & ident_TPunctuation<int>::name,
      & ident_TNewLine<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 37, 0, 0},
      {refalrts::icIssueMemory, 15, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & Root/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) ' ' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 ' '/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>(' '), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '\t' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\t'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\t'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '\r' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\r'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\r'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( e.idx ) '\n' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\n'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TNewLine/10 Tile{ AsIs: e.Accum#1/5 } '\n'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icAllocIdent, 0, 3, 10},
      {refalrts::icAllocChar, 0, '\n', 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( e.idx ) ':' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 ':'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>(':'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetName/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 3, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( e.idx ) '!' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '!'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('!'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Flush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( e.idx ) '\'' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\''), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( e.idx ) '=' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '='/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('='), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '='/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icAllocIdent, 0, 2, 10},
      {refalrts::icAllocChar, 0, '=', 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( e.idx ) '.' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '.'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('.'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '.'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icAllocIdent, 0, 2, 10},
      {refalrts::icAllocChar, 0, '.', 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( e.idx ) '|' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '|'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('|'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '|'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icAllocIdent, 0, 2, 10},
      {refalrts::icAllocChar, 0, '|', 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'A' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('A'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'A', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'B' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('B'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'B', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'C' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('C'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'C', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'D' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('D'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'D', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'E' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('E'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'E', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'F' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('F'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'F', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'G' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('G'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'G', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'H' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('H'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'H', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'I' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('I'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'I', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'J' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('J'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'J', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'K' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('K'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'K', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'L' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('L'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'L', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'M' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('M'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'M', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'N' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('N'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'N', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'O' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('O'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'O', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'P' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('P'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'P', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'Q' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Q'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'Q', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'R' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('R'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'R', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'S' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('S'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'S', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'T' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('T'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'T', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'U' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('U'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'U', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'V' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('V'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'V', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'W' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('W'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'W', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'X' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('X'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'X', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'Y' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Y'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'Y', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'Z' e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Z'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'Z', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( e.idx ) s.idx e.idx
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icsVarLeft, 0, 9, 13},
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/10 # TUnexpectedChar/11 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/13(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icAllocIdent, 0, 1, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icLinkBrackets, 10, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx )
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 >/1
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Accum#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TEOF/7 AsIs: e.Accum#1/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitIdent, 0, 0, 7},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Root

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Root(
  "Root",
  scope_Root::raa,
  scope_Root::functions,
  scope_Root::idents,
  scope_Root::numbers,
  scope_Root::strings
);
refalrts::RefalFunction& Root = descr_Root;

} // unnamed namespace

#else
static refalrts::FnResult func_Root(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Root/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ' ' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 ' '/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( ' ', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\t' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\t'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\t', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\r' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\r'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\r', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\n' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\n', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TNewLine/10 Tile{ AsIs: e.Accum#1/5 } '\n'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TNewLine<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '\n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ':' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 ':'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( ':', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetName/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & SetName );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '!' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '!'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '!', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Flush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Flush );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\'' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\'', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '=' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '='/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '=', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '='/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '.' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '.'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '.', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '.'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '|' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 '|'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '|', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/10 Tile{ AsIs: e.Accum#1/5 } '|'/11 )/12 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_TPunctuation<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '|' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'A' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'A', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'B' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'B', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'C' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'C', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'D' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'D', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'E' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'E', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'F' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'F', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'G' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'G', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'H' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'H', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'I' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'I', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'J' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'J', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'K' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'K', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'L' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'L', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'M' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'M', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'N' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'N', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'O' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'O', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'P' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'P', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Q' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'Q', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'R' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'R', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'S' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'S', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'T' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'T', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'U' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'U', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'V' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'V', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'W' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'W', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'X' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'X', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Y' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'Y', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Z' e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( 'Z', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Name );
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx e.idx
    // </0 & Root/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
    // closed e.Accum#1 as range 5
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[9], context[13], context[14] ) )
      continue;
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/10 # TUnexpectedChar/11 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/13(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_TUnexpectedChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx )
  // </0 & Root/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TEOF/7 AsIs: e.Accum#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TEOF<int>::name );
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
refalrts::RefalNativeFunction descr_Root(func_Root, "Root");
refalrts::RefalFunction& Root = descr_Root;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_SetName {
    static refalrts::RefalFunction *functions[] = {
      & Root
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TokenError<int>::name,
      & ident_TSetName<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"expected end of set name", 24},
      {"xpected end of set name, got EO", 31}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 66, 0, 0},
      {refalrts::icIssueMemory, 16, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & SetName/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( e.idx ) ':' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 ':'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>(':'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TSetName/4 } Tile{ AsIs: e.Accum#1/5 } ':'/10 Tile{ HalfReuse: )/7 } </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, ':', 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 0, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icLinkBrackets, 0, 7, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '0' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('0'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '0', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '1' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('1'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '1', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '2' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('2'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '2', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '3' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('3'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '3', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '4' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('4'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '4', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '5' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('5'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '5', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '6' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('6'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '6', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '7' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('7'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '7', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '8' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('8'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '8', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '9' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('9'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '9', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'a' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('a'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'a', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'b' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('b'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'b', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'c' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('c'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'c', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'd' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('d'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'd', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'e' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('e'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'e', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'f' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('f'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'f', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'g' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('g'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'g', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'h' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('h'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'h', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'i' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('i'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'i', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'j' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('j'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'j', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'k' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('k'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'k', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'l' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('l'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'l', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'm' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('m'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'm', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'n' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('n'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'n', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'o' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('o'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'o', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'p' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('p'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'p', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'q' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('q'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'q', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'r' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('r'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'r', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 's' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('s'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 's', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 't' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('t'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 't', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'u' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('u'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'u', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'v' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('v'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'v', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'w' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('w'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'w', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'x' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('x'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'x', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'y' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('y'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'y', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'z' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('z'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'z', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'A' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('A'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'A', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'B' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('B'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'B', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'C' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('C'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'C', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'D' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('D'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'D', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'E' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('E'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'E', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'F' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('F'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'F', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'G' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('G'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'G', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'H' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('H'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'H', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'I' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('I'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'I', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'J' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('J'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'J', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'K' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('K'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'K', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'L' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('L'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'L', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'M' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('M'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'M', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'N' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('N'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'N', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'O' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('O'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'O', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'P' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('P'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'P', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Q' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Q'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Q', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'R' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('R'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'R', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'S' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('S'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'S', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'T' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('T'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'T', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'U' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('U'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'U', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'V' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('V'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'V', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'W' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('W'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'W', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'X' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('X'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'X', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Y' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Y'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Y', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Z' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Z'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Z', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '-' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('-'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '-', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '_' e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('_'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '_', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // ( e.idx )
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icEmpty, 0, 0, 14},
      // closed e.Accum#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'e'/7 }"xpected end of set name, got EO"/9 Tile{ HalfReuse: 'F'/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocString, 0, 1, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'e', 7},
      {refalrts::icReinitChar, 0, 'F', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & SetName/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 # TokenError/10"expected end of set name"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocIdent, 0, 0, 10},
      {refalrts::icAllocString, 0, 0, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 9, 13, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 9, 13, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_SetName

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_SetName(
  "SetName",
  scope_SetName::raa,
  scope_SetName::functions,
  scope_SetName::idents,
  scope_SetName::numbers,
  scope_SetName::strings
);
refalrts::RefalFunction& SetName = descr_SetName;

} // unnamed namespace

#else
static refalrts::FnResult func_SetName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & SetName/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ':' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 ':'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ':', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TSetName/4 } Tile{ AsIs: e.Accum#1/5 } ':'/10 Tile{ HalfReuse: )/7 } </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & Root ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TSetName<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '0' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '0', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '1' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '1', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '2' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '2', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '3' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '3', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '4' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '4', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '5' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '5', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '6' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '6', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '7' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '7', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '8' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '8', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '9' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '9', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'a' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'a', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'b' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'b', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'c' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'c', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'd' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'd', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'e' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'e', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'f' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'f', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'g' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'g', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'h' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'h', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'i' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'i', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'j' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'j', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'k' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'k', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'l' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'l', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'm' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'm', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'n' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'n', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'o' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'o', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'p' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'p', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'q' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'q', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'r' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'r', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 's' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 's', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 't' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 't', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'u' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'u', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'v' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'v', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'w' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'w', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'x' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'x', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'y' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'y', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'z' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'z', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'A' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'A', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'B' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'B', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'C' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'C', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'D' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'D', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'E' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'E', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'F' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'F', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'G' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'G', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'H' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'H', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'I' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'I', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'J' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'J', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'K' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'K', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'L' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'L', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'M' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'M', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'N' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'N', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'O' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'O', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'P' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'P', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Q' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Q', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'R' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'R', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'S' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'S', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'T' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'T', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'U' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'U', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'V' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'V', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'W' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'W', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'X' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'X', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Y' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Y', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Z' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Z', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '-' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '-', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '_' e.idx
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '_', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx )
    // </0 & SetName/4 (/7 e.Accum#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.Accum#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'e'/7 }"xpected end of set name, got EO"/9 Tile{ HalfReuse: 'F'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "xpected end of set name, got EO", 31 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TokenError<int>::name );
    refalrts::reinit_char( context[7], 'e' );
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & SetName/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"expected end of set name"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_TokenError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "expected end of set name", 24 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Root );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_SetName(func_SetName, "SetName");
refalrts::RefalFunction& SetName = descr_SetName;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Flush {
    static refalrts::RefalFunction *functions[] = {
      & FlushName,
      & ErrorFlush,
      & Root
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TFlush<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 15, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & Flush/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( e.idx ) '-' e.idx
      // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('-'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TFlush/4 } Tile{ AsIs: e.Accum#1/5 } '-'/10 Tile{ HalfReuse: )/7 } </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, '-', 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 2, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icLinkBrackets, 0, 7, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( e.idx ) '\"' e.idx
      // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '\"'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\"'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorFlush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '#' e.idx
      // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '#'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('#'), 13},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '#'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, '#', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & Flush/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
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
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Flush/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) '-' e.idx
    // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '-', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TFlush/4 } Tile{ AsIs: e.Accum#1/5 } '-'/10 Tile{ HalfReuse: )/7 } </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & Root ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TFlush<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\"' e.idx
    // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '\"'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\"', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorFlush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & ErrorFlush );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '#' e.idx
    // </0 & Flush/4 (/7 e.Accum#1/5 )/8 '#'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '#', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '#'/8 HalfReuse: )/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushName );
    refalrts::reinit_char( context[8], '#' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & Flush/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], & FlushName );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Flush(func_Flush, "Flush");
refalrts::RefalFunction& Flush = descr_Flush;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Literal {
    static refalrts::RefalFunction *functions[] = {
      & Root,
      & Literal_Quote,
      & Literal_Escape
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TokenError<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"nexpected end of file at litera", 31},
      {"nexpected end of line at literal", 32}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 17, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & Literal/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '\\' e.idx
      // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\\'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\\'), 15},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-Escape/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\\'/8 HalfReuse: )/9 AsIs: e.Text#1/15(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitChar, 0, '\\', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '\'' e.idx
      // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\''), 15},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-Quote/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/15(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '\'', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // ( e.idx ) '\n' e.idx
      // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\n'), 15},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of line at literal"/10 )/12 </13 & Root/14 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/15(2) AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 1, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 0, 14},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'U', 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icLinkBrackets, 0, 12, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // ( e.idx )
      // </0 & Literal/4 (/7 e.Accum#1/5 )/8 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icEmpty, 0, 0, 15},
      // closed e.Accum#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of file at litera"/9 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocString, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'U', 7},
      {refalrts::icReinitChar, 0, 'l', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) s.idx e.idx
      // </0 & Literal/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Any#1/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: s.Any1 #9/8 } )/10 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icReinitSVar, 0, 9, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 10, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icTrash, 0, 0, 8},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Literal

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Literal(
  "Literal",
  scope_Literal::raa,
  scope_Literal::functions,
  scope_Literal::idents,
  scope_Literal::numbers,
  scope_Literal::strings
);
refalrts::RefalFunction& Literal = descr_Literal;

} // unnamed namespace

#else
static refalrts::FnResult func_Literal(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Literal/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) '\\' e.idx
    // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\\'/9 e.Text#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = refalrts::char_left( '\\', context[15], context[16] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-Escape/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\\'/8 HalfReuse: )/9 AsIs: e.Text#1/15(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal_Escape );
    refalrts::reinit_char( context[8], '\\' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\'' e.idx
    // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = refalrts::char_left( '\'', context[15], context[16] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-Quote/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/15(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal_Quote );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\n' e.idx
    // </0 & Literal/4 (/7 e.Accum#1/5 )/8 '\n'/9 e.Text#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = refalrts::char_left( '\n', context[15], context[16] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of line at literal"/10 )/12 </13 & Root/14 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/15(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], "nexpected end of line at literal", 32 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & Root ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TokenError<int>::name );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx )
    // </0 & Literal/4 (/7 e.Accum#1/5 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Accum#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of file at litera"/9 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "nexpected end of file at litera", 31 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TokenError<int>::name );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) s.idx e.idx
  // </0 & Literal/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Any#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: s.Any1 #9/8 } )/10 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Literal(func_Literal, "Literal");
refalrts::RefalFunction& Literal = descr_Literal;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Name {
    static refalrts::RefalFunction *functions[] = {
      & Root
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TName<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 64, 0, 0},
      {refalrts::icIssueMemory, 14, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & Name/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '0' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('0'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '0', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '1' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('1'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '1', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '2' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('2'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '2', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '3' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('3'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '3', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '4' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('4'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '4', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '5' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('5'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '5', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '6' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('6'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '6', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '7' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('7'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '7', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '8' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('8'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '8', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '9' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('9'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '9', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'a' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('a'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'a', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'b' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('b'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'b', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'c' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('c'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'c', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'd' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('d'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'd', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'e' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('e'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'e', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'f' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('f'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'f', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'g' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('g'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'g', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'h' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('h'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'h', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'i' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('i'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'i', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'j' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('j'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'j', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'k' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('k'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'k', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'l' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('l'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'l', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'm' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('m'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'm', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'n' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('n'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'n', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'o' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('o'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'o', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'p' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('p'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'p', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'q' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('q'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'q', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'r' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('r'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'r', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 's' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('s'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 's', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 't' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('t'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 't', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'u' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('u'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'u', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'v' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('v'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'v', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'w' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('w'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'w', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'x' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('x'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'x', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'y' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('y'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'y', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'z' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('z'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'z', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'A' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('A'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'A', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'B' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('B'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'B', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'C' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('C'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'C', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'D' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('D'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'D', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'E' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('E'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'E', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'F' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('F'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'F', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'G' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('G'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'G', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'H' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('H'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'H', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'I' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('I'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'I', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'J' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('J'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'J', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'K' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('K'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'K', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'L' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('L'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'L', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'M' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('M'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'M', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'N' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('N'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'N', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'O' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('O'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'O', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'P' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('P'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'P', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Q' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Q'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Q', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'R' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('R'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'R', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'S' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('S'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'S', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'T' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('T'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'T', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'U' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('U'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'U', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'V' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('V'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'V', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'W' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('W'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'W', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'X' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('X'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'X', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Y' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Y'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Y', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Z' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Z'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Z', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '-' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('-'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '-', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '_' e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('_'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '_', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 # TName/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocIdent, 0, 0, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 9, 11, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Name

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Name(
  "Name",
  scope_Name::raa,
  scope_Name::functions,
  scope_Name::idents,
  scope_Name::numbers,
  scope_Name::strings
);
refalrts::RefalFunction& Name = descr_Name;

} // unnamed namespace

#else
static refalrts::FnResult func_Name(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Name/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) '0' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '0', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '1' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '1', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '2' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '2', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '3' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '3', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '4' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '4', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '5' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '5', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '6' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '6', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '7' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '7', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '8' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '8', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '9' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '9', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'a' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'a', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'b' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'b', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'c' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'c', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'd' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'd', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'e' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'e', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'f' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'f', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'g' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'g', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'h' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'h', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'i' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'i', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'j' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'j', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'k' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'k', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'l' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'l', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'm' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'm', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'n' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'n', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'o' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'o', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'p' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'p', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'q' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'q', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'r' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'r', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 's' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 's', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 't' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 't', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'u' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'u', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'v' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'v', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'w' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'w', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'x' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'x', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'y' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'y', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'z' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'z', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'A' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'A', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'B' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'B', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'C' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'C', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'D' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'D', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'E' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'E', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'F' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'F', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'G' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'G', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'H' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'H', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'I' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'I', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'J' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'J', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'K' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'K', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'L' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'L', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'M' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'M', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'N' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'N', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'O' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'O', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'P' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'P', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Q' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Q', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'R' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'R', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'S' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'S', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'T' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'T', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'U' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'U', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'V' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'V', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'W' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'W', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'X' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'X', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Y' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Y', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Z' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Z', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '-' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '-', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '_' e.idx
    // </0 & Name/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '_', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & Name/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TName/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_TName<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Root );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Name(func_Name, "Name");
refalrts::RefalFunction& Name = descr_Name;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ErrorFlush {
    static refalrts::RefalFunction *functions[] = {
      & Root
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TokenError<int>::name,
      & ident_TErrorFlush<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"Expected error text or double quote", 35}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 88, 0, 0},
      {refalrts::icIssueMemory, 16, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & ErrorFlush/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '0' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('0'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '0', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '1' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('1'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '1', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '2' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('2'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '2', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '3' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('3'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '3', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '4' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('4'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '4', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '5' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('5'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '5', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '6' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('6'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '6', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '7' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('7'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '7', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '8' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('8'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '8', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '9' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('9'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '9', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'a' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('a'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'a', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'b' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('b'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'b', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'c' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('c'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'c', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'd' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('d'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'd', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'e' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('e'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'e', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'f' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('f'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'f', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'g' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('g'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'g', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'h' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('h'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'h', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'i' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('i'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'i', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'j' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('j'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'j', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'k' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('k'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'k', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'l' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('l'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'l', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'm' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('m'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'm', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'n' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('n'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'n', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'o' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('o'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'o', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'p' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('p'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'p', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'q' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('q'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'q', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'r' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('r'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'r', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 's' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('s'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 's', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 't' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('t'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 't', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'u' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('u'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'u', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'v' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('v'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'v', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'w' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('w'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'w', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'x' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('x'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'x', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'y' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('y'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'y', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'z' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('z'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'z', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'A' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('A'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'A', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'B' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('B'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'B', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'C' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('C'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'C', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'D' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('D'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'D', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'E' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('E'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'E', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'F' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('F'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'F', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'G' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('G'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'G', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'H' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('H'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'H', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'I' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('I'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'I', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'J' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('J'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'J', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'K' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('K'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'K', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'L' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('L'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'L', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'M' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('M'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'M', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'N' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('N'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'N', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'O' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('O'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'O', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'P' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('P'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'P', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Q' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Q'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Q', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'R' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('R'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'R', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'S' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('S'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'S', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'T' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('T'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'T', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'U' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('U'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'U', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'V' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('V'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'V', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'W' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('W'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'W', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'X' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('X'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'X', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Y' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Y'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Y', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Z' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Z'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Z', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '-' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('-'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '-', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '_' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('_'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '_', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) ' ' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ' '/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>(' '), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ' '/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, ' ', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '\t' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '\t'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\t'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\t'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '\t', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) ',' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ','/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>(','), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ','/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, ',', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '.' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '.'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('.'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '.'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '.', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) ':' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ':'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>(':'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ':'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, ':', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) ';' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ';'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>(';'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ';'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, ';', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '(' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '('/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('('), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '('/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '(', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) ')' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ')'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>(')'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ')'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, ')', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '{' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '{'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('{'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '{'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '{', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '}' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '}'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('}'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '}'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '}', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '[' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '['/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('['), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '['/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '[', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) ']' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ']'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>(']'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ']'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, ']', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '*' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '*'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('*'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '*'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '*', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '&' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '&'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('&'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '&'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '&', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '!' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '!'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('!'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '!'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '!', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '@' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '@'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('@'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '@'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '@', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '#' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '#'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('#'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '#'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '#', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '$' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '$'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('$'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '$'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '$', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '%' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '%'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('%'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '%'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '%', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '^' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '^'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('^'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '^'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '^', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '=' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '='/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('='), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '='/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '=', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '+' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '+'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('+'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '+'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '+', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '/' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '/'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('/'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '/'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '/', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( e.idx ) '\"' e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '\"'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\"'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TErrorFlush/4 } Tile{ AsIs: e.Accum#1/5 } '\"'/10 Tile{ HalfReuse: )/7 } </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, '\"', 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 0, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icLinkBrackets, 0, 7, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected error text or double quote"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocIdent, 0, 0, 10},
      {refalrts::icAllocString, 0, 0, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 9, 13, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 9, 13, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ErrorFlush

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ErrorFlush(
  "ErrorFlush",
  scope_ErrorFlush::raa,
  scope_ErrorFlush::functions,
  scope_ErrorFlush::idents,
  scope_ErrorFlush::numbers,
  scope_ErrorFlush::strings
);
refalrts::RefalFunction& ErrorFlush = descr_ErrorFlush;

} // unnamed namespace

#else
static refalrts::FnResult func_ErrorFlush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & ErrorFlush/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) '0' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '0', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '1' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '1', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '2' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '2', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '3' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '3', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '4' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '4', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '5' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '5', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '6' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '6', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '7' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '7', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '8' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '8', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '9' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '9', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'a' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'a', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'b' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'b', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'c' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'c', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'd' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'd', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'e' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'e', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'f' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'f', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'g' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'g', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'h' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'h', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'i' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'i', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'j' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'j', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'k' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'k', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'l' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'l', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'm' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'm', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'n' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'n', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'o' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'o', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'p' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'p', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'q' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'q', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'r' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'r', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 's' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 's', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 't' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 't', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'u' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'u', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'v' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'v', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'w' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'w', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'x' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'x', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'y' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'y', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'z' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'z', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'A' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'A', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'B' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'B', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'C' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'C', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'D' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'D', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'E' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'E', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'F' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'F', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'G' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'G', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'H' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'H', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'I' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'I', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'J' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'J', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'K' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'K', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'L' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'L', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'M' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'M', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'N' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'N', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'O' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'O', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'P' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'P', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Q' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Q', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'R' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'R', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'S' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'S', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'T' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'T', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'U' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'U', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'V' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'V', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'W' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'W', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'X' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'X', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Y' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Y', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Z' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Z', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '-' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '-', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '_' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '_', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ' ' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ' '/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ' ', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ' '/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ' ' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\t' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '\t'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '\t', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\t'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '\t' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ',' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ','/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ',', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ','/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ',' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '.' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '.'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '.', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '.'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '.' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ':' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ':'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ':', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ':'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ':' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ';' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ';'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ';', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ';'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '(' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '('/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '(', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '('/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '(' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ')' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ')'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ')', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ')'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ')' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '{' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '{'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '{', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '{'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '{' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '}' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '}'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '}', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '}'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '}' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '[' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '['/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '[', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '['/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '[' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ']' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 ']'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( ']', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: ']'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], ']' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '*' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '*'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '*', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '*'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '*' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '&' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '&'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '&', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '&'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '&' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '!' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '!'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '!', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '!'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '!' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '@' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '@'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '@', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '@'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '@' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '#' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '#'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '#', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '#'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '#' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '$' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '$'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '$'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '$' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '%' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '%'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '%', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '%'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '%' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '^' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '^'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '^', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '^'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '^' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '=' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '='/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '=', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '='/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '=' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '+' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '+'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '+', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '+'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '+' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '/' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '/'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '/', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '/'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '/' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\"' e.idx
    // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 '\"'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '\"', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TErrorFlush/4 } Tile{ AsIs: e.Accum#1/5 } '\"'/10 Tile{ HalfReuse: )/7 } </11 & Root/12 Tile{ HalfReuse: (/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & Root ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TErrorFlush<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & ErrorFlush/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected error text or double quote"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_TokenError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "Expected error text or double quote", 35 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Root );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_ErrorFlush(func_ErrorFlush, "ErrorFlush");
refalrts::RefalFunction& ErrorFlush = descr_ErrorFlush;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FlushName {
    static refalrts::RefalFunction *functions[] = {
      & Root,
      & FlushNameTail
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TokenError<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"Expected flush name", 19}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 26, 0, 0},
      {refalrts::icIssueMemory, 16, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & FlushName/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'A' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('A'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'A', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'B' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('B'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'B', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'C' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('C'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'C', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'D' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('D'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'D', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'E' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('E'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'E', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'F' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('F'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'F', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'G' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('G'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'G', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'H' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('H'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'H', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'I' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('I'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'I', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'J' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('J'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'J', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'K' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('K'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'K', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'L' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('L'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'L', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'M' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('M'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'M', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'N' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('N'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'N', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'O' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('O'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'O', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'P' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('P'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'P', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'Q' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Q'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'Q', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'R' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('R'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'R', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'S' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('S'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'S', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'T' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('T'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'T', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'U' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('U'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'U', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'V' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('V'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'V', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'W' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('W'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'W', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'X' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('X'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'X', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'Y' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Y'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'Y', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'Z' e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Z'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'Z', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected flush name"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocIdent, 0, 0, 10},
      {refalrts::icAllocString, 0, 0, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 9, 13, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 9, 13, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FlushName

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_FlushName(
  "FlushName",
  scope_FlushName::raa,
  scope_FlushName::functions,
  scope_FlushName::idents,
  scope_FlushName::numbers,
  scope_FlushName::strings
);
refalrts::RefalFunction& FlushName = descr_FlushName;

} // unnamed namespace

#else
static refalrts::FnResult func_FlushName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & FlushName/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) 'A' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'A', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'B' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'B', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'C' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'C', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'D' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'D', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'E' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'E', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'F' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'F', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'G' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'G', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'H' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'H', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'I' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'I', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'J' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'J', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'K' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'K', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'L' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'L', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'M' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'M', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'N' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'N', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'O' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'O', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'P' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'P', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Q' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Q', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'R' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'R', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'S' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'S', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'T' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'T', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'U' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'U', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'V' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'V', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'W' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'W', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'X' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'X', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Y' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Y', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Z' e.idx
    // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'Z', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & FlushNameTail );
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & FlushName/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected flush name"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_TokenError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "Expected flush name", 19 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Root );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_FlushName(func_FlushName, "FlushName");
refalrts::RefalFunction& FlushName = descr_FlushName;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Literal_Escape {
    static refalrts::RefalFunction *functions[] = {
      & Root,
      & Literal_DecCode,
      & Literal
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TokenError<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"Unexpected escaped character", 28}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 6, 0, 0},
      {refalrts::icIssueMemory, 16, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & Literal-Escape/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'n' e.idx
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('n'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitChar, 0, 'n', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'r' e.idx
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('r'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitChar, 0, 'r', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '\\' e.idx
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 '\\'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\\'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\\'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitChar, 0, '\\', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 't' e.idx
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('t'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitChar, 0, 't', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '\'' e.idx
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\''), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitChar, 0, '\'', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) 'd' e.idx
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('d'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-DecCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, 'd', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 # TokenError/10"Unexpected escaped character"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocIdent, 0, 0, 10},
      {refalrts::icAllocString, 0, 0, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 9, 13, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 9, 13, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Literal_Escape

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Literal_Escape(
  "Literal-Escape",
  scope_Literal_Escape::raa,
  scope_Literal_Escape::functions,
  scope_Literal_Escape::idents,
  scope_Literal_Escape::numbers,
  scope_Literal_Escape::strings
);
refalrts::RefalFunction& Literal_Escape = descr_Literal_Escape;

} // unnamed namespace

#else
static refalrts::FnResult func_Literal_Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Literal-Escape/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) 'n' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'n', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'r' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'r', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\\' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 '\\'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '\\', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\\'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '\\' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 't' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 't', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\'' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '\'', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'd' e.idx
    // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( 'd', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-DecCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal_DecCode );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & Literal-Escape/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Unexpected escaped character"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_TokenError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "Unexpected escaped character", 28 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Root );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Literal_Escape(func_Literal_Escape, "Literal-Escape");
refalrts::RefalFunction& Literal_Escape = descr_Literal_Escape;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Literal_Quote {
    static refalrts::RefalFunction *functions[] = {
      & Root,
      & Literal
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TLiteral<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 14, 0, 0},
      //FAST GEN: ( e.$ ) e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & Literal-Quote/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '\'' e.idx
      // </0 & Literal-Quote/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\''), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '\'', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & Literal-Quote/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 # TLiteral/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocIdent, 0, 0, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 9, 11, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Literal_Quote

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Literal_Quote(
  "Literal-Quote",
  scope_Literal_Quote::raa,
  scope_Literal_Quote::functions,
  scope_Literal_Quote::idents,
  scope_Literal_Quote::numbers,
  scope_Literal_Quote::strings
);
refalrts::RefalFunction& Literal_Quote = descr_Literal_Quote;

} // unnamed namespace

#else
static refalrts::FnResult func_Literal_Quote(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Literal-Quote/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) '\'' e.idx
    // </0 & Literal-Quote/4 (/7 e.Accum#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '\'', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & Literal-Quote/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TLiteral/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_TLiteral<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Root );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Literal_Quote(func_Literal_Quote, "Literal-Quote");
refalrts::RefalFunction& Literal_Quote = descr_Literal_Quote;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FlushNameTail {
    static refalrts::RefalFunction *functions[] = {
      & Root
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TNamedFlush<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 64, 0, 0},
      {refalrts::icIssueMemory, 14, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & FlushNameTail/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '0' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('0'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '0', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '1' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('1'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '1', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '2' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('2'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '2', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '3' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('3'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '3', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '4' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('4'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '4', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '5' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('5'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '5', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '6' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('6'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '6', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '7' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('7'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '7', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '8' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('8'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '8', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '9' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('9'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '9', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'a' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('a'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'a', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'b' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('b'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'b', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'c' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('c'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'c', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'd' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('d'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'd', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'e' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('e'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'e', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'f' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('f'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'f', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'g' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('g'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'g', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'h' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('h'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'h', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'i' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('i'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'i', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'j' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('j'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'j', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'k' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('k'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'k', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'l' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('l'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'l', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'm' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('m'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'm', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'n' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('n'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'n', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'o' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('o'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'o', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'p' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('p'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'p', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'q' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('q'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'q', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'r' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('r'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'r', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 's' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('s'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 's', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 't' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('t'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 't', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'u' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('u'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'u', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'v' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('v'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'v', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'w' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('w'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'w', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'x' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('x'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'x', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'y' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('y'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'y', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'z' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('z'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'z', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'A' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('A'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'A', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'B' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('B'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'B', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'C' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('C'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'C', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'D' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('D'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'D', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'E' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('E'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'E', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'F' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('F'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'F', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'G' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('G'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'G', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'H' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('H'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'H', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'I' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('I'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'I', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'J' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('J'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'J', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'K' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('K'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'K', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'L' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('L'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'L', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'M' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('M'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'M', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'N' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('N'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'N', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'O' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('O'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'O', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'P' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('P'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'P', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Q' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Q'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Q', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'R' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('R'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'R', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'S' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('S'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'S', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'T' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('T'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'T', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'U' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('U'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'U', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'V' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('V'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'V', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'W' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('W'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'W', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'X' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('X'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'X', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Y' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Y'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Y', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) 'Z' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('Z'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, 'Z', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '-' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('-'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '-', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( e.idx ) '_' e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('_'), 12},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 12(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
      {refalrts::icReinitChar, 0, '_', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 # TNamedFlush/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocIdent, 0, 0, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 9, 11, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FlushNameTail

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_FlushNameTail(
  "FlushNameTail",
  scope_FlushNameTail::raa,
  scope_FlushNameTail::functions,
  scope_FlushNameTail::idents,
  scope_FlushNameTail::numbers,
  scope_FlushNameTail::strings
);
refalrts::RefalFunction& FlushNameTail = descr_FlushNameTail;

} // unnamed namespace

#else
static refalrts::FnResult func_FlushNameTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & FlushNameTail/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) '0' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '0', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '1' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '1', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '2' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '2', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '3' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '3', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '4' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '4', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '5' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '5', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '6' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '6', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '7' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '7', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '8' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '8', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '9' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '9', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'a' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'a'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'a', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'b' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'b'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'b', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'b' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'c' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'c'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'c', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'c' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'd' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'd', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'e' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'e'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'e', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'f' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'f'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'f', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'f' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'g' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'g'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'g', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'g' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'h' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'h'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'h', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'h' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'i' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'i'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'i', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'j' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'j'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'j', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'j' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'k' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'k'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'k', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'k' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'l' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'l'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'l', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'm' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'm'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'm', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'm' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'n' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'n', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'o' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'o'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'o', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'o' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'p' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'p'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'p', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'q' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'q'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'q', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'r' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'r', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 's' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 's'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 's', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 't' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 't', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'u' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'u'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'u', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'v' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'v'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'v', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'v' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'w' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'w'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'w', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'x' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'x'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'x', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'x' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'y' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'y'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'y', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'z' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'z'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'z', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'A' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'A'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'A', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'B' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'B'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'B', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'C' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'C'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'C', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'C' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'D' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'D'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'D', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'D' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'E' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'E'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'E', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'F' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'F'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'F', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'G' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'G'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'G', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'G' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'H' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'H'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'H', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'H' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'I' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'I'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'I', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'I' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'J' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'J'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'J', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'J' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'K' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'K'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'K', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'K' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'L' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'L'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'L', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'L' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'M' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'M'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'M', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'M' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'N' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'N'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'N', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'N' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'O' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'O'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'O', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'O' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'P' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'P'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'P', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'P' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Q' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Q'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Q', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Q' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'R' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'R'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'R', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'S' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'S'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'S', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'T' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'T'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'T', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'T' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'U' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'U'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'U', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'U' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'V' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'V'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'V', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'W' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'W'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'W', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'W' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'X' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'X'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'X', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'X' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Y' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Y'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Y', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Y' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'Z' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 'Z'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( 'Z', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'Z' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '-' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '-'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '-', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '-'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '-' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '_' e.idx
    // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 '_'/9 e.Text#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[9] = refalrts::char_left( '_', context[12], context[13] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '_'/8 HalfReuse: )/9 AsIs: e.Text#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '_' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & FlushNameTail/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TNamedFlush/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_TNamedFlush<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Root );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_FlushNameTail(func_FlushNameTail, "FlushNameTail");
refalrts::RefalFunction& FlushNameTail = descr_FlushNameTail;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Literal_DecCode {
    static refalrts::RefalFunction *functions[] = {
      & Root,
      & Literal
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TokenError<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"nexpected end of fil", 20},
      {"Expected digits", 15}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 11, 0, 0},
      {refalrts::icIssueMemory, 16, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & Literal-DecCode/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '0' e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('0'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '0', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '1' e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('1'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '1', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '2' e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('2'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '2', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '3' e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('3'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '3', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '4' e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('4'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '4', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '5' e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('5'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '5', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '6' e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('6'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '6', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '7' e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('7'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '7', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '8' e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('8'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '8', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) '9' e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
      {refalrts::icSave, 0, 14, 2},
      {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('9'), 14},
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 14(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, '9', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( e.idx ) e.idx
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected digits"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocIdent, 0, 0, 10},
      {refalrts::icAllocString, 0, 1, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 9, 13, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 9, 13, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx )
      // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 >/1
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Accum#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of fil"/9 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocString, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'U', 7},
      {refalrts::icReinitChar, 0, 'e', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Literal_DecCode

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Literal_DecCode(
  "Literal-DecCode",
  scope_Literal_DecCode::raa,
  scope_Literal_DecCode::functions,
  scope_Literal_DecCode::idents,
  scope_Literal_DecCode::numbers,
  scope_Literal_DecCode::strings
);
refalrts::RefalFunction& Literal_DecCode = descr_Literal_DecCode;

} // unnamed namespace

#else
static refalrts::FnResult func_Literal_DecCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Literal-DecCode/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) '0' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '0'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '0', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '0' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '1' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '1'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '1', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '1' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '2' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '2'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '2', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '2' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '3' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '3'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '3', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '3' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '4' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '4'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '4', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '4' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '5' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '5'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '5', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '5' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '6' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '6'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '6', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '6' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '7' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '7'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '7', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '7' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '8' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '8'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '8', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '8' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '9' e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 '9'/9 e.Text#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[9] = refalrts::char_left( '9', context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/9 AsIs: e.Text#1/14(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Literal );
    refalrts::reinit_char( context[8], '9' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) e.idx
    // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected digits"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TokenError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "Expected digits", 15 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Root );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[9], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx )
  // </0 & Literal-DecCode/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of fil"/9 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_chars( context[9], context[10], "nexpected end of fil", 20 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TokenError<int>::name );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Literal_DecCode(func_Literal_DecCode, "Literal-DecCode");
refalrts::RefalFunction& Literal_DecCode = descr_Literal_DecCode;

} // unnamed namespace

#endif

//End of file
