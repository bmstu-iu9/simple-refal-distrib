// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Generate_SelfUpdate(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Generate_ToDifferent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FormatError(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Help(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main_CheckArgs(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #FILE
template <typename SREFAL_PARAM_INT>
struct ident_FILE {
  static const char *name() {
    return "FILE";
  }
};

// identifier #From
template <typename SREFAL_PARAM_INT>
struct ident_From {
  static const char *name() {
    return "From";
  }
};

// identifier #NoRequiredParam
template <typename SREFAL_PARAM_INT>
struct ident_NoRequiredParam {
  static const char *name() {
    return "NoRequiredParam";
  }
};

// identifier #Required
template <typename SREFAL_PARAM_INT>
struct ident_Required {
  static const char *name() {
    return "Required";
  }
};

// identifier #To
template <typename SREFAL_PARAM_INT>
struct ident_To {
  static const char *name() {
    return "To";
  }
};

// identifier #UnknownLongOption
template <typename SREFAL_PARAM_INT>
struct ident_UnknownLongOption {
  static const char *name() {
    return "UnknownLongOption";
  }
};

// identifier #UnknownShortOption
template <typename SREFAL_PARAM_INT>
struct ident_UnknownShortOption {
  static const char *name() {
    return "UnknownShortOption";
  }
};

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Main, "Main" },
    { ArgList, "ArgList" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Go/4 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 1, 5},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 7, 0},
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
  // </0 & Go/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ArgList, "ArgList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main, "Main" );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Main_CheckArgs, "Main_CheckArgs" },
    { GetOpt, "GetOpt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Required<int>::name,
    & ident_To<int>::name,
    & ident_From<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"to", 2},
    {"from", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & Main/4 (/7 e.ProgName#1/5 )/8 e.Options#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.ProgName#1 as range 5
    // closed e.Options#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.ProgName#1/5 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_CheckArgs/4 HalfReuse: </7 } & GetOpt/9 (/10 (/11 # From/12 # Required/13 'f'/14 (/15"from"/16 )/18 )/19 (/20 # To/21 # Required/22 'o'/23 (/24"to"/25 )/27 )/28 Tile{ AsIs: )/8 AsIs: e.Options#1/2 AsIs: >/1 } >/29 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 1, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icAllocIdent, 0, 2, 12},
    {refalrts::icAllocIdent, 0, 0, 13},
    {refalrts::icAllocChar, 0, 'f', 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icAllocString, 0, 1, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icAllocIdent, 0, 1, 21},
    {refalrts::icAllocIdent, 0, 0, 22},
    {refalrts::icAllocChar, 0, 'o', 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icAllocString, 0, 0, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 10, 8, 0},
    {refalrts::icLinkBrackets, 20, 28, 0},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icLinkBrackets, 11, 19, 0},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icSpliceTile, 9, 28, 0},
    {refalrts::icTrash, 0, 0, 7},
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
  // </0 & Main/4 (/7 e.ProgName#1/5 )/8 e.Options#1/2 >/1
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
  // closed e.ProgName#1 as range 5
  // closed e.Options#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.ProgName#1/5 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_CheckArgs/4 HalfReuse: </7 } & GetOpt/9 (/10 (/11 # From/12 # Required/13 'f'/14 (/15"from"/16 )/18 )/19 (/20 # To/21 # Required/22 'o'/23 (/24"to"/25 )/27 )/28 Tile{ AsIs: )/8 AsIs: e.Options#1/2 AsIs: >/1 } >/29 Tile{ ]] }
  if( ! refalrts::alloc_name( context[9], GetOpt, "GetOpt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_From<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], "from", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[21], & ident_To<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[22], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[25], context[26], "to", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main_CheckArgs, "Main_CheckArgs" );
  refalrts::reinit_open_call( context[7] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[10], context[8] );
  refalrts::link_brackets( context[20], context[28] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[11], context[19] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[9], context[28] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Main_CheckArgs_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FormatError, "FormatError" },
    { Help, "Help" },
    { Generate_ToDifferent, "Generate_ToDifferent" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_To<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"pected argument --to", 20}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S (E )E 
    //GLOBAL GEN:S (E )E 
    // </0 & lambda_Main_CheckArgs_0/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 e.idxVT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    // closed e.idxVB#0 as range 6
    // closed e.idxVT#0 as range 2
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //S (E )(#ToS E )
    // </0 & lambda_Main_CheckArgs_0/4 s.PosFrom#1/5 (/8 e.From#1/6 )/9 (/12 # To/14 s.PosTo#2/15 e.To#2/10 )/13 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icBracketLeftSave, 0, 10, 16},
    {refalrts::icIdentLeftSave, 14, 0, 10},
    {refalrts::icEmpty, 0, 0, 16},
    // closed e.From#1 as range 6
    {refalrts::icsVarLeft, 0, 15, 10},
    // closed e.To#2 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.PosFrom#1/5 {REMOVED TILE}  (/12 # To/14 s.PosTo#2/15 {REMOVED TILE}  )/13 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Generate_ToDifferent/4 } Tile{ AsIs: (/8 AsIs: e.From#1/6 AsIs: )/9 } Tile{ AsIs: e.To#2/10 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (E )E 
    // </0 & lambda_Main_CheckArgs_0/4 s.PosFrom#1/5 (/8 e.From#1/6 )/9 e.Other#2/2 >/1
    // closed e.From#1 as range 6
    // closed e.Other#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.From#1/6 {REMOVED TILE}  e.Other#2/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 AsIs: s.PosFrom#1/5 HalfReuse: 'e'/8 } Tile{ HalfReuse: 'x'/9 }"pected argument --to"/10 >/12 </13 & Help/14 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 1, 14},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'e', 8},
    {refalrts::icReinitChar, 0, 'x', 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 10, 14, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icTrash, 0, 0, 8},
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
  //FAST GEN:S (E )E 
  //GLOBAL GEN:S (E )E 
  // </0 & lambda_Main_CheckArgs_0/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 e.idxVT#0/2 >/1
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
  // closed e.idxVB#0 as range 6
  // closed e.idxVT#0 as range 2
  do {
    refalrts::start_sentence();
    //S (E )(#ToS E )
    // </0 & lambda_Main_CheckArgs_0/4 s.PosFrom#1/5 (/8 e.From#1/6 )/9 (/12 # To/14 s.PosTo#2/15 e.To#2/10 )/13 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[16], context[17] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_To<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.From#1 as range 6
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    // closed e.To#2 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.PosFrom#1/5 {REMOVED TILE}  (/12 # To/14 s.PosTo#2/15 {REMOVED TILE}  )/13 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Generate_ToDifferent/4 } Tile{ AsIs: (/8 AsIs: e.From#1/6 AsIs: )/9 } Tile{ AsIs: e.To#2/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], Generate_ToDifferent, "Generate_ToDifferent" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S (E )E 
  // </0 & lambda_Main_CheckArgs_0/4 s.PosFrom#1/5 (/8 e.From#1/6 )/9 e.Other#2/2 >/1
  // closed e.From#1 as range 6
  // closed e.Other#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.From#1/6 {REMOVED TILE}  e.Other#2/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 AsIs: s.PosFrom#1/5 HalfReuse: 'e'/8 } Tile{ HalfReuse: 'x'/9 }"pected argument --to"/10 >/12 </13 & Help/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "pected argument --to", 20 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Help, "Help" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FormatError, "FormatError" );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::reinit_char( context[9], 'x' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Main_CheckArgs_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FormatError, "FormatError" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_UnknownLongOption<int>::name,
    & ident_UnknownShortOption<int>::name,
    & ident_NoRequiredParam<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"known option --", 15},
    {"nknown option -", 15},
    {" expects paramete", 17},
    {"ption ", 6}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(S S E )
    //GLOBAL GEN:(S S E )
    // </0 & lambda_Main_CheckArgs_1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    // closed e.idxBVV#0 as range 5
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //(S #NoRequiredParamE )
    // </0 & lambda_Main_CheckArgs_1/4 (/7 s.Pos#2/9 # NoRequiredParam/10 e.Opt#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 2, 10},
    // closed e.Opt#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Pos#2/9 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #9/7 } Tile{ HalfReuse: 'o'/10 }"ption "/11 Tile{ AsIs: e.Opt#2/5 }" expects paramete"/13 Tile{ HalfReuse: 'r'/8 AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 3, 11},
    {refalrts::icAllocString, 0, 2, 13},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 9, 7},
    {refalrts::icReinitChar, 0, 'o', 10},
    {refalrts::icReinitChar, 0, 'r', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //(S #UnknownShortOptionS )
    // </0 & lambda_Main_CheckArgs_1/4 (/7 s.Pos#2/9 # UnknownShortOption/10 s.Option#2/11 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 10},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icsVarLeft, 0, 11, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Pos#2/9 {REMOVED TILE}  s.Option#2/11 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #9/7 } Tile{ HalfReuse: 'u'/10 }"nknown option -"/12 Tile{ HalfReuse: s.Option2 #11/8 AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 12},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 9, 7},
    {refalrts::icReinitChar, 0, 'u', 10},
    {refalrts::icReinitSVar, 0, 11, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(S #UnknownLongOptionE )
    // </0 & lambda_Main_CheckArgs_1/4 (/7 s.Pos#2/9 # UnknownLongOption/10 e.Option#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 10},
    // closed e.Option#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Pos#2/9 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #9/7 } Tile{ HalfReuse: 'u'/10 } Tile{ HalfReuse: 'n'/8 }"known option --"/11 Tile{ AsIs: e.Option#2/5 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 9, 7},
    {refalrts::icReinitChar, 0, 'u', 10},
    {refalrts::icReinitChar, 0, 'n', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icTrash, 0, 0, 7},
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
  //FAST GEN:(S S E )
  //GLOBAL GEN:(S S E )
  // </0 & lambda_Main_CheckArgs_1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBVV#0 as range 5
  do {
    refalrts::start_sentence();
    //(S #NoRequiredParamE )
    // </0 & lambda_Main_CheckArgs_1/4 (/7 s.Pos#2/9 # NoRequiredParam/10 e.Opt#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_NoRequiredParam<int>::name, context[10] ) )
      continue;
    // closed e.Opt#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Pos#2/9 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #9/7 } Tile{ HalfReuse: 'o'/10 }"ption "/11 Tile{ AsIs: e.Opt#2/5 }" expects paramete"/13 Tile{ HalfReuse: 'r'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], "ption ", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " expects paramete", 17 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], FormatError, "FormatError" );
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_char( context[10], 'o' );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S #UnknownShortOptionS )
    // </0 & lambda_Main_CheckArgs_1/4 (/7 s.Pos#2/9 # UnknownShortOption/10 s.Option#2/11 )/8 >/1
    if( ! refalrts::ident_term(  & ident_UnknownShortOption<int>::name, context[10] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::svar_left( context[11], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Pos#2/9 {REMOVED TILE}  s.Option#2/11 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #9/7 } Tile{ HalfReuse: 'u'/10 }"nknown option -"/12 Tile{ HalfReuse: s.Option2 #11/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[12], context[13], "nknown option -", 15 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], FormatError, "FormatError" );
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_svar( context[8], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(S #UnknownLongOptionE )
  // </0 & lambda_Main_CheckArgs_1/4 (/7 s.Pos#2/9 # UnknownLongOption/10 e.Option#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_UnknownLongOption<int>::name, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Option#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Pos#2/9 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #9/7 } Tile{ HalfReuse: 'u'/10 } Tile{ HalfReuse: 'n'/8 }"known option --"/11 Tile{ AsIs: e.Option#2/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[11], context[12], "known option --", 15 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FormatError, "FormatError" );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_char( context[10], 'u' );
  refalrts::reinit_char( context[8], 'n' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Main_CheckArgs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Main_CheckArgs_1, "lambda_Main_CheckArgs_1" },
    { Map, "Map" },
    { Help, "Help" },
    { WriteLine, "WriteLine" },
    { FormatError, "FormatError" },
    { lambda_Main_CheckArgs_0, "lambda_Main_CheckArgs_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" },
    { Generate_SelfUpdate, "Generate_SelfUpdate" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_To<int>::name,
    & ident_From<int>::name,
    & ident_FILE<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"mmand line error: unrecognized command line", 43},
    {"ected argument --from", 21}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )E 
    //GLOBAL GEN:(E )E 
    // </0 & Main_CheckArgs/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //()(#FILES E )
    // </0 & Main_CheckArgs/4 (/7 )/8 (/11 # FILE/13 s.Pos#1/14 e.FileName#1/9 )/12 >/1
    {refalrts::icSave, 0, 22, 2},
    {refalrts::icBracketLeftSave, 0, 9, 22},
    {refalrts::icIdentLeftSave, 13, 2, 9},
    {refalrts::icSave, 0, 24, 5},
    {refalrts::icEmpty, 0, 0, 24},
    {refalrts::icEmpty, 0, 0, 22},
    {refalrts::icsVarLeft, 0, 14, 9},
    // closed e.FileName#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 )/8 (/11 # FILE/13 s.Pos#1/14 {REMOVED TILE}  )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Generate_SelfUpdate/4 } Tile{ AsIs: e.FileName#1/9 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 8, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    //()E 
    // </0 & Main_CheckArgs/4 (/7 )/8 e.Begin#1/9 (/13 # From/15 s.PosFrom#1/16 e.From#1/11 )/14 e.End#1/2 >/1
    {refalrts::icSave, 0, 22, 5},
    {refalrts::icEmpty, 0, 0, 22},
    {refalrts::icSave, 0, 24, 2},
    {refalrts::icEPrepare, 0, 9, 24},
    {refalrts::icEStart, 0, 9, 24},
    {refalrts::icSave, 0, 26, 24},
    {refalrts::icBracketLeftSave, 0, 11, 26},
    {refalrts::icIdentLeftSave, 15, 1, 11},
    // closed e.End#1 as range 26(2)
    {refalrts::icsVarLeft, 0, 16, 11},
    // closed e.From#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Begin#1/9 } Tile{ AsIs: e.End#1/26(2) } Tile{ HalfReuse: </14 } Tile{ HalfReuse: & CreateClosure /13 HalfReuse: & lambda_Main_CheckArgs_0/15 AsIs: s.PosFrom#1/16 } Tile{ AsIs: (/7 } Tile{ AsIs: e.From#1/11 } Tile{ AsIs: )/8 } >/17 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icUpdateFunc, 0, 7, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icReinitFunc, 0, 6, 13},
    {refalrts::icReinitFunc, 0, 5, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 13, 16, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    //()E 
    // </0 & Main_CheckArgs/4 (/7 )/8 e.Begin#1/9 (/13 # To/15 s.Pos#1/16 e.To#1/11 )/14 e.End#1/2 >/1
    {refalrts::icSave, 0, 22, 5},
    {refalrts::icEmpty, 0, 0, 22},
    {refalrts::icSave, 0, 24, 2},
    {refalrts::icEPrepare, 0, 9, 24},
    {refalrts::icEStart, 0, 9, 24},
    {refalrts::icSave, 0, 26, 24},
    {refalrts::icBracketLeftSave, 0, 11, 26},
    {refalrts::icIdentLeftSave, 15, 0, 11},
    // closed e.End#1 as range 26(2)
    {refalrts::icsVarLeft, 0, 16, 11},
    // closed e.To#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Begin#1/9 {REMOVED TILE}  s.Pos#1/16 e.To#1/11 {REMOVED TILE}  e.End#1/26(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos1 #16/7 HalfReuse: 'e'/8 } Tile{ HalfReuse: 'x'/13 HalfReuse: 'p'/15 } Tile{ HalfReuse: 't'/14 }"ected argument --from"/17 >/19 </20 & Help/21 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 2, 21},
    {refalrts::icUpdateFunc, 0, 4, 4},
    {refalrts::icReinitSVar, 0, 16, 7},
    {refalrts::icReinitChar, 0, 'e', 8},
    {refalrts::icReinitChar, 0, 'x', 13},
    {refalrts::icReinitChar, 0, 'p', 15},
    {refalrts::icReinitChar, 0, 't', 14},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 17, 21, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 13, 15, 0},
    {refalrts::icTrash, 0, 0, 8},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    //()E 
    // </0 & Main_CheckArgs/4 (/7 )/8 e.AnyOther#1/2 >/1
    {refalrts::icSave, 0, 22, 5},
    {refalrts::icEmpty, 0, 0, 22},
    // closed e.AnyOther#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.AnyOther#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 HalfReuse: 'o'/8 }"mmand line error: unrecognized command line"/9 >/11 </12 & Help/13 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icAllocFunc, 0, 2, 13},
    {refalrts::icUpdateFunc, 0, 3, 4},
    {refalrts::icReinitChar, 0, 'C', 7},
    {refalrts::icReinitChar, 0, 'o', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 9, 13, 0},
    {refalrts::icTrash, 0, 0, 8},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )E 
    // </0 & Main_CheckArgs/4 (/7 e.Errors#1/5 )/8 e.AnyOther#1/2 >/1
    // closed e.Errors#1 as range 5
    // closed e.AnyOther#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.AnyOther#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_Main_CheckArgs_1/7 AsIs: e.Errors#1/5 HalfReuse: >/8 } </9 & Help/10 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 2, 10},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icTrash, 0, 0, 8},
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
  //FAST GEN:(E )E 
  //GLOBAL GEN:(E )E 
  // </0 & Main_CheckArgs/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    //()(#FILES E )
    // </0 & Main_CheckArgs/4 (/7 )/8 (/11 # FILE/13 s.Pos#1/14 e.FileName#1/9 )/12 >/1
    context[22] = context[2];
    context[23] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[22], context[23] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_FILE<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[24] = context[5];
    context[25] = context[6];
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.FileName#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 )/8 (/11 # FILE/13 s.Pos#1/14 {REMOVED TILE}  )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Generate_SelfUpdate/4 } Tile{ AsIs: e.FileName#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], Generate_SelfUpdate, "Generate_SelfUpdate" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //()E 
    // </0 & Main_CheckArgs/4 (/7 )/8 e.Begin#1/9 (/13 # From/15 s.PosFrom#1/16 e.From#1/11 )/14 e.End#1/2 >/1
    context[22] = context[5];
    context[23] = context[6];
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    context[24] = context[2];
    context[25] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[26] = context[24];
      context[27] = context[25];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[26], context[27] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  & ident_From<int>::name, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.End#1 as range 26(2)
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.From#1 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Begin#1/9 } Tile{ AsIs: e.End#1/26(2) } Tile{ HalfReuse: </14 } Tile{ HalfReuse: & CreateClosure /13 HalfReuse: & lambda_Main_CheckArgs_0/15 AsIs: s.PosFrom#1/16 } Tile{ AsIs: (/7 } Tile{ AsIs: e.From#1/11 } Tile{ AsIs: )/8 } >/17 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_call( context[17] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], Fetch, "Fetch" );
      refalrts::reinit_open_call( context[14] );
      refalrts::reinit_name( context[13], refalrts::create_closure, "refalrts::create_closure" );
      refalrts::reinit_name( context[15], lambda_Main_CheckArgs_0, "lambda_Main_CheckArgs_0" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[17] );
      refalrts::push_stack( context[14] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[13], context[16] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[24], context[25] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //()E 
    // </0 & Main_CheckArgs/4 (/7 )/8 e.Begin#1/9 (/13 # To/15 s.Pos#1/16 e.To#1/11 )/14 e.End#1/2 >/1
    context[22] = context[5];
    context[23] = context[6];
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    context[24] = context[2];
    context[25] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[26] = context[24];
      context[27] = context[25];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[26], context[27] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  & ident_To<int>::name, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.End#1 as range 26(2)
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.To#1 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  e.Begin#1/9 {REMOVED TILE}  s.Pos#1/16 e.To#1/11 {REMOVED TILE}  e.End#1/26(2) {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos1 #16/7 HalfReuse: 'e'/8 } Tile{ HalfReuse: 'x'/13 HalfReuse: 'p'/15 } Tile{ HalfReuse: 't'/14 }"ected argument --from"/17 >/19 </20 & Help/21 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( context[17], context[18], "ected argument --from", 21 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], Help, "Help" ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], FormatError, "FormatError" );
      refalrts::reinit_svar( context[7], context[16] );
      refalrts::reinit_char( context[8], 'e' );
      refalrts::reinit_char( context[13], 'x' );
      refalrts::reinit_char( context[15], 'p' );
      refalrts::reinit_char( context[14], 't' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[19] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[21] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[8], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[24], context[25] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //()E 
    // </0 & Main_CheckArgs/4 (/7 )/8 e.AnyOther#1/2 >/1
    context[22] = context[5];
    context[23] = context[6];
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.AnyOther#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.AnyOther#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 HalfReuse: 'o'/8 }"mmand line error: unrecognized command line"/9 >/11 </12 & Help/13 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "mmand line error: unrecognized command line", 43 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], Help, "Help" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], WriteLine, "WriteLine" );
    refalrts::reinit_char( context[7], 'C' );
    refalrts::reinit_char( context[8], 'o' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )E 
  // </0 & Main_CheckArgs/4 (/7 e.Errors#1/5 )/8 e.AnyOther#1/2 >/1
  // closed e.Errors#1 as range 5
  // closed e.AnyOther#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.AnyOther#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_Main_CheckArgs_1/7 AsIs: e.Errors#1/5 HalfReuse: >/8 } </9 & Help/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Help, "Help" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Map, "Map" );
  refalrts::reinit_name( context[7], lambda_Main_CheckArgs_1, "lambda_Main_CheckArgs_1" );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FormatError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WriteLine, "WriteLine" },
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {": ", 2},
    {"Command line argument ", 22}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & FormatError/4 s.Pos#1/5 e.Message#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Message#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 }"Command line argument "/6 </8 & StrFromInt/9 Tile{ AsIs: s.Pos#1/5 } >/10": "/11 Tile{ AsIs: e.Message#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icAllocFunc, 0, 1, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icAllocString, 0, 0, 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 6, 9, 0},
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
  // </0 & FormatError/4 s.Pos#1/5 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 }"Command line argument "/6 </8 & StrFromInt/9 Tile{ AsIs: s.Pos#1/5 } >/10": "/11 Tile{ AsIs: e.Message#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "Command line argument ", 22 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], ": ", 2 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Help(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WriteLine, "WriteLine" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"    --to, -o - target file", 26},
    {"    --from, -f - source file", 28},
    {"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76},
    {"    lexgen filename.sref - for rewritting file\n", 47},
    {"se:", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & Help/4 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'U'/1 }"se:"/5 >/7 </8 & WriteLine/9"    lexgen filename.sref - for rewritting file\n"/10 >/12 </13 & WriteLine/14"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n"/15 >/17 </18 & WriteLine/19"    --from, -f - source file"/20 >/22 </23 & WriteLine/24"    --to, -o - target file"/25 >/27 Tile{ ]] }
    {refalrts::icAllocString, 0, 4, 5},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icAllocFunc, 0, 0, 9},
    {refalrts::icAllocString, 0, 3, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 0, 14},
    {refalrts::icAllocString, 0, 2, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icAllocFunc, 0, 0, 19},
    {refalrts::icAllocString, 0, 1, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icAllocFunc, 0, 0, 24},
    {refalrts::icAllocString, 0, 0, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'U', 1},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 27, 0},
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
  // </0 & Help/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'U'/1 }"se:"/5 >/7 </8 & WriteLine/9"    lexgen filename.sref - for rewritting file\n"/10 >/12 </13 & WriteLine/14"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n"/15 >/17 </18 & WriteLine/19"    --from, -f - source file"/20 >/22 </23 & WriteLine/24"    --to, -o - target file"/25 >/27 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], "se:", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "    lexgen filename.sref - for rewritting file\n", 47 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "    --from, -f - source file", 28 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[25], context[26], "    --to, -o - target file", 26 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::reinit_char( context[1], 'U' );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[27] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
