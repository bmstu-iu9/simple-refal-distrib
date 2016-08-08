// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Apply(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Arg(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Compare_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FastIntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Max(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Min(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sort(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SymbCompare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SymbType(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Trim(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Type(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Type_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Y(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoLoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoMapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FastIntFromStr_Guard(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Lexicon(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Lexicon_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Lexicon_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Lexicon_T_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MapReduce_AddScanned(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Max_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Min_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Seq_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Seq_S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Sort_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Sort_S2L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Sort_S2L2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwDoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Trim_R(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult WriteBracketLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Y_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

// identifier #TypeBracket
template <typename SREFAL_PARAM_INT>
struct ident_TypeBracket {
  static const char *name() {
    return "TypeBracket";
  }
};

refalrts::FnResult Apply(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: t.$ e.$
    //GLOBAL GEN: t.$ e.$
    // </0 & Apply/4 t.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +8, 0, 0},
    // s.idx e.idx
    // </0 & Apply/4 s.Fn#1/5 e.Argument#1/2 >/1
    {refalrts::icsVarTerm, 0, 7, 5},
    // closed e.Argument#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/2 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( t.idx e.idx ) e.idx
    // </0 & Apply/4 (/5 t.Closure#1/9 e.Bounded#1/7 )/6 e.Argument#1/2 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    // closed e.Argument#1 as range 2
    {refalrts::ictVarLeftSave, 0, 9, 7},
    // closed e.Bounded#1 as range 7
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/5 {REMOVED TILE}  {REMOVED TILE}  )/6 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure#1/9 } Tile{ AsIs: e.Bounded#1/7 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceTile, 9, 10, 0},
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
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Apply/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // s.idx e.idx
    // </0 & Apply/4 s.Fn#1/5 e.Argument#1/2 >/1
    if( ! refalrts::svar_term( context[7], context[5] ) )
      continue;
    // closed e.Argument#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( t.idx e.idx ) e.idx
  // </0 & Apply/4 (/5 t.Closure#1/9 e.Bounded#1/7 )/6 e.Argument#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Bounded#1 as range 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/5 {REMOVED TILE}  {REMOVED TILE}  )/6 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure#1/9 } Tile{ AsIs: e.Bounded#1/7 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Apply, "Apply" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: t.$ e.$
    // </0 & Map/4 t.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // t.idx t.idx e.idx
    // </0 & Map/4 t.Fn#1/5 t.Next#1/7 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 14, 2},
    {refalrts::ictVarLeftSave, 0, 7, 14},
    // closed e.Tail#1 as range 14(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/7 } >/9 </10 & Map/11 t.Fn#1/5/12 Tile{ AsIs: e.Tail#1/14(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icAllocFunc, 0, 1, 11},
    {refalrts::icCopyEVar, 12, 5, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 9, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // t.idx
    // </0 & Map/4 t.Fn#1/5 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Map/4 t.Fn#1/5 >/1 {REMOVED TILE} 
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
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Map/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // t.idx t.idx e.idx
    // </0 & Map/4 t.Fn#1/5 t.Next#1/7 e.Tail#1/2 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[14], context[15] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 14(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/7 } >/9 </10 & Map/11 t.Fn#1/5/12 Tile{ AsIs: e.Tail#1/14(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Map, "Map" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[12], context[13], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Apply, "Apply" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // t.idx
  // </0 & Map/4 t.Fn#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Map/4 t.Fn#1/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Apply, "Apply" },
    { Reduce, "Reduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: t.$ t.$ e.$
    // </0 & Reduce/4 t.idx#0/5 t.idxV#0/7 e.idxVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    // closed e.idxVV#0 as range 2
    {refalrts::icOnFailGoTo, +18, 0, 0},
    // t.idx t.idx t.idx e.idx
    // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 t.Next#1/9 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::ictVarLeftSave, 0, 9, 16},
    // closed e.Tail#1 as range 16(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </11 & Reduce/12 t.Fn#1/5/13 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/16(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 1, 12},
    {refalrts::icCopyEVar, 13, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 0, 10, 0},
    {refalrts::icSpliceTile, 11, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // t.idx t.idx
    // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Reduce/4 t.Fn#1/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
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
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ t.$ e.$
  // </0 & Reduce/4 t.idx#0/5 t.idxV#0/7 e.idxVV#0/2 >/1
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
  // closed e.idxVV#0 as range 2
  do {
    refalrts::start_sentence();
    // t.idx t.idx t.idx e.idx
    // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 t.Next#1/9 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[16], context[17] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 16(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </11 & Reduce/12 t.Fn#1/5/13 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/16(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[13], context[14], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Apply, "Apply" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // t.idx t.idx
  // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Reduce/4 t.Fn#1/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Apply, "Apply" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Fetch/4 e.Argument#1/2 t.Function#1/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarRightSave, 0, 5, 2},
    // closed e.Argument#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function#1/5 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 5, 6, 0},
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
  // </0 & Fetch/4 e.Argument#1/2 t.Function#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function#1/5 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], Apply, "Apply" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Y_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Y, "Y" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Y\1/4 s.Y-Func#1/5 e.Arg#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Arg#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: </4 AsIs: s.Y-Func#1/5 } </6 & Y/7 s.Y-Func#1/5/8 >/9 >/10 Tile{ AsIs: e.Arg#2/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icAllocFunc, 0, 0, 7},
    {refalrts::icCopySTVar, 8, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 6, 10, 0},
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
  // </0 & Y\1/4 s.Y-Func#1/5 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Arg#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: </4 AsIs: s.Y-Func#1/5 } </6 & Y/7 s.Y-Func#1/5/8 >/9 >/10 Tile{ AsIs: e.Arg#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Y, "Y" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[8], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Y(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_Y_L1, "Y\\1" },
    { refalrts::create_closure, "@create_closure@" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Y/4 s.Y-Func#1/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Y\1/4 AsIs: s.Y-Func#1/5 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 6, 0},
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
  // </0 & Y/4 s.Y-Func#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Y\1/4 AsIs: s.Y-Func#1/5 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "@create_closure@" );
  refalrts::update_name( context[4], gen_Y_L1, "Y\\1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoMapReduce, "DoMapReduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & MapReduce/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapReduce/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 } (/9 )/10 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 9, 10, 0},
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
  // </0 & MapReduce/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
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
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapReduce/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 } (/9 )/10 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoMapReduce, "DoMapReduce" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoMapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Apply, "Apply" },
    { MapReduce_AddScanned, "MapReduce-AddScanned" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: t.$ t.$ ( e.$ ) e.$
    // </0 & DoMapReduce/4 t.idx#0/5 t.idxV#0/7 (/11 e.idxVVB#0/9 )/12 e.idxVVT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.idxVVB#0 as range 9
    // closed e.idxVVT#0 as range 2
    {refalrts::icOnFailGoTo, +26, 0, 0},
    // t.idx t.idx ( e.idx ) t.idx e.idx
    // </0 & DoMapReduce/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 t.Next#1/13 e.Tail#1/2 >/1
    // closed e.Scanned#1 as range 9
    {refalrts::icSave, 0, 23, 2},
    {refalrts::ictVarLeftSave, 0, 13, 23},
    // closed e.Tail#1 as range 23(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapReduce/4 AsIs: t.Fn#1/5 } </15 & MapReduce-AddScanned/16 </17 & Apply/18 t.Fn#1/5/19 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/13 } >/21 Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 } >/22 Tile{ AsIs: e.Tail#1/23(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 1, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocFunc, 0, 0, 18},
    {refalrts::icCopyEVar, 19, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icSpliceTile, 15, 20, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // t.idx t.idx ( e.idx )
    // </0 & DoMapReduce/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Scanned#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DoMapReduce/4 t.Fn#1/5 {REMOVED TILE}  (/11 {REMOVED TILE}  )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
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
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ t.$ ( e.$ ) e.$
  // </0 & DoMapReduce/4 t.idx#0/5 t.idxV#0/7 (/11 e.idxVVB#0/9 )/12 e.idxVVT#0/2 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVVB#0 as range 9
  // closed e.idxVVT#0 as range 2
  do {
    refalrts::start_sentence();
    // t.idx t.idx ( e.idx ) t.idx e.idx
    // </0 & DoMapReduce/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 t.Next#1/13 e.Tail#1/2 >/1
    // closed e.Scanned#1 as range 9
    context[23] = context[2];
    context[24] = context[3];
    context[14] = refalrts::tvar_left( context[13], context[23], context[24] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 23(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapReduce/4 AsIs: t.Fn#1/5 } </15 & MapReduce-AddScanned/16 </17 & Apply/18 t.Fn#1/5/19 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/13 } >/21 Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 } >/22 Tile{ AsIs: e.Tail#1/23(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], MapReduce_AddScanned, "MapReduce-AddScanned" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], Apply, "Apply" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // t.idx t.idx ( e.idx )
  // </0 & DoMapReduce/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & DoMapReduce/4 t.Fn#1/5 {REMOVED TILE}  (/11 {REMOVED TILE}  )/12 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult MapReduce_AddScanned(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & MapReduce-AddScanned/4 t.Acc#1/9 e.StepScanned#1/2 (/7 e.Scanned#1/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    // closed e.Scanned#1 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    // closed e.StepScanned#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & MapReduce-AddScanned/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/5 } Tile{ AsIs: e.StepScanned#1/2 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 7, 7, 0},
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
  // </0 & MapReduce-AddScanned/4 t.Acc#1/9 e.StepScanned#1/2 (/7 e.Scanned#1/5 )/8 >/1
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
  // closed e.Scanned#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & MapReduce-AddScanned/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/5 } Tile{ AsIs: e.StepScanned#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // </0 & UnBracket/4 (/7 e.Expr#1/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Expr#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & UnBracket/4 (/7 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/5 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
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
  // </0 & UnBracket/4 (/7 e.Expr#1/5 )/8 >/1
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
  // closed e.Expr#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & UnBracket/4 (/7 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & DelAccumulator/4 t.Acc#1/5 e.Tail#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & DelAccumulator/4 t.Acc#1/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // </0 & DelAccumulator/4 t.Acc#1/5 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & DelAccumulator/4 t.Acc#1/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoLoadFile, "DoLoadFile" },
    { FOpen, "FOpen" },
    { FReadLine, "FReadLine" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & LoadFile/4 e.FileName#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.FileName#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoLoadFile/4 } </5 & FReadLine/6 </7 & FOpen/8 'r'/9 Tile{ AsIs: e.FileName#1/2 } >/10 >/11 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 2, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocFunc, 0, 1, 8},
    {refalrts::icAllocChar, 0, 'r', 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 7},
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
  // </0 & LoadFile/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoLoadFile/4 } </5 & FReadLine/6 </7 & FOpen/8 'r'/9 Tile{ AsIs: e.FileName#1/2 } >/10 >/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], FReadLine, "FReadLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], FOpen, "FOpen" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoLoadFile, "DoLoadFile" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[7] );
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

static refalrts::FnResult DoLoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FReadLine, "FReadLine" },
    { DoLoadFile, "DoLoadFile" },
    { FClose, "FClose" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: t.$ e.$
    // </0 & DoLoadFile/4 t.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // t.idx 0
    // </0 & DoLoadFile/4 t.File#1/5 0/7 >/1
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icNumLeftSave, 7, 0, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FClose/4 AsIs: t.File#1/5 HalfReuse: >/7 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // t.idx e.idx 0
    // </0 & DoLoadFile/4 t.File#1/5 e.Line#1/2 0/7 >/1
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icNumRightSave, 7, 0, 12},
    // closed e.Line#1 as range 12(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/8 Tile{ AsIs: e.Line#1/12(2) } Tile{ HalfReuse: )/7 } Tile{ AsIs: </0 Reuse: & FClose/4 AsIs: t.File#1/5 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 7, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 0, 6, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // t.idx e.idx
    // </0 & DoLoadFile/4 t.File#1/5 e.Line#1/2 >/1
    // closed e.Line#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/7 Tile{ AsIs: e.Line#1/2 } )/8 </9 & DoLoadFile/10 Tile{ AsIs: </0 Reuse: & FReadLine/4 AsIs: t.File#1/5 } >/11 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 1, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceTile, 0, 6, 0},
    {refalrts::icSpliceTile, 8, 10, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 7, 7, 0},
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
  //GLOBAL GEN: t.$ e.$
  // </0 & DoLoadFile/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // t.idx 0
    // </0 & DoLoadFile/4 t.File#1/5 0/7 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[7] = refalrts::number_left( 0UL, context[12], context[13] );
    if( ! context[7] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FClose/4 AsIs: t.File#1/5 HalfReuse: >/7 } Tile{ ]] }
    refalrts::update_name( context[4], FClose, "FClose" );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // t.idx e.idx 0
    // </0 & DoLoadFile/4 t.File#1/5 e.Line#1/2 0/7 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[7] = refalrts::number_right( 0UL, context[12], context[13] );
    if( ! context[7] )
      continue;
    // closed e.Line#1 as range 12(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/8 Tile{ AsIs: e.Line#1/12(2) } Tile{ HalfReuse: )/7 } Tile{ AsIs: </0 Reuse: & FClose/4 AsIs: t.File#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[7] );
    refalrts::update_name( context[4], FClose, "FClose" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // t.idx e.idx
  // </0 & DoLoadFile/4 t.File#1/5 e.Line#1/2 >/1
  // closed e.Line#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/7 Tile{ AsIs: e.Line#1/2 } )/8 </9 & DoLoadFile/10 Tile{ AsIs: </0 Reuse: & FReadLine/4 AsIs: t.File#1/5 } >/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], DoLoadFile, "DoLoadFile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FReadLine, "FReadLine" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FOpen, "FOpen" },
    { WriteBracketLine, "WriteBracketLine" },
    { Reduce, "Reduce" },
    { FClose, "FClose" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & SaveFile/4 (/7 e.FileName#1/5 )/8 e.Lines#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.FileName#1 as range 5
    // closed e.Lines#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & FClose/10 </11 & Reduce/12 & WriteBracketLine/13 Tile{ AsIs: </0 Reuse: & FOpen/4 HalfReuse: 'w'/7 AsIs: e.FileName#1/5 HalfReuse: >/8 AsIs: e.Lines#1/2 AsIs: >/1 } >/14 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 3, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 2, 12},
    {refalrts::icAllocFunc, 0, 1, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'w', 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 9, 13, 0},
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
  // </0 & SaveFile/4 (/7 e.FileName#1/5 )/8 e.Lines#1/2 >/1
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
  // closed e.FileName#1 as range 5
  // closed e.Lines#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & FClose/10 </11 & Reduce/12 & WriteBracketLine/13 Tile{ AsIs: </0 Reuse: & FOpen/4 HalfReuse: 'w'/7 AsIs: e.FileName#1/5 HalfReuse: >/8 AsIs: e.Lines#1/2 AsIs: >/1 } >/14 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], FClose, "FClose" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Reduce, "Reduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], WriteBracketLine, "WriteBracketLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FOpen, "FOpen" );
  refalrts::reinit_char( context[7], 'w' );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult WriteBracketLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FWriteLine, "FWriteLine" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & WriteBracketLine/4 t.File#1/9 (/7 e.Line#1/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    // closed e.Line#1 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FWriteLine/4 AsIs: t.File#1/9 } Tile{ AsIs: e.Line#1/5 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 10},
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
  // </0 & WriteBracketLine/4 t.File#1/9 (/7 e.Line#1/5 )/8 >/1
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
  // closed e.Line#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FWriteLine/4 AsIs: t.File#1/9 } Tile{ AsIs: e.Line#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], FWriteLine, "FWriteLine" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[10], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Add, "Add" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Inc/4 s.Num#1/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitInt, 0, 1, 1},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 6, 0},
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
  // </0 & Inc/4 s.Num#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Add, "Add" );
  refalrts::reinit_number( context[1], 1UL );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Sub, "Sub" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Dec/4 s.Num#1/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitInt, 0, 1, 1},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 6, 0},
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
  // </0 & Dec/4 s.Num#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Sub, "Sub" );
  refalrts::reinit_number( context[1], 1UL );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FastIntFromStr_Guard(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & FastIntFromStr-Guard/4 # Success/5 s.Number#1/6 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icIdentLeftSave, 5, 0, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastIntFromStr-Guard/4 # Success/5 s.Number#1/6 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Number1 #6/1 ]] }
    {refalrts::icReinitSVar, 0, 6, 1},
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
  // </0 & FastIntFromStr-Guard/4 # Success/5 s.Number#1/6 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & FastIntFromStr-Guard/4 # Success/5 s.Number#1/6 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Number1 #6/1 ]] }
  refalrts::reinit_svar( context[1], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult FastIntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { IntFromStr, "IntFromStr" },
    { FastIntFromStr_Guard, "FastIntFromStr-Guard" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & FastIntFromStr/4 e.Digits#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Digits#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & FastIntFromStr-Guard/6 Tile{ AsIs: </0 Reuse: & IntFromStr/4 AsIs: e.Digits#1/2 AsIs: >/1 } >/7 Tile{ ]] }
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
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & FastIntFromStr/4 e.Digits#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Digits#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & FastIntFromStr-Guard/6 Tile{ AsIs: </0 Reuse: & IntFromStr/4 AsIs: e.Digits#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], FastIntFromStr_Guard, "FastIntFromStr-Guard" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], IntFromStr, "IntFromStr" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoArgList, "DoArgList" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ArgList/4 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoArgList/4 HalfReuse: 0/1 } >/5 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitInt, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
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
  // </0 & ArgList/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoArgList/4 HalfReuse: 0/1 } >/5 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoArgList, "DoArgList" );
  refalrts::reinit_number( context[1], 0UL );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { Arg, "Arg" },
    { SwDoArgList, "SwDoArgList" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & DoArgList/4 s.Next#1/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 & SwDoArgList/7 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#1/5 AsIs: >/1 } </8 & Arg/9 s.Next#1/5/10 >/11 >/12 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icAllocFunc, 0, 2, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icAllocFunc, 0, 1, 9},
    {refalrts::icCopySTVar, 10, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 8, 12, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
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
  // </0 & DoArgList/4 s.Next#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </6 & SwDoArgList/7 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#1/5 AsIs: >/1 } </8 & Arg/9 s.Next#1/5/10 >/11 >/12 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], SwDoArgList, "SwDoArgList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Arg, "Arg" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Inc, "Inc" );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SwDoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoArgList, "DoArgList" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: s.$ e.$
    // </0 & SwDoArgList/4 s.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +6, 0, 0},
    // s.idx
    // </0 & SwDoArgList/4 s.Next#1/5 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SwDoArgList/4 s.Next#1/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx e.idx
    // </0 & SwDoArgList/4 s.Next#1/5 e.Arg#1/2 >/1
    // closed e.Arg#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 Tile{ AsIs: e.Arg#1/2 } )/7 Tile{ AsIs: </0 Reuse: & DoArgList/4 AsIs: s.Next#1/5 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 0, 5, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 6, 6, 0},
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
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & SwDoArgList/4 s.idx#0/5 e.idxV#0/2 >/1
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
    // s.idx
    // </0 & SwDoArgList/4 s.Next#1/5 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SwDoArgList/4 s.Next#1/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx e.idx
  // </0 & SwDoArgList/4 s.Next#1/5 e.Arg#1/2 >/1
  // closed e.Arg#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/6 Tile{ AsIs: e.Arg#1/2 } )/7 Tile{ AsIs: </0 Reuse: & DoArgList/4 AsIs: s.Next#1/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoArgList, "DoArgList" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymbCompare, "SymbCompare" },
    { Lexicon, "Lexicon" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: t.$ t.$
    //GLOBAL GEN: t.$ t.$
    // </0 & Compare/4 t.idx#0/5 t.idxV#0/7 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // ( e.idx ) ( e.idx )
    // </0 & Compare/4 (/5 e.Left#1/9 )/6 (/7 e.Right#1/11 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon/4 AsIs: (/5 AsIs: e.Left#1/9 AsIs: )/6 AsIs: (/7 AsIs: e.Right#1/11 AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 5, 6, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    // ( e.idx ) s.idx
    // </0 & Compare/4 (/5 e.Left#1/9 )/6 s.Right#1/7 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icsVarTerm, 0, 11, 7},
    // closed e.Left#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Compare/4 (/5 e.Left#1/9 )/6 s.Right#1/7 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
    {refalrts::icReinitChar, 0, '>', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    // s.idx ( e.idx )
    // </0 & Compare/4 s.Left#1/5 (/7 e.Right#1/9 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 7},
    {refalrts::icsVarTerm, 0, 11, 5},
    // closed e.Right#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Compare/4 s.Left#1/5 (/7 e.Right#1/9 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    {refalrts::icReinitChar, 0, '<', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx s.idx
    // </0 & Compare/4 s.Left#1/5 s.Right#1/7 >/1
    {refalrts::icsVarTerm, 0, 9, 5},
    {refalrts::icsVarTerm, 0, 9, 7},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbCompare/4 AsIs: s.Left#1/5 AsIs: s.Right#1/7 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
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
  //FAST GEN: t.$ t.$
  //GLOBAL GEN: t.$ t.$
  // </0 & Compare/4 t.idx#0/5 t.idxV#0/7 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx )
    // </0 & Compare/4 (/5 e.Left#1/9 )/6 (/7 e.Right#1/11 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon/4 AsIs: (/5 AsIs: e.Left#1/9 AsIs: )/6 AsIs: (/7 AsIs: e.Right#1/11 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Lexicon, "Lexicon" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[5], context[6] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx
    // </0 & Compare/4 (/5 e.Left#1/9 )/6 s.Right#1/7 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    if( ! refalrts::svar_term( context[11], context[7] ) )
      continue;
    // closed e.Left#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Compare/4 (/5 e.Left#1/9 )/6 s.Right#1/7 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
    refalrts::reinit_char( context[1], '>' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( e.idx )
    // </0 & Compare/4 s.Left#1/5 (/7 e.Right#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_term( context[11], context[5] ) )
      continue;
    // closed e.Right#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Compare/4 s.Left#1/5 (/7 e.Right#1/9 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    refalrts::reinit_char( context[1], '<' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx s.idx
  // </0 & Compare/4 s.Left#1/5 s.Right#1/7 >/1
  if( ! refalrts::svar_term( context[9], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_term( context[9], context[7] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbCompare/4 AsIs: s.Left#1/5 AsIs: s.Right#1/7 AsIs: >/1 ]] }
  refalrts::update_name( context[4], SymbCompare, "SymbCompare" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Lexicon(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Lexicon_Aux, "Lexicon-Aux" },
    { Compare, "Compare" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ )
    //GLOBAL GEN: ( e.$ ) ( e.$ )
    // </0 & Lexicon/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    {refalrts::icOnFailGoTo, +25, 0, 0},
    // ( t.idx e.idx ) ( t.idx e.idx )
    // </0 & Lexicon/4 (/7 t.FirstLeft#1/13 e.Left#1/5 )/8 (/11 t.FirstRight#1/15 e.Right#1/9 )/12 >/1
    {refalrts::icSave, 0, 20, 5},
    {refalrts::ictVarLeftSave, 0, 13, 20},
    // closed e.Left#1 as range 20(5)
    {refalrts::icSave, 0, 22, 9},
    {refalrts::ictVarLeftSave, 0, 15, 22},
    // closed e.Right#1 as range 22(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-Aux/4 HalfReuse: </7 } & Compare/17 Tile{ AsIs: t.FirstLeft#1/13 } Tile{ AsIs: t.FirstRight#1/15 } >/18 (/19 Tile{ AsIs: e.Left#1/20(5) } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Right#1/22(9) } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 1, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 19, 8, 0},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // ( ) ( )
    // </0 & Lexicon/4 (/7 )/8 (/11 )/12 >/1
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icSave, 0, 22, 9},
    {refalrts::icEmpty, 0, 0, 22},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Lexicon/4 (/7 )/8 (/11 )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/1 ]] }
    {refalrts::icReinitChar, 0, '=', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    // ( ) ( e.idx )
    // </0 & Lexicon/4 (/7 )/8 (/11 e.Right#1/9 )/12 >/1
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icEmpty, 0, 0, 20},
    // closed e.Right#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Lexicon/4 (/7 )/8 (/11 e.Right#1/9 )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    {refalrts::icReinitChar, 0, '<', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( )
    // </0 & Lexicon/4 (/7 e.Left#1/5 )/8 (/11 )/12 >/1
    {refalrts::icEmpty, 0, 0, 9},
    // closed e.Left#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Lexicon/4 (/7 e.Left#1/5 )/8 (/11 )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
    {refalrts::icReinitChar, 0, '>', 1},
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
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ )
  // </0 & Lexicon/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
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
    // ( t.idx e.idx ) ( t.idx e.idx )
    // </0 & Lexicon/4 (/7 t.FirstLeft#1/13 e.Left#1/5 )/8 (/11 t.FirstRight#1/15 e.Right#1/9 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[14] = refalrts::tvar_left( context[13], context[20], context[21] );
    if( ! context[14] )
      continue;
    // closed e.Left#1 as range 20(5)
    context[22] = context[9];
    context[23] = context[10];
    context[16] = refalrts::tvar_left( context[15], context[22], context[23] );
    if( ! context[16] )
      continue;
    // closed e.Right#1 as range 22(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-Aux/4 HalfReuse: </7 } & Compare/17 Tile{ AsIs: t.FirstLeft#1/13 } Tile{ AsIs: t.FirstRight#1/15 } >/18 (/19 Tile{ AsIs: e.Left#1/20(5) } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Right#1/22(9) } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[17], Compare, "Compare" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Lexicon_Aux, "Lexicon-Aux" );
    refalrts::reinit_open_call( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[19], context[8] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ) ( )
    // </0 & Lexicon/4 (/7 )/8 (/11 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    context[22] = context[9];
    context[23] = context[10];
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Lexicon/4 (/7 )/8 (/11 )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/1 ]] }
    refalrts::reinit_char( context[1], '=' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ) ( e.idx )
    // </0 & Lexicon/4 (/7 )/8 (/11 e.Right#1/9 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.Right#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Lexicon/4 (/7 )/8 (/11 e.Right#1/9 )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    refalrts::reinit_char( context[1], '<' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) ( )
  // </0 & Lexicon/4 (/7 e.Left#1/5 )/8 (/11 )/12 >/1
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Lexicon/4 (/7 e.Left#1/5 )/8 (/11 )/12 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
  refalrts::reinit_char( context[1], '>' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Lexicon_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Lexicon, "Lexicon" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: s.$ ( e.$ ) ( e.$ )
    //GLOBAL GEN: s.$ ( e.$ ) ( e.$ )
    // </0 & Lexicon-Aux/4 s.idx#0/13 (/11 e.idxVB#0/9 )/12 (/7 e.idxVTB#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    // closed e.idxVB#0 as range 9
    // closed e.idxVTB#0 as range 5
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    // '<' ( e.idx ) ( e.idx )
    // </0 & Lexicon-Aux/4 '<'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 13},
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Lexicon-Aux/4 '<'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    {refalrts::icReinitChar, 0, '<', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // '=' ( e.idx ) ( e.idx )
    // </0 & Lexicon-Aux/4 '='/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('='), 13},
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Lexicon/13 AsIs: (/11 AsIs: e.Left#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Right#1/5 AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // '>' ( e.idx ) ( e.idx )
    // </0 & Lexicon-Aux/4 '>'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('>'), 13},
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Lexicon-Aux/4 '>'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
    {refalrts::icReinitChar, 0, '>', 1},
    {refalrts::icSetRes, 0, 0, 1},
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
  //FAST GEN: s.$ ( e.$ ) ( e.$ )
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ )
  // </0 & Lexicon-Aux/4 s.idx#0/13 (/11 e.idxVB#0/9 )/12 (/7 e.idxVTB#0/5 )/8 >/1
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
  // closed e.idxVTB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // '<' ( e.idx ) ( e.idx )
    // </0 & Lexicon-Aux/4 '<'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
    if( ! refalrts::char_term( '<', context[13] ) )
      continue;
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Lexicon-Aux/4 '<'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    refalrts::reinit_char( context[1], '<' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '=' ( e.idx ) ( e.idx )
    // </0 & Lexicon-Aux/4 '='/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
    if( ! refalrts::char_term( '=', context[13] ) )
      continue;
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Lexicon/13 AsIs: (/11 AsIs: e.Left#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Right#1/5 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[13], Lexicon, "Lexicon" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // '>' ( e.idx ) ( e.idx )
  // </0 & Lexicon-Aux/4 '>'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 >/1
  if( ! refalrts::char_term( '>', context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#1 as range 9
  // closed e.Right#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Lexicon-Aux/4 '>'/13 (/11 e.Left#1/9 )/12 (/7 e.Right#1/5 )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
  refalrts::reinit_char( context[1], '>' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Compare_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymbCompare, "SymbCompare" },
    { Lexicon_T, "Lexicon-T" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: t.$ t.$
    //GLOBAL GEN: t.$ t.$
    // </0 & Compare-T/4 t.idx#0/5 t.idxV#0/7 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    // ( e.idx ) ( e.idx )
    // </0 & Compare-T/4 (/5 e.Left#1/9 )/6 (/7 e.Right#1/11 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icBracketTerm, 0, 11, 7},
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T/4 AsIs: (/5 } )/13 (/14 Tile{ AsIs: e.Left#1/9 } )/15 (/16 Tile{ AsIs: )/6 AsIs: (/7 AsIs: e.Right#1/11 AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 16, 6, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icLinkBrackets, 5, 13, 0},
    {refalrts::icSetRes, 0, 0, 6},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // ( e.idx ) s.idx
    // </0 & Compare-T/4 (/5 e.Left#1/9 )/6 s.Right#1/7 >/1
    {refalrts::icBracketTerm, 0, 9, 5},
    {refalrts::icsVarTerm, 0, 11, 7},
    // closed e.Left#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/4 AsIs: (/5 AsIs: e.Left#1/9 AsIs: )/6 AsIs: s.Right#1/7 } Tile{ ]] }
    {refalrts::icReinitChar, 0, '>', 4},
    {refalrts::icLinkBrackets, 5, 6, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 7, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // s.idx ( e.idx )
    // </0 & Compare-T/4 s.Left#1/5 (/7 e.Right#1/9 )/8 >/1
    {refalrts::icBracketTerm, 0, 9, 7},
    {refalrts::icsVarTerm, 0, 11, 5},
    // closed e.Right#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/4 AsIs: s.Left#1/5 AsIs: (/7 AsIs: e.Right#1/9 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitChar, 0, '<', 4},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx s.idx
    // </0 & Compare-T/4 s.Left#1/5 s.Right#1/7 >/1
    {refalrts::icsVarTerm, 0, 9, 5},
    {refalrts::icsVarTerm, 0, 9, 7},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbCompare/4 AsIs: s.Left#1/5 AsIs: s.Right#1/7 AsIs: >/1 } s.Left#1/5/9 s.Right#1/7/10 Tile{ ]] }
    {refalrts::icCopySTVar, 9, 5, 0},
    {refalrts::icCopySTVar, 10, 7, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
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
  //FAST GEN: t.$ t.$
  //GLOBAL GEN: t.$ t.$
  // </0 & Compare-T/4 t.idx#0/5 t.idxV#0/7 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx )
    // </0 & Compare-T/4 (/5 e.Left#1/9 )/6 (/7 e.Right#1/11 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    // closed e.Left#1 as range 9
    // closed e.Right#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T/4 AsIs: (/5 } )/13 (/14 Tile{ AsIs: e.Left#1/9 } )/15 (/16 Tile{ AsIs: )/6 AsIs: (/7 AsIs: e.Right#1/11 AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Lexicon_T, "Lexicon-T" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[6] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[5], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx
    // </0 & Compare-T/4 (/5 e.Left#1/9 )/6 s.Right#1/7 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    if( ! refalrts::svar_term( context[11], context[7] ) )
      continue;
    // closed e.Left#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/4 AsIs: (/5 AsIs: e.Left#1/9 AsIs: )/6 AsIs: s.Right#1/7 } Tile{ ]] }
    refalrts::reinit_char( context[4], '>' );
    refalrts::link_brackets( context[5], context[6] );
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
    // s.idx ( e.idx )
    // </0 & Compare-T/4 s.Left#1/5 (/7 e.Right#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_term( context[11], context[5] ) )
      continue;
    // closed e.Right#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/4 AsIs: s.Left#1/5 AsIs: (/7 AsIs: e.Right#1/9 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_char( context[4], '<' );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx s.idx
  // </0 & Compare-T/4 s.Left#1/5 s.Right#1/7 >/1
  if( ! refalrts::svar_term( context[9], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_term( context[9], context[7] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbCompare/4 AsIs: s.Left#1/5 AsIs: s.Right#1/7 AsIs: >/1 } s.Left#1/5/9 s.Right#1/7/10 Tile{ ]] }
  if (! refalrts::copy_stvar(context[9], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[7]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], SymbCompare, "SymbCompare" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Lexicon_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Lexicon_T_Aux, "Lexicon-T-Aux" },
    { Compare_T, "Compare-T" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
    //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
    // </0 & Lexicon-T/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 17, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTB#0 as range 13
    // closed e.idxTTTB#0 as range 17
    {refalrts::icOnFailGoTo, +28, 0, 0},
    // ( e.idx ) ( t.idx e.idx ) ( e.idx ) ( t.idx e.idx )
    // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 t.FirstLeft#1/21 e.Left#1/9 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 t.FirstRight#1/23 e.Right#1/17 )/20 >/1
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 13
    {refalrts::icSave, 0, 28, 9},
    {refalrts::ictVarLeftSave, 0, 21, 28},
    // closed e.Left#1 as range 28(9)
    {refalrts::icSave, 0, 30, 17},
    {refalrts::ictVarLeftSave, 0, 23, 30},
    // closed e.Right#1 as range 30(17)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T-Aux/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } )/25 </26 & Compare-T/27 Tile{ AsIs: t.FirstLeft#1/21 } Tile{ AsIs: t.FirstRight#1/23 } Tile{ HalfReuse: >/12 AsIs: (/15 } Tile{ AsIs: e.Left#1/28(9) } Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.Right#1/30(17) } Tile{ AsIs: )/20 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocFunc, 0, 1, 27},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icLinkBrackets, 11, 25, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 25, 27, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // ( e.idx ) ( ) ( e.idx ) ( )
    // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 )/20 >/1
    {refalrts::icSave, 0, 28, 9},
    {refalrts::icEmpty, 0, 0, 28},
    {refalrts::icSave, 0, 30, 17},
    {refalrts::icEmpty, 0, 0, 30},
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  )/12 (/15 {REMOVED TILE}  )/16 (/19 )/20 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitChar, 0, '=', 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 4, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    // ( e.idx ) ( ) ( e.idx ) ( e.idx )
    // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 e.Right#1/17 )/20 >/1
    {refalrts::icSave, 0, 28, 9},
    {refalrts::icEmpty, 0, 0, 28},
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 13
    // closed e.Right#1 as range 17
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  )/12 (/15 {REMOVED TILE}  )/16 (/19 {REMOVED TILE}  )/20 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } Tile{ AsIs: e.Right#1/17 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitChar, 0, '<', 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 4, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) ( )
    // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.Left#1/9 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 )/20 >/1
    {refalrts::icEmpty, 0, 0, 17},
    // closed e.ScannedLeft#1 as range 5
    // closed e.Left#1 as range 9
    // closed e.ScannedRight#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 (/11 {REMOVED TILE}  {REMOVED TILE}  (/19 )/20 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '>'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: e.Left#1/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.ScannedRight#1/13 AsIs: )/16 } Tile{ ]] }
    {refalrts::icReinitChar, 0, '>', 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 4, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 12, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 4},
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
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ )
  // </0 & Lexicon-T/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTTB#0 as range 17
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( t.idx e.idx ) ( e.idx ) ( t.idx e.idx )
    // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 t.FirstLeft#1/21 e.Left#1/9 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 t.FirstRight#1/23 e.Right#1/17 )/20 >/1
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 13
    context[28] = context[9];
    context[29] = context[10];
    context[22] = refalrts::tvar_left( context[21], context[28], context[29] );
    if( ! context[22] )
      continue;
    // closed e.Left#1 as range 28(9)
    context[30] = context[17];
    context[31] = context[18];
    context[24] = refalrts::tvar_left( context[23], context[30], context[31] );
    if( ! context[24] )
      continue;
    // closed e.Right#1 as range 30(17)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T-Aux/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } )/25 </26 & Compare-T/27 Tile{ AsIs: t.FirstLeft#1/21 } Tile{ AsIs: t.FirstRight#1/23 } Tile{ HalfReuse: >/12 AsIs: (/15 } Tile{ AsIs: e.Left#1/28(9) } Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.Right#1/30(17) } Tile{ AsIs: )/20 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], Compare_T, "Compare-T" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Lexicon_T_Aux, "Lexicon-T-Aux" );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( ) ( e.idx ) ( )
    // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 )/20 >/1
    context[28] = context[9];
    context[29] = context[10];
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    context[30] = context[17];
    context[31] = context[18];
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  )/12 (/15 {REMOVED TILE}  )/16 (/19 )/20 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[4], '=' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[4], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( ) ( e.idx ) ( e.idx )
    // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 e.Right#1/17 )/20 >/1
    context[28] = context[9];
    context[29] = context[10];
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 13
    // closed e.Right#1 as range 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  )/12 (/15 {REMOVED TILE}  )/16 (/19 {REMOVED TILE}  )/20 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/4 AsIs: (/7 AsIs: e.ScannedLeft#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScannedRight#1/13 } Tile{ AsIs: e.Right#1/17 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[4], '<' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[4], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) ( e.idx ) ( e.idx ) ( )
  // </0 & Lexicon-T/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.Left#1/9 )/12 (/15 e.ScannedRight#1/13 )/16 (/19 )/20 >/1
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedLeft#1 as range 5
  // closed e.Left#1 as range 9
  // closed e.ScannedRight#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 (/11 {REMOVED TILE}  {REMOVED TILE}  (/19 )/20 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: '>'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: e.Left#1/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.ScannedRight#1/13 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_char( context[0], '>' );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Lexicon_T_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Lexicon_T, "Lexicon-T" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ ) s.$ t.$ t.$ ( e.$ ) ( e.$ )
    //GLOBAL GEN: ( e.$ ) ( e.$ ) s.$ t.$ t.$ ( e.$ ) ( e.$ )
    // </0 & Lexicon-T-Aux/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 s.idxTT#0/21 t.idxTTV#0/22 t.idxTTVV#0/24 (/19 e.idxTTVVVB#0/17 )/20 (/15 e.idxTTVVVTB#0/13 )/16 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketRightSave, 0, 13, 2},
    {refalrts::icBracketRightSave, 0, 17, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTVVVB#0 as range 17
    // closed e.idxTTVVVTB#0 as range 13
    {refalrts::icsVarLeft, 0, 21, 2},
    {refalrts::ictVarLeftSave, 0, 22, 2},
    {refalrts::ictVarLeftSave, 0, 24, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // ( e.idx ) ( e.idx ) '<' t.idx t.idx ( e.idx ) ( e.idx )
    // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '<'/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 21},
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 9
    // closed e.Left#1 as range 17
    // closed e.Right#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 (/11 {REMOVED TILE}  )/12 '<'/21 {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/16 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '<'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: e.Right#1/13 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitChar, 0, '<', 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 15, 1, 0},
    {refalrts::icLinkBrackets, 4, 20, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 24, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 20, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 22, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    // ( e.idx ) ( e.idx ) '=' t.idx t.idx ( e.idx ) ( e.idx )
    // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '='/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('='), 21},
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 9
    // closed e.Left#1 as range 17
    // closed e.Right#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T/4 AsIs: (/7 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/12 HalfReuse: (/21 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: )/20 AsIs: (/15 AsIs: e.Right#1/13 AsIs: )/16 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 21, 20, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 20},
    {refalrts::icSpliceTile, 24, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 12, 21, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icSpliceTile, 22, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( e.idx ) '>' t.idx t.idx ( e.idx ) ( e.idx )
    // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '>'/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('>'), 21},
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 9
    // closed e.Left#1 as range 17
    // closed e.Right#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 (/11 {REMOVED TILE}  )/12 '>'/21 {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/16 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '>'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: e.Right#1/13 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitChar, 0, '>', 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 15, 1, 0},
    {refalrts::icLinkBrackets, 4, 20, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 24, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 20, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 22, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 4},
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
  //FAST GEN: ( e.$ ) ( e.$ ) s.$ t.$ t.$ ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ ) s.$ t.$ t.$ ( e.$ ) ( e.$ )
  // </0 & Lexicon-T-Aux/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 s.idxTT#0/21 t.idxTTV#0/22 t.idxTTVV#0/24 (/19 e.idxTTVVVB#0/17 )/20 (/15 e.idxTTVVVTB#0/13 )/16 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTVVVB#0 as range 17
  // closed e.idxTTVVVTB#0 as range 13
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::tvar_left( context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::tvar_left( context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) '<' t.idx t.idx ( e.idx ) ( e.idx )
    // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '<'/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
    if( ! refalrts::char_term( '<', context[21] ) )
      continue;
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 9
    // closed e.Left#1 as range 17
    // closed e.Right#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 (/11 {REMOVED TILE}  )/12 '<'/21 {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/16 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '<'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: e.Right#1/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[0], '<' );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[15], context[1] );
    refalrts::link_brackets( context[4], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[15] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) '=' t.idx t.idx ( e.idx ) ( e.idx )
    // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '='/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
    if( ! refalrts::char_term( '=', context[21] ) )
      continue;
    // closed e.ScannedLeft#1 as range 5
    // closed e.ScannedRight#1 as range 9
    // closed e.Left#1 as range 17
    // closed e.Right#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Lexicon-T/4 AsIs: (/7 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/12 HalfReuse: (/21 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: )/20 AsIs: (/15 AsIs: e.Right#1/13 AsIs: )/16 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Lexicon_T, "Lexicon-T" );
    refalrts::reinit_open_bracket( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[21], context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[21] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) ( e.idx ) '>' t.idx t.idx ( e.idx ) ( e.idx )
  // </0 & Lexicon-T-Aux/4 (/7 e.ScannedLeft#1/5 )/8 (/11 e.ScannedRight#1/9 )/12 '>'/21 t.NextLeft#1/22 t.NextRight#1/24 (/19 e.Left#1/17 )/20 (/15 e.Right#1/13 )/16 >/1
  if( ! refalrts::char_term( '>', context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedLeft#1 as range 5
  // closed e.ScannedRight#1 as range 9
  // closed e.Left#1 as range 17
  // closed e.Right#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 (/11 {REMOVED TILE}  )/12 '>'/21 {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/16 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: '>'/0 HalfReuse: (/4 } Tile{ AsIs: e.ScannedLeft#1/5 } Tile{ AsIs: t.NextLeft#1/22 } Tile{ AsIs: e.Left#1/17 } Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.ScannedRight#1/9 } Tile{ AsIs: t.NextRight#1/24 } Tile{ AsIs: e.Right#1/13 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_char( context[0], '>' );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[4], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[20], context[15] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Type(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymbType, "SymbType" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TypeBracket<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: t.$
    //GLOBAL GEN: t.$
    // </0 & Type/4 t.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    // ( e.idx )
    // </0 & Type/4 (/5 e.InBracket#1/7 )/6 >/1
    {refalrts::icBracketTerm, 0, 7, 5},
    // closed e.InBracket#1 as range 7
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Type/4 (/5 e.InBracket#1/7 )/6 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TypeBracket/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx
    // </0 & Type/4 s.Symbol#1/5 >/1
    {refalrts::icsVarTerm, 0, 7, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbType/4 AsIs: s.Symbol#1/5 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
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
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Type/4 t.idx#0/5 >/1
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
    // ( e.idx )
    // </0 & Type/4 (/5 e.InBracket#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    // closed e.InBracket#1 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Type/4 (/5 e.InBracket#1/7 )/6 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TypeBracket/1 ]] }
    refalrts::reinit_ident( context[1], & ident_TypeBracket<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx
  // </0 & Type/4 s.Symbol#1/5 >/1
  if( ! refalrts::svar_term( context[7], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbType/4 AsIs: s.Symbol#1/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], SymbType, "SymbType" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Type_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymbType, "SymbType" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TypeBracket<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & Type-T/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // ( e.idx ) e.idx
    // </0 & Type-T/4 (/7 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 5, 9},
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 9(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TypeBracket/4 AsIs: (/7 AsIs: e.InBrackets#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/9(2) } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 4, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    // s.idx e.idx
    // </0 & Type-T/4 s.Symbol#1/5 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 5, 9},
    // closed e.Tail#1 as range 9(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbType/4 AsIs: s.Symbol#1/5 } Tile{ AsIs: >/1 } s.Symbol#1/5/6 Tile{ AsIs: e.Tail#1/9(2) } Tile{ ]] }
    {refalrts::icCopySTVar, 6, 5, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 6, 6, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & Type-T/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Type-T/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '*'/1 ]] }
    {refalrts::icReinitChar, 0, '*', 1},
    {refalrts::icSetRes, 0, 0, 1},
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
  //GLOBAL GEN: e.$
  // </0 & Type-T/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) e.idx
    // </0 & Type-T/4 (/7 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[9], context[10] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TypeBracket/4 AsIs: (/7 AsIs: e.InBrackets#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/9(2) } Tile{ ]] }
    refalrts::reinit_ident( context[4], & ident_TypeBracket<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx e.idx
    // </0 & Type-T/4 s.Symbol#1/5 e.Tail#1/2 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_left( context[5], context[9], context[10] ) )
      continue;
    // closed e.Tail#1 as range 9(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SymbType/4 AsIs: s.Symbol#1/5 } Tile{ AsIs: >/1 } s.Symbol#1/5/6 Tile{ AsIs: e.Tail#1/9(2) } Tile{ ]] }
    if (! refalrts::copy_stvar(context[6], context[5]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], SymbType, "SymbType" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & Type-T/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Type-T/4 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '*'/1 ]] }
  refalrts::reinit_char( context[1], '*' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Trim(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Trim_R, "Trim-R" },
    { Trim, "Trim" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & Trim/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // ' ' e.idx
    // </0 & Trim/4 ' '/5 e.Line#1/2 >/1
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>(' '), 6},
    // closed e.Line#1 as range 6(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // '\t' e.idx
    // </0 & Trim/4 '\t'/5 e.Line#1/2 >/1
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\t'), 6},
    // closed e.Line#1 as range 6(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // '\r' e.idx
    // </0 & Trim/4 '\r'/5 e.Line#1/2 >/1
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\r'), 6},
    // closed e.Line#1 as range 6(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // '\n' e.idx
    // </0 & Trim/4 '\n'/5 e.Line#1/2 >/1
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\n'), 6},
    // closed e.Line#1 as range 6(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // e.idx
    // </0 & Trim/4 e.Line#1/2 >/1
    // closed e.Line#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Trim-R/4 AsIs: e.Line#1/2 AsIs: >/1 ]] }
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
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Trim/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // ' ' e.idx
    // </0 & Trim/4 ' '/5 e.Line#1/2 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_left( ' ', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], Trim, "Trim" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\t' e.idx
    // </0 & Trim/4 '\t'/5 e.Line#1/2 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_left( '\t', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], Trim, "Trim" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\r' e.idx
    // </0 & Trim/4 '\r'/5 e.Line#1/2 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_left( '\r', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], Trim, "Trim" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\n' e.idx
    // </0 & Trim/4 '\n'/5 e.Line#1/2 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_left( '\n', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Trim/5 AsIs: e.Line#1/6(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], Trim, "Trim" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // e.idx
  // </0 & Trim/4 e.Line#1/2 >/1
  // closed e.Line#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Trim-R/4 AsIs: e.Line#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], Trim_R, "Trim-R" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Trim_R(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & Trim-R/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // e.idx ' '
    // </0 & Trim-R/4 e.Line#1/2 ' '/5 >/1
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icCharRightSave, 5, static_cast<unsigned char>(' '), 6},
    // closed e.Line#1 as range 6(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // e.idx '\t'
    // </0 & Trim-R/4 e.Line#1/2 '\t'/5 >/1
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icCharRightSave, 5, static_cast<unsigned char>('\t'), 6},
    // closed e.Line#1 as range 6(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // e.idx '\r'
    // </0 & Trim-R/4 e.Line#1/2 '\r'/5 >/1
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icCharRightSave, 5, static_cast<unsigned char>('\r'), 6},
    // closed e.Line#1 as range 6(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // e.idx '\n'
    // </0 & Trim-R/4 e.Line#1/2 '\n'/5 >/1
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icCharRightSave, 5, static_cast<unsigned char>('\n'), 6},
    // closed e.Line#1 as range 6(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // e.idx
    // </0 & Trim-R/4 e.Line#1/2 >/1
    // closed e.Line#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Trim-R/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#1/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
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
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Trim-R/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx ' '
    // </0 & Trim-R/4 e.Line#1/2 ' '/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_right( ' ', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx '\t'
    // </0 & Trim-R/4 e.Line#1/2 '\t'/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_right( '\t', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx '\r'
    // </0 & Trim-R/4 e.Line#1/2 '\r'/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_right( '\r', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx '\n'
    // </0 & Trim-R/4 e.Line#1/2 '\n'/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::char_right( '\n', context[6], context[7] );
    if( ! context[5] )
      continue;
    // closed e.Line#1 as range 6(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Trim-R/4 AsIs: e.Line#1/6(2) HalfReuse: >/5 } Tile{ ]] }
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // e.idx
  // </0 & Trim-R/4 e.Line#1/2 >/1
  // closed e.Line#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Trim-R/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Seq_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Seq, "Seq" },
    { Fetch, "Fetch" },
    { Apply, "Apply" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Seq$2\1/4 t.Func#1/5 (/9 e.Funcs#1/7 )/10 e.Arg#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 7, 2},
    // closed e.Funcs#1 as range 7
    // closed e.Arg#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func#1/5 } Tile{ AsIs: e.Arg#2/2 } >/13 </14 Tile{ HalfReuse: & Seq/9 AsIs: e.Funcs#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 2, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
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
  // </0 & Seq$2\1/4 t.Func#1/5 (/9 e.Funcs#1/7 )/10 e.Arg#2/2 >/1
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
  // closed e.Funcs#1 as range 7
  // closed e.Arg#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func#1/5 } Tile{ AsIs: e.Arg#2/2 } >/13 </14 Tile{ HalfReuse: & Seq/9 AsIs: e.Funcs#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Apply, "Apply" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_name( context[9], Seq, "Seq" );
  refalrts::reinit_close_call( context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Seq_S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Seq$3\1/4 e.Arg#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Arg#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Seq$3\1/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg#2/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // </0 & Seq$3\1/4 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Seq$3\1/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_Seq_S3L1, "Seq$3\\1" },
    { refalrts::create_closure, "@create_closure@" },
    { gen_Seq_S2L1, "Seq$2\\1" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & Seq/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +8, 0, 0},
    // t.idx
    // </0 & Seq/4 t.Func#1/5 >/1
    {refalrts::icSave, 0, 10, 2},
    {refalrts::ictVarLeftSave, 0, 5, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Seq/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Func#1/5 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // t.idx e.idx
    // </0 & Seq/4 t.Func#1/5 e.Funcs#1/2 >/1
    {refalrts::icSave, 0, 10, 2},
    {refalrts::ictVarLeftSave, 0, 5, 10},
    // closed e.Funcs#1 as range 10(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & @create_closure@/4 } & Seq$2\1/7 Tile{ AsIs: t.Func#1/5 } (/8 Tile{ AsIs: e.Funcs#1/10(2) } )/9 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 2, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & Seq/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Seq/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Seq$3\1/1 ]] }
    {refalrts::icReinitFunc, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
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
  //GLOBAL GEN: e.$
  // </0 & Seq/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // t.idx
    // </0 & Seq/4 t.Func#1/5 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[6] = refalrts::tvar_left( context[5], context[10], context[11] );
    if( ! context[6] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Seq/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Func#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // t.idx e.idx
    // </0 & Seq/4 t.Func#1/5 e.Funcs#1/2 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[6] = refalrts::tvar_left( context[5], context[10], context[11] );
    if( ! context[6] )
      continue;
    // closed e.Funcs#1 as range 10(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & @create_closure@/4 } & Seq$2\1/7 Tile{ AsIs: t.Func#1/5 } (/8 Tile{ AsIs: e.Funcs#1/10(2) } )/9 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[7], gen_Seq_S2L1, "Seq$2\\1" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], refalrts::create_closure, "@create_closure@" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & Seq/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Seq/4 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & Seq$3\1/1 ]] }
  refalrts::reinit_name( context[1], gen_Seq_S3L1, "Seq$3\\1" );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Sort_S2L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
    //GLOBAL GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
    // </0 & Sort$2\1\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 (/17 e.idxTVTB#0/15 )/18 s.idxTVTT#0/19 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    // closed e.idxTVB#0 as range 11
    // closed e.idxTVTB#0 as range 15
    {refalrts::icsVarLeft, 0, 19, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '<'
    // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '<'/19 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 19},
    // closed e.Less#2 as range 5
    // closed e.Equal#2 as range 11
    // closed e.Greater#2 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.Less#2/5 } Tile{ AsIs: t.Next#2/9 } Tile{ AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Equal#2/11 AsIs: )/14 AsIs: (/17 AsIs: e.Greater#2/15 AsIs: )/18 HalfReuse: )/19 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icLinkBrackets, 0, 19, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 19, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '='
    // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '='/19 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('='), 19},
    // closed e.Less#2 as range 5
    // closed e.Equal#2 as range 11
    // closed e.Greater#2 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Less#2/5 AsIs: )/8 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Equal#2/11 } Tile{ AsIs: t.Next#2/9 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Greater#2/15 AsIs: )/18 HalfReuse: )/19 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icLinkBrackets, 4, 19, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 14, 19, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '>'
    // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '>'/19 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('>'), 19},
    // closed e.Less#2 as range 5
    // closed e.Equal#2 as range 11
    // closed e.Greater#2 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/18 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Less#2/5 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Equal#2/11 AsIs: )/14 AsIs: (/17 } Tile{ AsIs: e.Greater#2/15 } Tile{ AsIs: t.Next#2/9 } Tile{ HalfReuse: )/19 HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 4, 1, 0},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 19},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 13, 17, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
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
  //FAST GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
  //GLOBAL GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
  // </0 & Sort$2\1\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 (/17 e.idxTVTB#0/15 )/18 s.idxTVTT#0/19 >/1
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
  // closed e.idxTVB#0 as range 11
  // closed e.idxTVTB#0 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '<'
    // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '<'/19 >/1
    if( ! refalrts::char_term( '<', context[19] ) )
      continue;
    // closed e.Less#2 as range 5
    // closed e.Equal#2 as range 11
    // closed e.Greater#2 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.Less#2/5 } Tile{ AsIs: t.Next#2/9 } Tile{ AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Equal#2/11 AsIs: )/14 AsIs: (/17 AsIs: e.Greater#2/15 AsIs: )/18 HalfReuse: )/19 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::link_brackets( context[0], context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[19] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '='
    // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '='/19 >/1
    if( ! refalrts::char_term( '=', context[19] ) )
      continue;
    // closed e.Less#2 as range 5
    // closed e.Equal#2 as range 11
    // closed e.Greater#2 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Less#2/5 AsIs: )/8 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Equal#2/11 } Tile{ AsIs: t.Next#2/9 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Greater#2/15 AsIs: )/18 HalfReuse: )/19 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::link_brackets( context[4], context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[19] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) t.idx ( e.idx ) ( e.idx ) '>'
  // </0 & Sort$2\1\1/4 (/7 e.Less#2/5 )/8 t.Next#2/9 (/13 e.Equal#2/11 )/14 (/17 e.Greater#2/15 )/18 '>'/19 >/1
  if( ! refalrts::char_term( '>', context[19] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Less#2 as range 5
  // closed e.Equal#2 as range 11
  // closed e.Greater#2 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/18 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Less#2/5 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Equal#2/11 AsIs: )/14 AsIs: (/17 } Tile{ AsIs: e.Greater#2/15 } Tile{ AsIs: t.Next#2/9 } Tile{ HalfReuse: )/19 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[19] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[17], context[19] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[19];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Sort_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_Sort_S2L1L1, "Sort$2\\1\\1" },
    { Fetch, "Fetch" },
    { refalrts::create_closure, "@create_closure@" },
    { Compare, "Compare" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Sort$2\1/4 t.Pivot#1/5 (/9 (/13 e.Less#2/11 )/14 (/17 e.Equal#2/15 )/18 (/21 e.Greater#2/19 )/22 )/10 t.Next#2/23 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 7, 2},
    {refalrts::icBracketLeftSave, 0, 11, 7},
    {refalrts::icBracketLeftSave, 0, 15, 7},
    {refalrts::icBracketLeftSave, 0, 19, 7},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.Less#2 as range 11
    // closed e.Equal#2 as range 15
    // closed e.Greater#2 as range 19
    {refalrts::ictVarLeftSave, 0, 23, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </25 & Compare/26 Tile{ AsIs: t.Next#2/23 } Tile{ AsIs: t.Pivot#1/5 } >/27 </28 & @create_closure@/29 Tile{ HalfReuse: & Sort$2\1\1/9 AsIs: (/13 AsIs: e.Less#2/11 AsIs: )/14 } t.Next#2/23/30 Tile{ AsIs: (/17 AsIs: e.Equal#2/15 AsIs: )/18 AsIs: (/21 AsIs: e.Greater#2/19 AsIs: )/22 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocFunc, 0, 3, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icAllocFunc, 0, 2, 29},
    {refalrts::icCopyEVar, 30, 23, 0},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 17, 10, 0},
    {refalrts::icSpliceTile, 30, 31, 0},
    {refalrts::icSpliceTile, 9, 14, 0},
    {refalrts::icSpliceTile, 27, 29, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
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
  // </0 & Sort$2\1/4 t.Pivot#1/5 (/9 (/13 e.Less#2/11 )/14 (/17 e.Equal#2/15 )/18 (/21 e.Greater#2/19 )/22 )/10 t.Next#2/23 >/1
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
  context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[7], context[8] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[7], context[8] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Less#2 as range 11
  // closed e.Equal#2 as range 15
  // closed e.Greater#2 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </25 & Compare/26 Tile{ AsIs: t.Next#2/23 } Tile{ AsIs: t.Pivot#1/5 } >/27 </28 & @create_closure@/29 Tile{ HalfReuse: & Sort$2\1\1/9 AsIs: (/13 AsIs: e.Less#2/11 AsIs: )/14 } t.Next#2/23/30 Tile{ AsIs: (/17 AsIs: e.Equal#2/15 AsIs: )/18 AsIs: (/21 AsIs: e.Greater#2/19 AsIs: )/22 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], Compare, "Compare" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], refalrts::create_closure, "@create_closure@" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[30], context[31], context[23], context[24]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_name( context[9], gen_Sort_S2L1L1, "Sort$2\\1\\1" );
  refalrts::reinit_close_call( context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[28] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[10] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Sort_S2L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Sort, "Sort" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Sort$2\2/4 (/7 (/11 e.Less#2/9 )/12 (/15 e.Equal#2/13 )/16 (/19 e.Greater#2/17 )/20 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 13, 5},
    {refalrts::icBracketLeftSave, 0, 17, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Less#2 as range 9
    // closed e.Equal#2 as range 13
    // closed e.Greater#2 as range 17
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 (/11 {REMOVED TILE}  )/12 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sort/4 } Tile{ AsIs: e.Less#2/9 } Tile{ HalfReuse: >/15 AsIs: e.Equal#2/13 HalfReuse: </16 HalfReuse: & Sort/19 AsIs: e.Greater#2/17 HalfReuse: >/20 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icReinitFunc, 0, 0, 19},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 15, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
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
  // </0 & Sort$2\2/4 (/7 (/11 e.Less#2/9 )/12 (/15 e.Equal#2/13 )/16 (/19 e.Greater#2/17 )/20 )/8 >/1
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
  context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Less#2 as range 9
  // closed e.Equal#2 as range 13
  // closed e.Greater#2 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 (/11 {REMOVED TILE}  )/12 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sort/4 } Tile{ AsIs: e.Less#2/9 } Tile{ HalfReuse: >/15 AsIs: e.Equal#2/13 HalfReuse: </16 HalfReuse: & Sort/19 AsIs: e.Greater#2/17 HalfReuse: >/20 } Tile{ ]] }
  refalrts::update_name( context[4], Sort, "Sort" );
  refalrts::reinit_close_call( context[15] );
  refalrts::reinit_open_call( context[16] );
  refalrts::reinit_name( context[19], Sort, "Sort" );
  refalrts::reinit_close_call( context[20] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Sort(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { gen_Sort_S2L2, "Sort$2\\2" },
    { gen_Sort_S2L1, "Sort$2\\1" },
    { refalrts::create_closure, "@create_closure@" },
    { Reduce, "Reduce" },
    { Seq, "Seq" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & Sort/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +6, 0, 0},
    //
    // </0 & Sort/4 >/1
    {refalrts::icSave, 0, 28, 2},
    {refalrts::icEmpty, 0, 0, 28},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Sort/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // t.idx e.idx
    // </0 & Sort/4 t.Pivot#1/5 e.Items#1/2 >/1
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.Items#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Items#1/2 } </7 & Seq/8 (/9 & Reduce/10 </11 & @create_closure@/12 & Sort$2\1/13 Tile{ AsIs: t.Pivot#1/5 } >/14 (/15 (/16 )/17 (/18 t.Pivot#1/5/19 )/21 (/22 )/23 )/24 )/25 & Sort$2\2/26 >/27 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocFunc, 0, 5, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icAllocFunc, 0, 4, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 3, 12},
    {refalrts::icAllocFunc, 0, 2, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icCopyEVar, 19, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocFunc, 0, 1, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 9, 25, 0},
    {refalrts::icLinkBrackets, 15, 24, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 14, 27, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 7, 13, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Sort/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //
    // </0 & Sort/4 >/1
    context[28] = context[2];
    context[29] = context[3];
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Sort/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // t.idx e.idx
  // </0 & Sort/4 t.Pivot#1/5 e.Items#1/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Items#1/2 } </7 & Seq/8 (/9 & Reduce/10 </11 & @create_closure@/12 & Sort$2\1/13 Tile{ AsIs: t.Pivot#1/5 } >/14 (/15 (/16 )/17 (/18 t.Pivot#1/5/19 )/21 (/22 )/23 )/24 )/25 & Sort$2\2/26 >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Reduce, "Reduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "@create_closure@" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], gen_Sort_S2L1, "Sort$2\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], gen_Sort_S2L2, "Sort$2\\2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[9], context[25] );
  refalrts::link_brackets( context[15], context[24] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[27] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Min_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: t.$ t.$ s.$
    //GLOBAL GEN: t.$ t.$ s.$
    // </0 & Min$1\1/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    // t.idx t.idx '<'
    // </0 & Min$1\1/4 t.X#1/5 t.Y#1/7 '<'/9 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('<'), 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Min$1\1/4 {REMOVED TILE}  t.Y#1/7 '<'/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.X#1/5 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // t.idx t.idx s.idx
    // </0 & Min$1\1/4 t.X#1/5 t.Y#1/7 s.Other#2/9 >/1
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Min$1\1/4 t.X#1/5 {REMOVED TILE}  s.Other#2/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Y#1/7 } Tile{ ]] }
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
  //FAST GEN: t.$ t.$ s.$
  //GLOBAL GEN: t.$ t.$ s.$
  // </0 & Min$1\1/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // t.idx t.idx '<'
    // </0 & Min$1\1/4 t.X#1/5 t.Y#1/7 '<'/9 >/1
    if( ! refalrts::char_term( '<', context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Min$1\1/4 {REMOVED TILE}  t.Y#1/7 '<'/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.X#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // t.idx t.idx s.idx
  // </0 & Min$1\1/4 t.X#1/5 t.Y#1/7 s.Other#2/9 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Min$1\1/4 t.X#1/5 {REMOVED TILE}  s.Other#2/9 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Y#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Min(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Reduce, "Reduce" },
    { Compare, "Compare" },
    { gen_Min_S1L1, "Min$1\\1" },
    { refalrts::create_closure, "@create_closure@" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: t.$ e.$
    //GLOBAL GEN: t.$ e.$
    // </0 & Min/4 t.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +25, 0, 0},
    // t.idx t.idx
    // </0 & Min/4 t.X#1/5 t.Y#1/7 >/1
    {refalrts::icSave, 0, 20, 2},
    {refalrts::ictVarLeftSave, 0, 7, 20},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: t.X#1/5 AsIs: t.Y#1/7 AsIs: >/1 } </11 & @create_closure@/12 & Min$1\1/13 t.X#1/5/14 t.Y#1/7/16 >/18 >/19 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 4, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 3, 12},
    {refalrts::icAllocFunc, 0, 2, 13},
    {refalrts::icCopyEVar, 14, 5, 0},
    {refalrts::icCopyEVar, 16, 7, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 19, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // t.idx e.idx
    // </0 & Min/4 t.First#1/5 e.Tail#1/2 >/1
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce/0 AsIs: & Min/4 AsIs: t.First#1/5 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
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
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Min/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // t.idx t.idx
    // </0 & Min/4 t.X#1/5 t.Y#1/7 >/1
    context[20] = context[2];
    context[21] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[20], context[21] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: t.X#1/5 AsIs: t.Y#1/7 AsIs: >/1 } </11 & @create_closure@/12 & Min$1\1/13 t.X#1/5/14 t.Y#1/7/16 >/18 >/19 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "@create_closure@" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], gen_Min_S1L1, "Min$1\\1" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Compare, "Compare" );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // t.idx e.idx
  // </0 & Min/4 t.First#1/5 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce/0 AsIs: & Min/4 AsIs: t.First#1/5 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Reduce, "Reduce" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Max_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: t.$ t.$ s.$
    //GLOBAL GEN: t.$ t.$ s.$
    // </0 & Max$1\1/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::ictVarLeftSave, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    // t.idx t.idx '>'
    // </0 & Max$1\1/4 t.X#1/5 t.Y#1/7 '>'/9 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('>'), 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Max$1\1/4 {REMOVED TILE}  t.Y#1/7 '>'/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.X#1/5 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // t.idx t.idx s.idx
    // </0 & Max$1\1/4 t.X#1/5 t.Y#1/7 s.Other#2/9 >/1
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Max$1\1/4 t.X#1/5 {REMOVED TILE}  s.Other#2/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Y#1/7 } Tile{ ]] }
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
  //FAST GEN: t.$ t.$ s.$
  //GLOBAL GEN: t.$ t.$ s.$
  // </0 & Max$1\1/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // t.idx t.idx '>'
    // </0 & Max$1\1/4 t.X#1/5 t.Y#1/7 '>'/9 >/1
    if( ! refalrts::char_term( '>', context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Max$1\1/4 {REMOVED TILE}  t.Y#1/7 '>'/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.X#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // t.idx t.idx s.idx
  // </0 & Max$1\1/4 t.X#1/5 t.Y#1/7 s.Other#2/9 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Max$1\1/4 t.X#1/5 {REMOVED TILE}  s.Other#2/9 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Y#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Max(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Reduce, "Reduce" },
    { Compare, "Compare" },
    { gen_Max_S1L1, "Max$1\\1" },
    { refalrts::create_closure, "@create_closure@" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: t.$ e.$
    //GLOBAL GEN: t.$ e.$
    // </0 & Max/4 t.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +25, 0, 0},
    // t.idx t.idx
    // </0 & Max/4 t.X#1/5 t.Y#1/7 >/1
    {refalrts::icSave, 0, 20, 2},
    {refalrts::ictVarLeftSave, 0, 7, 20},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: t.X#1/5 AsIs: t.Y#1/7 AsIs: >/1 } </11 & @create_closure@/12 & Max$1\1/13 t.X#1/5/14 t.Y#1/7/16 >/18 >/19 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 4, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 3, 12},
    {refalrts::icAllocFunc, 0, 2, 13},
    {refalrts::icCopyEVar, 14, 5, 0},
    {refalrts::icCopyEVar, 16, 7, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 19, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // t.idx e.idx
    // </0 & Max/4 t.First#1/5 e.Tail#1/2 >/1
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce/0 AsIs: & Max/4 AsIs: t.First#1/5 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
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
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Max/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // t.idx t.idx
    // </0 & Max/4 t.X#1/5 t.Y#1/7 >/1
    context[20] = context[2];
    context[21] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[20], context[21] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: t.X#1/5 AsIs: t.Y#1/7 AsIs: >/1 } </11 & @create_closure@/12 & Max$1\1/13 t.X#1/5/14 t.Y#1/7/16 >/18 >/19 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "@create_closure@" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], gen_Max_S1L1, "Max$1\\1" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Compare, "Compare" );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // t.idx e.idx
  // </0 & Max/4 t.First#1/5 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce/0 AsIs: & Max/4 AsIs: t.First#1/5 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Reduce, "Reduce" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
//FROM Library
