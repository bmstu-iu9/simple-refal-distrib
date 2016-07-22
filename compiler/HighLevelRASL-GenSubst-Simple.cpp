// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult FakeOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenInitSubst_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenSubst_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult IncVarOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult TextFromExpr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenSubst(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #ADT_Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

// identifier #AlgLeft
template <typename SREFAL_PARAM_INT>
struct ident_AlgLeft {
  static const char *name() {
    return "AlgLeft";
  }
};

// identifier #AlgRight
template <typename SREFAL_PARAM_INT>
struct ident_AlgRight {
  static const char *name() {
    return "AlgRight";
  }
};

// identifier #AlgTerm
template <typename SREFAL_PARAM_INT>
struct ident_AlgTerm {
  static const char *name() {
    return "AlgTerm";
  }
};

// identifier #Brackets
template <typename SREFAL_PARAM_INT>
struct ident_Brackets {
  static const char *name() {
    return "Brackets";
  }
};

// identifier #CmdADT
template <typename SREFAL_PARAM_INT>
struct ident_CmdADT {
  static const char *name() {
    return "CmdADT";
  }
};

// identifier #CmdBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdBrackets {
  static const char *name() {
    return "CmdBrackets";
  }
};

// identifier #CmdChar
template <typename SREFAL_PARAM_INT>
struct ident_CmdChar {
  static const char *name() {
    return "CmdChar";
  }
};

// identifier #CmdComment
template <typename SREFAL_PARAM_INT>
struct ident_CmdComment {
  static const char *name() {
    return "CmdComment";
  }
};

// identifier #CmdEmpty
template <typename SREFAL_PARAM_INT>
struct ident_CmdEmpty {
  static const char *name() {
    return "CmdEmpty";
  }
};

// identifier #CmdIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdIdent {
  static const char *name() {
    return "CmdIdent";
  }
};

// identifier #CmdInitB0
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitB0 {
  static const char *name() {
    return "CmdInitB0";
  }
};

// identifier #CmdName
template <typename SREFAL_PARAM_INT>
struct ident_CmdName {
  static const char *name() {
    return "CmdName";
  }
};

// identifier #CmdNumber
template <typename SREFAL_PARAM_INT>
struct ident_CmdNumber {
  static const char *name() {
    return "CmdNumber";
  }
};

// identifier #CmdOpenedE
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE {
  static const char *name() {
    return "CmdOpenedE";
  }
};

// identifier #CmdRepeated
template <typename SREFAL_PARAM_INT>
struct ident_CmdRepeated {
  static const char *name() {
    return "CmdRepeated";
  }
};

// identifier #CmdVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdVar {
  static const char *name() {
    return "CmdVar";
  }
};

// identifier #E
template <typename SREFAL_PARAM_INT>
struct ident_E {
  static const char *name() {
    return "E";
  }
};

// identifier #Junk
template <typename SREFAL_PARAM_INT>
struct ident_Junk {
  static const char *name() {
    return "Junk";
  }
};

// identifier #Offset
template <typename SREFAL_PARAM_INT>
struct ident_Offset {
  static const char *name() {
    return "Offset";
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

// identifier #TkCloseADT
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseADT {
  static const char *name() {
    return "TkCloseADT";
  }
};

// identifier #TkCloseBracket
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseBracket {
  static const char *name() {
    return "TkCloseBracket";
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

// identifier #TkOpenADT
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenADT {
  static const char *name() {
    return "TkOpenADT";
  }
};

// identifier #TkOpenBracket
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenBracket {
  static const char *name() {
    return "TkOpenBracket";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

refalrts::FnResult GenInitSubst_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdInitB0<int>::name,
    & ident_Junk<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GenInitSubst_Simple/4 e.FuncName#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.FuncName#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.FuncName#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 0/0 HalfReuse: 2/4 } (/5 # Junk/6 )/7 (/8 # Junk/9 )/10 (/11 # CmdInitB0/12 Tile{ HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icAllocIdent, 0, 1, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icAllocIdent, 0, 1, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icAllocIdent, 0, 0, 12},
    {refalrts::icReinitInt, 0, 0, 0},
    {refalrts::icReinitInt, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 5, 12, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & GenInitSubst_Simple/4 e.FuncName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FuncName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.FuncName#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 0/0 HalfReuse: 2/4 } (/5 # Junk/6 )/7 (/8 # Junk/9 )/10 (/11 # CmdInitB0/12 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_Junk<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_Junk<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_CmdInitB0<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_number( context[0], 0UL );
  refalrts::reinit_number( context[4], 2UL );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[8], context[10] );
  refalrts::link_brackets( context[5], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult GenSubst_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoGenSubst, "DoGenSubst" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GenSubst_Simple/4 s.ContextTop#1/9 e.Substitutes#1/2 (/7 e.PrefixCommands#1/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    // closed e.PrefixCommands#1 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    // closed e.Substitutes#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextTop#1/9 AsIs: e.Substitutes#1/2 AsIs: (/7 } )/10 (/11 Tile{ AsIs: e.PrefixCommands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 8, 0},
    {refalrts::icLinkBrackets, 7, 10, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & GenSubst_Simple/4 s.ContextTop#1/9 e.Substitutes#1/2 (/7 e.PrefixCommands#1/5 )/8 >/1
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
  // closed e.PrefixCommands#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitutes#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextTop#1/9 AsIs: e.Substitutes#1/2 AsIs: (/7 } )/10 (/11 Tile{ AsIs: e.PrefixCommands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoGenSubst, "DoGenSubst" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoGenSubst(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 69 elems
  refalrts::Iter context[69];
  refalrts::zeros( context, 69 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { TextFromExpr, "TextFromExpr" },
    { FakeOffset, "FakeOffset" },
    { Inc2, "Inc2" },
    { Inc, "Inc" },
    { PrintVar, "PrintVar" },
    { IncVarOffset, "IncVarOffset" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name,
    & ident_Junk<int>::name,
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenedE<int>::name,
    & ident_TkVariable<int>::name,
    & ident_E<int>::name,
    & ident_AlgRight<int>::name,
    & ident_CmdVar<int>::name,
    & ident_Offset<int>::name,
    & ident_CmdRepeated<int>::name,
    & ident_CmdEmpty<int>::name,
    & ident_CmdADT<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_TkName<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_CmdBrackets<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name,
    & ident_Brackets<int>::name,
    & ident_CmdIdent<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_CmdName<int>::name,
    & ident_CmdNumber<int>::name,
    & ident_TkNumber<int>::name,
    & ident_CmdChar<int>::name,
    & ident_TkChar<int>::name,
    & ident_S<int>::name,
    & ident_AlgTerm<int>::name,
    & ident_T<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"as range ", 9},
    {" closed ", 8}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S E (E )(E )
    //GLOBAL GEN:S E (E )(E )
    // </0 & DoGenSubst/4 s.idx#0/13 e.idxV#0/2 (/11 e.idxVVB#0/9 )/12 (/7 e.idxVVTB#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    // closed e.idxVVB#0 as range 9
    // closed e.idxVVTB#0 as range 5
    {refalrts::icsVarLeft, 0, 13, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +41, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkChar/35 s.Char#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 29, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 26, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icsVarLeft, 0, 37, 31},
    {refalrts::icEmpty, 0, 0, 31},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Char#1/37 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkChar/24 HalfReuse: s.Char1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Char1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icReinitIdent, 0, 26, 24},
    {refalrts::icReinitSVar, 0, 37, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 25, 1},
    {refalrts::icUpdateIdent, 0, 28, 25},
    {refalrts::icReinitSVar, 0, 37, 33},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 19, 0},
    {refalrts::icLinkBrackets, 8, 35, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 34, 30, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icSpliceTile, 25, 35, 0},
    {refalrts::icSpliceTile, 34, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icTrash, 0, 0, 20},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkName/35 e.Name#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 29, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 13, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Name#1 as range 31
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # T/25 s.Num#1/36 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkName/23 } e.Name#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Name#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
    {refalrts::icCopyEVar, 37, 31, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 13, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 22, 1},
    {refalrts::icReinitIdent, 0, 28, 33},
    {refalrts::icReinitSVar, 0, 36, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 24, 0},
    {refalrts::icLinkBrackets, 8, 34, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 33, 28, 0},
    {refalrts::icSpliceTile, 30, 1, 0},
    {refalrts::icSpliceTile, 37, 38, 0},
    {refalrts::icTrash, 0, 0, 23},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkIdentifier/35 e.Ident#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 29, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 21, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Ident#1 as range 31
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # T/25 s.Num#1/36 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/23 } e.Ident#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Ident#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
    {refalrts::icCopyEVar, 37, 31, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 21, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 20, 1},
    {refalrts::icReinitIdent, 0, 28, 33},
    {refalrts::icReinitSVar, 0, 36, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 24, 0},
    {refalrts::icLinkBrackets, 8, 34, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 33, 28, 0},
    {refalrts::icSpliceTile, 30, 1, 0},
    {refalrts::icSpliceTile, 37, 38, 0},
    {refalrts::icTrash, 0, 0, 23},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkNumber/35 s.Value#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 29, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 24, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icsVarLeft, 0, 37, 31},
    {refalrts::icEmpty, 0, 0, 31},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Value#1/37 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkNumber/24 HalfReuse: s.Value1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Value1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icReinitIdent, 0, 24, 24},
    {refalrts::icReinitSVar, 0, 37, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 23, 1},
    {refalrts::icUpdateIdent, 0, 28, 25},
    {refalrts::icReinitSVar, 0, 37, 33},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 19, 0},
    {refalrts::icLinkBrackets, 8, 35, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 34, 30, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icSpliceTile, 25, 35, 0},
    {refalrts::icSpliceTile, 34, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icTrash, 0, 0, 20},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +64, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # Brackets/35 e.SubRange#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 29, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 19, 31},
    // closed e.Junk1#1 as range 16
    // closed e.SubRange#1 as range 31
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc2/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkOpenBracket/23 HalfReuse: )/25 } )/40 (/41 # E/42 s.ContextOffset#1/13/43 Tile{ AsIs: e.SubRange#1/31 } )/44 (/45 Tile{ HalfReuse: # Junk/34 HalfReuse: (/24 HalfReuse: # TkCloseBracket/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgTerm/46 Tile{ AsIs: s.Num#1/36 HalfReuse: s.ContextOffset1 #13/33 HalfReuse: )/35 } )/47 >/48 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 37},
    {refalrts::icAllocFunc, 0, 2, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 41},
    {refalrts::icAllocIdent, 0, 5, 42},
    {refalrts::icCopySTVar, 43, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icAllocIdent, 0, 28, 46},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 47},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 48},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 18, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitIdent, 0, 1, 34},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icReinitIdent, 0, 17, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 16, 1},
    {refalrts::icReinitSVar, 0, 13, 33},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icPushStack, 0, 0, 48},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 47, 0},
    {refalrts::icLinkBrackets, 8, 35, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 45, 29, 0},
    {refalrts::icLinkBrackets, 24, 30, 0},
    {refalrts::icLinkBrackets, 41, 44, 0},
    {refalrts::icLinkBrackets, 18, 40, 0},
    {refalrts::icLinkBrackets, 19, 25, 0},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 47, 48, 0},
    {refalrts::icSpliceTile, 36, 35, 0},
    {refalrts::icSpliceTile, 46, 46, 0},
    {refalrts::icSpliceTile, 34, 1, 0},
    {refalrts::icSpliceTile, 44, 45, 0},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceTile, 40, 43, 0},
    {refalrts::icSpliceTile, 18, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 39, 39, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 37, 38, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +70, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/40 (/33 # ADT_Brackets/35 (/38 e.Name#1/36 )/39 e.SubRange#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 29, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 15, 31},
    {refalrts::icBracketLeftSave, 0, 36, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Name#1 as range 36
    // closed e.SubRange#1 as range 31
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 40, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/40 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Inc2/42 Tile{ AsIs: s.ContextOffset#1/13 } >/43 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkOpenADT/23 HalfReuse: )/25 } (/44 # TkName/45 e.Name#1/36/46 )/48 )/49 (/50 # E/51 s.ContextOffset#1/13/52 Tile{ AsIs: e.SubRange#1/31 } )/53 (/54 Tile{ HalfReuse: # Junk/34 HalfReuse: (/24 HalfReuse: # TkCloseADT/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #40/35 HalfReuse: s.ContextOffset1 #13/38 AsIs: e.Name#1/36 AsIs: )/39 } )/55 >/56 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 41},
    {refalrts::icAllocFunc, 0, 2, 42},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 43},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icAllocIdent, 0, 13, 45},
    {refalrts::icCopyEVar, 46, 36, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 49},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 50},
    {refalrts::icAllocIdent, 0, 5, 51},
    {refalrts::icCopySTVar, 52, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 53},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 54},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 55},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 56},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 14, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitIdent, 0, 1, 34},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icReinitIdent, 0, 12, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 11, 1},
    {refalrts::icReinitIdent, 0, 28, 33},
    {refalrts::icReinitSVar, 0, 40, 35},
    {refalrts::icReinitSVar, 0, 13, 38},
    {refalrts::icPushStack, 0, 0, 56},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 55, 0},
    {refalrts::icLinkBrackets, 8, 39, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 54, 29, 0},
    {refalrts::icLinkBrackets, 24, 30, 0},
    {refalrts::icLinkBrackets, 50, 53, 0},
    {refalrts::icLinkBrackets, 18, 49, 0},
    {refalrts::icLinkBrackets, 44, 48, 0},
    {refalrts::icLinkBrackets, 19, 25, 0},
    {refalrts::icPushStack, 0, 0, 43},
    {refalrts::icPushStack, 0, 0, 41},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 55, 56, 0},
    {refalrts::icSpliceTile, 33, 39, 0},
    {refalrts::icSpliceTile, 34, 1, 0},
    {refalrts::icSpliceTile, 53, 54, 0},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceTile, 44, 52, 0},
    {refalrts::icSpliceTile, 18, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 43, 43, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 41, 42, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +62, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkVariable/35 s.Mode#1/37 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars_B#1/38 (/42 s.Mode#1/44 (/47 e.Index#1/49 )/48 e.Offsets#1/40 s.SampleOffset#1/51 )/43 e.Vars_E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 29, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 4, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icsVarLeft, 0, 37, 31},
    // closed e.Index#1 as range 31
    {refalrts::icSave, 0, 65, 9},
    {refalrts::icEPrepare, 0, 38, 65},
    {refalrts::icEStart, 0, 38, 65},
    {refalrts::icSave, 0, 67, 65},
    {refalrts::icBracketLeftSave, 0, 40, 67},
    {refalrts::icsRepeatLeft, 44, 37, 40},
    {refalrts::icBracketLeftSave, 0, 45, 40},
    {refalrts::iceRepeatLeft, 49, 31, 45},
    {refalrts::icEmpty, 0, 0, 45},
    // closed e.Vars_E#1 as range 67(9)
    {refalrts::icsVarRight, 0, 51, 40},
    // closed e.Offsets#1 as range 40
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/37 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: s.Mode1 #44/25 } Tile{ AsIs: e.Index#1/31 } Tile{ HalfReuse: s.Num1 #36/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars_B#1/38 AsIs: (/42 AsIs: s.Mode#1/44 AsIs: (/47 AsIs: e.Index#1/49 AsIs: )/48 AsIs: e.Offsets#1/40 AsIs: s.SampleOffset#1/51 HalfReuse: s.Num1 #36/43 } )/52 Tile{ AsIs: e.Vars_E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgTerm/53 Tile{ AsIs: s.Num#1/36 HalfReuse: s.Mode1 #44/33 HalfReuse: s.Num1 #36/35 } s.SampleOffset#1/51/54 Tile{ AsIs: )/34 AsIs: )/24 } >/55 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icAllocIdent, 0, 28, 53},
    {refalrts::icCopySTVar, 54, 51, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 55},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 4, 23},
    {refalrts::icReinitSVar, 0, 44, 25},
    {refalrts::icReinitSVar, 0, 36, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitSVar, 0, 36, 43},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 9, 1},
    {refalrts::icReinitSVar, 0, 44, 33},
    {refalrts::icReinitSVar, 0, 36, 35},
    {refalrts::icPushStack, 0, 0, 55},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 24, 0},
    {refalrts::icLinkBrackets, 8, 34, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 42, 52, 0},
    {refalrts::icLinkBrackets, 47, 48, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 55, 55, 0},
    {refalrts::icSpliceTile, 34, 24, 0},
    {refalrts::icSpliceTile, 54, 54, 0},
    {refalrts::icSpliceTile, 36, 35, 0},
    {refalrts::icSpliceTile, 53, 53, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 67},
    {refalrts::icSpliceTile, 52, 52, 0},
    {refalrts::icSpliceTile, 28, 43, 0},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icTrash, 0, 0, 25},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +46, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/37 (/33 # TkVariable/35 't'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 29, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 4, 31},
    {refalrts::icCharLeftSave, 36, static_cast<unsigned char>('t'), 31},
    // closed e.Junk1#1 as range 16
    // closed e.Index#1 as range 31
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 37, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/37 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 't'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } Tile{ HalfReuse: (/36 AsIs: e.Index#1/31 AsIs: )/34 HalfReuse: s.Num1 #37/24 } Tile{ HalfReuse: )/35 } )/40 Tile{ AsIs: (/33 } Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 38, 31, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 4, 23},
    {refalrts::icReinitChar, 0, 't', 25},
    {refalrts::icReinitSVar, 0, 37, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitChar, 0, 't', 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icReinitSVar, 0, 37, 24},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 33, 8, 0},
    {refalrts::icLinkBrackets, 11, 40, 0},
    {refalrts::icLinkBrackets, 12, 35, 0},
    {refalrts::icLinkBrackets, 36, 34, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceTile, 40, 40, 0},
    {refalrts::icSpliceTile, 35, 35, 0},
    {refalrts::icSpliceTile, 36, 24, 0},
    {refalrts::icSpliceTile, 28, 7, 0},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icTrash, 0, 0, 25},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +54, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/37 (/33 # TkVariable/35 's'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 29, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 4, 31},
    {refalrts::icCharLeftSave, 36, static_cast<unsigned char>('s'), 31},
    // closed e.Junk1#1 as range 16
    // closed e.Index#1 as range 31
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 37, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 's'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/36 AsIs: e.Index#1/31 AsIs: )/34 HalfReuse: s.Num1 #37/24 } )/40 )/41 (/42 Tile{ AsIs: e.Commands#1/5 } (/43 # CmdVar/44 # AlgTerm/45 Tile{ AsIs: s.Num#1/37 HalfReuse: 's'/33 HalfReuse: s.ContextOffset1 #13/35 } )/46 Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 38, 31, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 41},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 42},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icAllocIdent, 0, 7, 44},
    {refalrts::icAllocIdent, 0, 28, 45},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 46},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 4, 23},
    {refalrts::icReinitChar, 0, 's', 25},
    {refalrts::icReinitSVar, 0, 37, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitChar, 0, 's', 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icReinitSVar, 0, 37, 24},
    {refalrts::icReinitChar, 0, 's', 33},
    {refalrts::icReinitSVar, 0, 13, 35},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 42, 8, 0},
    {refalrts::icLinkBrackets, 43, 46, 0},
    {refalrts::icLinkBrackets, 11, 41, 0},
    {refalrts::icLinkBrackets, 12, 40, 0},
    {refalrts::icLinkBrackets, 36, 34, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 46, 46, 0},
    {refalrts::icSpliceTile, 37, 35, 0},
    {refalrts::icSpliceTile, 43, 45, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 40, 42, 0},
    {refalrts::icSpliceTile, 36, 24, 0},
    {refalrts::icSpliceTile, 28, 7, 0},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkChar/35 s.Char#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 27, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 26, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icsVarLeft, 0, 37, 31},
    {refalrts::icEmpty, 0, 0, 31},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Char#1/37 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkChar/24 HalfReuse: s.Char1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Char1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icReinitIdent, 0, 26, 24},
    {refalrts::icReinitSVar, 0, 37, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 25, 1},
    {refalrts::icUpdateIdent, 0, 28, 25},
    {refalrts::icReinitSVar, 0, 37, 33},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 19, 0},
    {refalrts::icLinkBrackets, 8, 35, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 34, 30, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icSpliceTile, 25, 35, 0},
    {refalrts::icSpliceTile, 34, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icTrash, 0, 0, 20},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkName/35 e.Name#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 27, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 13, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Name#1 as range 31
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # S/25 s.Num#1/36 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkName/23 } e.Name#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Name#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
    {refalrts::icCopyEVar, 37, 31, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 13, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 22, 1},
    {refalrts::icReinitIdent, 0, 28, 33},
    {refalrts::icReinitSVar, 0, 36, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 24, 0},
    {refalrts::icLinkBrackets, 8, 34, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 33, 28, 0},
    {refalrts::icSpliceTile, 30, 1, 0},
    {refalrts::icSpliceTile, 37, 38, 0},
    {refalrts::icTrash, 0, 0, 23},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkIdentifier/35 e.Ident#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 27, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 21, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Ident#1 as range 31
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # S/25 s.Num#1/36 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/23 } e.Ident#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Ident#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
    {refalrts::icCopyEVar, 37, 31, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 21, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 20, 1},
    {refalrts::icReinitIdent, 0, 28, 33},
    {refalrts::icReinitSVar, 0, 36, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 24, 0},
    {refalrts::icLinkBrackets, 8, 34, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 33, 28, 0},
    {refalrts::icSpliceTile, 30, 1, 0},
    {refalrts::icSpliceTile, 37, 38, 0},
    {refalrts::icTrash, 0, 0, 23},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkNumber/35 s.Value#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 27, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 24, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icsVarLeft, 0, 37, 31},
    {refalrts::icEmpty, 0, 0, 31},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Value#1/37 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkNumber/24 HalfReuse: s.Value1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Value1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icReinitIdent, 0, 24, 24},
    {refalrts::icReinitSVar, 0, 37, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 23, 1},
    {refalrts::icUpdateIdent, 0, 28, 25},
    {refalrts::icReinitSVar, 0, 37, 33},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 19, 0},
    {refalrts::icLinkBrackets, 8, 35, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 34, 30, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icSpliceTile, 25, 35, 0},
    {refalrts::icSpliceTile, 34, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icTrash, 0, 0, 20},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +62, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkVariable/35 s.Mode#1/37 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars_B#1/38 (/42 s.Mode#1/44 (/47 e.Index#1/49 )/48 e.Offsets#1/40 s.SampleOffset#1/51 )/43 e.Vars_E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 27, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 4, 31},
    // closed e.Junk1#1 as range 16
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 36, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icsVarLeft, 0, 37, 31},
    // closed e.Index#1 as range 31
    {refalrts::icSave, 0, 65, 9},
    {refalrts::icEPrepare, 0, 38, 65},
    {refalrts::icEStart, 0, 38, 65},
    {refalrts::icSave, 0, 67, 65},
    {refalrts::icBracketLeftSave, 0, 40, 67},
    {refalrts::icsRepeatLeft, 44, 37, 40},
    {refalrts::icBracketLeftSave, 0, 45, 40},
    {refalrts::iceRepeatLeft, 49, 31, 45},
    {refalrts::icEmpty, 0, 0, 45},
    // closed e.Vars_E#1 as range 67(9)
    {refalrts::icsVarRight, 0, 51, 40},
    // closed e.Offsets#1 as range 40
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/37 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: s.Mode1 #44/25 } Tile{ AsIs: e.Index#1/31 } Tile{ HalfReuse: s.Num1 #36/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars_B#1/38 AsIs: (/42 AsIs: s.Mode#1/44 AsIs: (/47 AsIs: e.Index#1/49 AsIs: )/48 AsIs: e.Offsets#1/40 AsIs: s.SampleOffset#1/51 HalfReuse: s.Num1 #36/43 } )/52 Tile{ AsIs: e.Vars_E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgTerm/53 Tile{ AsIs: s.Num#1/36 HalfReuse: s.Mode1 #44/33 HalfReuse: s.Num1 #36/35 } s.SampleOffset#1/51/54 Tile{ AsIs: )/34 AsIs: )/24 } >/55 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icAllocIdent, 0, 28, 53},
    {refalrts::icCopySTVar, 54, 51, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 55},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 4, 23},
    {refalrts::icReinitSVar, 0, 44, 25},
    {refalrts::icReinitSVar, 0, 36, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitSVar, 0, 36, 43},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 9, 1},
    {refalrts::icReinitSVar, 0, 44, 33},
    {refalrts::icReinitSVar, 0, 36, 35},
    {refalrts::icPushStack, 0, 0, 55},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 24, 0},
    {refalrts::icLinkBrackets, 8, 34, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 42, 52, 0},
    {refalrts::icLinkBrackets, 47, 48, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 55, 55, 0},
    {refalrts::icSpliceTile, 34, 24, 0},
    {refalrts::icSpliceTile, 54, 54, 0},
    {refalrts::icSpliceTile, 36, 35, 0},
    {refalrts::icSpliceTile, 53, 53, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 67},
    {refalrts::icSpliceTile, 52, 52, 0},
    {refalrts::icSpliceTile, 28, 43, 0},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icTrash, 0, 0, 25},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +46, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/37 (/33 # TkVariable/35 's'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 27, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 4, 31},
    {refalrts::icCharLeftSave, 36, static_cast<unsigned char>('s'), 31},
    // closed e.Junk1#1 as range 16
    // closed e.Index#1 as range 31
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 37, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/37 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 's'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/36 AsIs: e.Index#1/31 AsIs: )/34 HalfReuse: s.Num1 #37/24 } Tile{ HalfReuse: )/35 } )/40 Tile{ AsIs: (/33 } Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 38, 31, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 4, 23},
    {refalrts::icReinitChar, 0, 's', 25},
    {refalrts::icReinitSVar, 0, 37, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitChar, 0, 's', 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icReinitSVar, 0, 37, 24},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 33, 8, 0},
    {refalrts::icLinkBrackets, 11, 40, 0},
    {refalrts::icLinkBrackets, 12, 35, 0},
    {refalrts::icLinkBrackets, 36, 34, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceTile, 40, 40, 0},
    {refalrts::icSpliceTile, 35, 35, 0},
    {refalrts::icSpliceTile, 36, 24, 0},
    {refalrts::icSpliceTile, 28, 7, 0},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icTrash, 0, 0, 25},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +45, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkChar/31 s.Char#1/32 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    // closed e.Junk#1 as range 16
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icBracketLeftSave, 0, 27, 21},
    {refalrts::icIdentLeftSave, 31, 26, 27},
    // closed e.Range#1 as range 21
    {refalrts::icsVarLeft, 0, 32, 27},
    {refalrts::icEmpty, 0, 0, 27},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Char#1/32 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkChar/23 HalfReuse: s.Char1 #32/25 } )/33 )/34 (/35 # E/36 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } # AlgLeft/37 Tile{ AsIs: s.Num#1/26 HalfReuse: s.Char1 #32/29 HalfReuse: )/31 } )/38 >/39 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icAllocIdent, 0, 5, 36},
    {refalrts::icAllocIdent, 0, 2, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 26, 23},
    {refalrts::icReinitSVar, 0, 32, 25},
    {refalrts::icReinitSVar, 0, 26, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 25, 1},
    {refalrts::icReinitSVar, 0, 32, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 38, 0},
    {refalrts::icLinkBrackets, 8, 31, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 35, 24, 0},
    {refalrts::icLinkBrackets, 18, 34, 0},
    {refalrts::icLinkBrackets, 19, 33, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icSpliceTile, 26, 31, 0},
    {refalrts::icSpliceTile, 37, 37, 0},
    {refalrts::icSpliceTile, 30, 1, 0},
    {refalrts::icSpliceTile, 33, 36, 0},
    {refalrts::icTrash, 0, 0, 25},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +45, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkNumber/31 s.Number#1/32 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    // closed e.Junk#1 as range 16
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icBracketLeftSave, 0, 27, 21},
    {refalrts::icIdentLeftSave, 31, 24, 27},
    // closed e.Range#1 as range 21
    {refalrts::icsVarLeft, 0, 32, 27},
    {refalrts::icEmpty, 0, 0, 27},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Number#1/32 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkNumber/23 HalfReuse: s.Number1 #32/25 } )/33 )/34 (/35 # E/36 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } # AlgLeft/37 Tile{ AsIs: s.Num#1/26 HalfReuse: s.Number1 #32/29 HalfReuse: )/31 } )/38 >/39 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icAllocIdent, 0, 5, 36},
    {refalrts::icAllocIdent, 0, 2, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 24, 23},
    {refalrts::icReinitSVar, 0, 32, 25},
    {refalrts::icReinitSVar, 0, 26, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 23, 1},
    {refalrts::icReinitSVar, 0, 32, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 38, 0},
    {refalrts::icLinkBrackets, 8, 31, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 35, 24, 0},
    {refalrts::icLinkBrackets, 18, 34, 0},
    {refalrts::icLinkBrackets, 19, 33, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icSpliceTile, 26, 31, 0},
    {refalrts::icSpliceTile, 37, 37, 0},
    {refalrts::icSpliceTile, 30, 1, 0},
    {refalrts::icSpliceTile, 33, 36, 0},
    {refalrts::icTrash, 0, 0, 25},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkName/31 e.Name#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    // closed e.Junk#1 as range 16
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icBracketLeftSave, 0, 27, 21},
    {refalrts::icIdentLeftSave, 31, 13, 27},
    // closed e.Name#1 as range 27
    // closed e.Range#1 as range 21
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Junk#1/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: (/29 AsIs: # TkName/31 } Tile{ AsIs: e.Name#1/27 } )/32 Tile{ AsIs: )/19 AsIs: (/23 AsIs: # E/25 } Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } # AlgLeft/33 Tile{ AsIs: s.Num#1/26 } e.Name#1/27/34 )/36 )/37 >/38 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocIdent, 0, 2, 33},
    {refalrts::icCopyEVar, 34, 27, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icReinitSVar, 0, 26, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 22, 1},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 37, 0},
    {refalrts::icLinkBrackets, 8, 36, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 36, 38, 0},
    {refalrts::icSpliceTile, 34, 35, 0},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceTile, 30, 1, 0},
    {refalrts::icSpliceTile, 19, 25, 0},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceTile, 29, 31, 0},
    {refalrts::icTrash, 0, 0, 20},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkIdentifier/31 e.Name#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    // closed e.Junk#1 as range 16
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icBracketLeftSave, 0, 27, 21},
    {refalrts::icIdentLeftSave, 31, 21, 27},
    // closed e.Name#1 as range 27
    // closed e.Range#1 as range 21
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/23 } Tile{ AsIs: e.Name#1/27 } )/32 )/33 Tile{ AsIs: (/29 Reuse: # E/31 } Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ Reuse: # AlgLeft/25 AsIs: s.Num#1/26 } e.Name#1/27/34 )/36 )/37 >/38 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icCopyEVar, 34, 27, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 21, 23},
    {refalrts::icUpdateIdent, 0, 5, 31},
    {refalrts::icReinitSVar, 0, 26, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 20, 1},
    {refalrts::icUpdateIdent, 0, 2, 25},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 37, 0},
    {refalrts::icLinkBrackets, 8, 36, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 29, 24, 0},
    {refalrts::icLinkBrackets, 18, 33, 0},
    {refalrts::icLinkBrackets, 19, 32, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 36, 38, 0},
    {refalrts::icSpliceTile, 34, 35, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 30, 1, 0},
    {refalrts::icSpliceTile, 29, 31, 0},
    {refalrts::icSpliceTile, 32, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkChar/30 s.Char#1/32 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 5, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    {refalrts::icBracketRightSave, 0, 26, 16},
    {refalrts::icIdentLeftSave, 30, 26, 26},
    // closed e.Junk#1 as range 21
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 31, 16},
    // closed e.Range#1 as range 16
    {refalrts::icsVarLeft, 0, 32, 26},
    {refalrts::icEmpty, 0, 0, 26},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/33 Tile{ HalfReuse: (/29 HalfReuse: # TkChar/19 HalfReuse: s.Char1 #32/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } # AlgRight/34 s.Num#1/31/35 Tile{ AsIs: s.Char#1/32 } )/36 )/37 >/38 Tile{ ]] }
    {refalrts::icAllocIdent, 0, 1, 33},
    {refalrts::icAllocIdent, 0, 6, 34},
    {refalrts::icCopySTVar, 35, 31, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icReinitIdent, 0, 26, 19},
    {refalrts::icReinitSVar, 0, 32, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 25, 1},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 37, 0},
    {refalrts::icLinkBrackets, 8, 36, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 30, 24, 0},
    {refalrts::icLinkBrackets, 29, 25, 0},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 36, 38, 0},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 34, 35, 0},
    {refalrts::icSpliceTile, 29, 1, 0},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkNumber/30 s.Number#1/32 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 5, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    {refalrts::icBracketRightSave, 0, 26, 16},
    {refalrts::icIdentLeftSave, 30, 24, 26},
    // closed e.Junk#1 as range 21
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 31, 16},
    // closed e.Range#1 as range 16
    {refalrts::icsVarLeft, 0, 32, 26},
    {refalrts::icEmpty, 0, 0, 26},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/33 Tile{ HalfReuse: (/29 HalfReuse: # TkNumber/19 HalfReuse: s.Number1 #32/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } # AlgRight/34 s.Num#1/31/35 Tile{ AsIs: s.Number#1/32 } )/36 )/37 >/38 Tile{ ]] }
    {refalrts::icAllocIdent, 0, 1, 33},
    {refalrts::icAllocIdent, 0, 6, 34},
    {refalrts::icCopySTVar, 35, 31, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icReinitIdent, 0, 24, 19},
    {refalrts::icReinitSVar, 0, 32, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 23, 1},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 37, 0},
    {refalrts::icLinkBrackets, 8, 36, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 30, 24, 0},
    {refalrts::icLinkBrackets, 29, 25, 0},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 36, 38, 0},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 34, 35, 0},
    {refalrts::icSpliceTile, 29, 1, 0},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +40, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkName/30 e.Name#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 5, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    {refalrts::icBracketRightSave, 0, 26, 16},
    {refalrts::icIdentLeftSave, 30, 13, 26},
    // closed e.Name#1 as range 26
    // closed e.Junk#1 as range 21
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 31, 16},
    // closed e.Range#1 as range 16
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/32 (/33 # TkName/34 Tile{ AsIs: e.Name#1/26 } Tile{ HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } # AlgRight/35 s.Num#1/31/36 e.Name#1/26/37 Tile{ AsIs: )/29 AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
    {refalrts::icAllocIdent, 0, 1, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icAllocIdent, 0, 13, 34},
    {refalrts::icAllocIdent, 0, 6, 35},
    {refalrts::icCopySTVar, 36, 31, 0},
    {refalrts::icCopyEVar, 37, 26, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 22, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 19, 0},
    {refalrts::icLinkBrackets, 8, 29, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 30, 24, 0},
    {refalrts::icLinkBrackets, 33, 25, 0},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 29, 23, 0},
    {refalrts::icSpliceTile, 37, 38, 0},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceTile, 25, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 32, 34, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +40, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkIdentifier/30 e.Name#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 5, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    {refalrts::icBracketRightSave, 0, 26, 16},
    {refalrts::icIdentLeftSave, 30, 21, 26},
    // closed e.Name#1 as range 26
    // closed e.Junk#1 as range 21
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 31, 16},
    // closed e.Range#1 as range 16
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/32 (/33 # TkIdentifier/34 Tile{ AsIs: e.Name#1/26 } Tile{ HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } # AlgRight/35 s.Num#1/31/36 e.Name#1/26/37 Tile{ AsIs: )/29 AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
    {refalrts::icAllocIdent, 0, 1, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icAllocIdent, 0, 21, 34},
    {refalrts::icAllocIdent, 0, 6, 35},
    {refalrts::icCopySTVar, 36, 31, 0},
    {refalrts::icCopyEVar, 37, 26, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 20, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 19, 0},
    {refalrts::icLinkBrackets, 8, 29, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 30, 24, 0},
    {refalrts::icLinkBrackets, 33, 25, 0},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 29, 23, 0},
    {refalrts::icSpliceTile, 37, 38, 0},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceTile, 25, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 32, 34, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +66, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # Brackets/31 e.SubRange#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    // closed e.Junk#1 as range 16
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icBracketLeftSave, 0, 27, 21},
    {refalrts::icIdentLeftSave, 31, 19, 27},
    // closed e.SubRange#1 as range 27
    // closed e.Range#1 as range 21
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </32 & Inc2/33 Tile{ AsIs: s.ContextOffset#1/13 } >/34 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkOpenBracket/23 HalfReuse: )/25 } )/35 (/36 # E/37 s.ContextOffset#1/13/38 Tile{ AsIs: e.SubRange#1/27 } )/39 (/40 # Junk/41 (/42 # TkCloseBracket/43 )/44 )/45 (/46 # E/47 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgLeft/48 Tile{ AsIs: s.Num#1/26 HalfReuse: s.ContextOffset1 #13/29 HalfReuse: )/31 } )/49 >/50 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icAllocFunc, 0, 2, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icAllocIdent, 0, 5, 37},
    {refalrts::icCopySTVar, 38, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 40},
    {refalrts::icAllocIdent, 0, 1, 41},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 42},
    {refalrts::icAllocIdent, 0, 17, 43},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 45},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 46},
    {refalrts::icAllocIdent, 0, 5, 47},
    {refalrts::icAllocIdent, 0, 2, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 49},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 50},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 18, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitSVar, 0, 26, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 16, 1},
    {refalrts::icReinitSVar, 0, 13, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icPushStack, 0, 0, 50},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 49, 0},
    {refalrts::icLinkBrackets, 8, 31, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 46, 24, 0},
    {refalrts::icLinkBrackets, 40, 45, 0},
    {refalrts::icLinkBrackets, 42, 44, 0},
    {refalrts::icLinkBrackets, 36, 39, 0},
    {refalrts::icLinkBrackets, 18, 35, 0},
    {refalrts::icLinkBrackets, 19, 25, 0},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 49, 50, 0},
    {refalrts::icSpliceTile, 26, 31, 0},
    {refalrts::icSpliceTile, 48, 48, 0},
    {refalrts::icSpliceTile, 30, 1, 0},
    {refalrts::icSpliceTile, 39, 47, 0},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceTile, 35, 38, 0},
    {refalrts::icSpliceTile, 18, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 34, 34, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 32, 33, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +64, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # Brackets/30 e.SubRange#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 5, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    {refalrts::icBracketRightSave, 0, 26, 16},
    {refalrts::icIdentLeftSave, 30, 19, 26},
    // closed e.SubRange#1 as range 26
    // closed e.Junk#1 as range 21
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 31, 16},
    // closed e.Range#1 as range 16
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </32 & Inc2/33 Tile{ AsIs: s.ContextOffset#1/13 } >/34 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/35 (/36 # TkOpenBracket/37 )/38 )/39 (/40 # E/41 s.ContextOffset#1/13/42 Tile{ AsIs: e.SubRange#1/26 } )/43 (/44 Tile{ HalfReuse: # Junk/29 HalfReuse: (/19 HalfReuse: # TkCloseBracket/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgRight/45 s.Num#1/31/46 s.ContextOffset#1/13/47 )/48 )/49 >/50 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icAllocFunc, 0, 2, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icAllocIdent, 0, 1, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icAllocIdent, 0, 18, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 40},
    {refalrts::icAllocIdent, 0, 5, 41},
    {refalrts::icCopySTVar, 42, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icAllocIdent, 0, 6, 45},
    {refalrts::icCopySTVar, 46, 31, 0},
    {refalrts::icCopySTVar, 47, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 49},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 50},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icReinitIdent, 0, 1, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 17, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 16, 1},
    {refalrts::icPushStack, 0, 0, 50},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 49, 0},
    {refalrts::icLinkBrackets, 8, 48, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 44, 24, 0},
    {refalrts::icLinkBrackets, 19, 25, 0},
    {refalrts::icLinkBrackets, 40, 43, 0},
    {refalrts::icLinkBrackets, 30, 39, 0},
    {refalrts::icLinkBrackets, 36, 38, 0},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 45, 50, 0},
    {refalrts::icSpliceTile, 29, 1, 0},
    {refalrts::icSpliceTile, 43, 44, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 35, 42, 0},
    {refalrts::icSpliceTile, 18, 30, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 34, 34, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 32, 33, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +72, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # ADT_Brackets/31 (/34 e.Name#1/32 )/35 e.SubRange#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    // closed e.Junk#1 as range 16
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icBracketLeftSave, 0, 27, 21},
    {refalrts::icIdentLeftSave, 31, 15, 27},
    {refalrts::icBracketLeftSave, 0, 32, 27},
    // closed e.Name#1 as range 32
    // closed e.SubRange#1 as range 27
    // closed e.Range#1 as range 21
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Inc2/37 Tile{ AsIs: s.ContextOffset#1/13 } >/38 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkOpenADT/23 HalfReuse: )/25 } (/39 # TkName/40 e.Name#1/32/41 )/43 )/44 (/45 # E/46 s.ContextOffset#1/13/47 Tile{ AsIs: e.SubRange#1/27 } )/48 (/49 # Junk/50 (/51 # TkCloseADT/52 )/53 )/54 (/55 # E/56 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } Tile{ HalfReuse: # AlgLeft/29 HalfReuse: s.Num1 #26/31 HalfReuse: s.ContextOffset1 #13/34 AsIs: e.Name#1/32 AsIs: )/35 } )/57 >/58 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocFunc, 0, 2, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icAllocIdent, 0, 13, 40},
    {refalrts::icCopyEVar, 41, 32, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icAllocIdent, 0, 5, 46},
    {refalrts::icCopySTVar, 47, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 49},
    {refalrts::icAllocIdent, 0, 1, 50},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 51},
    {refalrts::icAllocIdent, 0, 12, 52},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 53},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 54},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 55},
    {refalrts::icAllocIdent, 0, 5, 56},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 57},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 58},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 14, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitSVar, 0, 26, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 11, 1},
    {refalrts::icReinitIdent, 0, 2, 29},
    {refalrts::icReinitSVar, 0, 26, 31},
    {refalrts::icReinitSVar, 0, 13, 34},
    {refalrts::icPushStack, 0, 0, 58},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 57, 0},
    {refalrts::icLinkBrackets, 8, 35, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 55, 24, 0},
    {refalrts::icLinkBrackets, 49, 54, 0},
    {refalrts::icLinkBrackets, 51, 53, 0},
    {refalrts::icLinkBrackets, 45, 48, 0},
    {refalrts::icLinkBrackets, 18, 44, 0},
    {refalrts::icLinkBrackets, 39, 43, 0},
    {refalrts::icLinkBrackets, 19, 25, 0},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 57, 58, 0},
    {refalrts::icSpliceTile, 29, 35, 0},
    {refalrts::icSpliceTile, 30, 1, 0},
    {refalrts::icSpliceTile, 48, 56, 0},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceTile, 39, 47, 0},
    {refalrts::icSpliceTile, 18, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 38, 38, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 36, 37, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/35 e.Range#1/16 (/28 # ADT_Brackets/30 (/33 e.Name#1/31 )/34 e.SubRange#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 5, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    {refalrts::icBracketRightSave, 0, 26, 16},
    {refalrts::icIdentLeftSave, 30, 15, 26},
    {refalrts::icBracketLeftSave, 0, 31, 26},
    // closed e.Name#1 as range 31
    // closed e.SubRange#1 as range 26
    // closed e.Junk#1 as range 21
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 35, 16},
    // closed e.Range#1 as range 16
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Inc2/37 Tile{ AsIs: s.ContextOffset#1/13 } >/38 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/35 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/33 } (/39 # TkOpenADT/40 Tile{ AsIs: )/34 } (/41 # TkName/42 Tile{ AsIs: e.Name#1/31 } )/43 )/44 (/45 # E/46 s.ContextOffset#1/13/47 Tile{ AsIs: e.SubRange#1/26 } )/48 (/49 Tile{ HalfReuse: # Junk/29 HalfReuse: (/19 HalfReuse: # TkCloseADT/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } # AlgRight/50 s.Num#1/35/51 s.ContextOffset#1/13/52 e.Name#1/31/53 )/55 )/56 >/57 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocFunc, 0, 2, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icAllocIdent, 0, 14, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 41},
    {refalrts::icAllocIdent, 0, 13, 42},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icAllocIdent, 0, 5, 46},
    {refalrts::icCopySTVar, 47, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 49},
    {refalrts::icAllocIdent, 0, 6, 50},
    {refalrts::icCopySTVar, 51, 35, 0},
    {refalrts::icCopySTVar, 52, 13, 0},
    {refalrts::icCopyEVar, 53, 31, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 55},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 56},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 57},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icReinitIdent, 0, 1, 33},
    {refalrts::icReinitIdent, 0, 1, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 12, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 11, 1},
    {refalrts::icPushStack, 0, 0, 57},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 56, 0},
    {refalrts::icLinkBrackets, 8, 55, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 49, 24, 0},
    {refalrts::icLinkBrackets, 19, 25, 0},
    {refalrts::icLinkBrackets, 45, 48, 0},
    {refalrts::icLinkBrackets, 30, 44, 0},
    {refalrts::icLinkBrackets, 41, 43, 0},
    {refalrts::icLinkBrackets, 39, 34, 0},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 50, 57, 0},
    {refalrts::icSpliceTile, 29, 1, 0},
    {refalrts::icSpliceTile, 48, 49, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 43, 47, 0},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceTile, 41, 42, 0},
    {refalrts::icSpliceTile, 34, 34, 0},
    {refalrts::icSpliceTile, 39, 40, 0},
    {refalrts::icSpliceTile, 18, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 38, 38, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 36, 37, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # E/25 s.Num#1/31 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    // closed e.Junk1#1 as range 16
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 31, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  )/19 (/23 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ AsIs: e.Junk2#1/26 } Tile{ AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdEmpty/1 } Tile{ Reuse: # AlgLeft/25 AsIs: s.Num#1/31 AsIs: )/24 HalfReuse: )/28 HalfReuse: >/30 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 10, 1},
    {refalrts::icUpdateIdent, 0, 2, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 28, 0},
    {refalrts::icLinkBrackets, 8, 24, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 25, 30, 0},
    {refalrts::icSpliceTile, 29, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icTrash, 0, 0, 20},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +75, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 s.Mode#1/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars_B#1/33 (/37 s.Mode#1/39 (/42 e.Index#1/44 )/43 e.Offsets#1/35 s.SampleOffset#1/46 )/38 e.Vars_E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    // closed e.Junk#1 as range 16
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icBracketLeftSave, 0, 27, 21},
    {refalrts::icIdentLeftSave, 31, 4, 27},
    // closed e.Range#1 as range 21
    {refalrts::icsVarLeft, 0, 32, 27},
    // closed e.Index#1 as range 27
    {refalrts::icSave, 0, 65, 9},
    {refalrts::icEPrepare, 0, 33, 65},
    {refalrts::icEStart, 0, 33, 65},
    {refalrts::icSave, 0, 67, 65},
    {refalrts::icBracketLeftSave, 0, 35, 67},
    {refalrts::icsRepeatLeft, 39, 32, 35},
    {refalrts::icBracketLeftSave, 0, 40, 35},
    {refalrts::iceRepeatLeft, 44, 27, 40},
    {refalrts::icEmpty, 0, 0, 40},
    // closed e.Vars_E#1 as range 67(9)
    {refalrts::icsVarRight, 0, 46, 35},
    // closed e.Offsets#1 as range 35
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </47 & IncVarOffset/48 Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: s.Mode#1/32 } >/49 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: s.Mode1 #39/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/50 )/51 )/52 (/53 # E/54 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars_B#1/33 AsIs: (/37 AsIs: s.Mode#1/39 AsIs: (/42 AsIs: e.Index#1/44 AsIs: )/43 AsIs: e.Offsets#1/35 AsIs: s.SampleOffset#1/46 HalfReuse: s.ContextOffset1 #13/38 } )/55 Tile{ AsIs: e.Vars_E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgLeft/56 Tile{ AsIs: s.Num#1/26 HalfReuse: s.Mode1 #39/29 HalfReuse: s.ContextOffset1 #13/31 } s.SampleOffset#1/46/57 )/58 )/59 >/60 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 47},
    {refalrts::icAllocFunc, 0, 5, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 49},
    {refalrts::icCopySTVar, 50, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 53},
    {refalrts::icAllocIdent, 0, 5, 54},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 55},
    {refalrts::icAllocIdent, 0, 2, 56},
    {refalrts::icCopySTVar, 57, 46, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 58},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 59},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 60},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 4, 23},
    {refalrts::icReinitSVar, 0, 39, 25},
    {refalrts::icReinitSVar, 0, 26, 30},
    {refalrts::icReinitSVar, 0, 13, 38},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 9, 1},
    {refalrts::icReinitSVar, 0, 39, 29},
    {refalrts::icReinitSVar, 0, 13, 31},
    {refalrts::icPushStack, 0, 0, 60},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 59, 0},
    {refalrts::icLinkBrackets, 8, 58, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 37, 55, 0},
    {refalrts::icLinkBrackets, 42, 43, 0},
    {refalrts::icLinkBrackets, 53, 24, 0},
    {refalrts::icLinkBrackets, 18, 52, 0},
    {refalrts::icLinkBrackets, 19, 51, 0},
    {refalrts::icPushStack, 0, 0, 49},
    {refalrts::icPushStack, 0, 0, 47},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 57, 60, 0},
    {refalrts::icSpliceTile, 26, 31, 0},
    {refalrts::icSpliceTile, 56, 56, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 67},
    {refalrts::icSpliceTile, 55, 55, 0},
    {refalrts::icSpliceTile, 30, 38, 0},
    {refalrts::icSpliceTile, 50, 54, 0},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceTile, 18, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 49, 49, 0},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 47, 48, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkVariable/30 s.Mode#1/32 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars_B#1/33 (/37 s.Mode#1/39 (/42 e.Index#1/44 )/43 e.Offsets#1/35 s.SampleOffset#1/46 )/38 e.Vars_E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 5, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    {refalrts::icBracketRightSave, 0, 26, 16},
    {refalrts::icIdentLeftSave, 30, 4, 26},
    // closed e.Junk#1 as range 21
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 31, 16},
    // closed e.Range#1 as range 16
    {refalrts::icsVarLeft, 0, 32, 26},
    // closed e.Index#1 as range 26
    {refalrts::icSave, 0, 65, 9},
    {refalrts::icEPrepare, 0, 33, 65},
    {refalrts::icEStart, 0, 33, 65},
    {refalrts::icSave, 0, 67, 65},
    {refalrts::icBracketLeftSave, 0, 35, 67},
    {refalrts::icsRepeatLeft, 39, 32, 35},
    {refalrts::icBracketLeftSave, 0, 40, 35},
    {refalrts::iceRepeatLeft, 44, 26, 40},
    {refalrts::icEmpty, 0, 0, 40},
    // closed e.Vars_E#1 as range 67(9)
    {refalrts::icsVarRight, 0, 46, 35},
    // closed e.Offsets#1 as range 35
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </47 & IncVarOffset/48 Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: s.Mode#1/32 } >/49 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/50 (/51 # TkVariable/52 s.Mode#1/39/53 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars_B#1/33 AsIs: (/37 AsIs: s.Mode#1/39 AsIs: (/42 AsIs: e.Index#1/44 AsIs: )/43 AsIs: e.Offsets#1/35 AsIs: s.SampleOffset#1/46 HalfReuse: s.ContextOffset1 #13/38 } )/54 Tile{ AsIs: e.Vars_E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgRight/55 s.Num#1/31/56 s.Mode#1/39/57 s.ContextOffset#1/13/58 s.SampleOffset#1/46/59 Tile{ AsIs: )/29 AsIs: )/19 } >/60 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 47},
    {refalrts::icAllocFunc, 0, 5, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 49},
    {refalrts::icAllocIdent, 0, 1, 50},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 51},
    {refalrts::icAllocIdent, 0, 4, 52},
    {refalrts::icCopySTVar, 53, 39, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 54},
    {refalrts::icAllocIdent, 0, 6, 55},
    {refalrts::icCopySTVar, 56, 31, 0},
    {refalrts::icCopySTVar, 57, 39, 0},
    {refalrts::icCopySTVar, 58, 13, 0},
    {refalrts::icCopySTVar, 59, 46, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 60},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icReinitSVar, 0, 13, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitSVar, 0, 13, 38},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 9, 1},
    {refalrts::icPushStack, 0, 0, 60},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 19, 0},
    {refalrts::icLinkBrackets, 8, 29, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 37, 54, 0},
    {refalrts::icLinkBrackets, 42, 43, 0},
    {refalrts::icLinkBrackets, 30, 24, 0},
    {refalrts::icLinkBrackets, 51, 25, 0},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icPushStack, 0, 0, 49},
    {refalrts::icPushStack, 0, 0, 47},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 60, 60, 0},
    {refalrts::icSpliceTile, 29, 19, 0},
    {refalrts::icSpliceTile, 55, 59, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 67},
    {refalrts::icSpliceTile, 54, 54, 0},
    {refalrts::icSpliceTile, 23, 38, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 50, 53, 0},
    {refalrts::icSpliceTile, 18, 30, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 49, 49, 0},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 47, 48, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +63, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # E/25 s.Num#1/37 (/33 # TkVariable/35 'e'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    {refalrts::icBracketLeftSave, 0, 26, 63},
    {refalrts::icIdentLeftSave, 30, 1, 26},
    {refalrts::icBracketRightSave, 0, 31, 21},
    {refalrts::icIdentLeftSave, 35, 4, 31},
    {refalrts::icCharLeftSave, 36, static_cast<unsigned char>('e'), 31},
    // closed e.Junk1#1 as range 16
    // closed e.Index#1 as range 31
    // closed e.Junk2#1 as range 26
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 37, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 'e'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 'e'/7 } (/40 e.Index#1/31/41 )/43 Tile{ AsIs: s.Num#1/37 } )/44 )/45 (/46 Tile{ AsIs: e.Commands#1/5 } (/47 # CmdComment/48" closed "/49 Tile{ HalfReuse: </33 HalfReuse: & PrintVar/35 AsIs: 'e'/36 AsIs: e.Index#1/31 HalfReuse: >/34 HalfReuse: ' '/24 }"as range "/51 # Offset/53 s.Num#1/37/54 )/55 Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 38, 31, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 40},
    {refalrts::icCopyEVar, 41, 31, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 45},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 46},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 47},
    {refalrts::icAllocIdent, 0, 0, 48},
    {refalrts::icAllocString, 0, 1, 49},
    {refalrts::icAllocString, 0, 0, 51},
    {refalrts::icAllocIdent, 0, 8, 53},
    {refalrts::icCopySTVar, 54, 37, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 55},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 4, 23},
    {refalrts::icReinitChar, 0, 'e', 25},
    {refalrts::icReinitSVar, 0, 37, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitChar, 0, 'e', 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icReinitFunc, 0, 4, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icReinitChar, 0, ' ', 24},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 46, 8, 0},
    {refalrts::icLinkBrackets, 47, 55, 0},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icLinkBrackets, 11, 45, 0},
    {refalrts::icLinkBrackets, 12, 44, 0},
    {refalrts::icLinkBrackets, 40, 43, 0},
    {refalrts::icLinkBrackets, 18, 29, 0},
    {refalrts::icLinkBrackets, 19, 30, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 51, 55, 0},
    {refalrts::icSpliceTile, 33, 24, 0},
    {refalrts::icSpliceTile, 47, 50, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 44, 46, 0},
    {refalrts::icSpliceTile, 37, 37, 0},
    {refalrts::icSpliceTile, 40, 43, 0},
    {refalrts::icSpliceTile, 28, 7, 0},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +66, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 's'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    // closed e.Junk#1 as range 16
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icBracketLeftSave, 0, 27, 21},
    {refalrts::icIdentLeftSave, 31, 4, 27},
    {refalrts::icCharLeftSave, 32, static_cast<unsigned char>('s'), 27},
    // closed e.Index#1 as range 27
    // closed e.Range#1 as range 21
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 's'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/36 )/37 )/38 (/39 # E/40 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/41 e.Index#1/27/42 )/44 s.ContextOffset#1/13/45 )/46 )/47 (/48 Tile{ AsIs: e.Commands#1/5 } (/49 # CmdVar/50 # AlgLeft/51 Tile{ AsIs: s.Num#1/26 HalfReuse: 's'/29 HalfReuse: s.ContextOffset1 #13/31 HalfReuse: )/32 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icAllocFunc, 0, 3, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icCopySTVar, 36, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icAllocIdent, 0, 5, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 41},
    {refalrts::icCopyEVar, 42, 27, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icCopySTVar, 45, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 46},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 47},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 49},
    {refalrts::icAllocIdent, 0, 7, 50},
    {refalrts::icAllocIdent, 0, 2, 51},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 4, 23},
    {refalrts::icReinitChar, 0, 's', 25},
    {refalrts::icReinitSVar, 0, 26, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitChar, 0, 's', 7},
    {refalrts::icReinitChar, 0, 's', 29},
    {refalrts::icReinitSVar, 0, 13, 31},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 48, 8, 0},
    {refalrts::icLinkBrackets, 49, 32, 0},
    {refalrts::icLinkBrackets, 11, 47, 0},
    {refalrts::icLinkBrackets, 12, 46, 0},
    {refalrts::icLinkBrackets, 41, 44, 0},
    {refalrts::icLinkBrackets, 39, 24, 0},
    {refalrts::icLinkBrackets, 18, 38, 0},
    {refalrts::icLinkBrackets, 19, 37, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 26, 32, 0},
    {refalrts::icSpliceTile, 49, 51, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 41, 48, 0},
    {refalrts::icSpliceTile, 30, 7, 0},
    {refalrts::icSpliceTile, 36, 40, 0},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceTile, 18, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 35, 35, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +66, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 't'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    // closed e.Junk#1 as range 16
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icBracketLeftSave, 0, 27, 21},
    {refalrts::icIdentLeftSave, 31, 4, 27},
    {refalrts::icCharLeftSave, 32, static_cast<unsigned char>('t'), 27},
    // closed e.Index#1 as range 27
    // closed e.Range#1 as range 21
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 't'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/36 )/37 )/38 (/39 # E/40 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/41 e.Index#1/27/42 )/44 s.ContextOffset#1/13/45 )/46 )/47 (/48 Tile{ AsIs: e.Commands#1/5 } (/49 # CmdVar/50 # AlgLeft/51 Tile{ AsIs: s.Num#1/26 HalfReuse: 't'/29 HalfReuse: s.ContextOffset1 #13/31 HalfReuse: )/32 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icAllocFunc, 0, 3, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icCopySTVar, 36, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icAllocIdent, 0, 5, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 41},
    {refalrts::icCopyEVar, 42, 27, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icCopySTVar, 45, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 46},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 47},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 49},
    {refalrts::icAllocIdent, 0, 7, 50},
    {refalrts::icAllocIdent, 0, 2, 51},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 4, 23},
    {refalrts::icReinitChar, 0, 't', 25},
    {refalrts::icReinitSVar, 0, 26, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitChar, 0, 't', 7},
    {refalrts::icReinitChar, 0, 't', 29},
    {refalrts::icReinitSVar, 0, 13, 31},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 48, 8, 0},
    {refalrts::icLinkBrackets, 49, 32, 0},
    {refalrts::icLinkBrackets, 11, 47, 0},
    {refalrts::icLinkBrackets, 12, 46, 0},
    {refalrts::icLinkBrackets, 41, 44, 0},
    {refalrts::icLinkBrackets, 39, 24, 0},
    {refalrts::icLinkBrackets, 18, 38, 0},
    {refalrts::icLinkBrackets, 19, 37, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 26, 32, 0},
    {refalrts::icSpliceTile, 49, 51, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 41, 48, 0},
    {refalrts::icSpliceTile, 30, 7, 0},
    {refalrts::icSpliceTile, 36, 40, 0},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceTile, 18, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 35, 35, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +65, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/32 e.Range#1/16 (/28 # TkVariable/30 's'/31 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 5, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    {refalrts::icBracketRightSave, 0, 26, 16},
    {refalrts::icIdentLeftSave, 30, 4, 26},
    {refalrts::icCharLeftSave, 31, static_cast<unsigned char>('s'), 26},
    // closed e.Index#1 as range 26
    // closed e.Junk#1 as range 21
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 32, 16},
    // closed e.Range#1 as range 16
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/32 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/31 } (/36 # TkVariable/37 's'/38 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/39 e.Index#1/26/40 )/42 s.ContextOffset#1/13/43 Tile{ AsIs: )/29 AsIs: )/19 } (/44 Tile{ AsIs: e.Commands#1/5 } (/45 # CmdVar/46 # AlgRight/47 s.Num#1/32/48 's'/49 s.ContextOffset#1/13/50 )/51 Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icAllocFunc, 0, 3, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icAllocIdent, 0, 4, 37},
    {refalrts::icAllocChar, 0, 's', 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icCopyEVar, 40, 26, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icCopySTVar, 43, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icAllocIdent, 0, 7, 46},
    {refalrts::icAllocIdent, 0, 6, 47},
    {refalrts::icCopySTVar, 48, 32, 0},
    {refalrts::icAllocChar, 0, 's', 49},
    {refalrts::icCopySTVar, 50, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icReinitIdent, 0, 1, 31},
    {refalrts::icReinitSVar, 0, 13, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitChar, 0, 's', 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 44, 8, 0},
    {refalrts::icLinkBrackets, 45, 51, 0},
    {refalrts::icLinkBrackets, 11, 19, 0},
    {refalrts::icLinkBrackets, 12, 29, 0},
    {refalrts::icLinkBrackets, 39, 42, 0},
    {refalrts::icLinkBrackets, 30, 24, 0},
    {refalrts::icLinkBrackets, 36, 25, 0},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 45, 51, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 44, 44, 0},
    {refalrts::icSpliceTile, 29, 19, 0},
    {refalrts::icSpliceTile, 39, 43, 0},
    {refalrts::icSpliceTile, 23, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 36, 38, 0},
    {refalrts::icSpliceTile, 18, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 35, 35, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +65, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/32 e.Range#1/16 (/28 # TkVariable/30 't'/31 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 5, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    {refalrts::icBracketRightSave, 0, 26, 16},
    {refalrts::icIdentLeftSave, 30, 4, 26},
    {refalrts::icCharLeftSave, 31, static_cast<unsigned char>('t'), 26},
    // closed e.Index#1 as range 26
    // closed e.Junk#1 as range 21
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 32, 16},
    // closed e.Range#1 as range 16
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/32 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/31 } (/36 # TkVariable/37 't'/38 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/39 e.Index#1/26/40 )/42 s.ContextOffset#1/13/43 Tile{ AsIs: )/29 AsIs: )/19 } (/44 Tile{ AsIs: e.Commands#1/5 } (/45 # CmdVar/46 # AlgRight/47 s.Num#1/32/48 't'/49 s.ContextOffset#1/13/50 )/51 Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icAllocFunc, 0, 3, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icAllocIdent, 0, 4, 37},
    {refalrts::icAllocChar, 0, 't', 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icCopyEVar, 40, 26, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icCopySTVar, 43, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icAllocIdent, 0, 7, 46},
    {refalrts::icAllocIdent, 0, 6, 47},
    {refalrts::icCopySTVar, 48, 32, 0},
    {refalrts::icAllocChar, 0, 't', 49},
    {refalrts::icCopySTVar, 50, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icReinitIdent, 0, 1, 31},
    {refalrts::icReinitSVar, 0, 13, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitChar, 0, 't', 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 44, 8, 0},
    {refalrts::icLinkBrackets, 45, 51, 0},
    {refalrts::icLinkBrackets, 11, 19, 0},
    {refalrts::icLinkBrackets, 12, 29, 0},
    {refalrts::icLinkBrackets, 39, 42, 0},
    {refalrts::icLinkBrackets, 30, 24, 0},
    {refalrts::icLinkBrackets, 36, 25, 0},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 45, 51, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 44, 44, 0},
    {refalrts::icSpliceTile, 29, 19, 0},
    {refalrts::icSpliceTile, 39, 43, 0},
    {refalrts::icSpliceTile, 23, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 36, 38, 0},
    {refalrts::icSpliceTile, 18, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 35, 35, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +65, 0, 0},
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 'e'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icSave, 0, 61, 2},
    {refalrts::icEPrepare, 0, 14, 61},
    {refalrts::icEStart, 0, 14, 61},
    {refalrts::icSave, 0, 63, 61},
    {refalrts::icBracketLeftSave, 0, 16, 63},
    {refalrts::icIdentLeftSave, 20, 1, 16},
    {refalrts::icBracketLeftSave, 0, 21, 63},
    {refalrts::icIdentLeftSave, 25, 5, 21},
    // closed e.Junk#1 as range 16
    // closed e.Substs_E#1 as range 63(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icBracketLeftSave, 0, 27, 21},
    {refalrts::icIdentLeftSave, 31, 4, 27},
    {refalrts::icCharLeftSave, 32, static_cast<unsigned char>('e'), 27},
    // closed e.Index#1 as range 27
    // closed e.Range#1 as range 21
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc2/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 'e'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/36 )/37 )/38 (/39 # E/40 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 'e'/7 } (/41 e.Index#1/27/42 )/44 s.ContextOffset#1/13/45 )/46 )/47 (/48 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/29 Reuse: # CmdOpenedE/31 HalfReuse: # AlgLeft/32 } Tile{ AsIs: s.Num#1/26 } s.ContextOffset#1/13/49 )/50 Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icAllocFunc, 0, 2, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icCopySTVar, 36, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icAllocIdent, 0, 5, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 41},
    {refalrts::icCopyEVar, 42, 27, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icCopySTVar, 45, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 46},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 47},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 48},
    {refalrts::icCopySTVar, 49, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 50},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitIdent, 0, 4, 23},
    {refalrts::icReinitChar, 0, 'e', 25},
    {refalrts::icReinitSVar, 0, 26, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitChar, 0, 'e', 7},
    {refalrts::icUpdateIdent, 0, 3, 31},
    {refalrts::icReinitIdent, 0, 2, 32},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 48, 8, 0},
    {refalrts::icLinkBrackets, 29, 50, 0},
    {refalrts::icLinkBrackets, 11, 47, 0},
    {refalrts::icLinkBrackets, 12, 46, 0},
    {refalrts::icLinkBrackets, 41, 44, 0},
    {refalrts::icLinkBrackets, 39, 24, 0},
    {refalrts::icLinkBrackets, 18, 38, 0},
    {refalrts::icLinkBrackets, 19, 37, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 49, 50, 0},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icSpliceTile, 29, 32, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 41, 48, 0},
    {refalrts::icSpliceTile, 30, 7, 0},
    {refalrts::icSpliceTile, 36, 40, 0},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceTile, 18, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 35, 35, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (#JunkE )(E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 (/16 # Junk/18 e.MarkedPattern#1/14 )/17 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    {refalrts::icBracketLeftSave, 0, 14, 2},
    {refalrts::icIdentLeftSave, 18, 1, 14},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.MarkedPattern#1 as range 14
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ContextOffset#1/13 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.ContextOffset1 #13/17 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.MarkedPattern#1/14 } )/19 Tile{ AsIs: (/16 Reuse: # CmdComment/18 } Tile{ AsIs: </0 Reuse: & TextFromExpr/4 } </20 & FakeOffset/21 e.MarkedPattern#1/14/22 Tile{ HalfReuse: >/8 AsIs: >/1 } )/24 Tile{ AsIs: e.Commands#1/5 } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 1, 21},
    {refalrts::icCopyEVar, 22, 14, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icReinitSVar, 0, 13, 17},
    {refalrts::icUpdateIdent, 0, 0, 18},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icLinkBrackets, 16, 24, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icLinkBrackets, 7, 19, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icSpliceTile, 22, 23, 0},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 16, 18, 0},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 17, 7, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[76];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:S E (E )(E )
  //GLOBAL GEN:S E (E )(E )
  // </0 & DoGenSubst/4 s.idx#0/13 e.idxV#0/2 (/11 e.idxVVB#0/9 )/12 (/7 e.idxVVTB#0/5 )/8 >/1
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
  // closed e.idxVVB#0 as range 9
  // closed e.idxVVTB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkChar/35 s.Char#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_T<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkChar<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Char#1/37 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkChar/24 HalfReuse: s.Char1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Char1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[24], & ident_TkChar<int>::name );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdChar<int>::name );
      refalrts::update_ident( context[25], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[33], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[34], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[25], context[35] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkName/35 e.Name#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_T<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkName<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Name#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  # T/25 s.Num#1/36 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkName/23 } e.Name#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Name#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
      if (! refalrts::copy_evar(context[37], context[38], context[31], context[32]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkName<int>::name );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdName<int>::name );
      refalrts::reinit_ident( context[33], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[35], context[36] );
      refalrts::reinit_close_call( context[28] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[8], context[34] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[28] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[23], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkIdentifier/35 e.Ident#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_T<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Ident#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  # T/25 s.Num#1/36 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/23 } e.Ident#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Ident#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
      if (! refalrts::copy_evar(context[37], context[38], context[31], context[32]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkIdentifier<int>::name );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdIdent<int>::name );
      refalrts::reinit_ident( context[33], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[35], context[36] );
      refalrts::reinit_close_call( context[28] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[8], context[34] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[28] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[23], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkNumber/35 s.Value#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_T<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Value#1/37 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkNumber/24 HalfReuse: s.Value1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Value1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[24], & ident_TkNumber<int>::name );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNumber<int>::name );
      refalrts::update_ident( context[25], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[33], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[34], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[25], context[35] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # Brackets/35 e.SubRange#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_T<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_Brackets<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.SubRange#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc2/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkOpenBracket/23 HalfReuse: )/25 } )/40 (/41 # E/42 s.ContextOffset#1/13/43 Tile{ AsIs: e.SubRange#1/31 } )/44 (/45 Tile{ HalfReuse: # Junk/34 HalfReuse: (/24 HalfReuse: # TkCloseBracket/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgTerm/46 Tile{ AsIs: s.Num#1/36 HalfReuse: s.ContextOffset1 #13/33 HalfReuse: )/35 } )/47 >/48 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_AlgTerm<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[48] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkOpenBracket<int>::name );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_ident( context[34], & ident_Junk<int>::name );
      refalrts::reinit_open_bracket( context[24] );
      refalrts::reinit_ident( context[28], & ident_TkCloseBracket<int>::name );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdBrackets<int>::name );
      refalrts::reinit_svar( context[33], context[13] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::push_stack( context[48] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[47] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[45], context[29] );
      refalrts::link_brackets( context[24], context[30] );
      refalrts::link_brackets( context[41], context[44] );
      refalrts::link_brackets( context[18], context[40] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[36], context[35] );
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[40], context[43] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/40 (/33 # ADT_Brackets/35 (/38 e.Name#1/36 )/39 e.SubRange#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_T<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[31], context[32] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      // closed e.Junk1#1 as range 16
      // closed e.Name#1 as range 36
      // closed e.SubRange#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[40], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/40 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Inc2/42 Tile{ AsIs: s.ContextOffset#1/13 } >/43 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkOpenADT/23 HalfReuse: )/25 } (/44 # TkName/45 e.Name#1/36/46 )/48 )/49 (/50 # E/51 s.ContextOffset#1/13/52 Tile{ AsIs: e.SubRange#1/31 } )/53 (/54 Tile{ HalfReuse: # Junk/34 HalfReuse: (/24 HalfReuse: # TkCloseADT/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #40/35 HalfReuse: s.ContextOffset1 #13/38 AsIs: e.Name#1/36 AsIs: )/39 } )/55 >/56 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[42], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[45], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[46], context[47], context[36], context[37]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[52], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[53] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[54] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[56] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkOpenADT<int>::name );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_ident( context[34], & ident_Junk<int>::name );
      refalrts::reinit_open_bracket( context[24] );
      refalrts::reinit_ident( context[28], & ident_TkCloseADT<int>::name );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdADT<int>::name );
      refalrts::reinit_ident( context[33], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[35], context[40] );
      refalrts::reinit_svar( context[38], context[13] );
      refalrts::push_stack( context[56] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[55] );
      refalrts::link_brackets( context[8], context[39] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[54], context[29] );
      refalrts::link_brackets( context[24], context[30] );
      refalrts::link_brackets( context[50], context[53] );
      refalrts::link_brackets( context[18], context[49] );
      refalrts::link_brackets( context[44], context[48] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::push_stack( context[43] );
      refalrts::push_stack( context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[33], context[39] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[44], context[52] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkVariable/35 s.Mode#1/37 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars_B#1/38 (/42 s.Mode#1/44 (/47 e.Index#1/49 )/48 e.Offsets#1/40 s.SampleOffset#1/51 )/43 e.Vars_E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_T<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      // closed e.Index#1 as range 31
      context[65] = context[9];
      context[66] = context[10];
      context[38] = 0;
      context[39] = 0;
      refalrts::start_e_loop();
      do {
        context[67] = context[65];
        context[68] = context[66];
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[67], context[68] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_stvar_left( context[44], context[37], context[40], context[41] ) )
          continue;
        context[45] = 0;
        context[46] = 0;
        context[47] = refalrts::brackets_left( context[45], context[46], context[40], context[41] );
        if( ! context[47] )
          continue;
        refalrts::bracket_pointers(context[47], context[48]);
        if( ! refalrts::repeated_evar_left( context[49], context[50], context[31], context[32], context[45], context[46] ) )
          continue;
        if( ! refalrts::empty_seq( context[45], context[46] ) )
          continue;
        // closed e.Vars_E#1 as range 67(9)
        if( ! refalrts::svar_right( context[51], context[40], context[41] ) )
          continue;
        // closed e.Offsets#1 as range 40

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/37 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: s.Mode1 #44/25 } Tile{ AsIs: e.Index#1/31 } Tile{ HalfReuse: s.Num1 #36/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars_B#1/38 AsIs: (/42 AsIs: s.Mode#1/44 AsIs: (/47 AsIs: e.Index#1/49 AsIs: )/48 AsIs: e.Offsets#1/40 AsIs: s.SampleOffset#1/51 HalfReuse: s.Num1 #36/43 } )/52 Tile{ AsIs: e.Vars_E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgTerm/53 Tile{ AsIs: s.Num#1/36 HalfReuse: s.Mode1 #44/33 HalfReuse: s.Num1 #36/35 } s.SampleOffset#1/51/54 Tile{ AsIs: )/34 AsIs: )/24 } >/55 Tile{ ]] }
        if( ! refalrts::alloc_close_bracket( context[52] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[53], & ident_AlgTerm<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[54], context[51]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[55] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[19] );
        refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
        refalrts::reinit_svar( context[25], context[44] );
        refalrts::reinit_svar( context[28], context[36] );
        refalrts::reinit_close_bracket( context[30] );
        refalrts::reinit_svar( context[43], context[36] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], & ident_CmdRepeated<int>::name );
        refalrts::reinit_svar( context[33], context[44] );
        refalrts::reinit_svar( context[35], context[36] );
        refalrts::push_stack( context[55] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[24] );
        refalrts::link_brackets( context[8], context[34] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[42], context[52] );
        refalrts::link_brackets( context[47], context[48] );
        refalrts::link_brackets( context[18], context[29] );
        refalrts::link_brackets( context[19], context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[55], context[55] );
        res = refalrts::splice_evar( res, context[34], context[24] );
        res = refalrts::splice_evar( res, context[54], context[54] );
        res = refalrts::splice_evar( res, context[36], context[35] );
        res = refalrts::splice_evar( res, context[53], context[53] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[67], context[68] );
        res = refalrts::splice_evar( res, context[52], context[52] );
        res = refalrts::splice_evar( res, context[28], context[43] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[25], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[38], context[39], context[65], context[66] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/37 (/33 # TkVariable/35 't'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_T<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 't', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Index#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[37], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  s.Num#1/37 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 't'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } Tile{ HalfReuse: (/36 AsIs: e.Index#1/31 AsIs: )/34 HalfReuse: s.Num1 #37/24 } Tile{ HalfReuse: )/35 } )/40 Tile{ AsIs: (/33 } Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[38], context[39], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 't' );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::reinit_open_bracket( context[36] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[33], context[8] );
      refalrts::link_brackets( context[11], context[40] );
      refalrts::link_brackets( context[12], context[35] );
      refalrts::link_brackets( context[36], context[34] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[36], context[24] );
      res = refalrts::splice_evar( res, context[28], context[7] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/37 (/33 # TkVariable/35 's'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_T<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 's', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Index#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[37], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 's'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/36 AsIs: e.Index#1/31 AsIs: )/34 HalfReuse: s.Num1 #37/24 } )/40 )/41 (/42 Tile{ AsIs: e.Commands#1/5 } (/43 # CmdVar/44 # AlgTerm/45 Tile{ AsIs: s.Num#1/37 HalfReuse: 's'/33 HalfReuse: s.ContextOffset1 #13/35 } )/46 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[38], context[39], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[44], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[45], & ident_AlgTerm<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 's' );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::reinit_open_bracket( context[36] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_char( context[33], 's' );
      refalrts::reinit_svar( context[35], context[13] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[42], context[8] );
      refalrts::link_brackets( context[43], context[46] );
      refalrts::link_brackets( context[11], context[41] );
      refalrts::link_brackets( context[12], context[40] );
      refalrts::link_brackets( context[36], context[34] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[37], context[35] );
      res = refalrts::splice_evar( res, context[43], context[45] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[36], context[24] );
      res = refalrts::splice_evar( res, context[28], context[7] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkChar/35 s.Char#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_S<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkChar<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Char#1/37 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkChar/24 HalfReuse: s.Char1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Char1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[24], & ident_TkChar<int>::name );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdChar<int>::name );
      refalrts::update_ident( context[25], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[33], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[34], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[25], context[35] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkName/35 e.Name#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_S<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkName<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Name#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  # S/25 s.Num#1/36 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkName/23 } e.Name#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Name#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
      if (! refalrts::copy_evar(context[37], context[38], context[31], context[32]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkName<int>::name );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdName<int>::name );
      refalrts::reinit_ident( context[33], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[35], context[36] );
      refalrts::reinit_close_call( context[28] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[8], context[34] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[28] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[23], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkIdentifier/35 e.Ident#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_S<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Ident#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  # S/25 s.Num#1/36 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/23 } e.Ident#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Ident#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
      if (! refalrts::copy_evar(context[37], context[38], context[31], context[32]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkIdentifier<int>::name );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdIdent<int>::name );
      refalrts::reinit_ident( context[33], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[35], context[36] );
      refalrts::reinit_close_call( context[28] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[8], context[34] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[28] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[23], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkNumber/35 s.Value#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_S<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Value#1/37 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkNumber/24 HalfReuse: s.Value1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Value1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[24], & ident_TkNumber<int>::name );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNumber<int>::name );
      refalrts::update_ident( context[25], & ident_AlgTerm<int>::name );
      refalrts::reinit_svar( context[33], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[34], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[25], context[35] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkVariable/35 s.Mode#1/37 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars_B#1/38 (/42 s.Mode#1/44 (/47 e.Index#1/49 )/48 e.Offsets#1/40 s.SampleOffset#1/51 )/43 e.Vars_E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_S<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      // closed e.Index#1 as range 31
      context[65] = context[9];
      context[66] = context[10];
      context[38] = 0;
      context[39] = 0;
      refalrts::start_e_loop();
      do {
        context[67] = context[65];
        context[68] = context[66];
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[67], context[68] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_stvar_left( context[44], context[37], context[40], context[41] ) )
          continue;
        context[45] = 0;
        context[46] = 0;
        context[47] = refalrts::brackets_left( context[45], context[46], context[40], context[41] );
        if( ! context[47] )
          continue;
        refalrts::bracket_pointers(context[47], context[48]);
        if( ! refalrts::repeated_evar_left( context[49], context[50], context[31], context[32], context[45], context[46] ) )
          continue;
        if( ! refalrts::empty_seq( context[45], context[46] ) )
          continue;
        // closed e.Vars_E#1 as range 67(9)
        if( ! refalrts::svar_right( context[51], context[40], context[41] ) )
          continue;
        // closed e.Offsets#1 as range 40

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/37 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: s.Mode1 #44/25 } Tile{ AsIs: e.Index#1/31 } Tile{ HalfReuse: s.Num1 #36/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars_B#1/38 AsIs: (/42 AsIs: s.Mode#1/44 AsIs: (/47 AsIs: e.Index#1/49 AsIs: )/48 AsIs: e.Offsets#1/40 AsIs: s.SampleOffset#1/51 HalfReuse: s.Num1 #36/43 } )/52 Tile{ AsIs: e.Vars_E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgTerm/53 Tile{ AsIs: s.Num#1/36 HalfReuse: s.Mode1 #44/33 HalfReuse: s.Num1 #36/35 } s.SampleOffset#1/51/54 Tile{ AsIs: )/34 AsIs: )/24 } >/55 Tile{ ]] }
        if( ! refalrts::alloc_close_bracket( context[52] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[53], & ident_AlgTerm<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[54], context[51]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[55] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[19] );
        refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
        refalrts::reinit_svar( context[25], context[44] );
        refalrts::reinit_svar( context[28], context[36] );
        refalrts::reinit_close_bracket( context[30] );
        refalrts::reinit_svar( context[43], context[36] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], & ident_CmdRepeated<int>::name );
        refalrts::reinit_svar( context[33], context[44] );
        refalrts::reinit_svar( context[35], context[36] );
        refalrts::push_stack( context[55] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[24] );
        refalrts::link_brackets( context[8], context[34] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[42], context[52] );
        refalrts::link_brackets( context[47], context[48] );
        refalrts::link_brackets( context[18], context[29] );
        refalrts::link_brackets( context[19], context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[55], context[55] );
        res = refalrts::splice_evar( res, context[34], context[24] );
        res = refalrts::splice_evar( res, context[54], context[54] );
        res = refalrts::splice_evar( res, context[36], context[35] );
        res = refalrts::splice_evar( res, context[53], context[53] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[67], context[68] );
        res = refalrts::splice_evar( res, context[52], context[52] );
        res = refalrts::splice_evar( res, context[28], context[43] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[25], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[38], context[39], context[65], context[66] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/37 (/33 # TkVariable/35 's'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_S<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 's', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Index#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[37], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  s.Num#1/37 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 's'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/36 AsIs: e.Index#1/31 AsIs: )/34 HalfReuse: s.Num1 #37/24 } Tile{ HalfReuse: )/35 } )/40 Tile{ AsIs: (/33 } Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[38], context[39], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 's' );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::reinit_open_bracket( context[36] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[33], context[8] );
      refalrts::link_brackets( context[11], context[40] );
      refalrts::link_brackets( context[12], context[35] );
      refalrts::link_brackets( context[36], context[34] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[36], context[24] );
      res = refalrts::splice_evar( res, context[28], context[7] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkChar/31 s.Char#1/32 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkChar<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Range#1 as range 21
      if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Char#1/32 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkChar/23 HalfReuse: s.Char1 #32/25 } )/33 )/34 (/35 # E/36 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } # AlgLeft/37 Tile{ AsIs: s.Num#1/26 HalfReuse: s.Char1 #32/29 HalfReuse: )/31 } )/38 >/39 Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[36], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkChar<int>::name );
      refalrts::reinit_svar( context[25], context[32] );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdChar<int>::name );
      refalrts::reinit_svar( context[29], context[32] );
      refalrts::reinit_close_bracket( context[31] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[38] );
      refalrts::link_brackets( context[8], context[31] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[35], context[24] );
      refalrts::link_brackets( context[18], context[34] );
      refalrts::link_brackets( context[19], context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[26], context[31] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[33], context[36] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkNumber/31 s.Number#1/32 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Range#1 as range 21
      if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Number#1/32 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkNumber/23 HalfReuse: s.Number1 #32/25 } )/33 )/34 (/35 # E/36 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } # AlgLeft/37 Tile{ AsIs: s.Num#1/26 HalfReuse: s.Number1 #32/29 HalfReuse: )/31 } )/38 >/39 Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[36], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkNumber<int>::name );
      refalrts::reinit_svar( context[25], context[32] );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNumber<int>::name );
      refalrts::reinit_svar( context[29], context[32] );
      refalrts::reinit_close_bracket( context[31] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[38] );
      refalrts::link_brackets( context[8], context[31] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[35], context[24] );
      refalrts::link_brackets( context[18], context[34] );
      refalrts::link_brackets( context[19], context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[26], context[31] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[33], context[36] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkName/31 e.Name#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkName<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Name#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  e.Junk#1/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: (/29 AsIs: # TkName/31 } Tile{ AsIs: e.Name#1/27 } )/32 Tile{ AsIs: )/19 AsIs: (/23 AsIs: # E/25 } Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } # AlgLeft/33 Tile{ AsIs: s.Num#1/26 } e.Name#1/27/34 )/36 )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[33], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[34], context[35], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdName<int>::name );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::link_brackets( context[29], context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[19], context[25] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkIdentifier/31 e.Name#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Name#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/23 } Tile{ AsIs: e.Name#1/27 } )/32 )/33 Tile{ AsIs: (/29 Reuse: # E/31 } Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ Reuse: # AlgLeft/25 AsIs: s.Num#1/26 } e.Name#1/27/34 )/36 )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[34], context[35], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkIdentifier<int>::name );
      refalrts::update_ident( context[31], & ident_E<int>::name );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdIdent<int>::name );
      refalrts::update_ident( context[25], & ident_AlgLeft<int>::name );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[29], context[24] );
      refalrts::link_brackets( context[18], context[33] );
      refalrts::link_brackets( context[19], context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkChar/30 s.Char#1/32 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkChar<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk#1 as range 21
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/33 Tile{ HalfReuse: (/29 HalfReuse: # TkChar/19 HalfReuse: s.Char1 #32/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } # AlgRight/34 s.Num#1/31/35 Tile{ AsIs: s.Char#1/32 } )/36 )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[33], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_ident( context[19], & ident_TkChar<int>::name );
      refalrts::reinit_svar( context[23], context[32] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdChar<int>::name );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[29], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkNumber/30 s.Number#1/32 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk#1 as range 21
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/33 Tile{ HalfReuse: (/29 HalfReuse: # TkNumber/19 HalfReuse: s.Number1 #32/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } # AlgRight/34 s.Num#1/31/35 Tile{ AsIs: s.Number#1/32 } )/36 )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[33], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_ident( context[19], & ident_TkNumber<int>::name );
      refalrts::reinit_svar( context[23], context[32] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNumber<int>::name );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[29], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkName/30 e.Name#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkName<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Name#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/32 (/33 # TkName/34 Tile{ AsIs: e.Name#1/26 } Tile{ HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } # AlgRight/35 s.Num#1/31/36 e.Name#1/26/37 Tile{ AsIs: )/29 AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      if( ! refalrts::alloc_ident( context[32], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[37], context[38], context[26], context[27]))
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdName<int>::name );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[29] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[33], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[23] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[32], context[34] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkIdentifier/30 e.Name#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Name#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/32 (/33 # TkIdentifier/34 Tile{ AsIs: e.Name#1/26 } Tile{ HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } # AlgRight/35 s.Num#1/31/36 e.Name#1/26/37 Tile{ AsIs: )/29 AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      if( ! refalrts::alloc_ident( context[32], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_TkIdentifier<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[37], context[38], context[26], context[27]))
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdIdent<int>::name );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[29] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[33], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[23] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[32], context[34] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # Brackets/31 e.SubRange#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_Brackets<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.SubRange#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </32 & Inc2/33 Tile{ AsIs: s.ContextOffset#1/13 } >/34 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkOpenBracket/23 HalfReuse: )/25 } )/35 (/36 # E/37 s.ContextOffset#1/13/38 Tile{ AsIs: e.SubRange#1/27 } )/39 (/40 # Junk/41 (/42 # TkCloseBracket/43 )/44 )/45 (/46 # E/47 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgLeft/48 Tile{ AsIs: s.Num#1/26 HalfReuse: s.ContextOffset1 #13/29 HalfReuse: )/31 } )/49 >/50 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[33], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[43], & ident_TkCloseBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[48], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[50] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkOpenBracket<int>::name );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdBrackets<int>::name );
      refalrts::reinit_svar( context[29], context[13] );
      refalrts::reinit_close_bracket( context[31] );
      refalrts::push_stack( context[50] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[49] );
      refalrts::link_brackets( context[8], context[31] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[46], context[24] );
      refalrts::link_brackets( context[40], context[45] );
      refalrts::link_brackets( context[42], context[44] );
      refalrts::link_brackets( context[36], context[39] );
      refalrts::link_brackets( context[18], context[35] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::push_stack( context[34] );
      refalrts::push_stack( context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[26], context[31] );
      res = refalrts::splice_evar( res, context[48], context[48] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[39], context[47] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[35], context[38] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # Brackets/30 e.SubRange#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Brackets<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.SubRange#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </32 & Inc2/33 Tile{ AsIs: s.ContextOffset#1/13 } >/34 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/35 (/36 # TkOpenBracket/37 )/38 )/39 (/40 # E/41 s.ContextOffset#1/13/42 Tile{ AsIs: e.SubRange#1/26 } )/43 (/44 Tile{ HalfReuse: # Junk/29 HalfReuse: (/19 HalfReuse: # TkCloseBracket/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgRight/45 s.Num#1/31/46 s.ContextOffset#1/13/47 )/48 )/49 >/50 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[33], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_TkOpenBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[42], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[45], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[46], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[50] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[29], & ident_Junk<int>::name );
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkCloseBracket<int>::name );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdBrackets<int>::name );
      refalrts::push_stack( context[50] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[49] );
      refalrts::link_brackets( context[8], context[48] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[44], context[24] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::link_brackets( context[40], context[43] );
      refalrts::link_brackets( context[30], context[39] );
      refalrts::link_brackets( context[36], context[38] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[34] );
      refalrts::push_stack( context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[50] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[35], context[42] );
      res = refalrts::splice_evar( res, context[18], context[30] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # ADT_Brackets/31 (/34 e.Name#1/32 )/35 e.SubRange#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[27], context[28] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      // closed e.Name#1 as range 32
      // closed e.SubRange#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Inc2/37 Tile{ AsIs: s.ContextOffset#1/13 } >/38 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkOpenADT/23 HalfReuse: )/25 } (/39 # TkName/40 e.Name#1/32/41 )/43 )/44 (/45 # E/46 s.ContextOffset#1/13/47 Tile{ AsIs: e.SubRange#1/27 } )/48 (/49 # Junk/50 (/51 # TkCloseADT/52 )/53 )/54 (/55 # E/56 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } Tile{ HalfReuse: # AlgLeft/29 HalfReuse: s.Num1 #26/31 HalfReuse: s.ContextOffset1 #13/34 AsIs: e.Name#1/32 AsIs: )/35 } )/57 >/58 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[41], context[42], context[32], context[33]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[52], & ident_TkCloseADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[53] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[54] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[56], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[58] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkOpenADT<int>::name );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdADT<int>::name );
      refalrts::reinit_ident( context[29], & ident_AlgLeft<int>::name );
      refalrts::reinit_svar( context[31], context[26] );
      refalrts::reinit_svar( context[34], context[13] );
      refalrts::push_stack( context[58] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[57] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[55], context[24] );
      refalrts::link_brackets( context[49], context[54] );
      refalrts::link_brackets( context[51], context[53] );
      refalrts::link_brackets( context[45], context[48] );
      refalrts::link_brackets( context[18], context[44] );
      refalrts::link_brackets( context[39], context[43] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[57], context[58] );
      res = refalrts::splice_evar( res, context[29], context[35] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[48], context[56] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[39], context[47] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/35 e.Range#1/16 (/28 # ADT_Brackets/30 (/33 e.Name#1/31 )/34 e.SubRange#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[26], context[27] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      // closed e.Name#1 as range 31
      // closed e.SubRange#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[35], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Inc2/37 Tile{ AsIs: s.ContextOffset#1/13 } >/38 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/35 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/33 } (/39 # TkOpenADT/40 Tile{ AsIs: )/34 } (/41 # TkName/42 Tile{ AsIs: e.Name#1/31 } )/43 )/44 (/45 # E/46 s.ContextOffset#1/13/47 Tile{ AsIs: e.SubRange#1/26 } )/48 (/49 Tile{ HalfReuse: # Junk/29 HalfReuse: (/19 HalfReuse: # TkCloseADT/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } # AlgRight/50 s.Num#1/35/51 s.ContextOffset#1/13/52 e.Name#1/31/53 )/55 )/56 >/57 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_TkOpenADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[51], context[35]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[52], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[53], context[54], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[57] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[33], & ident_Junk<int>::name );
      refalrts::reinit_ident( context[29], & ident_Junk<int>::name );
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkCloseADT<int>::name );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdADT<int>::name );
      refalrts::push_stack( context[57] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[56] );
      refalrts::link_brackets( context[8], context[55] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[49], context[24] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::link_brackets( context[45], context[48] );
      refalrts::link_brackets( context[30], context[44] );
      refalrts::link_brackets( context[41], context[43] );
      refalrts::link_brackets( context[39], context[34] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[50], context[57] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[43], context[47] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[18], context[33] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # E/25 s.Num#1/31 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  )/19 (/23 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ AsIs: e.Junk2#1/26 } Tile{ AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdEmpty/1 } Tile{ Reuse: # AlgLeft/25 AsIs: s.Num#1/31 AsIs: )/24 HalfReuse: )/28 HalfReuse: >/30 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdEmpty<int>::name );
      refalrts::update_ident( context[25], & ident_AlgLeft<int>::name );
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_close_call( context[30] );
      refalrts::push_stack( context[30] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[30] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 s.Mode#1/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars_B#1/33 (/37 s.Mode#1/39 (/42 e.Index#1/44 )/43 e.Offsets#1/35 s.SampleOffset#1/46 )/38 e.Vars_E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Range#1 as range 21
      if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
        continue;
      // closed e.Index#1 as range 27
      context[65] = context[9];
      context[66] = context[10];
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[67] = context[65];
        context[68] = context[66];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[67], context[68] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_stvar_left( context[39], context[32], context[35], context[36] ) )
          continue;
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[35], context[36] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_evar_left( context[44], context[45], context[27], context[28], context[40], context[41] ) )
          continue;
        if( ! refalrts::empty_seq( context[40], context[41] ) )
          continue;
        // closed e.Vars_E#1 as range 67(9)
        if( ! refalrts::svar_right( context[46], context[35], context[36] ) )
          continue;
        // closed e.Offsets#1 as range 35

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </47 & IncVarOffset/48 Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: s.Mode#1/32 } >/49 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: s.Mode1 #39/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/50 )/51 )/52 (/53 # E/54 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars_B#1/33 AsIs: (/37 AsIs: s.Mode#1/39 AsIs: (/42 AsIs: e.Index#1/44 AsIs: )/43 AsIs: e.Offsets#1/35 AsIs: s.SampleOffset#1/46 HalfReuse: s.ContextOffset1 #13/38 } )/55 Tile{ AsIs: e.Vars_E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgLeft/56 Tile{ AsIs: s.Num#1/26 HalfReuse: s.Mode1 #39/29 HalfReuse: s.ContextOffset1 #13/31 } s.SampleOffset#1/46/57 )/58 )/59 >/60 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[48], IncVarOffset, "IncVarOffset" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[49] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[50], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[51] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[52] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[53] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[54], & ident_E<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[55] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[56], & ident_AlgLeft<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[57], context[46]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[58] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[59] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[60] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[19] );
        refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
        refalrts::reinit_svar( context[25], context[39] );
        refalrts::reinit_svar( context[30], context[26] );
        refalrts::reinit_svar( context[38], context[13] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], & ident_CmdRepeated<int>::name );
        refalrts::reinit_svar( context[29], context[39] );
        refalrts::reinit_svar( context[31], context[13] );
        refalrts::push_stack( context[60] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[59] );
        refalrts::link_brackets( context[8], context[58] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[37], context[55] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::link_brackets( context[53], context[24] );
        refalrts::link_brackets( context[18], context[52] );
        refalrts::link_brackets( context[19], context[51] );
        refalrts::push_stack( context[49] );
        refalrts::push_stack( context[47] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[57], context[60] );
        res = refalrts::splice_evar( res, context[26], context[31] );
        res = refalrts::splice_evar( res, context[56], context[56] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[67], context[68] );
        res = refalrts::splice_evar( res, context[55], context[55] );
        res = refalrts::splice_evar( res, context[30], context[38] );
        res = refalrts::splice_evar( res, context[50], context[54] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[18], context[25] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[33], context[34], context[65], context[66] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkVariable/30 s.Mode#1/32 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars_B#1/33 (/37 s.Mode#1/39 (/42 e.Index#1/44 )/43 e.Offsets#1/35 s.SampleOffset#1/46 )/38 e.Vars_E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk#1 as range 21
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      // closed e.Index#1 as range 26
      context[65] = context[9];
      context[66] = context[10];
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[67] = context[65];
        context[68] = context[66];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[67], context[68] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_stvar_left( context[39], context[32], context[35], context[36] ) )
          continue;
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[35], context[36] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_evar_left( context[44], context[45], context[26], context[27], context[40], context[41] ) )
          continue;
        if( ! refalrts::empty_seq( context[40], context[41] ) )
          continue;
        // closed e.Vars_E#1 as range 67(9)
        if( ! refalrts::svar_right( context[46], context[35], context[36] ) )
          continue;
        // closed e.Offsets#1 as range 35

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </47 & IncVarOffset/48 Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: s.Mode#1/32 } >/49 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/50 (/51 # TkVariable/52 s.Mode#1/39/53 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars_B#1/33 AsIs: (/37 AsIs: s.Mode#1/39 AsIs: (/42 AsIs: e.Index#1/44 AsIs: )/43 AsIs: e.Offsets#1/35 AsIs: s.SampleOffset#1/46 HalfReuse: s.ContextOffset1 #13/38 } )/54 Tile{ AsIs: e.Vars_E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgRight/55 s.Num#1/31/56 s.Mode#1/39/57 s.ContextOffset#1/13/58 s.SampleOffset#1/46/59 Tile{ AsIs: )/29 AsIs: )/19 } >/60 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[48], IncVarOffset, "IncVarOffset" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[49] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[50], & ident_Junk<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[51] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[52], & ident_TkVariable<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[53], context[39]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[54] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[55], & ident_AlgRight<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[56], context[31]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[57], context[39]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[58], context[13]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[59], context[46]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[60] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_close_bracket( context[28] );
        refalrts::reinit_open_bracket( context[30] );
        refalrts::reinit_svar( context[23], context[13] );
        refalrts::reinit_close_bracket( context[25] );
        refalrts::reinit_svar( context[38], context[13] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], & ident_CmdRepeated<int>::name );
        refalrts::push_stack( context[60] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[19] );
        refalrts::link_brackets( context[8], context[29] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[37], context[54] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::link_brackets( context[30], context[24] );
        refalrts::link_brackets( context[51], context[25] );
        refalrts::link_brackets( context[18], context[28] );
        refalrts::push_stack( context[49] );
        refalrts::push_stack( context[47] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[60], context[60] );
        res = refalrts::splice_evar( res, context[29], context[19] );
        res = refalrts::splice_evar( res, context[55], context[59] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[67], context[68] );
        res = refalrts::splice_evar( res, context[54], context[54] );
        res = refalrts::splice_evar( res, context[23], context[38] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[50], context[53] );
        res = refalrts::splice_evar( res, context[18], context[30] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[33], context[34], context[65], context[66] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # E/25 s.Num#1/37 (/33 # TkVariable/35 'e'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 'e', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Index#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[37], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 'e'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 'e'/7 } (/40 e.Index#1/31/41 )/43 Tile{ AsIs: s.Num#1/37 } )/44 )/45 (/46 Tile{ AsIs: e.Commands#1/5 } (/47 # CmdComment/48" closed "/49 Tile{ HalfReuse: </33 HalfReuse: & PrintVar/35 AsIs: 'e'/36 AsIs: e.Index#1/31 HalfReuse: >/34 HalfReuse: ' '/24 }"as range "/51 # Offset/53 s.Num#1/37/54 )/55 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[38], context[39], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[41], context[42], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[48], & ident_CmdComment<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[49], context[50], " closed ", 8 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[51], context[52], "as range ", 9 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[53], & ident_Offset<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[37]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 'e' );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 'e' );
      refalrts::reinit_open_call( context[33] );
      refalrts::reinit_name( context[35], PrintVar, "PrintVar" );
      refalrts::reinit_close_call( context[34] );
      refalrts::reinit_char( context[24], ' ' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[46], context[8] );
      refalrts::link_brackets( context[47], context[55] );
      refalrts::push_stack( context[34] );
      refalrts::push_stack( context[33] );
      refalrts::link_brackets( context[11], context[45] );
      refalrts::link_brackets( context[12], context[44] );
      refalrts::link_brackets( context[40], context[43] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[51], context[55] );
      res = refalrts::splice_evar( res, context[33], context[24] );
      res = refalrts::splice_evar( res, context[47], context[50] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[44], context[46] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[40], context[43] );
      res = refalrts::splice_evar( res, context[28], context[7] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 's'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::char_left( 's', context[27], context[28] );
      if( ! context[32] )
        continue;
      // closed e.Index#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 's'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/36 )/37 )/38 (/39 # E/40 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/41 e.Index#1/27/42 )/44 s.ContextOffset#1/13/45 )/46 )/47 (/48 Tile{ AsIs: e.Commands#1/5 } (/49 # CmdVar/50 # AlgLeft/51 Tile{ AsIs: s.Num#1/26 HalfReuse: 's'/29 HalfReuse: s.ContextOffset1 #13/31 HalfReuse: )/32 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[42], context[43], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 's' );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::reinit_char( context[29], 's' );
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket( context[32] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::link_brackets( context[49], context[32] );
      refalrts::link_brackets( context[11], context[47] );
      refalrts::link_brackets( context[12], context[46] );
      refalrts::link_brackets( context[41], context[44] );
      refalrts::link_brackets( context[39], context[24] );
      refalrts::link_brackets( context[18], context[38] );
      refalrts::link_brackets( context[19], context[37] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[26], context[32] );
      res = refalrts::splice_evar( res, context[49], context[51] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[41], context[48] );
      res = refalrts::splice_evar( res, context[30], context[7] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 't'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::char_left( 't', context[27], context[28] );
      if( ! context[32] )
        continue;
      // closed e.Index#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 't'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/36 )/37 )/38 (/39 # E/40 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/41 e.Index#1/27/42 )/44 s.ContextOffset#1/13/45 )/46 )/47 (/48 Tile{ AsIs: e.Commands#1/5 } (/49 # CmdVar/50 # AlgLeft/51 Tile{ AsIs: s.Num#1/26 HalfReuse: 't'/29 HalfReuse: s.ContextOffset1 #13/31 HalfReuse: )/32 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[42], context[43], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 't' );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::reinit_char( context[29], 't' );
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket( context[32] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::link_brackets( context[49], context[32] );
      refalrts::link_brackets( context[11], context[47] );
      refalrts::link_brackets( context[12], context[46] );
      refalrts::link_brackets( context[41], context[44] );
      refalrts::link_brackets( context[39], context[24] );
      refalrts::link_brackets( context[18], context[38] );
      refalrts::link_brackets( context[19], context[37] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[26], context[32] );
      res = refalrts::splice_evar( res, context[49], context[51] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[41], context[48] );
      res = refalrts::splice_evar( res, context[30], context[7] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/32 e.Range#1/16 (/28 # TkVariable/30 's'/31 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_left( 's', context[26], context[27] );
      if( ! context[31] )
        continue;
      // closed e.Index#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[32], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/32 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/31 } (/36 # TkVariable/37 's'/38 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/39 e.Index#1/26/40 )/42 s.ContextOffset#1/13/43 Tile{ AsIs: )/29 AsIs: )/19 } (/44 Tile{ AsIs: e.Commands#1/5 } (/45 # CmdVar/46 # AlgRight/47 s.Num#1/32/48 's'/49 s.ContextOffset#1/13/50 )/51 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[38], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[40], context[41], context[26], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[31], & ident_Junk<int>::name );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[44], context[8] );
      refalrts::link_brackets( context[45], context[51] );
      refalrts::link_brackets( context[11], context[19] );
      refalrts::link_brackets( context[12], context[29] );
      refalrts::link_brackets( context[39], context[42] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[36], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[45], context[51] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[29], context[19] );
      res = refalrts::splice_evar( res, context[39], context[43] );
      res = refalrts::splice_evar( res, context[23], context[7] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[18], context[31] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # E/20 s.Num#1/32 e.Range#1/16 (/28 # TkVariable/30 't'/31 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_left( 't', context[26], context[27] );
      if( ! context[31] )
        continue;
      // closed e.Index#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[32], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/32 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/31 } (/36 # TkVariable/37 't'/38 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/39 e.Index#1/26/40 )/42 s.ContextOffset#1/13/43 Tile{ AsIs: )/29 AsIs: )/19 } (/44 Tile{ AsIs: e.Commands#1/5 } (/45 # CmdVar/46 # AlgRight/47 s.Num#1/32/48 't'/49 s.ContextOffset#1/13/50 )/51 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[38], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[40], context[41], context[26], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[31], & ident_Junk<int>::name );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[44], context[8] );
      refalrts::link_brackets( context[45], context[51] );
      refalrts::link_brackets( context[11], context[19] );
      refalrts::link_brackets( context[12], context[29] );
      refalrts::link_brackets( context[39], context[42] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[36], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[45], context[51] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[29], context[19] );
      res = refalrts::splice_evar( res, context[39], context[43] );
      res = refalrts::splice_evar( res, context[23], context[7] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[18], context[31] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S E (E )(E )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 'e'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs_E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_E<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs_E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::char_left( 'e', context[27], context[28] );
      if( ! context[32] )
        continue;
      // closed e.Index#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc2/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 'e'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/36 )/37 )/38 (/39 # E/40 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs_E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 'e'/7 } (/41 e.Index#1/27/42 )/44 s.ContextOffset#1/13/45 )/46 )/47 (/48 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/29 Reuse: # CmdOpenedE/31 HalfReuse: # AlgLeft/32 } Tile{ AsIs: s.Num#1/26 } s.ContextOffset#1/13/49 )/50 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_E<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[42], context[43], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[50] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 'e' );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 'e' );
      refalrts::update_ident( context[31], & ident_CmdOpenedE<int>::name );
      refalrts::reinit_ident( context[32], & ident_AlgLeft<int>::name );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::link_brackets( context[29], context[50] );
      refalrts::link_brackets( context[11], context[47] );
      refalrts::link_brackets( context[12], context[46] );
      refalrts::link_brackets( context[41], context[44] );
      refalrts::link_brackets( context[39], context[24] );
      refalrts::link_brackets( context[18], context[38] );
      refalrts::link_brackets( context[19], context[37] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[41], context[48] );
      res = refalrts::splice_evar( res, context[30], context[7] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );

  //S (#JunkE )(E )(E )
  // </0 & DoGenSubst/4 s.ContextOffset#1/13 (/16 # Junk/18 e.MarkedPattern#1/14 )/17 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = refalrts::ident_left(  & ident_Junk<int>::name, context[14], context[15] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 14
  // closed e.Vars#1 as range 9
  // closed e.Commands#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ContextOffset#1/13 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.ContextOffset1 #13/17 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.MarkedPattern#1/14 } )/19 Tile{ AsIs: (/16 Reuse: # CmdComment/18 } Tile{ AsIs: </0 Reuse: & TextFromExpr/4 } </20 & FakeOffset/21 e.MarkedPattern#1/14/22 Tile{ HalfReuse: >/8 AsIs: >/1 } )/24 Tile{ AsIs: e.Commands#1/5 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], FakeOffset, "FakeOffset" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[14], context[15]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[17], context[13] );
  refalrts::update_ident( context[18], & ident_CmdComment<int>::name );
  refalrts::update_name( context[4], TextFromExpr, "TextFromExpr" );
  refalrts::reinit_close_call( context[8] );
  refalrts::link_brackets( context[16], context[24] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[7], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
