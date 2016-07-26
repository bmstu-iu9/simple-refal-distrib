// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GST(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenResult_Opt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult TextFromExpr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AddOffsets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BeginOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CalcRes(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CollectTiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CollectTiles_Alloc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CreateElemParam(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult EndOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FlatResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenPushLink(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenResult_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenSplices(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenTrash(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetSampleOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ModifyResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ModifyTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #ADT_Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

// identifier #AsIs
template <typename SREFAL_PARAM_INT>
struct ident_AsIs {
  static const char *name() {
    return "AsIs";
  }
};

// identifier #Brackets
template <typename SREFAL_PARAM_INT>
struct ident_Brackets {
  static const char *name() {
    return "Brackets";
  }
};

// identifier #CallBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CallBrackets {
  static const char *name() {
    return "CallBrackets";
  }
};

// identifier #CmdAllocateElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdAllocateElem {
  static const char *name() {
    return "CmdAllocateElem";
  }
};

// identifier #CmdComment
template <typename SREFAL_PARAM_INT>
struct ident_CmdComment {
  static const char *name() {
    return "CmdComment";
  }
};

// identifier #CmdCopyVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdCopyVar {
  static const char *name() {
    return "CmdCopyVar";
  }
};

// identifier #CmdInsertTile
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertTile {
  static const char *name() {
    return "CmdInsertTile";
  }
};

// identifier #CmdInsertVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertVar {
  static const char *name() {
    return "CmdInsertVar";
  }
};

// identifier #CmdLinkBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdLinkBrackets {
  static const char *name() {
    return "CmdLinkBrackets";
  }
};

// identifier #CmdPushStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdPushStack {
  static const char *name() {
    return "CmdPushStack";
  }
};

// identifier #CmdReinitElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdReinitElem {
  static const char *name() {
    return "CmdReinitElem";
  }
};

// identifier #CmdReinitSVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdReinitSVar {
  static const char *name() {
    return "CmdReinitSVar";
  }
};

// identifier #CmdResetAllocator
template <typename SREFAL_PARAM_INT>
struct ident_CmdResetAllocator {
  static const char *name() {
    return "CmdResetAllocator";
  }
};

// identifier #CmdReturnResult_NoTrash
template <typename SREFAL_PARAM_INT>
struct ident_CmdReturnResult_NoTrash {
  static const char *name() {
    return "CmdReturnResult_NoTrash";
  }
};

// identifier #CmdSetRes
template <typename SREFAL_PARAM_INT>
struct ident_CmdSetRes {
  static const char *name() {
    return "CmdSetRes";
  }
};

// identifier #CmdTrash
template <typename SREFAL_PARAM_INT>
struct ident_CmdTrash {
  static const char *name() {
    return "CmdTrash";
  }
};

// identifier #CmdUpdateElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdUpdateElem {
  static const char *name() {
    return "CmdUpdateElem";
  }
};

// identifier #CmdUseRes
template <typename SREFAL_PARAM_INT>
struct ident_CmdUseRes {
  static const char *name() {
    return "CmdUseRes";
  }
};

// identifier #ElChar
template <typename SREFAL_PARAM_INT>
struct ident_ElChar {
  static const char *name() {
    return "ElChar";
  }
};

// identifier #ElCloseADT
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseADT {
  static const char *name() {
    return "ElCloseADT";
  }
};

// identifier #ElCloseBracket
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseBracket {
  static const char *name() {
    return "ElCloseBracket";
  }
};

// identifier #ElCloseCall
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseCall {
  static const char *name() {
    return "ElCloseCall";
  }
};

// identifier #ElIdent
template <typename SREFAL_PARAM_INT>
struct ident_ElIdent {
  static const char *name() {
    return "ElIdent";
  }
};

// identifier #ElName
template <typename SREFAL_PARAM_INT>
struct ident_ElName {
  static const char *name() {
    return "ElName";
  }
};

// identifier #ElNumber
template <typename SREFAL_PARAM_INT>
struct ident_ElNumber {
  static const char *name() {
    return "ElNumber";
  }
};

// identifier #ElOpenADT
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenADT {
  static const char *name() {
    return "ElOpenADT";
  }
};

// identifier #ElOpenBracket
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenBracket {
  static const char *name() {
    return "ElOpenBracket";
  }
};

// identifier #ElOpenCall
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenCall {
  static const char *name() {
    return "ElOpenCall";
  }
};

// identifier #ElString
template <typename SREFAL_PARAM_INT>
struct ident_ElString {
  static const char *name() {
    return "ElString";
  }
};

// identifier #HalfReuse
template <typename SREFAL_PARAM_INT>
struct ident_HalfReuse {
  static const char *name() {
    return "HalfReuse";
  }
};

// identifier #LEFT_EDGE
template <typename SREFAL_PARAM_INT>
struct ident_LEFT_EDGE {
  static const char *name() {
    return "LEFT_EDGE";
  }
};

// identifier #RIGHT_EDGE
template <typename SREFAL_PARAM_INT>
struct ident_RIGHT_EDGE {
  static const char *name() {
    return "RIGHT_EDGE";
  }
};

// identifier #RemovedTile
template <typename SREFAL_PARAM_INT>
struct ident_RemovedTile {
  static const char *name() {
    return "RemovedTile";
  }
};

// identifier #Reuse
template <typename SREFAL_PARAM_INT>
struct ident_Reuse {
  static const char *name() {
    return "Reuse";
  }
};

// identifier #Tile
template <typename SREFAL_PARAM_INT>
struct ident_Tile {
  static const char *name() {
    return "Tile";
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

// identifier #TkCloseCall
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseCall {
  static const char *name() {
    return "TkCloseCall";
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

// identifier #TkOpenCall
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenCall {
  static const char *name() {
    return "TkOpenCall";
  }
};

// identifier #TkString
template <typename SREFAL_PARAM_INT>
struct ident_TkString {
  static const char *name() {
    return "TkString";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

// identifier #TkVariableCopy
template <typename SREFAL_PARAM_INT>
struct ident_TkVariableCopy {
  static const char *name() {
    return "TkVariableCopy";
  }
};

static refalrts::FnResult lambda_GenResult_Opt_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenResult_Aux, "GenResult_Aux" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdResetAllocator<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_GenResult_Opt_0/4 (/7 e.Trash#2/5 )/8 s.ContextOffset#3/9 e.MarkedResult#3/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Trash#2 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    // closed e.MarkedResult#3 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset#3/9 } (/10 # CmdResetAllocator/11 )/12 Tile{ AsIs: </0 Reuse: & GenResult_Aux/4 AsIs: (/7 AsIs: e.Trash#2/5 AsIs: )/8 } (/13 Tile{ AsIs: e.MarkedResult#3/2 } )/14 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icAllocIdent, 0, 0, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
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
  // </0 & lambda_GenResult_Opt_0/4 (/7 e.Trash#2/5 )/8 s.ContextOffset#3/9 e.MarkedResult#3/2 >/1
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
  // closed e.Trash#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedResult#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset#3/9 } (/10 # CmdResetAllocator/11 )/12 Tile{ AsIs: </0 Reuse: & GenResult_Aux/4 AsIs: (/7 AsIs: e.Trash#2/5 AsIs: )/8 } (/13 Tile{ AsIs: e.MarkedResult#3/2 } )/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], & ident_CmdResetAllocator<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], GenResult_Aux, "GenResult_Aux" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[10], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenResult_Opt_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { AddOffsets, "AddOffsets" },
    { lambda_GenResult_Opt_0, "lambda_GenResult_Opt_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_GenResult_Opt_1/4 s.ContextOffset#1/17 (/15 e.PatternVars#1/13 )/16 (/11 e.Trash#2/9 )/12 (/7 e.MarkedResult#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    {refalrts::icBracketRightSave, 0, 13, 2},
    // closed e.PatternVars#1 as range 13
    // closed e.Trash#2 as range 9
    // closed e.MarkedResult#2 as range 5
    {refalrts::icsVarLeft, 0, 17, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 } & Fetch/18 Tile{ AsIs: </0 Reuse: & AddOffsets/4 AsIs: s.ContextOffset#1/17 AsIs: (/15 AsIs: e.PatternVars#1/13 AsIs: )/16 } Tile{ AsIs: e.MarkedResult#2/5 } >/19 </20 & CreateClosure /21 & lambda_GenResult_Opt_0/22 Tile{ AsIs: (/11 AsIs: e.Trash#2/9 AsIs: )/12 HalfReuse: >/7 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 3, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 2, 21},
    {refalrts::icAllocFunc, 0, 1, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 11, 7, 0},
    {refalrts::icSpliceTile, 19, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 0, 16, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
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
  // </0 & lambda_GenResult_Opt_1/4 s.ContextOffset#1/17 (/15 e.PatternVars#1/13 )/16 (/11 e.Trash#2/9 )/12 (/7 e.MarkedResult#2/5 )/8 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.PatternVars#1 as range 13
  // closed e.Trash#2 as range 9
  // closed e.MarkedResult#2 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 } & Fetch/18 Tile{ AsIs: </0 Reuse: & AddOffsets/4 AsIs: s.ContextOffset#1/17 AsIs: (/15 AsIs: e.PatternVars#1/13 AsIs: )/16 } Tile{ AsIs: e.MarkedResult#2/5 } >/19 </20 & CreateClosure /21 & lambda_GenResult_Opt_0/22 Tile{ AsIs: (/11 AsIs: e.Trash#2/9 AsIs: )/12 HalfReuse: >/7 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[18], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], lambda_GenResult_Opt_0, "lambda_GenResult_Opt_0" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[8] );
  refalrts::update_name( context[4], AddOffsets, "AddOffsets" );
  refalrts::reinit_close_call( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[7] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult GenResult_Opt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_GenResult_Opt_1, "lambda_GenResult_Opt_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { FlatResult, "FlatResult" },
    { GST, "GST" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_RIGHT_EDGE<int>::name,
    & ident_LEFT_EDGE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GenResult_Opt/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 (/12 e.MarkedPattern#1/10 )/13 e.Result#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 10, 2},
    // closed e.PatternVars#1 as range 6
    // closed e.MarkedPattern#1 as range 10
    // closed e.Result#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 & Fetch/15 </16 & GST/17 (/18 (/19 # LEFT_EDGE/20 )/21 Tile{ AsIs: e.MarkedPattern#1/10 } (/22 # RIGHT_EDGE/23 )/24 )/25 (/26 (/27 # LEFT_EDGE/28 )/29 </30 Tile{ HalfReuse: & FlatResult/13 AsIs: e.Result#1/2 AsIs: >/1 } (/31 # RIGHT_EDGE/32 )/33 )/34 >/35 </36 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_GenResult_Opt_1/4 AsIs: s.ContextOffset#1/5 AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 HalfReuse: >/12 } >/37 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 4, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 3, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocIdent, 0, 1, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icAllocIdent, 0, 0, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocIdent, 0, 1, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icAllocIdent, 0, 0, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icReinitFunc, 0, 2, 13},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icLinkBrackets, 26, 34, 0},
    {refalrts::icLinkBrackets, 31, 33, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 27, 29, 0},
    {refalrts::icLinkBrackets, 18, 25, 0},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icLinkBrackets, 19, 21, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 37, 37, 0},
    {refalrts::icSpliceTile, 0, 12, 0},
    {refalrts::icSpliceTile, 31, 36, 0},
    {refalrts::icSpliceTile, 13, 1, 0},
    {refalrts::icSpliceTile, 22, 30, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 14, 21, 0},
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
  // </0 & GenResult_Opt/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 (/12 e.MarkedPattern#1/10 )/13 e.Result#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedPattern#1 as range 10
  // closed e.Result#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </14 & Fetch/15 </16 & GST/17 (/18 (/19 # LEFT_EDGE/20 )/21 Tile{ AsIs: e.MarkedPattern#1/10 } (/22 # RIGHT_EDGE/23 )/24 )/25 (/26 (/27 # LEFT_EDGE/28 )/29 </30 Tile{ HalfReuse: & FlatResult/13 AsIs: e.Result#1/2 AsIs: >/1 } (/31 # RIGHT_EDGE/32 )/33 )/34 >/35 </36 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_GenResult_Opt_1/4 AsIs: s.ContextOffset#1/5 AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 HalfReuse: >/12 } >/37 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], GST, "GST" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[20], & ident_LEFT_EDGE<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[23], & ident_RIGHT_EDGE<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[28], & ident_LEFT_EDGE<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[32], & ident_RIGHT_EDGE<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[13], FlatResult, "FlatResult" );
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_GenResult_Opt_1, "lambda_GenResult_Opt_1" );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[36] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[26], context[34] );
  refalrts::link_brackets( context[31], context[33] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[27], context[29] );
  refalrts::link_brackets( context[18], context[25] );
  refalrts::link_brackets( context[22], context[24] );
  refalrts::link_brackets( context[19], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[31], context[36] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[22], context[30] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[14], context[21] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FlatResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FlatResult, "FlatResult" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkName<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkCloseCall<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_CallBrackets<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & FlatResult/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +32, 0, 0},
    //E 
    // </0 & FlatResult/4 e.Range_B#1/5 (/9 # CallBrackets/11 e.SubRange_E#1/7 )/10 e.Range_E#1/2 >/1
    {refalrts::icSave, 0, 23, 2},
    {refalrts::icEPrepare, 0, 5, 23},
    {refalrts::icEStart, 0, 5, 23},
    {refalrts::icSave, 0, 25, 23},
    {refalrts::icBracketLeftSave, 0, 7, 25},
    {refalrts::icIdentLeftSave, 11, 9, 7},
    // closed e.SubRange_E#1 as range 7
    // closed e.Range_E#1 as range 25(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range_B#1/5 HalfReuse: >/9 HalfReuse: (/11 } # TkOpenCall/12 )/13 </14 & FlatResult/15 Tile{ AsIs: e.SubRange_E#1/7 } >/16 (/17 # TkCloseCall/18 )/19 </20 Tile{ HalfReuse: & FlatResult/10 AsIs: e.Range_E#1/25(2) AsIs: >/1 ]] }
    {refalrts::icAllocIdent, 0, 8, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 0, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocIdent, 0, 7, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icReinitFunc, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 11, 13, 0},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceTile, 16, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    //E 
    // </0 & FlatResult/4 e.Range_B#1/5 (/9 # Brackets/11 e.SubRange_E#1/7 )/10 e.Range_E#1/2 >/1
    {refalrts::icSave, 0, 23, 2},
    {refalrts::icEPrepare, 0, 5, 23},
    {refalrts::icEStart, 0, 5, 23},
    {refalrts::icSave, 0, 25, 23},
    {refalrts::icBracketLeftSave, 0, 7, 25},
    {refalrts::icIdentLeftSave, 11, 6, 7},
    // closed e.SubRange_E#1 as range 7
    // closed e.Range_E#1 as range 25(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range_B#1/5 HalfReuse: >/9 HalfReuse: (/11 } # TkOpenBracket/12 )/13 </14 & FlatResult/15 Tile{ AsIs: e.SubRange_E#1/7 } >/16 (/17 # TkCloseBracket/18 )/19 </20 Tile{ HalfReuse: & FlatResult/10 AsIs: e.Range_E#1/25(2) AsIs: >/1 ]] }
    {refalrts::icAllocIdent, 0, 5, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 0, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocIdent, 0, 4, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icReinitFunc, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 11, 13, 0},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceTile, 16, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    //E 
    // </0 & FlatResult/4 e.Range_B#1/5 (/9 # ADT_Brackets/11 (/14 e.Name#1/12 )/15 e.SubRange_E#1/7 )/10 e.Range_E#1/2 >/1
    {refalrts::icSave, 0, 23, 2},
    {refalrts::icEPrepare, 0, 5, 23},
    {refalrts::icEStart, 0, 5, 23},
    {refalrts::icSave, 0, 25, 23},
    {refalrts::icBracketLeftSave, 0, 7, 25},
    {refalrts::icIdentLeftSave, 11, 3, 7},
    {refalrts::icBracketLeftSave, 0, 12, 7},
    // closed e.Name#1 as range 12
    // closed e.SubRange_E#1 as range 7
    // closed e.Range_E#1 as range 25(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Range_B#1/5 } (/16 # TkOpenADT/17 Tile{ HalfReuse: )/9 HalfReuse: (/11 HalfReuse: # TkName/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: </0 AsIs: & FlatResult/4 } Tile{ AsIs: e.SubRange_E#1/7 } >/18 (/19 # TkCloseADT/20 )/21 </22 Tile{ HalfReuse: & FlatResult/10 AsIs: e.Range_E#1/25(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icAllocIdent, 0, 2, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocIdent, 0, 1, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icReinitIdent, 0, 0, 14},
    {refalrts::icReinitFunc, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icLinkBrackets, 19, 21, 0},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 15, 0},
    {refalrts::icLinkBrackets, 16, 9, 0},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceTile, 18, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 9, 15, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //E 
    // </0 & FlatResult/4 e.Range#1/2 >/1
    // closed e.Range#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FlatResult/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Range#1/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[6];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & FlatResult/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //E 
    // </0 & FlatResult/4 e.Range_B#1/5 (/9 # CallBrackets/11 e.SubRange_E#1/7 )/10 e.Range_E#1/2 >/1
    context[23] = context[2];
    context[24] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[25] = context[23];
      context[26] = context[24];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[25], context[26] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      // closed e.SubRange_E#1 as range 7
      // closed e.Range_E#1 as range 25(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range_B#1/5 HalfReuse: >/9 HalfReuse: (/11 } # TkOpenCall/12 )/13 </14 & FlatResult/15 Tile{ AsIs: e.SubRange_E#1/7 } >/16 (/17 # TkCloseCall/18 )/19 </20 Tile{ HalfReuse: & FlatResult/10 AsIs: e.Range_E#1/25(2) AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( context[12], & ident_TkOpenCall<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], FlatResult, "FlatResult" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[18], & ident_TkCloseCall<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[9] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::reinit_name( context[10], FlatResult, "FlatResult" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[20] );
      refalrts::link_brackets( context[17], context[19] );
      refalrts::push_stack( context[16] );
      refalrts::push_stack( context[14] );
      refalrts::link_brackets( context[11], context[13] );
      refalrts::push_stack( context[9] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[16], context[20] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[23], context[24] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //E 
    // </0 & FlatResult/4 e.Range_B#1/5 (/9 # Brackets/11 e.SubRange_E#1/7 )/10 e.Range_E#1/2 >/1
    context[23] = context[2];
    context[24] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[25] = context[23];
      context[26] = context[24];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[25], context[26] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_Brackets<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      // closed e.SubRange_E#1 as range 7
      // closed e.Range_E#1 as range 25(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range_B#1/5 HalfReuse: >/9 HalfReuse: (/11 } # TkOpenBracket/12 )/13 </14 & FlatResult/15 Tile{ AsIs: e.SubRange_E#1/7 } >/16 (/17 # TkCloseBracket/18 )/19 </20 Tile{ HalfReuse: & FlatResult/10 AsIs: e.Range_E#1/25(2) AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( context[12], & ident_TkOpenBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], FlatResult, "FlatResult" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[18], & ident_TkCloseBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[9] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::reinit_name( context[10], FlatResult, "FlatResult" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[20] );
      refalrts::link_brackets( context[17], context[19] );
      refalrts::push_stack( context[16] );
      refalrts::push_stack( context[14] );
      refalrts::link_brackets( context[11], context[13] );
      refalrts::push_stack( context[9] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[16], context[20] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[23], context[24] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //E 
    // </0 & FlatResult/4 e.Range_B#1/5 (/9 # ADT_Brackets/11 (/14 e.Name#1/12 )/15 e.SubRange_E#1/7 )/10 e.Range_E#1/2 >/1
    context[23] = context[2];
    context[24] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[25] = context[23];
      context[26] = context[24];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[25], context[26] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      // closed e.Name#1 as range 12
      // closed e.SubRange_E#1 as range 7
      // closed e.Range_E#1 as range 25(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Range_B#1/5 } (/16 # TkOpenADT/17 Tile{ HalfReuse: )/9 HalfReuse: (/11 HalfReuse: # TkName/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: </0 AsIs: & FlatResult/4 } Tile{ AsIs: e.SubRange_E#1/7 } >/18 (/19 # TkCloseADT/20 )/21 </22 Tile{ HalfReuse: & FlatResult/10 AsIs: e.Range_E#1/25(2) AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[17], & ident_TkOpenADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_TkCloseADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[22] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[9] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::reinit_ident( context[14], & ident_TkName<int>::name );
      refalrts::reinit_name( context[10], FlatResult, "FlatResult" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[22] );
      refalrts::link_brackets( context[19], context[21] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[15] );
      refalrts::link_brackets( context[16], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[18], context[22] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[9], context[15] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[23], context[24] ) );
  } while ( 0 );

  //E 
  // </0 & FlatResult/4 e.Range#1/2 >/1
  // closed e.Range#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & FlatResult/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Range#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CollectStrings_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectStrings, "CollectStrings" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkString<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_CollectStrings_0/4 (/7 e.Chars#2/5 )/8 e.Tail#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Chars#2 as range 5
    // closed e.Tail#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkString/4 } Tile{ AsIs: e.Chars#2/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & CollectStrings/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icLinkBrackets, 0, 7, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
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
  // </0 & lambda_CollectStrings_0/4 (/7 e.Chars#2/5 )/8 e.Tail#2/2 >/1
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
  // closed e.Chars#2 as range 5
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkString/4 } Tile{ AsIs: e.Chars#2/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & CollectStrings/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TkString<int>::name );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_name( context[8], CollectStrings, "CollectStrings" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectStrings, "CollectStrings" },
    { lambda_CollectStrings_0, "lambda_CollectStrings_0" },
    { BuildString, "BuildString" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ADT_Brackets<int>::name,
    & ident_CallBrackets<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & CollectStrings/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +27, 0, 0},
    //(#TkCharS )(#TkCharS )E 
    // </0 & CollectStrings/4 (/7 # TkChar/9 s.Value1#1/15 )/8 (/12 # TkChar/14 s.Value2#1/16 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    {refalrts::icIdentLeftSave, 9, 3, 5},
    {refalrts::icBracketLeftSave, 0, 10, 18},
    {refalrts::icIdentLeftSave, 14, 3, 10},
    // closed e.Tail#1 as range 18(2)
    {refalrts::icsVarLeft, 0, 15, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icsVarLeft, 0, 16, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Value1#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & BuildString/8 AsIs: (/12 HalfReuse: s.Value11 #15/14 AsIs: s.Value2#1/16 AsIs: )/13 AsIs: e.Tail#1/18(2) AsIs: >/1 } Tile{ HalfReuse: & lambda_CollectStrings_0/9 } >/17 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icUpdateFunc, 0, 3, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 2, 8},
    {refalrts::icReinitSVar, 0, 15, 14},
    {refalrts::icReinitFunc, 0, 1, 9},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //(#BracketsE )E 
    // </0 & CollectStrings/4 (/7 # Brackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    {refalrts::icIdentLeftSave, 9, 2, 5},
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 0, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 0, 10, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //(#CallBracketsE )E 
    // </0 & CollectStrings/4 (/7 # CallBrackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    {refalrts::icIdentLeftSave, 9, 1, 5},
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 0, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 0, 10, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //(#ADT_BracketsE )E 
    // </0 & CollectStrings/4 (/7 # ADT_Brackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    {refalrts::icIdentLeftSave, 9, 0, 5},
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ADT_Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 0, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 0, 10, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //T E 
    // </0 & CollectStrings/4 t.OtherTerm#1/5 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::ictVarLeftSave, 0, 5, 18},
    // closed e.Tail#1 as range 18(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/5 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & CollectStrings/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CollectStrings/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & CollectStrings/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //(#TkCharS )(#TkCharS )E 
    // </0 & CollectStrings/4 (/7 # TkChar/9 s.Value1#1/15 )/8 (/12 # TkChar/14 s.Value2#1/16 )/13 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkChar<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[18], context[19] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkChar<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 18(2)
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Value1#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & BuildString/8 AsIs: (/12 HalfReuse: s.Value11 #15/14 AsIs: s.Value2#1/16 AsIs: )/13 AsIs: e.Tail#1/18(2) AsIs: >/1 } Tile{ HalfReuse: & lambda_CollectStrings_0/9 } >/17 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], BuildString, "BuildString" );
    refalrts::reinit_svar( context[14], context[15] );
    refalrts::reinit_name( context[9], lambda_CollectStrings_0, "lambda_CollectStrings_0" );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#BracketsE )E 
    // </0 & CollectStrings/4 (/7 # Brackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CollectStrings, "CollectStrings" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#CallBracketsE )E 
    // </0 & CollectStrings/4 (/7 # CallBrackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CallBrackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CollectStrings, "CollectStrings" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#ADT_BracketsE )E 
    // </0 & CollectStrings/4 (/7 # ADT_Brackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ADT_Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CollectStrings, "CollectStrings" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T E 
    // </0 & CollectStrings/4 t.OtherTerm#1/5 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[6] = refalrts::tvar_left( context[5], context[18], context[19] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/5 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & CollectStrings/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & CollectStrings/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )E 
    //GLOBAL GEN:(E )E 
    // </0 & BuildString/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //(E )(#TkCharS )E 
    // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 (/11 # TkChar/13 s.Value#1/14 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 15, 2},
    {refalrts::icBracketLeftSave, 0, 9, 15},
    {refalrts::icIdentLeftSave, 13, 0, 9},
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 15(2)
    {refalrts::icsVarLeft, 0, 14, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # TkChar/13 s.Value#1/14 )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString/4 AsIs: (/7 AsIs: e.Chars#1/5 HalfReuse: s.Value1 #14/8 HalfReuse: )/11 } Tile{ AsIs: e.Tail#1/15(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icReinitSVar, 0, 14, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 11, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icTrash, 0, 0, 11},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )E 
    // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & BuildString/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 7, 8, 0},
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
  //FAST GEN:(E )E 
  //GLOBAL GEN:(E )E 
  // </0 & BuildString/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    //(E )(#TkCharS )E 
    // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 (/11 # TkChar/13 s.Value#1/14 )/12 e.Tail#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[15], context[16] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TkChar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 15(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TkChar/13 s.Value#1/14 )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString/4 AsIs: (/7 AsIs: e.Chars#1/5 HalfReuse: s.Value1 #14/8 HalfReuse: )/11 } Tile{ AsIs: e.Tail#1/15(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[8], context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )E 
  // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
  // closed e.Chars#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & BuildString/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenResult_Aux_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CreateElemParam, "CreateElemParam" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdAllocateElem<int>::name,
    & ident_ElString<int>::name,
    & ident_TkString<int>::name,
    & ident_CmdCopyVar<int>::name,
    & ident_TkVariableCopy<int>::name,
    & ident_Tile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )
    //GLOBAL GEN:(E )
    // </0 & lambda_GenResult_Aux_0/4 (/7 e.idxB#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //(#TileE )
    // </0 & lambda_GenResult_Aux_0/4 (/7 # Tile/9 e.Tile#2/5 )/8 >/1
    {refalrts::icSave, 0, 14, 5},
    {refalrts::icIdentLeftSave, 9, 5, 14},
    // closed e.Tile#2 as range 14(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_0/4 (/7 # Tile/9 e.Tile#2/14(5) )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    //(#TkVariableCopy't'E S S S )
    // </0 & lambda_GenResult_Aux_0/4 (/7 # TkVariableCopy/9 't'/10 e.Index#2/5 s.Level#2/13 s.SampleOffset#2/12 s.Offset#2/11 )/8 >/1
    {refalrts::icSave, 0, 14, 5},
    {refalrts::icIdentLeftSave, 9, 4, 14},
    {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('t'), 14},
    {refalrts::icsVarRight, 0, 11, 14},
    {refalrts::icsVarRight, 0, 12, 14},
    {refalrts::icsVarRight, 0, 13, 14},
    // closed e.Index#2 as range 14(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_0/4 {REMOVED TILE}  e.Index#2/14(5) s.Level#2/13 s.SampleOffset#2/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/9 Reuse: 'e'/10 } Tile{ AsIs: s.Offset#2/11 HalfReuse: s.SampleOffset2 #12/8 HalfReuse: )/1 ]] }
    {refalrts::icUpdateIdent, 0, 3, 9},
    {refalrts::icUpdateChar, 0, 'e', 10},
    {refalrts::icReinitSVar, 0, 12, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icSetRes, 0, 0, 11},
    {refalrts::icSpliceTile, 7, 10, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //(#TkVariableCopyS E S S S )
    // </0 & lambda_GenResult_Aux_0/4 (/7 # TkVariableCopy/9 s.Mode#2/10 e.Index#2/5 s.Level#2/13 s.SampleOffset#2/12 s.Offset#2/11 )/8 >/1
    {refalrts::icSave, 0, 14, 5},
    {refalrts::icIdentLeftSave, 9, 4, 14},
    {refalrts::icsVarLeft, 0, 10, 14},
    {refalrts::icsVarRight, 0, 11, 14},
    {refalrts::icsVarRight, 0, 12, 14},
    {refalrts::icsVarRight, 0, 13, 14},
    // closed e.Index#2 as range 14(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_0/4 {REMOVED TILE}  e.Index#2/14(5) s.Level#2/13 s.SampleOffset#2/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/9 AsIs: s.Mode#2/10 } Tile{ AsIs: s.Offset#2/11 HalfReuse: s.SampleOffset2 #12/8 HalfReuse: )/1 ]] }
    {refalrts::icUpdateIdent, 0, 3, 9},
    {refalrts::icReinitSVar, 0, 12, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icSetRes, 0, 0, 11},
    {refalrts::icSpliceTile, 7, 10, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //(#TkStringE S )
    // </0 & lambda_GenResult_Aux_0/4 (/7 # TkString/9 e.String#2/5 s.Offset#2/10 )/8 >/1
    {refalrts::icSave, 0, 14, 5},
    {refalrts::icIdentLeftSave, 9, 2, 14},
    {refalrts::icsVarRight, 0, 10, 14},
    // closed e.String#2 as range 14(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Offset#2/10 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdAllocateElem/4 HalfReuse: s.Offset2 #10/7 Reuse: # ElString/9 } Tile{ AsIs: e.String#2/14(5) } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 10, 7},
    {refalrts::icUpdateIdent, 0, 1, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icTrash, 0, 0, 9},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )
    // </0 & lambda_GenResult_Aux_0/4 (/7 e.Elem#2/5 )/8 >/1
    // closed e.Elem#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 Tile{ HalfReuse: # CmdAllocateElem/0 HalfReuse: </4 HalfReuse: & CreateElemParam/7 AsIs: e.Elem#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 9, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )
  //GLOBAL GEN:(E )
  // </0 & lambda_GenResult_Aux_0/4 (/7 e.idxB#0/5 )/8 >/1
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
  // closed e.idxB#0 as range 5
  do {
    refalrts::start_sentence();
    //(#TileE )
    // </0 & lambda_GenResult_Aux_0/4 (/7 # Tile/9 e.Tile#2/5 )/8 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[14], context[15] );
    if( ! context[9] )
      continue;
    // closed e.Tile#2 as range 14(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_0/4 (/7 # Tile/9 e.Tile#2/14(5) )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkVariableCopy't'E S S S )
    // </0 & lambda_GenResult_Aux_0/4 (/7 # TkVariableCopy/9 't'/10 e.Index#2/5 s.Level#2/13 s.SampleOffset#2/12 s.Offset#2/11 )/8 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[14], context[15] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 't', context[14], context[15] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_right( context[11], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[14], context[15] ) )
      continue;
    // closed e.Index#2 as range 14(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_0/4 {REMOVED TILE}  e.Index#2/14(5) s.Level#2/13 s.SampleOffset#2/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/9 Reuse: 'e'/10 } Tile{ AsIs: s.Offset#2/11 HalfReuse: s.SampleOffset2 #12/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdCopyVar<int>::name );
    refalrts::update_char( context[10], 'e' );
    refalrts::reinit_svar( context[8], context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkVariableCopyS E S S S )
    // </0 & lambda_GenResult_Aux_0/4 (/7 # TkVariableCopy/9 s.Mode#2/10 e.Index#2/5 s.Level#2/13 s.SampleOffset#2/12 s.Offset#2/11 )/8 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[14], context[15] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[14], context[15] ) )
      continue;
    // closed e.Index#2 as range 14(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_0/4 {REMOVED TILE}  e.Index#2/14(5) s.Level#2/13 s.SampleOffset#2/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/9 AsIs: s.Mode#2/10 } Tile{ AsIs: s.Offset#2/11 HalfReuse: s.SampleOffset2 #12/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdCopyVar<int>::name );
    refalrts::reinit_svar( context[8], context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkStringE S )
    // </0 & lambda_GenResult_Aux_0/4 (/7 # TkString/9 e.String#2/5 s.Offset#2/10 )/8 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[9] = refalrts::ident_left(  & ident_TkString<int>::name, context[14], context[15] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_right( context[10], context[14], context[15] ) )
      continue;
    // closed e.String#2 as range 14(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Offset#2/10 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdAllocateElem/4 HalfReuse: s.Offset2 #10/7 Reuse: # ElString/9 } Tile{ AsIs: e.String#2/14(5) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::update_ident( context[9], & ident_ElString<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )
  // </0 & lambda_GenResult_Aux_0/4 (/7 e.Elem#2/5 )/8 >/1
  // closed e.Elem#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/9 Tile{ HalfReuse: # CmdAllocateElem/0 HalfReuse: </4 HalfReuse: & CreateElemParam/7 AsIs: e.Elem#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], & ident_CmdAllocateElem<int>::name );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], CreateElemParam, "CreateElemParam" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenResult_Aux_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CreateElemParam, "CreateElemParam" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_RIGHT_EDGE<int>::name,
    & ident_LEFT_EDGE<int>::name,
    & ident_CmdUpdateElem<int>::name,
    & ident_Reuse<int>::name,
    & ident_CmdReinitElem<int>::name,
    & ident_HalfReuse<int>::name,
    & ident_CmdReinitSVar<int>::name,
    & ident_TkVariable<int>::name,
    & ident_AsIs<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )
    //GLOBAL GEN:(S E )
    // </0 & lambda_GenResult_Aux_1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //(#AsIsT )
    // </0 & lambda_GenResult_Aux_1/4 (/7 # AsIs/9 t.Item#3/10 )/8 >/1
    {refalrts::icIdentTerm, 0, 8, 9},
    {refalrts::icSave, 0, 18, 5},
    {refalrts::ictVarLeftSave, 0, 10, 18},
    {refalrts::icEmpty, 0, 0, 18},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_1/4 (/7 # AsIs/9 t.Item#3/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    //(#HalfReuse(#TkVariable's'E S S ))
    // </0 & lambda_GenResult_Aux_1/4 (/7 # HalfReuse/9 (/12 # TkVariable/14 's'/15 e.Index#3/10 s.SampleOffset#3/17 s.Offset#3/16 )/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::icSave, 0, 18, 5},
    {refalrts::icBracketLeftSave, 0, 10, 18},
    {refalrts::icIdentLeftSave, 14, 7, 10},
    {refalrts::icCharLeftSave, 15, static_cast<unsigned char>('s'), 10},
    {refalrts::icEmpty, 0, 0, 18},
    {refalrts::icsVarRight, 0, 16, 10},
    {refalrts::icsVarRight, 0, 17, 10},
    // closed e.Index#3 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_1/4 {REMOVED TILE}  e.Index#3/10 s.SampleOffset#3/17 s.Offset#3/16 )/13 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReinitSVar/9 HalfReuse: s.Offset3 #16/12 HalfReuse: s.SampleOffset3 #17/14 HalfReuse: )/15 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 6, 9},
    {refalrts::icReinitSVar, 0, 16, 12},
    {refalrts::icReinitSVar, 0, 17, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icLinkBrackets, 7, 15, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 15, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //(#HalfReuse(E ))
    // </0 & lambda_GenResult_Aux_1/4 (/7 # HalfReuse/9 (/12 e.Elem#3/10 )/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::icSave, 0, 18, 5},
    {refalrts::icBracketLeftSave, 0, 10, 18},
    {refalrts::icEmpty, 0, 0, 18},
    // closed e.Elem#3 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # CmdReinitElem/7 HalfReuse: </9 HalfReuse: & CreateElemParam/12 AsIs: e.Elem#3/10 HalfReuse: >/13 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 4, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitFunc, 0, 0, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //(#Reuse(E ))
    // </0 & lambda_GenResult_Aux_1/4 (/7 # Reuse/9 (/12 e.Elem#3/10 )/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 3, 9},
    {refalrts::icSave, 0, 18, 5},
    {refalrts::icBracketLeftSave, 0, 10, 18},
    {refalrts::icEmpty, 0, 0, 18},
    // closed e.Elem#3 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # CmdUpdateElem/7 HalfReuse: </9 HalfReuse: & CreateElemParam/12 AsIs: e.Elem#3/10 HalfReuse: >/13 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 2, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitFunc, 0, 0, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    //(#LEFT_EDGE)
    // </0 & lambda_GenResult_Aux_1/4 (/7 # LEFT_EDGE/9 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 9},
    {refalrts::icSave, 0, 18, 5},
    {refalrts::icEmpty, 0, 0, 18},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_1/4 (/7 # LEFT_EDGE/9 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(#RIGHT_EDGE)
    // </0 & lambda_GenResult_Aux_1/4 (/7 # RIGHT_EDGE/9 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_1/4 (/7 # RIGHT_EDGE/9 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )
  //GLOBAL GEN:(S E )
  // </0 & lambda_GenResult_Aux_1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    //(#AsIsT )
    // </0 & lambda_GenResult_Aux_1/4 (/7 # AsIs/9 t.Item#3/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_AsIs<int>::name, context[9] ) )
      continue;
    context[18] = context[5];
    context[19] = context[6];
    context[11] = refalrts::tvar_left( context[10], context[18], context[19] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_1/4 (/7 # AsIs/9 t.Item#3/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#HalfReuse(#TkVariable's'E S S ))
    // </0 & lambda_GenResult_Aux_1/4 (/7 # HalfReuse/9 (/12 # TkVariable/14 's'/15 e.Index#3/10 s.SampleOffset#3/17 s.Offset#3/16 )/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_HalfReuse<int>::name, context[9] ) )
      continue;
    context[18] = context[5];
    context[19] = context[6];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[18], context[19] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( 's', context[10], context[11] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_right( context[17], context[10], context[11] ) )
      continue;
    // closed e.Index#3 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_1/4 {REMOVED TILE}  e.Index#3/10 s.SampleOffset#3/17 s.Offset#3/16 )/13 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReinitSVar/9 HalfReuse: s.Offset3 #16/12 HalfReuse: s.SampleOffset3 #17/14 HalfReuse: )/15 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdReinitSVar<int>::name );
    refalrts::reinit_svar( context[12], context[16] );
    refalrts::reinit_svar( context[14], context[17] );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#HalfReuse(E ))
    // </0 & lambda_GenResult_Aux_1/4 (/7 # HalfReuse/9 (/12 e.Elem#3/10 )/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_HalfReuse<int>::name, context[9] ) )
      continue;
    context[18] = context[5];
    context[19] = context[6];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[18], context[19] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Elem#3 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # CmdReinitElem/7 HalfReuse: </9 HalfReuse: & CreateElemParam/12 AsIs: e.Elem#3/10 HalfReuse: >/13 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[12], CreateElemParam, "CreateElemParam" );
    refalrts::reinit_close_call( context[13] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#Reuse(E ))
    // </0 & lambda_GenResult_Aux_1/4 (/7 # Reuse/9 (/12 e.Elem#3/10 )/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Reuse<int>::name, context[9] ) )
      continue;
    context[18] = context[5];
    context[19] = context[6];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[18], context[19] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Elem#3 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # CmdUpdateElem/7 HalfReuse: </9 HalfReuse: & CreateElemParam/12 AsIs: e.Elem#3/10 HalfReuse: >/13 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_CmdUpdateElem<int>::name );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[12], CreateElemParam, "CreateElemParam" );
    refalrts::reinit_close_call( context[13] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#LEFT_EDGE)
    // </0 & lambda_GenResult_Aux_1/4 (/7 # LEFT_EDGE/9 )/8 >/1
    if( ! refalrts::ident_term(  & ident_LEFT_EDGE<int>::name, context[9] ) )
      continue;
    context[18] = context[5];
    context[19] = context[6];
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_1/4 (/7 # LEFT_EDGE/9 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(#RIGHT_EDGE)
  // </0 & lambda_GenResult_Aux_1/4 (/7 # RIGHT_EDGE/9 )/8 >/1
  if( ! refalrts::ident_term(  & ident_RIGHT_EDGE<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_1/4 (/7 # RIGHT_EDGE/9 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenResult_Aux_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_GenResult_Aux_1, "lambda_GenResult_Aux_1" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Tile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T 
    //GLOBAL GEN:T 
    // </0 & lambda_GenResult_Aux_2/4 t.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //(#TileE )
    // </0 & lambda_GenResult_Aux_2/4 (/5 # Tile/9 e.Tile#2/7 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 0, 7},
    // closed e.Tile#2 as range 7
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # Tile/9 {REMOVED TILE}  )/6 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_GenResult_Aux_1/5 } Tile{ AsIs: e.Tile#2/7 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T 
    // </0 & lambda_GenResult_Aux_2/4 t.Other#2/5 >/1
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_2/4 t.Other#2/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
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
  //FAST GEN:T 
  //GLOBAL GEN:T 
  // </0 & lambda_GenResult_Aux_2/4 t.idx#0/5 >/1
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
    //(#TileE )
    // </0 & lambda_GenResult_Aux_2/4 (/5 # Tile/9 e.Tile#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.Tile#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # Tile/9 {REMOVED TILE}  )/6 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_GenResult_Aux_1/5 } Tile{ AsIs: e.Tile#2/7 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], Map, "Map" );
    refalrts::reinit_name( context[5], lambda_GenResult_Aux_1, "lambda_GenResult_Aux_1" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //T 
  // </0 & lambda_GenResult_Aux_2/4 t.Other#2/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_Aux_2/4 t.Other#2/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenResult_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenSplices, "GenSplices" },
    { ModifyResult, "ModifyResult" },
    { GenPushLink, "GenPushLink" },
    { lambda_GenResult_Aux_2, "lambda_GenResult_Aux_2" },
    { Map, "Map" },
    { lambda_GenResult_Aux_0, "lambda_GenResult_Aux_0" },
    { TextFromExpr, "TextFromExpr" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"RESULT:", 7},
    {"TRASH:", 6}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & GenResult_Aux/4 (/7 e.Trash#1/5 )/8 (/11 e.MarkedResult#1/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Trash#1 as range 5
    // closed e.MarkedResult#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/13 # CmdComment/14"TRASH:"/15 </17 & TextFromExpr/18 e.Trash#1/5/19 >/21 )/22 (/23 # CmdComment/24"RESULT:"/25 </27 & TextFromExpr/28 e.MarkedResult#1/9/29 >/31 )/32 </33 & Map/34 & lambda_GenResult_Aux_0/35 e.MarkedResult#1/9/36 >/38 </39 & Map/40 & lambda_GenResult_Aux_2/41 e.MarkedResult#1/9/42 >/44 </45 & GenPushLink/46 </47 Tile{ HalfReuse: & ModifyResult/11 AsIs: e.MarkedResult#1/9 HalfReuse: >/12 AsIs: >/1 } Tile{ AsIs: </0 Reuse: & GenSplices/4 AsIs: (/7 AsIs: e.Trash#1/5 AsIs: )/8 } e.MarkedResult#1/9/48 >/50 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocIdent, 0, 0, 14},
    {refalrts::icAllocString, 0, 1, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocFunc, 0, 6, 18},
    {refalrts::icCopyEVar, 19, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icAllocIdent, 0, 0, 24},
    {refalrts::icAllocString, 0, 0, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icAllocFunc, 0, 6, 28},
    {refalrts::icCopyEVar, 29, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icAllocFunc, 0, 4, 34},
    {refalrts::icAllocFunc, 0, 5, 35},
    {refalrts::icCopyEVar, 36, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 39},
    {refalrts::icAllocFunc, 0, 4, 40},
    {refalrts::icAllocFunc, 0, 3, 41},
    {refalrts::icCopyEVar, 42, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 45},
    {refalrts::icAllocFunc, 0, 2, 46},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 47},
    {refalrts::icCopyEVar, 48, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 50},
    {refalrts::icReinitFunc, 0, 1, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 50},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 45},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 47},
    {refalrts::icPushStack, 0, 0, 44},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icLinkBrackets, 23, 32, 0},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icLinkBrackets, 13, 22, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 50, 50, 0},
    {refalrts::icSpliceTile, 48, 49, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 11, 1, 0},
    {refalrts::icSpliceTile, 13, 47, 0},
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
  // </0 & GenResult_Aux/4 (/7 e.Trash#1/5 )/8 (/11 e.MarkedResult#1/9 )/12 >/1
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
  // closed e.Trash#1 as range 5
  // closed e.MarkedResult#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/13 # CmdComment/14"TRASH:"/15 </17 & TextFromExpr/18 e.Trash#1/5/19 >/21 )/22 (/23 # CmdComment/24"RESULT:"/25 </27 & TextFromExpr/28 e.MarkedResult#1/9/29 >/31 )/32 </33 & Map/34 & lambda_GenResult_Aux_0/35 e.MarkedResult#1/9/36 >/38 </39 & Map/40 & lambda_GenResult_Aux_2/41 e.MarkedResult#1/9/42 >/44 </45 & GenPushLink/46 </47 Tile{ HalfReuse: & ModifyResult/11 AsIs: e.MarkedResult#1/9 HalfReuse: >/12 AsIs: >/1 } Tile{ AsIs: </0 Reuse: & GenSplices/4 AsIs: (/7 AsIs: e.Trash#1/5 AsIs: )/8 } e.MarkedResult#1/9/48 >/50 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "TRASH:", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], TextFromExpr, "TextFromExpr" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[24], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[25], context[26], "RESULT:", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], TextFromExpr, "TextFromExpr" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[29], context[30], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[35], lambda_GenResult_Aux_0, "lambda_GenResult_Aux_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[36], context[37], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[40], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[41], lambda_GenResult_Aux_2, "lambda_GenResult_Aux_2" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[42], context[43], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[46], GenPushLink, "GenPushLink" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[47] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[48], context[49], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[50] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[11], ModifyResult, "ModifyResult" );
  refalrts::reinit_close_call( context[12] );
  refalrts::update_name( context[4], GenSplices, "GenSplices" );
  refalrts::push_stack( context[50] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[45] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[47] );
  refalrts::push_stack( context[44] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[33] );
  refalrts::link_brackets( context[23], context[32] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[27] );
  refalrts::link_brackets( context[13], context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[50], context[50] );
  res = refalrts::splice_evar( res, context[48], context[49] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[13], context[47] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CreateElemParam(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ElIdent<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_ElName<int>::name,
    & ident_TkName<int>::name,
    & ident_ElCloseCall<int>::name,
    & ident_TkCloseCall<int>::name,
    & ident_ElOpenCall<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_ElCloseADT<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_ElOpenADT<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_ElCloseBracket<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_ElOpenBracket<int>::name,
    & ident_TkOpenBracket<int>::name,
    & ident_ElNumber<int>::name,
    & ident_TkNumber<int>::name,
    & ident_ElChar<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:S E S 
    // </0 & CreateElemParam/4 s.idx#0/5 e.idxV#0/2 s.idxVV#0/6 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarRight, 0, 6, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //#TkCharS S 
    // </0 & CreateElemParam/4 # TkChar/5 s.Char#1/7 s.Offset#1/6 >/1
    {refalrts::icIdentTerm, 0, 19, 5},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 7, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  s.Offset#1/6 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #6/4 Reuse: # ElChar/5 AsIs: s.Char#1/7 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 6, 4},
    {refalrts::icUpdateIdent, 0, 18, 5},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 7, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //#TkNumberS S 
    // </0 & CreateElemParam/4 # TkNumber/5 s.Number#1/7 s.Offset#1/6 >/1
    {refalrts::icIdentTerm, 0, 17, 5},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 7, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  s.Offset#1/6 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #6/4 Reuse: # ElNumber/5 AsIs: s.Number#1/7 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 6, 4},
    {refalrts::icUpdateIdent, 0, 16, 5},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 7, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#TkOpenBracketS 
    // </0 & CreateElemParam/4 # TkOpenBracket/5 s.Offset#1/6 >/1
    {refalrts::icIdentTerm, 0, 15, 5},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkOpenBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenBracket/1 ]] }
    {refalrts::icReinitIdent, 0, 14, 1},
    {refalrts::icSetRes, 0, 0, 6},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#TkCloseBracketS 
    // </0 & CreateElemParam/4 # TkCloseBracket/5 s.Offset#1/6 >/1
    {refalrts::icIdentTerm, 0, 13, 5},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkCloseBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseBracket/1 ]] }
    {refalrts::icReinitIdent, 0, 12, 1},
    {refalrts::icSetRes, 0, 0, 6},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#TkOpenADTS 
    // </0 & CreateElemParam/4 # TkOpenADT/5 s.Offset#1/6 >/1
    {refalrts::icIdentTerm, 0, 11, 5},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkOpenADT/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenADT/1 ]] }
    {refalrts::icReinitIdent, 0, 10, 1},
    {refalrts::icSetRes, 0, 0, 6},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#TkCloseADTS 
    // </0 & CreateElemParam/4 # TkCloseADT/5 s.Offset#1/6 >/1
    {refalrts::icIdentTerm, 0, 9, 5},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkCloseADT/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseADT/1 ]] }
    {refalrts::icReinitIdent, 0, 8, 1},
    {refalrts::icSetRes, 0, 0, 6},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#TkOpenCallS 
    // </0 & CreateElemParam/4 # TkOpenCall/5 s.Offset#1/6 >/1
    {refalrts::icIdentTerm, 0, 7, 5},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkOpenCall/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenCall/1 ]] }
    {refalrts::icReinitIdent, 0, 6, 1},
    {refalrts::icSetRes, 0, 0, 6},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#TkCloseCallS 
    // </0 & CreateElemParam/4 # TkCloseCall/5 s.Offset#1/6 >/1
    {refalrts::icIdentTerm, 0, 5, 5},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkCloseCall/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseCall/1 ]] }
    {refalrts::icReinitIdent, 0, 4, 1},
    {refalrts::icSetRes, 0, 0, 6},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //#TkNameE S 
    // </0 & CreateElemParam/4 # TkName/5 e.Name#1/2 s.Offset#1/6 >/1
    {refalrts::icIdentTerm, 0, 3, 5},
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # TkName/5 {REMOVED TILE}  s.Offset#1/6 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Offset1 #6/0 HalfReuse: # ElName/4 } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 6, 0},
    {refalrts::icReinitIdent, 0, 2, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //#TkIdentifierE S 
    // </0 & CreateElemParam/4 # TkIdentifier/5 e.Name#1/2 s.Offset#1/6 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # TkIdentifier/5 {REMOVED TILE}  s.Offset#1/6 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Offset1 #6/0 HalfReuse: # ElIdent/4 } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 6, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[9];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:S E S 
  // </0 & CreateElemParam/4 s.idx#0/5 e.idxV#0/2 s.idxVV#0/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    //#TkCharS S 
    // </0 & CreateElemParam/4 # TkChar/5 s.Char#1/7 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  & ident_TkChar<int>::name, context[5] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::svar_left( context[7], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  s.Offset#1/6 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #6/4 Reuse: # ElChar/5 AsIs: s.Char#1/7 } Tile{ ]] }
    refalrts::reinit_svar( context[4], context[6] );
    refalrts::update_ident( context[5], & ident_ElChar<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkNumberS S 
    // </0 & CreateElemParam/4 # TkNumber/5 s.Number#1/7 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  & ident_TkNumber<int>::name, context[5] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::svar_left( context[7], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  s.Offset#1/6 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #6/4 Reuse: # ElNumber/5 AsIs: s.Number#1/7 } Tile{ ]] }
    refalrts::reinit_svar( context[4], context[6] );
    refalrts::update_ident( context[5], & ident_ElNumber<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkOpenBracketS 
    // </0 & CreateElemParam/4 # TkOpenBracket/5 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenBracket<int>::name, context[5] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkOpenBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenBracket/1 ]] }
    refalrts::reinit_ident( context[1], & ident_ElOpenBracket<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkCloseBracketS 
    // </0 & CreateElemParam/4 # TkCloseBracket/5 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  & ident_TkCloseBracket<int>::name, context[5] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkCloseBracket/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseBracket/1 ]] }
    refalrts::reinit_ident( context[1], & ident_ElCloseBracket<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkOpenADTS 
    // </0 & CreateElemParam/4 # TkOpenADT/5 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenADT<int>::name, context[5] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkOpenADT/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenADT/1 ]] }
    refalrts::reinit_ident( context[1], & ident_ElOpenADT<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkCloseADTS 
    // </0 & CreateElemParam/4 # TkCloseADT/5 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  & ident_TkCloseADT<int>::name, context[5] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkCloseADT/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseADT/1 ]] }
    refalrts::reinit_ident( context[1], & ident_ElCloseADT<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkOpenCallS 
    // </0 & CreateElemParam/4 # TkOpenCall/5 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenCall<int>::name, context[5] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkOpenCall/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenCall/1 ]] }
    refalrts::reinit_ident( context[1], & ident_ElOpenCall<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkCloseCallS 
    // </0 & CreateElemParam/4 # TkCloseCall/5 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  & ident_TkCloseCall<int>::name, context[5] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CreateElemParam/4 # TkCloseCall/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseCall/1 ]] }
    refalrts::reinit_ident( context[1], & ident_ElCloseCall<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#TkNameE S 
    // </0 & CreateElemParam/4 # TkName/5 e.Name#1/2 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  & ident_TkName<int>::name, context[5] ) )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TkName/5 {REMOVED TILE}  s.Offset#1/6 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Offset1 #6/0 HalfReuse: # ElName/4 } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[6] );
    refalrts::reinit_ident( context[4], & ident_ElName<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //#TkIdentifierE S 
  // </0 & CreateElemParam/4 # TkIdentifier/5 e.Name#1/2 s.Offset#1/6 >/1
  if( ! refalrts::ident_term(  & ident_TkIdentifier<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  # TkIdentifier/5 {REMOVED TILE}  s.Offset#1/6 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Offset1 #6/0 HalfReuse: # ElIdent/4 } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[6] );
  refalrts::reinit_ident( context[4], & ident_ElIdent<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenPushLink_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdLinkBrackets<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_CmdPushStack<int>::name,
    & ident_TkCloseCall<int>::name,
    & ident_TkOpenBracket<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_TkOpenCall<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )(S E )
    //GLOBAL GEN:(E )(S E )
    // </0 & lambda_GenPushLink_0/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    {refalrts::icsVarLeft, 0, 13, 9},
    // closed e.idxTBV#0 as range 9
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(E )(#TkOpenCallS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenCall/13 s.Offset#2/14 )/12 >/1
    {refalrts::icIdentTerm, 0, 7, 13},
    // closed e.Stack#2 as range 5
    {refalrts::icSave, 0, 16, 9},
    {refalrts::icsVarLeft, 0, 14, 16},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  # TkOpenCall/13 s.Offset#2/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #14/8 HalfReuse: )/11 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 14, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 7, 11, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(E )(#TkOpenADTS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenADT/13 s.Offset#2/14 )/12 >/1
    {refalrts::icIdentTerm, 0, 6, 13},
    // closed e.Stack#2 as range 5
    {refalrts::icSave, 0, 16, 9},
    {refalrts::icsVarLeft, 0, 14, 16},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  # TkOpenADT/13 s.Offset#2/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #14/8 HalfReuse: )/11 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 14, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 7, 11, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(E )(#TkOpenBracketS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenBracket/13 s.Offset#2/14 )/12 >/1
    {refalrts::icIdentTerm, 0, 5, 13},
    // closed e.Stack#2 as range 5
    {refalrts::icSave, 0, 16, 9},
    {refalrts::icsVarLeft, 0, 14, 16},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  # TkOpenBracket/13 s.Offset#2/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #14/8 HalfReuse: )/11 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 14, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 7, 11, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    //(E S )(#TkCloseCallS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 s.OpenOffset#2/15 )/8 (/11 # TkCloseCall/13 s.Offset#2/14 )/12 >/1
    {refalrts::icIdentTerm, 0, 4, 13},
    {refalrts::icSave, 0, 16, 9},
    {refalrts::icsVarLeft, 0, 14, 16},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::icSave, 0, 18, 5},
    {refalrts::icsVarRight, 0, 15, 18},
    // closed e.Stack#2 as range 18(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/18(5) } Tile{ HalfReuse: )/4 AsIs: (/7 } Tile{ HalfReuse: # CmdPushStack/1 } Tile{ AsIs: s.OpenOffset#2/15 AsIs: )/8 AsIs: (/11 Reuse: # CmdPushStack/13 AsIs: s.Offset#2/14 AsIs: )/12 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icReinitIdent, 0, 3, 1},
    {refalrts::icUpdateIdent, 0, 3, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 0, 4, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 15, 12, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 4, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    //(E S )(#TkCloseADTS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 s.OpenOffset#2/15 )/8 (/11 # TkCloseADT/13 s.Offset#2/14 )/12 >/1
    {refalrts::icIdentTerm, 0, 2, 13},
    {refalrts::icSave, 0, 16, 9},
    {refalrts::icsVarLeft, 0, 14, 16},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::icSave, 0, 18, 5},
    {refalrts::icsVarRight, 0, 15, 18},
    // closed e.Stack#2 as range 18(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & lambda_GenPushLink_0/4 (/7 {REMOVED TILE}  s.OpenOffset#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/18(5) } Tile{ HalfReuse: )/1 } Tile{ HalfReuse: (/8 HalfReuse: # CmdLinkBrackets/11 HalfReuse: s.OpenOffset2 #15/13 AsIs: s.Offset#2/14 AsIs: )/12 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 0, 11},
    {refalrts::icReinitSVar, 0, 15, 13},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 8, 12, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    //(E S )(#TkCloseBracketS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 s.OpenOffset#2/15 )/8 (/11 # TkCloseBracket/13 s.Offset#2/14 )/12 >/1
    {refalrts::icIdentTerm, 0, 1, 13},
    {refalrts::icSave, 0, 16, 9},
    {refalrts::icsVarLeft, 0, 14, 16},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::icSave, 0, 18, 5},
    {refalrts::icsVarRight, 0, 15, 18},
    // closed e.Stack#2 as range 18(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & lambda_GenPushLink_0/4 (/7 {REMOVED TILE}  s.OpenOffset#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/18(5) } Tile{ HalfReuse: )/1 } Tile{ HalfReuse: (/8 HalfReuse: # CmdLinkBrackets/11 HalfReuse: s.OpenOffset2 #15/13 AsIs: s.Offset#2/14 AsIs: )/12 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 0, 11},
    {refalrts::icReinitSVar, 0, 15, 13},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 8, 12, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )(S E )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 s.tag#2/13 e.Info#2/9 )/12 >/1
    // closed e.Stack#2 as range 5
    // closed e.Info#2 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  (/11 s.tag#2/13 e.Info#2/9 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[6];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )(S E )
  //GLOBAL GEN:(E )(S E )
  // </0 & lambda_GenPushLink_0/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
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
  // closed e.idxTBV#0 as range 9
  do {
    refalrts::start_sentence();
    //(E )(#TkOpenCallS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenCall/13 s.Offset#2/14 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenCall<int>::name, context[13] ) )
      continue;
    // closed e.Stack#2 as range 5
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::svar_left( context[14], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  # TkOpenCall/13 s.Offset#2/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #14/8 HalfReuse: )/11 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(#TkOpenADTS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenADT/13 s.Offset#2/14 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenADT<int>::name, context[13] ) )
      continue;
    // closed e.Stack#2 as range 5
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::svar_left( context[14], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  # TkOpenADT/13 s.Offset#2/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #14/8 HalfReuse: )/11 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(#TkOpenBracketS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenBracket/13 s.Offset#2/14 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TkOpenBracket<int>::name, context[13] ) )
      continue;
    // closed e.Stack#2 as range 5
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::svar_left( context[14], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  # TkOpenBracket/13 s.Offset#2/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #14/8 HalfReuse: )/11 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E S )(#TkCloseCallS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 s.OpenOffset#2/15 )/8 (/11 # TkCloseCall/13 s.Offset#2/14 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TkCloseCall<int>::name, context[13] ) )
      continue;
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::svar_left( context[14], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    context[18] = context[5];
    context[19] = context[6];
    if( ! refalrts::svar_right( context[15], context[18], context[19] ) )
      continue;
    // closed e.Stack#2 as range 18(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/18(5) } Tile{ HalfReuse: )/4 AsIs: (/7 } Tile{ HalfReuse: # CmdPushStack/1 } Tile{ AsIs: s.OpenOffset#2/15 AsIs: )/8 AsIs: (/11 Reuse: # CmdPushStack/13 AsIs: s.Offset#2/14 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_ident( context[1], & ident_CmdPushStack<int>::name );
    refalrts::update_ident( context[13], & ident_CmdPushStack<int>::name );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E S )(#TkCloseADTS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 s.OpenOffset#2/15 )/8 (/11 # TkCloseADT/13 s.Offset#2/14 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TkCloseADT<int>::name, context[13] ) )
      continue;
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::svar_left( context[14], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    context[18] = context[5];
    context[19] = context[6];
    if( ! refalrts::svar_right( context[15], context[18], context[19] ) )
      continue;
    // closed e.Stack#2 as range 18(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_GenPushLink_0/4 (/7 {REMOVED TILE}  s.OpenOffset#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/18(5) } Tile{ HalfReuse: )/1 } Tile{ HalfReuse: (/8 HalfReuse: # CmdLinkBrackets/11 HalfReuse: s.OpenOffset2 #15/13 AsIs: s.Offset#2/14 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], & ident_CmdLinkBrackets<int>::name );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E S )(#TkCloseBracketS )
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 s.OpenOffset#2/15 )/8 (/11 # TkCloseBracket/13 s.Offset#2/14 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TkCloseBracket<int>::name, context[13] ) )
      continue;
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::svar_left( context[14], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    context[18] = context[5];
    context[19] = context[6];
    if( ! refalrts::svar_right( context[15], context[18], context[19] ) )
      continue;
    // closed e.Stack#2 as range 18(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_GenPushLink_0/4 (/7 {REMOVED TILE}  s.OpenOffset#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/18(5) } Tile{ HalfReuse: )/1 } Tile{ HalfReuse: (/8 HalfReuse: # CmdLinkBrackets/11 HalfReuse: s.OpenOffset2 #15/13 AsIs: s.Offset#2/14 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], & ident_CmdLinkBrackets<int>::name );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )(S E )
  // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 s.tag#2/13 e.Info#2/9 )/12 >/1
  // closed e.Stack#2 as range 5
  // closed e.Info#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  (/11 s.tag#2/13 e.Info#2/9 )/12 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 AsIs: )/8 } Tile{ ]] }
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

static refalrts::FnResult lambda_GenPushLink_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Reverse, "Reverse" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_GenPushLink_1/4 (/7 )/8 e.Commands#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Commands#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_1/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Reverse/8 AsIs: e.Commands#2/2 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 7},
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
  // </0 & lambda_GenPushLink_1/4 (/7 )/8 e.Commands#2/2 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_1/4 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Reverse/8 AsIs: e.Commands#2/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], Reverse, "Reverse" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenPushLink(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { lambda_GenPushLink_1, "lambda_GenPushLink_1" },
    { lambda_GenPushLink_0, "lambda_GenPushLink_0" },
    { MapReduce, "MapReduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GenPushLink/4 e.MarkedResult#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.MarkedResult#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & MapReduce/6 & lambda_GenPushLink_0/7 (/8 )/9 Tile{ AsIs: e.MarkedResult#1/2 } >/10 & lambda_GenPushLink_1/11 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 3, 6},
    {refalrts::icAllocFunc, 0, 2, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icAllocFunc, 0, 1, 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 5, 9, 0},
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
  // </0 & GenPushLink/4 e.MarkedResult#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & MapReduce/6 & lambda_GenPushLink_0/7 (/8 )/9 Tile{ AsIs: e.MarkedResult#1/2 } >/10 & lambda_GenPushLink_1/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], lambda_GenPushLink_0, "lambda_GenPushLink_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], lambda_GenPushLink_1, "lambda_GenPushLink_1" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & Reverse/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //E T 
    // </0 & Reverse/4 e.Items#1/2 t.Last#1/5 >/1
    {refalrts::icSave, 0, 7, 2},
    {refalrts::ictVarRightSave, 0, 5, 7},
    // closed e.Items#1 as range 7(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Last#1/5 } Tile{ AsIs: </0 AsIs: & Reverse/4 } Tile{ AsIs: e.Items#1/7(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & Reverse/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Reverse/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & Reverse/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //E T 
    // </0 & Reverse/4 e.Items#1/2 t.Last#1/5 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[6] = refalrts::tvar_right( context[5], context[7], context[8] );
    if( ! context[6] )
      continue;
    // closed e.Items#1 as range 7(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Last#1/5 } Tile{ AsIs: </0 AsIs: & Reverse/4 } Tile{ AsIs: e.Items#1/7(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & Reverse/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Reverse/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ModifyResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ModifyResult, "ModifyResult" },
    { ModifyTile, "ModifyTile" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Tile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & ModifyResult/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +16, 0, 0},
    //(#TileE )E 
    // </0 & ModifyResult/4 (/7 # Tile/9 e.Tile#1/5 )/8 e.Result#1/2 >/1
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icBracketLeftSave, 0, 5, 10},
    {refalrts::icIdentLeftSave, 9, 0, 5},
    // closed e.Tile#1 as range 5
    // closed e.Result#1 as range 10(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ModifyTile/4 } Tile{ AsIs: e.Tile#1/5 } Tile{ HalfReuse: >/7 HalfReuse: </9 } Tile{ HalfReuse: & ModifyResult/8 AsIs: e.Result#1/10(2) AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 7, 9, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(S E )E 
    // </0 & ModifyResult/4 (/7 s.tag#1/9 e.info#1/5 )/8 e.Result#1/2 >/1
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icBracketLeftSave, 0, 5, 10},
    // closed e.Result#1 as range 10(2)
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.info#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.tag#1/9 AsIs: e.info#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ModifyResult/4 } Tile{ AsIs: e.Result#1/10(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & ModifyResult/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ModifyResult/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & ModifyResult/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //(#TileE )E 
    // </0 & ModifyResult/4 (/7 # Tile/9 e.Tile#1/5 )/8 e.Result#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[10], context[11] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tile#1 as range 5
    // closed e.Result#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ModifyTile/4 } Tile{ AsIs: e.Tile#1/5 } Tile{ HalfReuse: >/7 HalfReuse: </9 } Tile{ HalfReuse: & ModifyResult/8 AsIs: e.Result#1/10(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ModifyTile, "ModifyTile" );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], ModifyResult, "ModifyResult" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[7], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S E )E 
    // </0 & ModifyResult/4 (/7 s.tag#1/9 e.info#1/5 )/8 e.Result#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[10], context[11] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Result#1 as range 10(2)
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    // closed e.info#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.tag#1/9 AsIs: e.info#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ModifyResult/4 } Tile{ AsIs: e.Result#1/10(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & ModifyResult/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ModifyResult/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ModifyTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ModifyTile, "ModifyTile" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Reuse<int>::name,
    & ident_HalfReuse<int>::name,
    & ident_AsIs<int>::name,
    & ident_LEFT_EDGE<int>::name,
    & ident_RIGHT_EDGE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & ModifyTile/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(#RIGHT_EDGE)E 
    // </0 & ModifyTile/4 (/7 # RIGHT_EDGE/9 )/8 e.Range#1/2 >/1
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeftSave, 0, 5, 12},
    {refalrts::icIdentLeftSave, 9, 4, 5},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Range#1 as range 12(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ModifyTile/4 (/7 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 HalfReuse: & ModifyTile/8 AsIs: e.Range#1/12(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetRes, 0, 0, 9},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //(#LEFT_EDGE)E 
    // </0 & ModifyTile/4 (/7 # LEFT_EDGE/9 )/8 e.Range#1/2 >/1
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeftSave, 0, 5, 12},
    {refalrts::icIdentLeftSave, 9, 3, 5},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Range#1 as range 12(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ModifyTile/4 (/7 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 HalfReuse: & ModifyTile/8 AsIs: e.Range#1/12(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSetRes, 0, 0, 9},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //(#AsIsT )E 
    // </0 & ModifyTile/4 (/7 # AsIs/9 t.Item#1/10 )/8 e.Range#1/2 >/1
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeftSave, 0, 5, 12},
    {refalrts::icIdentLeftSave, 9, 2, 5},
    // closed e.Range#1 as range 12(2)
    {refalrts::ictVarLeftSave, 0, 10, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ModifyTile/4 (/7 # AsIs/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ModifyTile/8 AsIs: e.Range#1/12(2) AsIs: >/1 ]] }
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //(#HalfReuseT )E 
    // </0 & ModifyTile/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 e.Range#1/2 >/1
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeftSave, 0, 5, 12},
    {refalrts::icIdentLeftSave, 9, 1, 5},
    // closed e.Range#1 as range 12(2)
    {refalrts::ictVarLeftSave, 0, 10, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ModifyTile/4 (/7 # HalfReuse/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ModifyTile/8 AsIs: e.Range#1/12(2) AsIs: >/1 ]] }
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //(#ReuseT )E 
    // </0 & ModifyTile/4 (/7 # Reuse/9 t.Item#1/10 )/8 e.Range#1/2 >/1
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeftSave, 0, 5, 12},
    {refalrts::icIdentLeftSave, 9, 0, 5},
    // closed e.Range#1 as range 12(2)
    {refalrts::ictVarLeftSave, 0, 10, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ModifyTile/4 (/7 # Reuse/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ModifyTile/8 AsIs: e.Range#1/12(2) AsIs: >/1 ]] }
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & ModifyTile/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ModifyTile/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & ModifyTile/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //(#RIGHT_EDGE)E 
    // </0 & ModifyTile/4 (/7 # RIGHT_EDGE/9 )/8 e.Range#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[12], context[13] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Range#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ModifyTile/4 (/7 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 HalfReuse: & ModifyTile/8 AsIs: e.Range#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], ModifyTile, "ModifyTile" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#LEFT_EDGE)E 
    // </0 & ModifyTile/4 (/7 # LEFT_EDGE/9 )/8 e.Range#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[12], context[13] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Range#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ModifyTile/4 (/7 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 HalfReuse: & ModifyTile/8 AsIs: e.Range#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], ModifyTile, "ModifyTile" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#AsIsT )E 
    // </0 & ModifyTile/4 (/7 # AsIs/9 t.Item#1/10 )/8 e.Range#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[12], context[13] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_AsIs<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Range#1 as range 12(2)
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ModifyTile/4 (/7 # AsIs/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ModifyTile/8 AsIs: e.Range#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_name( context[8], ModifyTile, "ModifyTile" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#HalfReuseT )E 
    // </0 & ModifyTile/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 e.Range#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[12], context[13] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Range#1 as range 12(2)
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ModifyTile/4 (/7 # HalfReuse/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ModifyTile/8 AsIs: e.Range#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_name( context[8], ModifyTile, "ModifyTile" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#ReuseT )E 
    // </0 & ModifyTile/4 (/7 # Reuse/9 t.Item#1/10 )/8 e.Range#1/2 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[12], context[13] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Range#1 as range 12(2)
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ModifyTile/4 (/7 # Reuse/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ModifyTile/8 AsIs: e.Range#1/12(2) AsIs: >/1 ]] }
    refalrts::reinit_name( context[8], ModifyTile, "ModifyTile" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & ModifyTile/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ModifyTile/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenSplices_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { BeginOffset, "BeginOffset" },
    { EndOffset, "EndOffset" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdInsertTile<int>::name,
    & ident_CmdInsertVar<int>::name,
    & ident_TkVariable<int>::name,
    & ident_AsIs<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )
    //GLOBAL GEN:(T E )
    // </0 & lambda_GenSplices_0/4 (/7 t.idxB#0/9 e.idxBV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeftSave, 0, 9, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::icOnFailGoTo, +18, 0, 0},
    //((#AsIs(#TkVariable'e'E S S )))
    // </0 & lambda_GenSplices_0/4 (/7 (/9 # AsIs/13 (/16 # TkVariable/18 'e'/19 e.Index#2/14 s.Depth#2/21 s.Offset#2/20 )/17 )/10 )/8 >/1
    {refalrts::icBracketTerm, 0, 11, 9},
    {refalrts::icIdentLeftSave, 13, 3, 11},
    {refalrts::icBracketLeftSave, 0, 14, 11},
    {refalrts::icIdentLeftSave, 18, 2, 14},
    {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('e'), 14},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icSave, 0, 22, 5},
    {refalrts::icEmpty, 0, 0, 22},
    {refalrts::icsVarRight, 0, 20, 14},
    {refalrts::icsVarRight, 0, 21, 14},
    // closed e.Index#2 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_GenSplices_0/4 (/7 (/9 # AsIs/13 {REMOVED TILE}  e.Index#2/14 s.Depth#2/21 {REMOVED TILE}  )/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/16 Reuse: # CmdInsertVar/18 AsIs: 'e'/19 } Tile{ AsIs: s.Offset#2/20 AsIs: )/17 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 1, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 17, 0},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //(T )
    // </0 & lambda_GenSplices_0/4 (/7 t.OneItem#2/9 )/8 >/1
    {refalrts::icSave, 0, 22, 5},
    {refalrts::icEmpty, 0, 0, 22},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 # CmdInsertTile/12 </13 & BeginOffset/14 t.OneItem#2/9/15 Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & EndOffset/7 AsIs: t.OneItem#2/9 HalfReuse: >/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icAllocIdent, 0, 0, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 0, 14},
    {refalrts::icCopyEVar, 15, 9, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 16, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(T E T )
    // </0 & lambda_GenSplices_0/4 (/7 t.Begin#2/9 e.Inner#2/5 t.End#2/11 )/8 >/1
    {refalrts::ictVarRightSave, 0, 11, 5},
    // closed e.Inner#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Inner#2/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/13 Tile{ HalfReuse: # CmdInsertTile/0 HalfReuse: </4 HalfReuse: & BeginOffset/7 AsIs: t.Begin#2/9 } >/14 </15 & EndOffset/16 Tile{ AsIs: t.End#2/11 HalfReuse: >/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 1, 16},
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 13, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 11},
    {refalrts::icSpliceTile, 14, 16, 0},
    {refalrts::icSpliceTile, 0, 10, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
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
  //FAST GEN:(E )
  //GLOBAL GEN:(T E )
  // </0 & lambda_GenSplices_0/4 (/7 t.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    refalrts::start_sentence();
    //((#AsIs(#TkVariable'e'E S S )))
    // </0 & lambda_GenSplices_0/4 (/7 (/9 # AsIs/13 (/16 # TkVariable/18 'e'/19 e.Index#2/14 s.Depth#2/21 s.Offset#2/20 )/17 )/10 )/8 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_AsIs<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( 'e', context[14], context[15] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    context[22] = context[5];
    context[23] = context[6];
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_right( context[20], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[21], context[14], context[15] ) )
      continue;
    // closed e.Index#2 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenSplices_0/4 (/7 (/9 # AsIs/13 {REMOVED TILE}  e.Index#2/14 s.Depth#2/21 {REMOVED TILE}  )/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/16 Reuse: # CmdInsertVar/18 AsIs: 'e'/19 } Tile{ AsIs: s.Offset#2/20 AsIs: )/17 } Tile{ ]] }
    refalrts::update_ident( context[18], & ident_CmdInsertVar<int>::name );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[17] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(T )
    // </0 & lambda_GenSplices_0/4 (/7 t.OneItem#2/9 )/8 >/1
    context[22] = context[5];
    context[23] = context[6];
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 # CmdInsertTile/12 </13 & BeginOffset/14 t.OneItem#2/9/15 Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & EndOffset/7 AsIs: t.OneItem#2/9 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_CmdInsertTile<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], BeginOffset, "BeginOffset" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[9], context[10]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EndOffset, "EndOffset" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[11], context[16] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(T E T )
  // </0 & lambda_GenSplices_0/4 (/7 t.Begin#2/9 e.Inner#2/5 t.End#2/11 )/8 >/1
  context[12] = refalrts::tvar_right( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Inner#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Inner#2/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/13 Tile{ HalfReuse: # CmdInsertTile/0 HalfReuse: </4 HalfReuse: & BeginOffset/7 AsIs: t.Begin#2/9 } >/14 </15 & EndOffset/16 Tile{ AsIs: t.End#2/11 HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], EndOffset, "EndOffset" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], & ident_CmdInsertTile<int>::name );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], BeginOffset, "BeginOffset" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[13], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenSplices(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CalcRes, "CalcRes" },
    { GenTrash, "GenTrash" },
    { CollectTiles, "CollectTiles" },
    { lambda_GenSplices_0, "lambda_GenSplices_0" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdReturnResult_NoTrash<int>::name,
    & ident_RemovedTile<int>::name,
    & ident_Tile<int>::name,
    & ident_CmdSetRes<int>::name,
    & ident_CmdUseRes<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:(E )(S E )E 
    // </0 & GenSplices/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 e.idxTT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTT#0 as range 2
    {refalrts::icsVarLeft, 0, 13, 9},
    // closed e.idxTBV#0 as range 9
    {refalrts::icOnFailGoTo, +50, 0, 0},
    //(E )(#TileE )E (#TileE )
    // </0 & GenSplices/4 (/7 e.Trash#1/5 )/8 (/11 # Tile/13 e.LeftTile#1/9 )/12 e.Result#1/2 (/16 # Tile/18 e.RightTile#1/14 )/17 >/1
    {refalrts::icIdentTerm, 0, 2, 13},
    {refalrts::icSave, 0, 32, 2},
    {refalrts::icBracketRightSave, 0, 14, 32},
    {refalrts::icIdentLeftSave, 18, 2, 14},
    // closed e.Trash#1 as range 5
    // closed e.LeftTile#1 as range 9
    // closed e.Result#1 as range 32(2)
    // closed e.RightTile#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdSetRes/4 } Tile{ HalfReuse: </16 HalfReuse: & CalcRes/18 AsIs: e.RightTile#1/14 HalfReuse: >/17 HalfReuse: )/1 } </19 & Map/20 & lambda_GenSplices_0/21 </22 & CollectTiles/23 Tile{ AsIs: e.Result#1/32(2) } >/24 >/25 (/26 # CmdUseRes/27 Tile{ AsIs: )/12 } </28 & GenTrash/29 (/30 Tile{ AsIs: e.LeftTile#1/9 } Tile{ HalfReuse: )/7 AsIs: e.Trash#1/5 HalfReuse: >/8 AsIs: (/11 Reuse: # CmdReturnResult_NoTrash/13 } )/31 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocFunc, 0, 4, 20},
    {refalrts::icAllocFunc, 0, 3, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icAllocFunc, 0, 2, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocIdent, 0, 4, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icAllocFunc, 0, 1, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 3, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icReinitFunc, 0, 0, 18},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icUpdateIdent, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 31, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icLinkBrackets, 30, 7, 0},
    {refalrts::icLinkBrackets, 26, 12, 0},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 31, 31, 0},
    {refalrts::icSpliceTile, 7, 13, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 28, 30, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icSpliceTile, 16, 1, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(#RemovedTile)(#TileE )
    // </0 & GenSplices/4 (/7 # RemovedTile/14 )/8 (/11 # Tile/13 e.OneTile#1/9 )/12 >/1
    {refalrts::icIdentTerm, 0, 2, 13},
    {refalrts::icIdentLeftSave, 14, 1, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.OneTile#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & GenSplices/4 {REMOVED TILE}  (/11 # Tile/13 e.OneTile#1/9 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReturnResult_NoTrash/14 AsIs: )/8 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 0, 14},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
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
  //FAST GEN:E 
  //GLOBAL GEN:(E )(S E )E 
  // </0 & GenSplices/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 e.idxTT#0/2 >/1
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
  // closed e.idxTT#0 as range 2
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    refalrts::start_sentence();
    //(E )(#TileE )E (#TileE )
    // </0 & GenSplices/4 (/7 e.Trash#1/5 )/8 (/11 # Tile/13 e.LeftTile#1/9 )/12 e.Result#1/2 (/16 # Tile/18 e.RightTile#1/14 )/17 >/1
    if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[13] ) )
      continue;
    context[32] = context[2];
    context[33] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[32], context[33] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_Tile<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Trash#1 as range 5
    // closed e.LeftTile#1 as range 9
    // closed e.Result#1 as range 32(2)
    // closed e.RightTile#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdSetRes/4 } Tile{ HalfReuse: </16 HalfReuse: & CalcRes/18 AsIs: e.RightTile#1/14 HalfReuse: >/17 HalfReuse: )/1 } </19 & Map/20 & lambda_GenSplices_0/21 </22 & CollectTiles/23 Tile{ AsIs: e.Result#1/32(2) } >/24 >/25 (/26 # CmdUseRes/27 Tile{ AsIs: )/12 } </28 & GenTrash/29 (/30 Tile{ AsIs: e.LeftTile#1/9 } Tile{ HalfReuse: )/7 AsIs: e.Trash#1/5 HalfReuse: >/8 AsIs: (/11 Reuse: # CmdReturnResult_NoTrash/13 } )/31 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], lambda_GenSplices_0, "lambda_GenSplices_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], CollectTiles, "CollectTiles" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], & ident_CmdUseRes<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], GenTrash, "GenTrash" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdSetRes<int>::name );
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_name( context[18], CalcRes, "CalcRes" );
    refalrts::reinit_close_call( context[17] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_close_call( context[8] );
    refalrts::update_ident( context[13], & ident_CmdReturnResult_NoTrash<int>::name );
    refalrts::link_brackets( context[11], context[31] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[30], context[7] );
    refalrts::link_brackets( context[26], context[12] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(#RemovedTile)(#TileE )
  // </0 & GenSplices/4 (/7 # RemovedTile/14 )/8 (/11 # Tile/13 e.OneTile#1/9 )/12 >/1
  if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::ident_left(  & ident_RemovedTile<int>::name, context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OneTile#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & GenSplices/4 {REMOVED TILE}  (/11 # Tile/13 e.OneTile#1/9 )/12 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReturnResult_NoTrash/14 AsIs: )/8 } Tile{ ]] }
  refalrts::update_ident( context[14], & ident_CmdReturnResult_NoTrash<int>::name );
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

static refalrts::FnResult CalcRes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { BeginOffset, "BeginOffset" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_RIGHT_EDGE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:T E 
    // </0 & CalcRes/4 t.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(#RIGHT_EDGE)
    // </0 & CalcRes/4 (/5 # RIGHT_EDGE/9 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    {refalrts::icIdentLeftSave, 9, 0, 7},
    {refalrts::icEmpty, 0, 0, 7},
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CalcRes/4 (/5 # RIGHT_EDGE/9 )/6 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # RIGHT_EDGE/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T E 
    // </0 & CalcRes/4 t.First#1/5 e.Tile#1/2 >/1
    // closed e.Tile#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Tile#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & BeginOffset/4 AsIs: t.First#1/5 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrash, 0, 0, 6},
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
  //FAST GEN:E 
  //GLOBAL GEN:T E 
  // </0 & CalcRes/4 t.idx#0/5 e.idxV#0/2 >/1
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
    //(#RIGHT_EDGE)
    // </0 & CalcRes/4 (/5 # RIGHT_EDGE/9 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CalcRes/4 (/5 # RIGHT_EDGE/9 )/6 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # RIGHT_EDGE/1 ]] }
    refalrts::reinit_ident( context[1], & ident_RIGHT_EDGE<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //T E 
  // </0 & CalcRes/4 t.First#1/5 e.Tile#1/2 >/1
  // closed e.Tile#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Tile#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BeginOffset/4 AsIs: t.First#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], BeginOffset, "BeginOffset" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CollectTiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectTiles_Alloc, "CollectTiles_Alloc" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Tile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & CollectTiles/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //(#TileE )E 
    // </0 & CollectTiles/4 (/7 # Tile/9 e.Tile#1/5 )/8 e.Other#1/2 >/1
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icBracketLeftSave, 0, 5, 14},
    {refalrts::icIdentLeftSave, 9, 0, 5},
    // closed e.Tile#1 as range 5
    // closed e.Other#1 as range 14(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other#1/14(2) } Tile{ HalfReuse: >/7 HalfReuse: (/9 AsIs: e.Tile#1/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icLinkBrackets, 9, 8, 0},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //E 
    // </0 & CollectTiles/4 e.Allocated#1/5 (/9 # Tile/11 e.Tile#1/7 )/10 e.Other#1/2 >/1
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icEPrepare, 0, 5, 14},
    {refalrts::icEStart, 0, 5, 14},
    {refalrts::icSave, 0, 16, 14},
    {refalrts::icBracketLeftSave, 0, 7, 16},
    {refalrts::icIdentLeftSave, 11, 0, 7},
    // closed e.Tile#1 as range 7
    // closed e.Other#1 as range 16(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other#1/16(2) } Tile{ HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Tile#1/7 AsIs: )/10 } </12 & CollectTiles_Alloc/13 Tile{ AsIs: e.Allocated#1/5 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icAllocFunc, 0, 0, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icLinkBrackets, 11, 10, 0},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //
    // </0 & CollectTiles/4 >/1
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icEmpty, 0, 0, 14},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CollectTiles/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //E 
    // </0 & CollectTiles/4 e.Allocated#1/2 >/1
    // closed e.Allocated#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectTiles_Alloc/4 AsIs: e.Allocated#1/2 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & CollectTiles/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //(#TileE )E 
    // </0 & CollectTiles/4 (/7 # Tile/9 e.Tile#1/5 )/8 e.Other#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[14], context[15] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tile#1 as range 5
    // closed e.Other#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other#1/14(2) } Tile{ HalfReuse: >/7 HalfReuse: (/9 AsIs: e.Tile#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //E 
    // </0 & CollectTiles/4 e.Allocated#1/5 (/9 # Tile/11 e.Tile#1/7 )/10 e.Other#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[14];
      context[17] = context[15];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[16], context[17] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_Tile<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      // closed e.Tile#1 as range 7
      // closed e.Other#1 as range 16(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other#1/16(2) } Tile{ HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Tile#1/7 AsIs: )/10 } </12 & CollectTiles_Alloc/13 Tile{ AsIs: e.Allocated#1/5 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], CollectTiles_Alloc, "CollectTiles_Alloc" ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[9] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[12] );
      refalrts::link_brackets( context[11], context[10] );
      refalrts::push_stack( context[9] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[14], context[15] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //
    // </0 & CollectTiles/4 >/1
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CollectTiles/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //E 
  // </0 & CollectTiles/4 e.Allocated#1/2 >/1
  // closed e.Allocated#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectTiles_Alloc/4 AsIs: e.Allocated#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], CollectTiles_Alloc, "CollectTiles_Alloc" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CollectTiles_Alloc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectTiles_Alloc, "CollectTiles_Alloc" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariableCopy<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & CollectTiles_Alloc/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //(#TkVariableCopy'e'E S S S )E 
    // </0 & CollectTiles_Alloc/4 (/7 # TkVariableCopy/9 'e'/10 e.Index#1/5 s.Level#1/13 s.Sample#1/12 s.Offset#1/11 )/8 e.Alloc#1/2 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icBracketLeftSave, 0, 5, 16},
    {refalrts::icIdentLeftSave, 9, 0, 5},
    {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('e'), 5},
    // closed e.Alloc#1 as range 16(2)
    {refalrts::icsVarRight, 0, 11, 5},
    {refalrts::icsVarRight, 0, 12, 5},
    {refalrts::icsVarRight, 0, 13, 5},
    // closed e.Index#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 & CollectTiles_Alloc/15 Tile{ AsIs: e.Alloc#1/16(2) } Tile{ HalfReuse: >/0 HalfReuse: (/4 AsIs: (/7 AsIs: # TkVariableCopy/9 AsIs: 'e'/10 AsIs: e.Index#1/5 AsIs: s.Level#1/13 AsIs: s.Sample#1/12 AsIs: s.Offset#1/11 AsIs: )/8 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 0, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 4, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //E (#TkVariableCopy'e'E S S S )
    // </0 & CollectTiles_Alloc/4 e.Alloc#1/2 (/7 # TkVariableCopy/9 'e'/10 e.Index#1/5 s.Level#1/13 s.Sample#1/12 s.Offset#1/11 )/8 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icBracketRightSave, 0, 5, 16},
    {refalrts::icIdentLeftSave, 9, 0, 5},
    {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('e'), 5},
    // closed e.Alloc#1 as range 16(2)
    {refalrts::icsVarRight, 0, 11, 5},
    {refalrts::icsVarRight, 0, 12, 5},
    {refalrts::icsVarRight, 0, 13, 5},
    // closed e.Index#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 Tile{ AsIs: (/7 AsIs: # TkVariableCopy/9 AsIs: 'e'/10 AsIs: e.Index#1/5 AsIs: s.Level#1/13 AsIs: s.Sample#1/12 AsIs: s.Offset#1/11 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: </0 AsIs: & CollectTiles_Alloc/4 } Tile{ AsIs: e.Alloc#1/16(2) } >/15 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 1, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //
    // </0 & CollectTiles_Alloc/4 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CollectTiles_Alloc/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //E 
    // </0 & CollectTiles_Alloc/4 e.Alloc#1/2 >/1
    // closed e.Alloc#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.Alloc#1/2 HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 4, 1, 0},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & CollectTiles_Alloc/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //(#TkVariableCopy'e'E S S S )E 
    // </0 & CollectTiles_Alloc/4 (/7 # TkVariableCopy/9 'e'/10 e.Index#1/5 s.Level#1/13 s.Sample#1/12 s.Offset#1/11 )/8 e.Alloc#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[16], context[17] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'e', context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Alloc#1 as range 16(2)
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 & CollectTiles_Alloc/15 Tile{ AsIs: e.Alloc#1/16(2) } Tile{ HalfReuse: >/0 HalfReuse: (/4 AsIs: (/7 AsIs: # TkVariableCopy/9 AsIs: 'e'/10 AsIs: e.Index#1/5 AsIs: s.Level#1/13 AsIs: s.Sample#1/12 AsIs: s.Offset#1/11 AsIs: )/8 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], CollectTiles_Alloc, "CollectTiles_Alloc" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //E (#TkVariableCopy'e'E S S S )
    // </0 & CollectTiles_Alloc/4 e.Alloc#1/2 (/7 # TkVariableCopy/9 'e'/10 e.Index#1/5 s.Level#1/13 s.Sample#1/12 s.Offset#1/11 )/8 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[16], context[17] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'e', context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Alloc#1 as range 16(2)
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 Tile{ AsIs: (/7 AsIs: # TkVariableCopy/9 AsIs: 'e'/10 AsIs: e.Index#1/5 AsIs: s.Level#1/13 AsIs: s.Sample#1/12 AsIs: s.Offset#1/11 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: </0 AsIs: & CollectTiles_Alloc/4 } Tile{ AsIs: e.Alloc#1/16(2) } >/15 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //
    // </0 & CollectTiles_Alloc/4 >/1
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CollectTiles_Alloc/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //E 
  // </0 & CollectTiles_Alloc/4 e.Alloc#1/2 >/1
  // closed e.Alloc#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.Alloc#1/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenTrash(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EndOffset, "EndOffset" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdTrash<int>::name,
    & ident_LEFT_EDGE<int>::name,
    & ident_RemovedTile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:(E )E 
    // </0 & GenTrash/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //(E )E 
    // </0 & GenTrash/4 (/7 e.LeftTile#1/5 )/8 e.Trash_B#1/9 # RemovedTile/11 e.Trash_E#1/2 >/1
    // closed e.LeftTile#1 as range 5
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icEPrepare, 0, 9, 14},
    {refalrts::icEStart, 0, 9, 14},
    {refalrts::icSave, 0, 16, 14},
    {refalrts::icIdentLeftSave, 11, 2, 16},
    // closed e.Trash_E#1 as range 16(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  # RemovedTile/11 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GenTrash/4 AsIs: (/7 AsIs: e.LeftTile#1/5 AsIs: )/8 } Tile{ AsIs: e.Trash_B#1/9 } Tile{ AsIs: e.Trash_E#1/16(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icTrash, 0, 0, 8},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //(E )
    // </0 & GenTrash/4 (/7 e.LeftTile#1/5 )/8 >/1
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icEmpty, 0, 0, 14},
    // closed e.LeftTile#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & GenTrash/4 (/7 e.LeftTile#1/5 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //((#LEFT_EDGE))E 
    // </0 & GenTrash/4 (/7 (/11 # LEFT_EDGE/13 )/12 )/8 e.Trash#1/2 >/1
    {refalrts::icSave, 0, 14, 5},
    {refalrts::icBracketLeftSave, 0, 9, 14},
    {refalrts::icIdentLeftSave, 13, 1, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 14},
    // closed e.Trash#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & GenTrash/4 {REMOVED TILE}  )/8 e.Trash#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 HalfReuse: # CmdTrash/11 AsIs: # LEFT_EDGE/13 AsIs: )/12 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 11},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E T )E 
    // </0 & GenTrash/4 (/7 e.LeftTile#1/5 t.Last#1/9 )/8 e.Trash#1/2 >/1
    // closed e.Trash#1 as range 2
    {refalrts::ictVarRightSave, 0, 9, 5},
    // closed e.LeftTile#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.LeftTile#1/5 {REMOVED TILE}  e.Trash#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdTrash/4 HalfReuse: </7 } & EndOffset/11 Tile{ AsIs: t.Last#1/9 HalfReuse: >/8 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icAllocFunc, 0, 0, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 9, 8, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:(E )E 
  // </0 & GenTrash/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    //(E )E 
    // </0 & GenTrash/4 (/7 e.LeftTile#1/5 )/8 e.Trash_B#1/9 # RemovedTile/11 e.Trash_E#1/2 >/1
    // closed e.LeftTile#1 as range 5
    context[14] = context[2];
    context[15] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[14];
      context[17] = context[15];
      context[11] = refalrts::ident_left(  & ident_RemovedTile<int>::name, context[16], context[17] );
      if( ! context[11] )
        continue;
      // closed e.Trash_E#1 as range 16(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  # RemovedTile/11 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & GenTrash/4 AsIs: (/7 AsIs: e.LeftTile#1/5 AsIs: )/8 } Tile{ AsIs: e.Trash_B#1/9 } Tile{ AsIs: e.Trash_E#1/16(2) } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[8], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[14], context[15] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )
    // </0 & GenTrash/4 (/7 e.LeftTile#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.LeftTile#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenTrash/4 (/7 e.LeftTile#1/5 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //((#LEFT_EDGE))E 
    // </0 & GenTrash/4 (/7 (/11 # LEFT_EDGE/13 )/12 )/8 e.Trash#1/2 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[14], context[15] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.Trash#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenTrash/4 {REMOVED TILE}  )/8 e.Trash#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 HalfReuse: # CmdTrash/11 AsIs: # LEFT_EDGE/13 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_ident( context[11], & ident_CmdTrash<int>::name );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E T )E 
  // </0 & GenTrash/4 (/7 e.LeftTile#1/5 t.Last#1/9 )/8 e.Trash#1/2 >/1
  // closed e.Trash#1 as range 2
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.LeftTile#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.LeftTile#1/5 {REMOVED TILE}  e.Trash#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdTrash/4 HalfReuse: </7 } & EndOffset/11 Tile{ AsIs: t.Last#1/9 HalfReuse: >/8 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_name( context[11], EndOffset, "EndOffset" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdTrash<int>::name );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult BeginOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Reuse<int>::name,
    & ident_HalfReuse<int>::name,
    & ident_AsIs<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )
    //GLOBAL GEN:(S E T )
    // </0 & BeginOffset/4 (/7 s.idxB#0/9 e.idxBV#0/5 t.idxBVV#0/10 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::ictVarRightSave, 0, 10, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(#AsIsT )
    // </0 & BeginOffset/4 (/7 # AsIs/9 t.Item#1/10 )/8 >/1
    {refalrts::icIdentTerm, 0, 2, 9},
    {refalrts::icSave, 0, 12, 5},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # AsIs/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(#HalfReuseT )
    // </0 & BeginOffset/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 9},
    {refalrts::icSave, 0, 12, 5},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # HalfReuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(#ReuseT )
    // </0 & BeginOffset/4 (/7 # Reuse/9 t.Item#1/10 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 9},
    {refalrts::icSave, 0, 12, 5},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # Reuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(S E S )
    // </0 & BeginOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1
    {refalrts::icsVarTerm, 0, 12, 10},
    // closed e.Info#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & BeginOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
    {refalrts::icReinitSVar, 0, 10, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )
  //GLOBAL GEN:(S E T )
  // </0 & BeginOffset/4 (/7 s.idxB#0/9 e.idxBV#0/5 t.idxBVV#0/10 )/8 >/1
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
  context[11] = refalrts::tvar_right( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  do {
    refalrts::start_sentence();
    //(#AsIsT )
    // </0 & BeginOffset/4 (/7 # AsIs/9 t.Item#1/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_AsIs<int>::name, context[9] ) )
      continue;
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # AsIs/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#HalfReuseT )
    // </0 & BeginOffset/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_HalfReuse<int>::name, context[9] ) )
      continue;
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # HalfReuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#ReuseT )
    // </0 & BeginOffset/4 (/7 # Reuse/9 t.Item#1/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Reuse<int>::name, context[9] ) )
      continue;
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # Reuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(S E S )
  // </0 & BeginOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1
  if( ! refalrts::svar_term( context[12], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & BeginOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
  refalrts::reinit_svar( context[1], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult EndOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkString<int>::name,
    & ident_TkVariableCopy<int>::name,
    & ident_TkVariable<int>::name,
    & ident_Reuse<int>::name,
    & ident_HalfReuse<int>::name,
    & ident_AsIs<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )
    //GLOBAL GEN:(S E T )
    // </0 & EndOffset/4 (/7 s.idxB#0/9 e.idxBV#0/5 t.idxBVV#0/10 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::ictVarRightSave, 0, 10, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(#AsIsT )
    // </0 & EndOffset/4 (/7 # AsIs/9 t.Item#1/10 )/8 >/1
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # AsIs/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(#HalfReuseT )
    // </0 & EndOffset/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 >/1
    {refalrts::icIdentTerm, 0, 4, 9},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # HalfReuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(#ReuseT )
    // </0 & EndOffset/4 (/7 # Reuse/9 t.Item#1/10 )/8 >/1
    {refalrts::icIdentTerm, 0, 3, 9},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # Reuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(#TkVariable's'E S S )
    // </0 & EndOffset/4 (/7 # TkVariable/9 's'/12 e.Index#1/5 s.Depth#1/13 s.Offset#1/10 )/8 >/1
    {refalrts::icsVarTerm, 0, 12, 10},
    {refalrts::icIdentTerm, 0, 2, 9},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icCharLeftSave, 12, static_cast<unsigned char>('s'), 15},
    {refalrts::icsVarRight, 0, 13, 15},
    // closed e.Index#1 as range 15(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & EndOffset/4 (/7 # TkVariable/9 's'/12 e.Index#1/15(5) s.Depth#1/13 s.Offset#1/10 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
    {refalrts::icReinitSVar, 0, 10, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //(#TkVariableCopy's'E S S S )
    // </0 & EndOffset/4 (/7 # TkVariableCopy/9 's'/12 e.Index#1/5 s.Depth#1/14 s.Sample#1/13 s.Offset#1/10 )/8 >/1
    {refalrts::icsVarTerm, 0, 12, 10},
    {refalrts::icIdentTerm, 0, 1, 9},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icCharLeftSave, 12, static_cast<unsigned char>('s'), 15},
    {refalrts::icsVarRight, 0, 13, 15},
    {refalrts::icsVarRight, 0, 14, 15},
    // closed e.Index#1 as range 15(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & EndOffset/4 (/7 # TkVariableCopy/9 's'/12 e.Index#1/15(5) s.Depth#1/14 s.Sample#1/13 s.Offset#1/10 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
    {refalrts::icReinitSVar, 0, 10, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //(#TkVariableS E S S )
    // </0 & EndOffset/4 (/7 # TkVariable/9 s.Mode#1/12 e.Index#1/5 s.Depth#1/13 s.Offset#1/10 )/8 >/1
    {refalrts::icsVarTerm, 0, 12, 10},
    {refalrts::icIdentTerm, 0, 2, 9},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icsVarLeft, 0, 12, 15},
    {refalrts::icsVarRight, 0, 13, 15},
    // closed e.Index#1 as range 15(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Mode#1/12 e.Index#1/15(5) s.Depth#1/13 s.Offset#1/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 10, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 9},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //(#TkVariableCopyS E S S S )
    // </0 & EndOffset/4 (/7 # TkVariableCopy/9 s.Mode#1/12 e.Index#1/5 s.Depth#1/14 s.Sample#1/13 s.Offset#1/10 )/8 >/1
    {refalrts::icsVarTerm, 0, 12, 10},
    {refalrts::icIdentTerm, 0, 1, 9},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icsVarLeft, 0, 12, 15},
    {refalrts::icsVarRight, 0, 13, 15},
    {refalrts::icsVarRight, 0, 14, 15},
    // closed e.Index#1 as range 15(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Mode#1/12 e.Index#1/15(5) s.Depth#1/14 s.Sample#1/13 s.Offset#1/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 10, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 9},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //(#TkStringE S )
    // </0 & EndOffset/4 (/7 # TkString/9 e.String#1/5 s.Offset#1/10 )/8 >/1
    {refalrts::icsVarTerm, 0, 12, 10},
    {refalrts::icIdentTerm, 0, 0, 9},
    // closed e.String#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.String#1/5 s.Offset#1/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 10, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 9},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(S E S )
    // </0 & EndOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1
    {refalrts::icsVarTerm, 0, 12, 10},
    // closed e.Info#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & EndOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
    {refalrts::icReinitSVar, 0, 10, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[8];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )
  //GLOBAL GEN:(S E T )
  // </0 & EndOffset/4 (/7 s.idxB#0/9 e.idxBV#0/5 t.idxBVV#0/10 )/8 >/1
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
  context[11] = refalrts::tvar_right( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  do {
    refalrts::start_sentence();
    //(#AsIsT )
    // </0 & EndOffset/4 (/7 # AsIs/9 t.Item#1/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_AsIs<int>::name, context[9] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # AsIs/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#HalfReuseT )
    // </0 & EndOffset/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_HalfReuse<int>::name, context[9] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # HalfReuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#ReuseT )
    // </0 & EndOffset/4 (/7 # Reuse/9 t.Item#1/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Reuse<int>::name, context[9] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # Reuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkVariable's'E S S )
    // </0 & EndOffset/4 (/7 # TkVariable/9 's'/12 e.Index#1/5 s.Depth#1/13 s.Offset#1/10 )/8 >/1
    if( ! refalrts::svar_term( context[12], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_TkVariable<int>::name, context[9] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    context[12] = refalrts::char_left( 's', context[15], context[16] );
    if( ! context[12] )
      continue;
    if( ! refalrts::svar_right( context[13], context[15], context[16] ) )
      continue;
    // closed e.Index#1 as range 15(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & EndOffset/4 (/7 # TkVariable/9 's'/12 e.Index#1/15(5) s.Depth#1/13 s.Offset#1/10 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
    refalrts::reinit_svar( context[1], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkVariableCopy's'E S S S )
    // </0 & EndOffset/4 (/7 # TkVariableCopy/9 's'/12 e.Index#1/5 s.Depth#1/14 s.Sample#1/13 s.Offset#1/10 )/8 >/1
    if( ! refalrts::svar_term( context[12], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_TkVariableCopy<int>::name, context[9] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    context[12] = refalrts::char_left( 's', context[15], context[16] );
    if( ! context[12] )
      continue;
    if( ! refalrts::svar_right( context[13], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[15], context[16] ) )
      continue;
    // closed e.Index#1 as range 15(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & EndOffset/4 (/7 # TkVariableCopy/9 's'/12 e.Index#1/15(5) s.Depth#1/14 s.Sample#1/13 s.Offset#1/10 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
    refalrts::reinit_svar( context[1], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkVariableS E S S )
    // </0 & EndOffset/4 (/7 # TkVariable/9 s.Mode#1/12 e.Index#1/5 s.Depth#1/13 s.Offset#1/10 )/8 >/1
    if( ! refalrts::svar_term( context[12], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_TkVariable<int>::name, context[9] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::svar_left( context[12], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[15], context[16] ) )
      continue;
    // closed e.Index#1 as range 15(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Mode#1/12 e.Index#1/15(5) s.Depth#1/13 s.Offset#1/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkVariableCopyS E S S S )
    // </0 & EndOffset/4 (/7 # TkVariableCopy/9 s.Mode#1/12 e.Index#1/5 s.Depth#1/14 s.Sample#1/13 s.Offset#1/10 )/8 >/1
    if( ! refalrts::svar_term( context[12], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_TkVariableCopy<int>::name, context[9] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::svar_left( context[12], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[15], context[16] ) )
      continue;
    // closed e.Index#1 as range 15(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Mode#1/12 e.Index#1/15(5) s.Depth#1/14 s.Sample#1/13 s.Offset#1/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#TkStringE S )
    // </0 & EndOffset/4 (/7 # TkString/9 e.String#1/5 s.Offset#1/10 )/8 >/1
    if( ! refalrts::svar_term( context[12], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_TkString<int>::name, context[9] ) )
      continue;
    // closed e.String#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.String#1/5 s.Offset#1/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(S E S )
  // </0 & EndOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1
  if( ! refalrts::svar_term( context[12], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & EndOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
  refalrts::reinit_svar( context[1], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_AddOffsets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GetSampleOffset, "GetSampleOffset" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariable<int>::name,
    & ident_HalfReuse<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )T 
    //GLOBAL GEN:(E )T 
    // </0 & lambda_AddOffsets_0/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    //(E )(#HalfReuse(#TkVariable's'E S S ))
    // </0 & lambda_AddOffsets_0/4 (/7 e.PatternVars#1/5 )/8 (/9 # HalfReuse/13 (/16 # TkVariable/18 's'/19 e.Index#3/14 s.Level#3/21 s.Offset#3/20 )/17 )/10 >/1
    {refalrts::icBracketTerm, 0, 11, 9},
    {refalrts::icIdentLeftSave, 13, 1, 11},
    {refalrts::icBracketLeftSave, 0, 14, 11},
    {refalrts::icIdentLeftSave, 18, 0, 14},
    {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('s'), 14},
    {refalrts::icEmpty, 0, 0, 11},
    // closed e.PatternVars#1 as range 5
    {refalrts::icsVarRight, 0, 20, 14},
    {refalrts::icsVarRight, 0, 21, 14},
    // closed e.Index#3 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # HalfReuse/13 AsIs: (/16 AsIs: # TkVariable/18 HalfReuse: </19 } Tile{ HalfReuse: & GetSampleOffset/7 AsIs: e.PatternVars#1/5 HalfReuse: (/8 } Tile{ HalfReuse: 's'/4 } Tile{ AsIs: e.Index#3/14 } Tile{ AsIs: s.Level#3/21 } Tile{ HalfReuse: )/0 } Tile{ AsIs: >/1 } Tile{ AsIs: s.Offset#3/20 AsIs: )/17 AsIs: )/10 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitChar, 0, 's', 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icLinkBrackets, 8, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 10, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 4, 4, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 9, 19, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )T 
    // </0 & lambda_AddOffsets_0/4 (/7 e.PatternVars#1/5 )/8 t.Other#3/9 >/1
    // closed e.PatternVars#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_AddOffsets_0/4 (/7 e.PatternVars#1/5 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#3/9 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
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
  //FAST GEN:(E )T 
  //GLOBAL GEN:(E )T 
  // </0 & lambda_AddOffsets_0/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    //(E )(#HalfReuse(#TkVariable's'E S S ))
    // </0 & lambda_AddOffsets_0/4 (/7 e.PatternVars#1/5 )/8 (/9 # HalfReuse/13 (/16 # TkVariable/18 's'/19 e.Index#3/14 s.Level#3/21 s.Offset#3/20 )/17 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( 's', context[14], context[15] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.PatternVars#1 as range 5
    if( ! refalrts::svar_right( context[20], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[21], context[14], context[15] ) )
      continue;
    // closed e.Index#3 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # HalfReuse/13 AsIs: (/16 AsIs: # TkVariable/18 HalfReuse: </19 } Tile{ HalfReuse: & GetSampleOffset/7 AsIs: e.PatternVars#1/5 HalfReuse: (/8 } Tile{ HalfReuse: 's'/4 } Tile{ AsIs: e.Index#3/14 } Tile{ AsIs: s.Level#3/21 } Tile{ HalfReuse: )/0 } Tile{ AsIs: >/1 } Tile{ AsIs: s.Offset#3/20 AsIs: )/17 AsIs: )/10 } Tile{ ]] }
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[7], GetSampleOffset, "GetSampleOffset" );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_char( context[4], 's' );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[8], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[10] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[19] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )T 
  // </0 & lambda_AddOffsets_0/4 (/7 e.PatternVars#1/5 )/8 t.Other#3/9 >/1
  // closed e.PatternVars#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_AddOffsets_0/4 (/7 e.PatternVars#1/5 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#3/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_AddOffsets_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { Inc2, "Inc2" },
    { Add, "Add" },
    { GetSampleOffset, "GetSampleOffset" },
    { lambda_AddOffsets_0, "lambda_AddOffsets_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkString<int>::name,
    & ident_TkVariableCopy<int>::name,
    & ident_TkVariable<int>::name,
    & ident_Tile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )S (E )
    //GLOBAL GEN:(E )S (S E )
    // </0 & lambda_AddOffsets_1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/13 (/11 s.idxTVB#0/14 e.idxTVBV#0/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    // closed e.idxB#0 as range 5
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 14, 9},
    // closed e.idxTVBV#0 as range 9
    {refalrts::icOnFailGoTo, +23, 0, 0},
    //(E )S (#TileE )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # Tile/14 e.Tile#2/9 )/12 >/1
    {refalrts::icIdentTerm, 0, 3, 14},
    // closed e.PatternVars#1 as range 5
    // closed e.Tile#2 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#2/13 AsIs: (/11 AsIs: # Tile/14 } </15 & Map/16 </17 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_AddOffsets_0/4 AsIs: (/7 AsIs: e.PatternVars#1/5 AsIs: )/8 } >/18 Tile{ AsIs: e.Tile#2/9 } Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 6, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icReinitFunc, 0, 5, 0},
    {refalrts::icUpdateFunc, 0, 4, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 15, 17, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    //(E )S (#TkVariable's'E S )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkVariable/14 's'/15 e.Index#2/9 s.Level#2/16 )/12 >/1
    {refalrts::icIdentTerm, 0, 2, 14},
    {refalrts::icSave, 0, 22, 9},
    {refalrts::icCharLeftSave, 15, static_cast<unsigned char>('s'), 22},
    // closed e.PatternVars#1 as range 5
    {refalrts::icsVarRight, 0, 16, 22},
    // closed e.Index#2 as range 22(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 1/17 >/18 Tile{ HalfReuse: (/8 } # TkVariableCopy/19 </20 & GetSampleOffset/21 Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: (/14 AsIs: 's'/15 AsIs: e.Index#2/22(9) AsIs: s.Level#2/16 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
    {refalrts::icAllocInt, 0, 1, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocIdent, 0, 1, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 3, 21},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitSVar, 0, 13, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 12, 0},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 11, 0},
    {refalrts::icSpliceTile, 14, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 19, 21, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    //(E )S (#TkVariable't'E S )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkVariable/14 't'/15 e.Index#2/9 s.Level#2/16 )/12 >/1
    {refalrts::icIdentTerm, 0, 2, 14},
    {refalrts::icSave, 0, 22, 9},
    {refalrts::icCharLeftSave, 15, static_cast<unsigned char>('t'), 22},
    // closed e.PatternVars#1 as range 5
    {refalrts::icsVarRight, 0, 16, 22},
    // closed e.Index#2 as range 22(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 2/17 >/18 Tile{ HalfReuse: (/8 } # TkVariableCopy/19 </20 & GetSampleOffset/21 Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: (/14 AsIs: 't'/15 AsIs: e.Index#2/22(9) AsIs: s.Level#2/16 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
    {refalrts::icAllocInt, 0, 2, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocIdent, 0, 1, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 3, 21},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitSVar, 0, 13, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 12, 0},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 11, 0},
    {refalrts::icSpliceTile, 14, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 19, 21, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    //(E )S (#TkVariable'e'E S )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkVariable/14 'e'/15 e.Index#2/9 s.Level#2/16 )/12 >/1
    {refalrts::icIdentTerm, 0, 2, 14},
    {refalrts::icSave, 0, 22, 9},
    {refalrts::icCharLeftSave, 15, static_cast<unsigned char>('e'), 22},
    // closed e.PatternVars#1 as range 5
    {refalrts::icsVarRight, 0, 16, 22},
    // closed e.Index#2 as range 22(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 2/17 >/18 Tile{ HalfReuse: (/8 } # TkVariableCopy/19 </20 & GetSampleOffset/21 Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: (/14 AsIs: 'e'/15 AsIs: e.Index#2/22(9) AsIs: s.Level#2/16 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
    {refalrts::icAllocInt, 0, 2, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocIdent, 0, 1, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 3, 21},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitSVar, 0, 13, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 12, 0},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 11, 0},
    {refalrts::icSpliceTile, 14, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 19, 21, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //(E )S (#TkStringE )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkString/14 e.String#2/9 )/12 >/1
    {refalrts::icIdentTerm, 0, 0, 14},
    // closed e.PatternVars#1 as range 5
    // closed e.String#2 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.PatternVars#1/5 {REMOVED TILE}  s.Offset#2/13 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 HalfReuse: s.Offset2 #13/7 } Tile{ HalfReuse: >/8 } Tile{ AsIs: (/11 AsIs: # TkString/14 AsIs: e.String#2/9 HalfReuse: s.Offset2 #13/12 HalfReuse: )/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitSVar, 0, 13, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitSVar, 0, 13, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 11},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )S (S E )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 s.Tag#2/14 e.Info#2/9 )/12 >/1
    // closed e.PatternVars#1 as range 5
    // closed e.Info#2 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.PatternVars#1/5 {REMOVED TILE}  s.Offset#2/13 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset2 #13/7 } Tile{ HalfReuse: >/8 } Tile{ AsIs: (/11 AsIs: s.Tag#2/14 AsIs: e.Info#2/9 HalfReuse: s.Offset2 #13/12 HalfReuse: )/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 13, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitSVar, 0, 13, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 11},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )S (E )
  //GLOBAL GEN:(E )S (S E )
  // </0 & lambda_AddOffsets_1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/13 (/11 s.idxTVB#0/14 e.idxTVBV#0/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVBV#0 as range 9
  do {
    refalrts::start_sentence();
    //(E )S (#TileE )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # Tile/14 e.Tile#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Tile<int>::name, context[14] ) )
      continue;
    // closed e.PatternVars#1 as range 5
    // closed e.Tile#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#2/13 AsIs: (/11 AsIs: # Tile/14 } </15 & Map/16 </17 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_AddOffsets_0/4 AsIs: (/7 AsIs: e.PatternVars#1/5 AsIs: )/8 } >/18 Tile{ AsIs: e.Tile#2/9 } Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[4], lambda_AddOffsets_0, "lambda_AddOffsets_0" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )S (#TkVariable's'E S )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkVariable/14 's'/15 e.Index#2/9 s.Level#2/16 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TkVariable<int>::name, context[14] ) )
      continue;
    context[22] = context[9];
    context[23] = context[10];
    context[15] = refalrts::char_left( 's', context[22], context[23] );
    if( ! context[15] )
      continue;
    // closed e.PatternVars#1 as range 5
    if( ! refalrts::svar_right( context[16], context[22], context[23] ) )
      continue;
    // closed e.Index#2 as range 22(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 1/17 >/18 Tile{ HalfReuse: (/8 } # TkVariableCopy/19 </20 & GetSampleOffset/21 Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: (/14 AsIs: 's'/15 AsIs: e.Index#2/22(9) AsIs: s.Level#2/16 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
    if( ! refalrts::alloc_number( context[17], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_TkVariableCopy<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], GetSampleOffset, "GetSampleOffset" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[14], context[12] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[11] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )S (#TkVariable't'E S )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkVariable/14 't'/15 e.Index#2/9 s.Level#2/16 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TkVariable<int>::name, context[14] ) )
      continue;
    context[22] = context[9];
    context[23] = context[10];
    context[15] = refalrts::char_left( 't', context[22], context[23] );
    if( ! context[15] )
      continue;
    // closed e.PatternVars#1 as range 5
    if( ! refalrts::svar_right( context[16], context[22], context[23] ) )
      continue;
    // closed e.Index#2 as range 22(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 2/17 >/18 Tile{ HalfReuse: (/8 } # TkVariableCopy/19 </20 & GetSampleOffset/21 Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: (/14 AsIs: 't'/15 AsIs: e.Index#2/22(9) AsIs: s.Level#2/16 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
    if( ! refalrts::alloc_number( context[17], 2UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_TkVariableCopy<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], GetSampleOffset, "GetSampleOffset" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[14], context[12] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[11] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )S (#TkVariable'e'E S )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkVariable/14 'e'/15 e.Index#2/9 s.Level#2/16 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TkVariable<int>::name, context[14] ) )
      continue;
    context[22] = context[9];
    context[23] = context[10];
    context[15] = refalrts::char_left( 'e', context[22], context[23] );
    if( ! context[15] )
      continue;
    // closed e.PatternVars#1 as range 5
    if( ! refalrts::svar_right( context[16], context[22], context[23] ) )
      continue;
    // closed e.Index#2 as range 22(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 2/17 >/18 Tile{ HalfReuse: (/8 } # TkVariableCopy/19 </20 & GetSampleOffset/21 Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: (/14 AsIs: 'e'/15 AsIs: e.Index#2/22(9) AsIs: s.Level#2/16 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
    if( ! refalrts::alloc_number( context[17], 2UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_TkVariableCopy<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], GetSampleOffset, "GetSampleOffset" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[14], context[12] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[11] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )S (#TkStringE )
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkString/14 e.String#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_TkString<int>::name, context[14] ) )
      continue;
    // closed e.PatternVars#1 as range 5
    // closed e.String#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.PatternVars#1/5 {REMOVED TILE}  s.Offset#2/13 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 HalfReuse: s.Offset2 #13/7 } Tile{ HalfReuse: >/8 } Tile{ AsIs: (/11 AsIs: # TkString/14 AsIs: e.String#2/9 HalfReuse: s.Offset2 #13/12 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], Inc2, "Inc2" );
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_svar( context[12], context[13] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )S (S E )
  // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 s.Tag#2/14 e.Info#2/9 )/12 >/1
  // closed e.PatternVars#1 as range 5
  // closed e.Info#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.PatternVars#1/5 {REMOVED TILE}  s.Offset#2/13 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset2 #13/7 } Tile{ HalfReuse: >/8 } Tile{ AsIs: (/11 AsIs: s.Tag#2/14 AsIs: e.Info#2/9 HalfReuse: s.Offset2 #13/12 HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], Inc, "Inc" );
  refalrts::reinit_svar( context[7], context[13] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_svar( context[12], context[13] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AddOffsets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { MapReduce, "MapReduce" },
    { CollectStrings, "CollectStrings" },
    { lambda_AddOffsets_1, "lambda_AddOffsets_1" },
    { refalrts::create_closure, "refalrts::create_closure" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & AddOffsets/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 e.MarkedResult#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    // closed e.PatternVars#1 as range 6
    // closed e.MarkedResult#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } </10 & CreateClosure /11 & lambda_AddOffsets_1/12 Tile{ AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 } >/13 Tile{ AsIs: s.ContextOffset#1/5 } </14 & CollectStrings/15 Tile{ AsIs: e.MarkedResult#1/2 } >/16 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icAllocFunc, 0, 3, 11},
    {refalrts::icAllocFunc, 0, 2, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 1, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icSpliceTile, 10, 12, 0},
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
  // </0 & AddOffsets/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 e.MarkedResult#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedResult#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } </10 & CreateClosure /11 & lambda_AddOffsets_1/12 Tile{ AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 } >/13 Tile{ AsIs: s.ContextOffset#1/5 } </14 & CollectStrings/15 Tile{ AsIs: e.MarkedResult#1/2 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], lambda_AddOffsets_1, "lambda_AddOffsets_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], CollectStrings, "CollectStrings" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], MapReduce, "MapReduce" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GetSampleOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GetSampleOffset/4 e.PatternVars_B#1/11 (/15 s.Mode#1/17 (/20 e.Index#1/22 s.Level#1/24 )/21 e.Offsets#1/13 s.SampleOffset#1/25 )/16 e.PatternVars_E#1/2 (/7 s.Mode#1/9 e.Index#1/5 s.Level#1/10 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarRight, 0, 10, 5},
    // closed e.Index#1 as range 5
    {refalrts::icEPrepare, 0, 11, 2},
    {refalrts::icEStart, 0, 11, 2},
    {refalrts::icSave, 0, 26, 2},
    {refalrts::icBracketLeftSave, 0, 13, 26},
    {refalrts::icsRepeatLeft, 17, 9, 13},
    {refalrts::icBracketLeftSave, 0, 18, 13},
    {refalrts::iceRepeatLeft, 22, 5, 18},
    {refalrts::icsRepeatLeft, 24, 10, 18},
    {refalrts::icEmpty, 0, 0, 18},
    // closed e.PatternVars_E#1 as range 26(2)
    {refalrts::icsVarRight, 0, 25, 13},
    // closed e.Offsets#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & GetSampleOffset/4 e.PatternVars_B#1/11 (/15 s.Mode#1/17 (/20 e.Index#1/22 s.Level#1/24 )/21 e.Offsets#1/13 s.SampleOffset#1/25 )/16 e.PatternVars_E#1/26(2) (/7 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Mode#1/9 AsIs: e.Index#1/5 AsIs: s.Level#1/10 HalfReuse: s.SampleOffset1 #25/8 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 25, 8},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icFail, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & GetSampleOffset/4 e.PatternVars_B#1/11 (/15 s.Mode#1/17 (/20 e.Index#1/22 s.Level#1/24 )/21 e.Offsets#1/13 s.SampleOffset#1/25 )/16 e.PatternVars_E#1/2 (/7 s.Mode#1/9 e.Index#1/5 s.Level#1/10 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop();
  do {
    context[26] = context[2];
    context[27] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[26], context[27] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::repeated_stvar_left( context[17], context[9], context[13], context[14] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::repeated_evar_left( context[22], context[23], context[5], context[6], context[18], context[19] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[24], context[10], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.PatternVars_E#1 as range 26(2)
    if( ! refalrts::svar_right( context[25], context[13], context[14] ) )
      continue;
    // closed e.Offsets#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GetSampleOffset/4 e.PatternVars_B#1/11 (/15 s.Mode#1/17 (/20 e.Index#1/22 s.Level#1/24 )/21 e.Offsets#1/13 s.SampleOffset#1/25 )/16 e.PatternVars_E#1/26(2) (/7 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Mode#1/9 AsIs: e.Index#1/5 AsIs: s.Level#1/10 HalfReuse: s.SampleOffset1 #25/8 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}


//End of file
