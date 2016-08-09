// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult GenInitSubst_Save(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenInitSubst_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenResult_Opt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenResult_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenSubst_Save(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenSubst_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL_Function_Conjoint(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL_Function_Disjoint(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenResultFuncs(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenSentenceFunc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_HighLevelRASL_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HighLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #CmdDeclaration
template <typename SREFAL_PARAM_INT>
struct ident_CmdDeclaration {
  static const char *name() {
    return "CmdDeclaration";
  }
};

// identifier #CmdDefineIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdDefineIdent {
  static const char *name() {
    return "CmdDefineIdent";
  }
};

// identifier #CmdEmitNativeCode
template <typename SREFAL_PARAM_INT>
struct ident_CmdEmitNativeCode {
  static const char *name() {
    return "CmdEmitNativeCode";
  }
};

// identifier #CmdEnum
template <typename SREFAL_PARAM_INT>
struct ident_CmdEnum {
  static const char *name() {
    return "CmdEnum";
  }
};

// identifier #CmdNativeFunction
template <typename SREFAL_PARAM_INT>
struct ident_CmdNativeFunction {
  static const char *name() {
    return "CmdNativeFunction";
  }
};

// identifier #CmdSeparator
template <typename SREFAL_PARAM_INT>
struct ident_CmdSeparator {
  static const char *name() {
    return "CmdSeparator";
  }
};

// identifier #CmdSwap
template <typename SREFAL_PARAM_INT>
struct ident_CmdSwap {
  static const char *name() {
    return "CmdSwap";
  }
};

// identifier #Conjoint
template <typename SREFAL_PARAM_INT>
struct ident_Conjoint {
  static const char *name() {
    return "Conjoint";
  }
};

// identifier #Declaration
template <typename SREFAL_PARAM_INT>
struct ident_Declaration {
  static const char *name() {
    return "Declaration";
  }
};

// identifier #Disjoint
template <typename SREFAL_PARAM_INT>
struct ident_Disjoint {
  static const char *name() {
    return "Disjoint";
  }
};

// identifier #Enum
template <typename SREFAL_PARAM_INT>
struct ident_Enum {
  static const char *name() {
    return "Enum";
  }
};

// identifier #Function
template <typename SREFAL_PARAM_INT>
struct ident_Function {
  static const char *name() {
    return "Function";
  }
};

// identifier #Ident
template <typename SREFAL_PARAM_INT>
struct ident_Ident {
  static const char *name() {
    return "Ident";
  }
};

// identifier #NativeBlock
template <typename SREFAL_PARAM_INT>
struct ident_NativeBlock {
  static const char *name() {
    return "NativeBlock";
  }
};

// identifier #NativeBody
template <typename SREFAL_PARAM_INT>
struct ident_NativeBody {
  static const char *name() {
    return "NativeBody";
  }
};

// identifier #NoOpt
template <typename SREFAL_PARAM_INT>
struct ident_NoOpt {
  static const char *name() {
    return "NoOpt";
  }
};

// identifier #OptResult
template <typename SREFAL_PARAM_INT>
struct ident_OptResult {
  static const char *name() {
    return "OptResult";
  }
};

// identifier #Sentences
template <typename SREFAL_PARAM_INT>
struct ident_Sentences {
  static const char *name() {
    return "Sentences";
  }
};

// identifier #Separator
template <typename SREFAL_PARAM_INT>
struct ident_Separator {
  static const char *name() {
    return "Separator";
  }
};

// identifier #Swap
template <typename SREFAL_PARAM_INT>
struct ident_Swap {
  static const char *name() {
    return "Swap";
  }
};

static refalrts::FnResult gen_HighLevelRASL_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenSentenceFunc, "GenSentenceFunc" },
    { GenResultFuncs, "GenResultFuncs" },
    { HighLevelRASL_Function, "HighLevelRASL-Function" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSeparator<int>::name,
    & ident_Separator<int>::name,
    & ident_CmdEmitNativeCode<int>::name,
    & ident_NativeBlock<int>::name,
    & ident_CmdDefineIdent<int>::name,
    & ident_Ident<int>::name,
    & ident_CmdDeclaration<int>::name,
    & ident_Declaration<int>::name,
    & ident_CmdSwap<int>::name,
    & ident_Swap<int>::name,
    & ident_CmdEnum<int>::name,
    & ident_Enum<int>::name,
    & ident_CmdNativeFunction<int>::name,
    & ident_NativeBody<int>::name,
    & ident_Function<int>::name,
    & ident_Sentences<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: s.$ s.$ ( e.$ )
    //GLOBAL GEN: s.$ s.$ ( s.$ e.$ )
    // </0 & HighLevelRASL\1/4 s.idx#0/9 s.idxV#0/10 (/7 s.idxVVB#0/11 e.idxVVBV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 11, 5},
    // closed e.idxVVBV#0 as range 5
    {refalrts::icOnFailGoTo, +31, 0, 0},
    // s.idx s.idx ( # Function s.idx ( e.idx ) # Sentences e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/12 (/15 e.Name#2/13 )/16 # Sentences/17 e.Sentences#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 14, 11},
    {refalrts::icSave, 0, 21, 5},
    {refalrts::icsVarLeft, 0, 12, 21},
    {refalrts::icBracketLeftSave, 0, 13, 21},
    {refalrts::icIdentLeftSave, 17, 15, 21},
    // closed e.Name#2 as range 13
    // closed e.Sentences#2 as range 21(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.OptResult#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 & HighLevelRASL-Function/19 Tile{ AsIs: </0 Reuse: & GenSentenceFunc/4 AsIs: s.Joint#1/9 } Tile{ HalfReuse: >/8 } Tile{ HalfReuse: </17 } & GenResultFuncs/20 Tile{ HalfReuse: s.OptResult1 #10/7 HalfReuse: >/11 AsIs: s.ScopeClass#2/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 } Tile{ AsIs: e.Sentences#2/21(5) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icAllocFunc, 0, 2, 19},
    {refalrts::icAllocFunc, 0, 1, 20},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icReinitSVar, 0, 10, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceTile, 7, 16, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 0, 9, 0},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // s.idx s.idx ( # Function s.idx ( e.idx ) # NativeBody t.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/12 (/15 e.Name#2/13 )/16 # NativeBody/17 t.SrcPos#2/18 e.Code#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 14, 11},
    {refalrts::icSave, 0, 21, 5},
    {refalrts::icsVarLeft, 0, 12, 21},
    {refalrts::icBracketLeftSave, 0, 13, 21},
    {refalrts::icIdentLeftSave, 17, 13, 21},
    // closed e.Name#2 as range 13
    {refalrts::ictVarLeftSave, 0, 18, 21},
    // closed e.Code#2 as range 21(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} # NativeBody/17 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdNativeFunction/11 AsIs: s.ScopeClass#2/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 } Tile{ AsIs: t.SrcPos#2/18 AsIs: e.Code#2/21(5) AsIs: )/8 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 12, 11},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 18, 8, 0},
    {refalrts::icSpliceTile, 7, 16, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // s.idx s.idx ( # Enum s.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Enum/11 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 11, 11},
    {refalrts::icSave, 0, 21, 5},
    {refalrts::icsVarLeft, 0, 12, 21},
    // closed e.Name#2 as range 21(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEnum/11 AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/21(5) AsIs: )/8 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 10, 11},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // s.idx s.idx ( # Swap s.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Swap/11 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 9, 11},
    {refalrts::icSave, 0, 21, 5},
    {refalrts::icsVarLeft, 0, 12, 21},
    // closed e.Name#2 as range 21(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSwap/11 AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/21(5) AsIs: )/8 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 8, 11},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // s.idx s.idx ( # Declaration s.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Declaration/11 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 7, 11},
    {refalrts::icSave, 0, 21, 5},
    {refalrts::icsVarLeft, 0, 12, 21},
    // closed e.Name#2 as range 21(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDeclaration/11 AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/21(5) AsIs: )/8 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 6, 11},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    // s.idx s.idx ( # Ident e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Ident/11 e.Name#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 5, 11},
    // closed e.Name#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDefineIdent/11 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 4, 11},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // s.idx s.idx ( # NativeBlock t.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # NativeBlock/11 t.SrcPos#2/12 e.Code#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 3, 11},
    {refalrts::icSave, 0, 21, 5},
    {refalrts::ictVarLeftSave, 0, 12, 21},
    // closed e.Code#2 as range 21(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEmitNativeCode/11 AsIs: t.SrcPos#2/12 AsIs: e.Code#2/21(5) AsIs: )/8 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 2, 11},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx s.idx ( # Separator )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Separator/11 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 11},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSeparator/11 AsIs: )/8 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 0, 11},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[7];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: s.$ s.$ ( e.$ )
  //GLOBAL GEN: s.$ s.$ ( s.$ e.$ )
  // </0 & HighLevelRASL\1/4 s.idx#0/9 s.idxV#0/10 (/7 s.idxVVB#0/11 e.idxVVBV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVBV#0 as range 5
  do {
    refalrts::start_sentence();
    // s.idx s.idx ( # Function s.idx ( e.idx ) # Sentences e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/12 (/15 e.Name#2/13 )/16 # Sentences/17 e.Sentences#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Function<int>::name, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    if( ! refalrts::svar_left( context[12], context[21], context[22] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[21], context[22] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_Sentences<int>::name, context[21], context[22] );
    if( ! context[17] )
      continue;
    // closed e.Name#2 as range 13
    // closed e.Sentences#2 as range 21(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.OptResult#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 & HighLevelRASL-Function/19 Tile{ AsIs: </0 Reuse: & GenSentenceFunc/4 AsIs: s.Joint#1/9 } Tile{ HalfReuse: >/8 } Tile{ HalfReuse: </17 } & GenResultFuncs/20 Tile{ HalfReuse: s.OptResult1 #10/7 HalfReuse: >/11 AsIs: s.ScopeClass#2/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 } Tile{ AsIs: e.Sentences#2/21(5) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], HighLevelRASL_Function, "HighLevelRASL-Function" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], GenResultFuncs, "GenResultFuncs" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], GenSentenceFunc, "GenSentenceFunc" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx s.idx ( # Function s.idx ( e.idx ) # NativeBody t.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/12 (/15 e.Name#2/13 )/16 # NativeBody/17 t.SrcPos#2/18 e.Code#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Function<int>::name, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    if( ! refalrts::svar_left( context[12], context[21], context[22] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[21], context[22] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_NativeBody<int>::name, context[21], context[22] );
    if( ! context[17] )
      continue;
    // closed e.Name#2 as range 13
    context[19] = refalrts::tvar_left( context[18], context[21], context[22] );
    if( ! context[19] )
      continue;
    // closed e.Code#2 as range 21(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} # NativeBody/17 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdNativeFunction/11 AsIs: s.ScopeClass#2/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 } Tile{ AsIs: t.SrcPos#2/18 AsIs: e.Code#2/21(5) AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], & ident_CmdNativeFunction<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[8] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx s.idx ( # Enum s.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Enum/11 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Enum<int>::name, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    if( ! refalrts::svar_left( context[12], context[21], context[22] ) )
      continue;
    // closed e.Name#2 as range 21(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEnum/11 AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/21(5) AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], & ident_CmdEnum<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx s.idx ( # Swap s.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Swap/11 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Swap<int>::name, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    if( ! refalrts::svar_left( context[12], context[21], context[22] ) )
      continue;
    // closed e.Name#2 as range 21(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSwap/11 AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/21(5) AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], & ident_CmdSwap<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx s.idx ( # Declaration s.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Declaration/11 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Declaration<int>::name, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    if( ! refalrts::svar_left( context[12], context[21], context[22] ) )
      continue;
    // closed e.Name#2 as range 21(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDeclaration/11 AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/21(5) AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], & ident_CmdDeclaration<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx s.idx ( # Ident e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Ident/11 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Ident<int>::name, context[11] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDefineIdent/11 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], & ident_CmdDefineIdent<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx s.idx ( # NativeBlock t.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # NativeBlock/11 t.SrcPos#2/12 e.Code#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_NativeBlock<int>::name, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    context[13] = refalrts::tvar_left( context[12], context[21], context[22] );
    if( ! context[13] )
      continue;
    // closed e.Code#2 as range 21(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEmitNativeCode/11 AsIs: t.SrcPos#2/12 AsIs: e.Code#2/21(5) AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], & ident_CmdEmitNativeCode<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx s.idx ( # Separator )
  // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Separator/11 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Separator<int>::name, context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSeparator/11 AsIs: )/8 } Tile{ ]] }
  refalrts::update_ident( context[11], & ident_CmdSeparator<int>::name );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult HighLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_HighLevelRASL_L1, "HighLevelRASL\\1" },
    { refalrts::create_closure, "@create_closure@" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & HighLevelRASL/4 s.Joint#1/5 s.OptResult#1/6 e.ProgramElements#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    // closed e.ProgramElements#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Map/8 </9 Tile{ HalfReuse: & @create_closure@/0 Reuse: & HighLevelRASL\1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } >/10 Tile{ AsIs: e.ProgramElements#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocFunc, 0, 2, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icSpliceTile, 0, 6, 0},
    {refalrts::icSpliceTile, 7, 9, 0},
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
  // </0 & HighLevelRASL/4 s.Joint#1/5 s.OptResult#1/6 e.ProgramElements#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ProgramElements#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map/8 </9 Tile{ HalfReuse: & @create_closure@/0 Reuse: & HighLevelRASL\1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } >/10 Tile{ AsIs: e.ProgramElements#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "@create_closure@" );
  refalrts::update_name( context[4], gen_HighLevelRASL_L1, "HighLevelRASL\\1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult HighLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { HighLevelRASL_Function_Disjoint, "HighLevelRASL-Function-Disjoint" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdEnum<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: s.$ s.$ s.$ s.$ s.$ ( e.$ ) e.$
    // </0 & HighLevelRASL-Function/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 s.idxVVV#0/8 s.idxVVVV#0/9 (/12 e.idxVVVVVB#0/10 )/13 e.idxVVVVVT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 10, 2},
    // closed e.idxVVVVVB#0 as range 10
    // closed e.idxVVVVVT#0 as range 2
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // s.idx s.idx s.idx s.idx s.idx ( e.idx )
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icEmpty, 0, 0, 16},
    // closed e.Name#1 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 } Tile{ HalfReuse: s.ScopeClass1 #9/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 9, 12},
    {refalrts::icLinkBrackets, 0, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // s.idx s.idx s.idx s.idx s.idx ( e.idx ) t.idx
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 t.OneSentence#1/14 >/1
    // closed e.Name#1 as range 10
    {refalrts::icSave, 0, 16, 2},
    {refalrts::ictVarLeftSave, 0, 14, 16},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 } Tile{ AsIs: s.FnGenInitSubst#1/6 AsIs: s.FnGenSubst#1/7 AsIs: s.FnGenResult#1/8 AsIs: s.ScopeClass#1/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: t.OneSentence#1/14 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetRes, 0, 0, 6},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx s.idx s.idx s.idx s.idx ( e.idx ) e.idx
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 e.Sentences#1/2 >/1
    // closed e.Name#1 as range 10
    // closed e.Sentences#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenFunction#1/5 AsIs: s.FnGenInitSubst#1/6 AsIs: s.FnGenSubst#1/7 AsIs: s.FnGenResult#1/8 AsIs: s.ScopeClass#1/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ s.$ s.$ s.$ s.$ ( e.$ ) e.$
  // </0 & HighLevelRASL-Function/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 s.idxVVV#0/8 s.idxVVVV#0/9 (/12 e.idxVVVVVB#0/10 )/13 e.idxVVVVVT#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.idxVVVVVB#0 as range 10
  // closed e.idxVVVVVT#0 as range 2
  do {
    refalrts::start_sentence();
    // s.idx s.idx s.idx s.idx s.idx ( e.idx )
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 >/1
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Name#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 } Tile{ HalfReuse: s.ScopeClass1 #9/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdEnum<int>::name );
    refalrts::reinit_svar( context[12], context[9] );
    refalrts::link_brackets( context[0], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx s.idx s.idx s.idx s.idx ( e.idx ) t.idx
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 t.OneSentence#1/14 >/1
    // closed e.Name#1 as range 10
    context[16] = context[2];
    context[17] = context[3];
    context[15] = refalrts::tvar_left( context[14], context[16], context[17] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 } Tile{ AsIs: s.FnGenInitSubst#1/6 AsIs: s.FnGenSubst#1/7 AsIs: s.FnGenResult#1/8 AsIs: s.ScopeClass#1/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: t.OneSentence#1/14 AsIs: >/1 ]] }
    refalrts::update_name( context[4], HighLevelRASL_Function_Disjoint, "HighLevelRASL-Function-Disjoint" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx s.idx s.idx s.idx s.idx ( e.idx ) e.idx
  // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 e.Sentences#1/2 >/1
  // closed e.Name#1 as range 10
  // closed e.Sentences#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenFunction#1/5 AsIs: s.FnGenInitSubst#1/6 AsIs: s.FnGenSubst#1/7 AsIs: s.FnGenResult#1/8 AsIs: s.ScopeClass#1/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenSentenceFunc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { HighLevelRASL_Function_Disjoint, "HighLevelRASL-Function-Disjoint" },
    { HighLevelRASL_Function_Conjoint, "HighLevelRASL-Function-Conjoint" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Disjoint<int>::name,
    & ident_Conjoint<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: s.$
    //GLOBAL GEN: s.$
    // </0 & GenSentenceFunc/4 s.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    // # Conjoint
    // </0 & GenSentenceFunc/4 # Conjoint/5 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & GenSentenceFunc/4 # Conjoint/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & HighLevelRASL-Function-Conjoint/1 ]] }
    {refalrts::icReinitFunc, 0, 1, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // # Disjoint
    // </0 & GenSentenceFunc/4 # Disjoint/5 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & GenSentenceFunc/4 # Disjoint/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & HighLevelRASL-Function-Disjoint/1 ]] }
    {refalrts::icReinitFunc, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
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
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & GenSentenceFunc/4 s.idx#0/5 >/1
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
    // # Conjoint
    // </0 & GenSentenceFunc/4 # Conjoint/5 >/1
    if( ! refalrts::ident_term(  & ident_Conjoint<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & GenSentenceFunc/4 # Conjoint/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & HighLevelRASL-Function-Conjoint/1 ]] }
    refalrts::reinit_name( context[1], HighLevelRASL_Function_Conjoint, "HighLevelRASL-Function-Conjoint" );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // # Disjoint
  // </0 & GenSentenceFunc/4 # Disjoint/5 >/1
  if( ! refalrts::ident_term(  & ident_Disjoint<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & GenSentenceFunc/4 # Disjoint/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & HighLevelRASL-Function-Disjoint/1 ]] }
  refalrts::reinit_name( context[1], HighLevelRASL_Function_Disjoint, "HighLevelRASL-Function-Disjoint" );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenResultFuncs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenResult_Opt, "GenResult-Opt" },
    { GenSubst_Save, "GenSubst-Save" },
    { GenInitSubst_Save, "GenInitSubst-Save" },
    { GenResult_Simple, "GenResult-Simple" },
    { GenSubst_Simple, "GenSubst-Simple" },
    { GenInitSubst_Simple, "GenInitSubst-Simple" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_OptResult<int>::name,
    & ident_NoOpt<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: s.$
    //GLOBAL GEN: s.$
    // </0 & GenResultFuncs/4 s.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    // # NoOpt
    // </0 & GenResultFuncs/4 # NoOpt/5 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: & GenInitSubst-Simple/4 HalfReuse: & GenSubst-Simple/5 HalfReuse: & GenResult-Simple/1 ]] }
    {refalrts::icUpdateFunc, 0, 5, 4},
    {refalrts::icReinitFunc, 0, 4, 5},
    {refalrts::icReinitFunc, 0, 3, 1},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // # OptResult
    // </0 & GenResultFuncs/4 # OptResult/5 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: & GenInitSubst-Save/4 HalfReuse: & GenSubst-Save/5 HalfReuse: & GenResult-Opt/1 ]] }
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icReinitFunc, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
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
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & GenResultFuncs/4 s.idx#0/5 >/1
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
    // # NoOpt
    // </0 & GenResultFuncs/4 # NoOpt/5 >/1
    if( ! refalrts::ident_term(  & ident_NoOpt<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: & GenInitSubst-Simple/4 HalfReuse: & GenSubst-Simple/5 HalfReuse: & GenResult-Simple/1 ]] }
    refalrts::update_name( context[4], GenInitSubst_Simple, "GenInitSubst-Simple" );
    refalrts::reinit_name( context[5], GenSubst_Simple, "GenSubst-Simple" );
    refalrts::reinit_name( context[1], GenResult_Simple, "GenResult-Simple" );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // # OptResult
  // </0 & GenResultFuncs/4 # OptResult/5 >/1
  if( ! refalrts::ident_term(  & ident_OptResult<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ Reuse: & GenInitSubst-Save/4 HalfReuse: & GenSubst-Save/5 HalfReuse: & GenResult-Opt/1 ]] }
  refalrts::update_name( context[4], GenInitSubst_Save, "GenInitSubst-Save" );
  refalrts::reinit_name( context[5], GenSubst_Save, "GenSubst-Save" );
  refalrts::reinit_name( context[1], GenResult_Opt, "GenResult-Opt" );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
